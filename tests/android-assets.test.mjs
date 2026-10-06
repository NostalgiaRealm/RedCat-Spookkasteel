import test from 'node:test';
import assert from 'node:assert/strict';
import path from 'node:path';
import {createHash} from 'node:crypto';
import {mkdir, mkdtemp, readFile, readdir, rename, symlink, writeFile} from 'node:fs/promises';
import {fileURLToPath} from 'node:url';
import {prepareAndroidAssets, parseAndroidArguments, DEFAULT_ANDROID_OUTPUT} from '../tools/prepare-android.mjs';

// Retain each run's fixtures as evidence; do not use or clean a shared temp directory.
const evidence = fileURLToPath(new URL('../current_work/android-initial-2026-10-06/asset-tests/', import.meta.url));
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
    'index.html', 'src/main.js', 'src/style.css', 'src/touch-controls.js', 'src/touch-controls.css',
    'assets/menu/menu-logo.png', 'assets/audio/one.wav', 'data/dialogue/nl.json',
    'node_modules/three/LICENSE', 'node_modules/three/package.json',
    'node_modules/three/build/three.module.js', 'node_modules/three/build/three.core.js',
    'node_modules/three/examples/jsm/loaders/GLTFLoader.js', 'node_modules/three/src/Three.js',
    ...levels.map(level => `data/levels/${level}/level.json`),
    ...['intronl', 'outronl'].flatMap(movie => ['mp4', 'webm'].map(format => `assets/media/${movie}.${format}`)),
  ];
  for (const file of files) await put(source, file);
  return {source, files, output: path.join(source, DEFAULT_ANDROID_OUTPUT)};
}
async function absent(file) {
  await assert.rejects(readFile(file), {code: 'ENOENT'});
}

test('Android staging contains only runtime roots, complete Three package and deterministic hashes', async () => {
  const {source, files, output} = await fixture();
  for (const file of ['electron/main.cjs', 'tools/private.mjs', 'tests/private.mjs', 'docs/private.md',
    'current_work/evidence.txt', 'builds/old.exe', 'package.json', 'node_modules/electron/bin/electron']) {
    await put(source, file, 'excluded');
  }
  const first = await prepareAndroidAssets({sourceDir: source});
  assert.equal(first.output, output);
  assert.equal(first.manifest.fileCount, files.length);
  assert.equal(first.manifest.totalBytes, files.reduce((sum, file) => sum + Buffer.byteLength(file), 0));
  assert.deepEqual(first.manifest.files.map(file => file.path), files.sort());
  for (const entry of first.manifest.files) {
    const bytes = await readFile(path.join(output, 'www', entry.path));
    assert.equal(entry.sha256, createHash('sha256').update(bytes).digest('hex'));
  }
  assert.deepEqual((await readdir(path.join(output, 'www'))).sort(), ['assets', 'data', 'index.html', 'node_modules', 'src']);
  assert.deepEqual(await readdir(path.join(output, 'www/node_modules')), ['three']);
  const manifestBytes = await readFile(path.join(output, 'asset-manifest.json'), 'utf8');
  const second = await prepareAndroidAssets({sourceDir: source});
  assert.deepEqual(second.manifest, first.manifest);
  assert.equal(await readFile(path.join(output, 'asset-manifest.json'), 'utf8'), manifestBytes);
  await put(source, 'src/main.js', 'changed input');
  const changed = await prepareAndroidAssets({sourceDir: source});
  assert.notEqual(changed.manifest.contentSha256, first.manifest.contentSha256);
});

test('missing required levels, media and Three modules leave an existing staged runtime intact', async () => {
  const {source, output} = await fixture();
  await prepareAndroidAssets({sourceDir: source});
  const before = await readFile(path.join(output, 'asset-manifest.json'), 'utf8');
  const beforeEntries = await readdir(path.dirname(output));
  const required = [
    ...levels.map(level => `data/levels/${level}/level.json`),
    ...['intronl', 'outronl'].flatMap(movie => ['mp4', 'webm'].map(format => `assets/media/${movie}.${format}`)),
    'node_modules/three/build/three.module.js', 'node_modules/three/build/three.core.js',
  ];
  for (const file of required) {
    const missing = path.join(source, file);
    const saved = path.join(source, 'current_work', path.basename(file) + '.saved');
    await mkdir(path.dirname(saved), {recursive: true});
    await rename(missing, saved);
    await assert.rejects(prepareAndroidAssets({sourceDir: source}), /Required runtime file is missing or empty/);
    assert.equal(await readFile(path.join(output, 'asset-manifest.json'), 'utf8'), before);
    assert.deepEqual(await readdir(path.dirname(output)), beforeEntries);
    await rename(saved, missing);
  }
  await put(source, 'src/main.js', '');
  await assert.rejects(prepareAndroidAssets({sourceDir: source, outputDir: 'current_work/new-output'}), /missing or empty/);
  await absent(path.join(source, 'current_work/new-output'));
});

test('re-preparing removes stale files only from the owned staging output', async () => {
  const {source, output} = await fixture();
  await prepareAndroidAssets({sourceDir: source});
  await put(output, 'www/assets/stale.png', 'old generated asset');
  await put(output, 'stale-root.txt', 'old generated output');
  await put(source, 'current_work/keep-evidence.txt', 'keep me');
  await put(source, 'android/app/build/generated/sibling/keep.txt', 'keep sibling');
  await prepareAndroidAssets({sourceDir: source});
  await absent(path.join(output, 'www/assets/stale.png'));
  await absent(path.join(output, 'stale-root.txt'));
  assert.equal(await readFile(path.join(source, 'current_work/keep-evidence.txt'), 'utf8'), 'keep me');
  assert.equal(await readFile(path.join(source, 'android/app/build/generated/sibling/keep.txt'), 'utf8'), 'keep sibling');
});

test('unsafe and unowned output paths are refused without altering source or unrelated files', async () => {
  const {source} = await fixture();
  for (const outputDir of ['.', '..', '/', 'src', 'src/output', 'assets', 'data/output', 'node_modules', '.git/output']) {
    await assert.rejects(prepareAndroidAssets({sourceDir: source, outputDir}), /Unsafe output/);
  }
  await put(source, 'current_work/unowned/keep.txt', 'do not remove');
  await assert.rejects(prepareAndroidAssets({sourceDir: source, outputDir: 'current_work/unowned'}), /ownership marker/);
  assert.equal(await readFile(path.join(source, 'current_work/unowned/keep.txt'), 'utf8'), 'do not remove');
  await assert.rejects(prepareAndroidAssets({sourceDir: source, outputDir: 'index.html'}), /Unsafe output/);
  assert.equal(await readFile(path.join(source, 'src/main.js'), 'utf8'), 'src/main.js');
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
  const moved = path.join(source, 'current_work/moved-output');
  await mkdir(path.dirname(moved), {recursive: true});
  await rename(output, moved);
  await assert.rejects(prepareAndroidAssets({sourceDir: source, outputDir: moved}), /ownership marker does not match/);
  assert.equal(await readFile(path.join(moved, 'www/index.html'), 'utf8'), 'index.html');
});

test('CLI accepts a single explicit output and rejects incomplete or unknown options', () => {
  assert.deepEqual(parseAndroidArguments([]), {});
  assert.deepEqual(parseAndroidArguments(['--output', 'current_work/android stage']), {outputDir: 'current_work/android stage'});
  for (const args of [['--output'], ['--output', ''], ['--source', '/other'], ['--output', '--force'], ['extra']]) {
    assert.throws(() => parseAndroidArguments(args), /Usage:/);
  }
});
