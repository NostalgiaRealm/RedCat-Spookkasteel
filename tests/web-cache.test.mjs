import test from 'node:test';
import assert from 'node:assert/strict';
import path from 'node:path';
import {mkdir, mkdtemp, readFile, writeFile} from 'node:fs/promises';
import {fileURLToPath} from 'node:url';
import {moduleSpecifiers, refreshWebCache} from '../tools/refresh-web-cache.mjs';

const evidence = fileURLToPath(new URL('../temp_work/web-cache-tests/', import.meta.url));
async function put(root, relative, contents) {
  await mkdir(path.dirname(path.join(root, relative)), {recursive:true});
  await writeFile(path.join(root, relative), contents);
}
async function fixture() {
  await mkdir(evidence, {recursive:true});
  const root = await mkdtemp(path.join(evidence, 'run-'));
  const files = {
    'index.html': `<!doctype html><html><head>
<link rel="stylesheet" href="src/style.css">
<script type="importmap">{"imports":{"three":"./node_modules/three/build/three.module.js","three/addons/":"./node_modules/three/examples/jsm/"}}</script>
</head><body><script type="module" src="src/main.js"></script></body></html>`,
    'src/main.js': `import './world.js'; import * as THREE from 'three';`,
    'src/world.js': `import {ActorRenderResidency} from './actor-render-residency.js'; export {ActorRenderResidency};`,
    'src/actor-render-residency.js': `export class ActorRenderResidency { settle() {} }`,
    'src/lazy.mjs': `export const lazy = true;`,
    'src/style.css': `body { color: white; }`,
    'node_modules/three/build/three.module.js': `export {Vector3} from './three.core.js';`,
    'node_modules/three/build/three.core.js': `export class Vector3 {}`,
    'node_modules/three/examples/jsm/loaders/TestLoader.js': `import {Vector3} from 'three'; import '../utils/TestUtils.js'; export {Vector3};`,
    'node_modules/three/examples/jsm/utils/TestUtils.js': `export const utility = true;`,
    'node_modules/three/examples/jsm/Unused.js': `throw new Error('Must not be included');`,
  };
  for (const [relative, contents] of Object.entries(files)) await put(root, relative, contents);
  return root;
}
async function readMap(root) {
  const html = await readFile(path.join(root, 'index.html'), 'utf8');
  return {html, imports:JSON.parse(html.match(/<script type="importmap" id="game-importmap">([\s\S]*?)<\/script>/)[1]).imports};
}

test('dependency scanning ignores comments, strings and regex but handles imports and re-exports', () => {
  const source = [
    `// import 'ignored-comment.js';`,
    `/* export * from 'ignored-block.js'; */`,
    `const text = "import('ignored-string.js')";`,
    'const shader = `import "ignored-template.js"`;',
    `const regex = /import\\('ignored-regex.js'\\)/;`,
    `const object = { import: true }; object.import('ignored-method.js');`,
    `import './side-effect.js';`,
    `import value, {a as b} from './named.js';`,
    `export {b} from './exported.js';`,
    `export * as names from './namespace.js';`,
    `const lazy = import('./lazy.mjs');`,
    'const interpolated = `value: ${import("./interpolation.js")}`;',
    `const url = import.meta.url;`,
  ].join('\n');
  assert.deepEqual(moduleSpecifiers(source), ['./side-effect.js', './named.js', './exported.js', './namespace.js', './lazy.mjs', './interpolation.js']);
  assert.deepEqual(moduleSpecifiers(`import './escaped\\u002ejs';`), ['./escaped.js']);
  assert.throws(() => moduleSpecifiers('import(path)', 'example.js'), /example\.js: dynamic imports must use a literal/);
  assert.throws(() => moduleSpecifiers("import('./' + name)"), /dynamic imports must use a literal/);
});

test('one deterministic version covers entry, CSS, every source module and transitive Three modules', async () => {
  const root = await fixture(), first = await refreshWebCache({projectDir:root});
  assert.equal(first.changed, true);
  const {html, imports} = await readMap(root);
  assert.match(html, new RegExp(`src="\\./src/main\\.js\\?v=${first.version}"`));
  assert.match(html, new RegExp(`href="\\./src/style\\.css\\?v=${first.version}"`));
  for (const relative of ['src/main.js', 'src/world.js', 'src/actor-render-residency.js', 'src/lazy.mjs', 'node_modules/three/build/three.module.js', 'node_modules/three/build/three.core.js']) {
    assert.equal(imports[`./${relative}`], `./${relative}?v=${first.version}`);
  }
  assert.equal(imports.three, `./node_modules/three/build/three.module.js?v=${first.version}`);
  assert.equal(imports['three/addons/'], './node_modules/three/examples/jsm/');
  assert.ok(!first.modules.some(name => name.endsWith('/Unused.js')));
  assert.deepEqual(await refreshWebCache({projectDir:root}), {...first, changed:false});
  assert.equal((await readMap(root)).html, html);
});

test('editing a leaf dependency changes every module URL even when the release version is unchanged', async () => {
  const root = await fixture(), before = await refreshWebCache({projectDir:root});
  await put(root, 'src/actor-render-residency.js', 'export class ActorRenderResidency { async settle() { return true; } }');
  const after = await refreshWebCache({projectDir:root}), {imports} = await readMap(root);
  assert.notEqual(after.version, before.version);
  assert.equal(imports['./src/world.js'], `./src/world.js?v=${after.version}`);
  assert.equal(imports['./src/actor-render-residency.js'], `./src/actor-render-residency.js?v=${after.version}`);
  await put(root, 'src/style.css', 'body { color: red; }');
  assert.notEqual((await refreshWebCache({projectDir:root})).version, after.version);
});

test('addon aliases and their relative imports point directly to the same version', async () => {
  const root = await fixture();
  await put(root, 'src/addon.js', `export async function loader() { return import('three/addons/loaders/TestLoader.js'); }`);
  const first = await refreshWebCache({projectDir:root}), {imports} = await readMap(root);
  assert.equal(imports['three/addons/loaders/TestLoader.js'], `./node_modules/three/examples/jsm/loaders/TestLoader.js?v=${first.version}`);
  assert.equal(imports['./node_modules/three/examples/jsm/utils/TestUtils.js'], `./node_modules/three/examples/jsm/utils/TestUtils.js?v=${first.version}`);
  assert.equal((await refreshWebCache({projectDir:root})).version, first.version);
  await put(root, 'node_modules/three/examples/jsm/utils/TestUtils.js', 'export const utility = false;');
  assert.notEqual((await refreshWebCache({projectDir:root})).version, first.version);
});

test('unsafe or incomplete module graphs fail before modifying index.html', async () => {
  for (const dependency of ["import './missing.js';", "import '../../outside.js';", "import 'https://example.com/module.js';", 'import(variable);']) {
    const root = await fixture(), before = await readFile(path.join(root, 'index.html'), 'utf8');
    await put(root, 'src/main.js', dependency);
    await assert.rejects(refreshWebCache({projectDir:root}));
    assert.equal(await readFile(path.join(root, 'index.html'), 'utf8'), before);
  }
});
