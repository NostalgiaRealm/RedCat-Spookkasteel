import test from 'node:test';
import assert from 'node:assert/strict';
import path from 'node:path';
import {createHash} from 'node:crypto';
import {mkdir, mkdtemp, readFile, readdir, rename, symlink, writeFile} from 'node:fs/promises';
import {fileURLToPath} from 'node:url';
import {prepareAndroidAssets, parseAndroidArguments, DEFAULT_ANDROID_OUTPUT} from '../tools/prepare-android.mjs';
import {testOutput} from './support/scene-output.mjs';

// Retain each run's fixtures as evidence; do not use or clean a shared temp directory.
const evidence = testOutput('source-layout-2026-10-26-android-asset-tests');
const levels = ['lvl00a', 'lvl01a', 'lvl02a', 'lvl03a', 'lvl04a'];
async function put(root, relative, contents = relative) {
  const file = path.join(root, relative);
  await mkdir(path.dirname(file), {recursive: true});
  await writeFile(file, contents);
}
async function fixture() {
  await mkdir(evidence, {recursive: true});
  const source = await mkdtemp(path.join(evidence, 'run-'));
  const files = [
    'index.html', 'src/game.bundle.js', 'src/game.bundle.js.map', 'src/style.css', 'src/touch-controls.css',
    'src/loading-screen.css', 'src/original-menu.css', 'src/native-help.css',
    'assets/menu/menu-logo.png', 'assets/audio/one.wav', 'data/dialogue/nl.json',
    'node_modules/three/LICENSE', 'node_modules/three/package.json',
    'node_modules/three/build/three.module.js', 'node_modules/three/build/three.core.js',
    'node_modules/three/examples/jsm/loaders/GLTFLoader.js', 'node_modules/three/src/Three.js',
    ...levels.map(level => `data/levels/${level}/level.json`),
    ...['intronl', 'outronl'].flatMap(movie => ['mp4', 'webm'].map(format => `assets/media/${movie}.${format}`)),
  ];
  for (const file of files) await put(source, file);
  // Editable modules are deliberately absent from the runtime inventory.
  for (const file of ['source/main.js', 'source/android-host.js', 'source/touch-controls.js']) await put(source, file);
  await put(source, 'package.json', JSON.stringify({version:'1.0.3'}));
  return {source, files, output: path.join(source, DEFAULT_ANDROID_OUTPUT)};
}
async function absent(file) {
  await assert.rejects(readFile(file), {code: 'ENOENT'});
}

test('Android staging contains only runtime roots, complete Three package and deterministic hashes', async () => {
  const {source, files, output} = await fixture();
  for (const file of ['electron/main.cjs', 'tools/private.mjs', 'tests/private.mjs', 'docs/private.md',
    'temp_work/evidence.txt', 'builds/old.exe', 'node_modules/electron/bin/electron']) {
    await put(source, file, 'excluded');
  }
  const first = await prepareAndroidAssets({sourceDir: source});
  assert.equal(first.output, output);
  assert.equal(first.manifest.packageVersion, '1.0.3');
  assert.equal(first.manifest.fileCount, files.length);
  assert.equal(first.manifest.totalBytes, files.reduce((sum, file) => sum + Buffer.byteLength(file), 0));
  assert.deepEqual(first.manifest.files.map(file => file.path), files.sort());
  for (const entry of first.manifest.files) {
    const bytes = await readFile(path.join(output, 'www', entry.path));
    assert.equal(entry.sha256, createHash('sha256').update(bytes).digest('hex'));
  }
  assert.deepEqual((await readdir(path.join(output, 'www'))).sort(), ['assets', 'data', 'index.html', 'node_modules', 'src']);
  assert.deepEqual(await readdir(path.join(output, 'www/node_modules')), ['three']);
  await absent(path.join(output, 'www/source/main.js'));
  const manifestBytes = await readFile(path.join(output, 'asset-manifest.json'), 'utf8');
  const second = await prepareAndroidAssets({sourceDir: source});
  assert.deepEqual(second.manifest, first.manifest);
  assert.equal(await readFile(path.join(output, 'asset-manifest.json'), 'utf8'), manifestBytes);
  await put(source, 'source/main.js', 'changed source before regeneration');
  assert.deepEqual((await prepareAndroidAssets({sourceDir: source})).manifest, first.manifest);
  await put(source, 'src/game.bundle.js', 'regenerated runtime');
  const changed = await prepareAndroidAssets({sourceDir: source});
  assert.notEqual(changed.manifest.contentSha256, first.manifest.contentSha256);
});

test('multi-chunk binary assets and empty optional files retain exact bytes and manifest hashes', async () => {
  const {source, output} = await fixture();
  const bytes = Buffer.alloc(2*1024*1024+17);
  for (let i=0;i<bytes.length;i++) bytes[i]=i%251;
  await put(source,'assets/media/intronl.mp4',bytes);
  await put(source,'assets/empty.bin',Buffer.alloc(0));
  const {manifest} = await prepareAndroidAssets({sourceDir:source});
  assert.deepEqual(await readFile(path.join(output,'www/assets/media/intronl.mp4')),bytes);
  const entry=manifest.files.find(file=>file.path==='assets/media/intronl.mp4');
  assert.equal(entry.bytes,bytes.length);
  assert.equal(entry.sha256,createHash('sha256').update(bytes).digest('hex'));
  const empty=manifest.files.find(file=>file.path==='assets/empty.bin');
  assert.equal(empty.bytes,0);
  assert.equal(empty.sha256,createHash('sha256').update('').digest('hex'));
});

test('missing required bundle, styles, levels, media and Three modules leave staged runtime intact', async () => {
  const {source, output} = await fixture();
  await prepareAndroidAssets({sourceDir: source});
  const before = await readFile(path.join(output, 'asset-manifest.json'), 'utf8');
  const beforeEntries = await readdir(path.dirname(output));
  const required = [
    'src/game.bundle.js', 'src/style.css', 'src/touch-controls.css',
    'src/loading-screen.css', 'src/original-menu.css', 'src/native-help.css',
    ...levels.map(level => `data/levels/${level}/level.json`),
    ...['intronl', 'outronl'].flatMap(movie => ['mp4', 'webm'].map(format => `assets/media/${movie}.${format}`)),
    'node_modules/three/build/three.module.js', 'node_modules/three/build/three.core.js',
  ];
  for (const file of required) {
    const missing = path.join(source, file);
    const saved = path.join(source, 'temp_work', path.basename(file) + '.saved');
    await mkdir(path.dirname(saved), {recursive: true});
    await rename(missing, saved);
    await assert.rejects(prepareAndroidAssets({sourceDir: source}), /Required runtime file is missing or empty/);
    assert.equal(await readFile(path.join(output, 'asset-manifest.json'), 'utf8'), before);
    assert.deepEqual(await readdir(path.dirname(output)), beforeEntries);
    await rename(saved, missing);
  }
  await put(source, 'src/game.bundle.js', '');
  await assert.rejects(prepareAndroidAssets({sourceDir: source, outputDir: 'temp_work/new-output'}), /missing or empty/);
  await absent(path.join(source, 'temp_work/new-output'));
});

test('re-preparing removes stale files only from the owned staging output', async () => {
  const {source, output} = await fixture();
  await prepareAndroidAssets({sourceDir: source});
  await put(output, 'www/assets/stale.png', 'old generated asset');
  await put(output, 'stale-root.txt', 'old generated output');
  await put(source, 'temp_work/keep-evidence.txt', 'keep me');
  await put(source, 'android/app/build/generated/sibling/keep.txt', 'keep sibling');
  await prepareAndroidAssets({sourceDir: source});
  await absent(path.join(output, 'www/assets/stale.png'));
  await absent(path.join(output, 'stale-root.txt'));
  assert.equal(await readFile(path.join(source, 'temp_work/keep-evidence.txt'), 'utf8'), 'keep me');
  assert.equal(await readFile(path.join(source, 'android/app/build/generated/sibling/keep.txt'), 'utf8'), 'keep sibling');
});

test('unsafe and unowned output paths are refused without altering source or unrelated files', async () => {
  const {source} = await fixture();
  for (const outputDir of ['.', '..', '/', 'src', 'src/output', 'source', 'source/output', 'assets', 'data/output', 'node_modules', '.git/output']) {
    await assert.rejects(prepareAndroidAssets({sourceDir: source, outputDir}), /Unsafe output/);
  }
  await put(source, 'temp_work/unowned/keep.txt', 'do not remove');
  await assert.rejects(prepareAndroidAssets({sourceDir: source, outputDir: 'temp_work/unowned'}), /ownership marker/);
  assert.equal(await readFile(path.join(source, 'temp_work/unowned/keep.txt'), 'utf8'), 'do not remove');
  await assert.rejects(prepareAndroidAssets({sourceDir: source, outputDir: 'index.html'}), /Unsafe output/);
  assert.equal(await readFile(path.join(source, 'source/main.js'), 'utf8'), 'source/main.js');
});

test('symlinked input files and output ancestors cannot escape the project', async () => {
  const {source, output} = await fixture();
  const outside = await mkdtemp(path.join(evidence, 'outside-'));
  await put(outside, 'keep.txt', 'outside original');
  await symlink(outside, path.join(source, 'output-link'), 'dir');
  await assert.rejects(prepareAndroidAssets({sourceDir: source, outputDir: 'output-link/new'}), /Symlinks are not allowed/);
  await symlink(path.join(outside, 'keep.txt'), path.join(source, 'assets/escape.txt'));
  await assert.rejects(prepareAndroidAssets({sourceDir: source}), /Symlinks are not allowed/);
  await absent(output);
  assert.equal(await readFile(path.join(outside, 'keep.txt'), 'utf8'), 'outside original');
  await absent(path.join(outside, 'new'));
});

test('an ownership marker is specific to its source project and output path', async () => {
  const {source, output} = await fixture();
  await prepareAndroidAssets({sourceDir: source});
  const moved = path.join(source, 'temp_work/moved-output');
  await mkdir(path.dirname(moved), {recursive: true});
  await rename(output, moved);
  await assert.rejects(prepareAndroidAssets({sourceDir: source, outputDir: moved}), /ownership marker does not match/);
  assert.equal(await readFile(path.join(moved, 'www/index.html'), 'utf8'), 'index.html');
});

test('CLI accepts a single explicit output and rejects incomplete or unknown options', () => {
  assert.deepEqual(parseAndroidArguments([]), {});
  assert.deepEqual(parseAndroidArguments(['--output', 'temp_work/android stage']), {outputDir: 'temp_work/android stage'});
  for (const args of [['--output'], ['--output', ''], ['--source', '/other'], ['--output', '--force'], ['extra']]) {
    assert.throws(() => parseAndroidArguments(args), /Usage:/);
  }
});

// Hidden source artifacts must not leak into the offline application.
test('hidden files and invalid version metadata cannot replace a valid asset snapshot', async () => {
  const {source, output} = await fixture();
  await prepareAndroidAssets({sourceDir:source});
  const before = await readFile(path.join(output, 'asset-manifest.json'), 'utf8');
  await put(source, 'assets/.private-note', 'never ship');
  await assert.rejects(prepareAndroidAssets({sourceDir:source}), /Hidden files cannot be packaged/);
  assert.equal(await readFile(path.join(output, 'asset-manifest.json'), 'utf8'), before);
  await rename(path.join(source, 'assets/.private-note'), path.join(source, 'retained-private-note'));
  await put(source, 'package.json', JSON.stringify({version:'unknown'}));
  await assert.rejects(prepareAndroidAssets({sourceDir:source}), /three-part release version/);
  assert.equal(await readFile(path.join(output, 'asset-manifest.json'), 'utf8'), before);
  await put(source, 'package.json', JSON.stringify({version:'1.0.4'}));
  const changed = await prepareAndroidAssets({sourceDir:source});
  assert.equal(changed.manifest.packageVersion, '1.0.4');
});
