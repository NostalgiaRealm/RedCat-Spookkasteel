import path from 'node:path';
import {createHash} from 'node:crypto';
import {constants} from 'node:fs';
import {lstat, mkdir, mkdtemp, open, readdir, readFile, rename, rm, writeFile} from 'node:fs/promises';
import {fileURLToPath} from 'node:url';

const projectDirectory = fileURLToPath(new URL('../', import.meta.url));
export const DEFAULT_ANDROID_OUTPUT = 'android/app/build/generated/gameAssets';
export const ANDROID_RUNTIME_ROOTS = ['index.html', 'src', 'assets', 'data', 'node_modules/three'];
const ownerFile = '.redcat-android-assets.json';
const ownerFormat = 'redcat-android-assets-v1';
const levels = ['lvl00a', 'lvl01a', 'lvl02a', 'lvl03a', 'lvl04a'];
const requiredFiles = [
  'index.html', 'src/main.js', 'src/style.css', 'src/touch-controls.js', 'src/touch-controls.css',
  'node_modules/three/LICENSE', 'node_modules/three/package.json',
  'node_modules/three/build/three.module.js', 'node_modules/three/build/three.core.js',
  ...levels.map(level => `data/levels/${level}/level.json`),
  ...['intronl', 'outronl'].flatMap(movie => ['mp4', 'webm'].map(format => `assets/media/${movie}.${format}`)),
];

function within(parent, child) {
  const relative = path.relative(parent, child);
  return relative === '' || (!relative.startsWith(`..${path.sep}`) && relative !== '..' && !path.isAbsolute(relative));
}

async function statIfPresent(file) {
  try { return await lstat(file); }
  catch (error) { if (error.code === 'ENOENT') return null; throw error; }
}

// Check ancestors too: an otherwise safe-looking output may sit behind a symlink.
async function rejectSymlinkComponents(file) {
  let current = path.parse(file).root;
  for (const part of file.slice(current.length).split(path.sep).filter(Boolean)) {
    current = path.join(current, part);
    const stat = await statIfPresent(current);
    if (stat?.isSymbolicLink()) throw new Error(`Symlinks are not allowed: ${current}`);
    if (!stat) break;
  }
}

async function inventory(source, relative, files) {
  const absolute = path.join(source, relative);
  const stat = await lstat(absolute);
  if (stat.isSymbolicLink()) throw new Error(`Symlinks are not allowed: ${absolute}`);
  if (stat.isDirectory()) {
    for (const name of (await readdir(absolute)).sort()) {
      await inventory(source, `${relative}/${name}`, files);
    }
  } else if (stat.isFile()) {
    files.push(relative);
  } else {
    throw new Error(`Only regular files and directories can be packaged: ${absolute}`);
  }
}

async function validateOutput(source, output) {
  if (output === source || !within(source, output)) {
    throw new Error('Unsafe output: choose a directory strictly inside the project.');
  }
  for (const relative of ['index.html', 'src', 'assets', 'data', 'node_modules', '.git']) {
    const protectedPath = path.join(source, relative);
    if (within(protectedPath, output) || within(output, protectedPath)) {
      throw new Error(`Unsafe output: overlaps protected source ${relative}.`);
    }
  }
  await rejectSymlinkComponents(output);
  const stat = await statIfPresent(output);
  if (!stat) return false;
  if (!stat.isDirectory()) throw new Error('Unsafe output: the existing output is not a directory.');
  const entries = await readdir(output);
  if (!entries.length) return true;
  const marker = path.join(output, ownerFile);
  const markerStat = await statIfPresent(marker);
  if (!markerStat?.isFile() || markerStat.isSymbolicLink()) {
    throw new Error('Unsafe output: refusing to replace a nonempty directory without an ownership marker.');
  }
  let owner;
  try { owner = JSON.parse(await readFile(marker, 'utf8')); }
  catch { throw new Error('Unsafe output: invalid ownership marker.'); }
  if (owner.format !== ownerFormat || owner.source !== source || owner.output !== output) {
    throw new Error('Unsafe output: ownership marker does not match this project and output.');
  }
  // Refuse symlinked stale content as well; never traverse a link during cleanup.
  await inventory(output, '.', []);
  return true;
}

/** Copy the existing web runtime into Android's generated assets/www directory.
 * sourceDir is injectable for isolated tests; the CLI always uses this project.
 */
export async function prepareAndroidAssets({sourceDir = projectDirectory, outputDir = DEFAULT_ANDROID_OUTPUT} = {}) {
  const source = path.resolve(sourceDir);
  const output = path.resolve(source, outputDir);
  await rejectSymlinkComponents(source);
  await validateOutput(source, output);

  // Complete preflight before creating output or a staging directory.
  for (const relative of requiredFiles) {
    await rejectSymlinkComponents(path.join(source, relative));
    const stat = await statIfPresent(path.join(source, relative));
    if (!stat?.isFile() || stat.size === 0) throw new Error(`Required runtime file is missing or empty: ${relative}`);
  }
  for (const relative of ['src', 'assets', 'data', 'node_modules/three/examples']) {
    const stat = await statIfPresent(path.join(source, relative));
    if (!stat?.isDirectory()) throw new Error(`Required runtime directory is missing: ${relative}`);
  }
  const files = [];
  for (const relative of ANDROID_RUNTIME_ROOTS) await inventory(source, relative, files);
  files.sort();

  await mkdir(path.dirname(output), {recursive: true});
  let staging = await mkdtemp(path.join(path.dirname(output), `.${path.basename(output)}-staging-`));
  let previous = null;
  try {
    const entries = [];
    for (const relative of files) {
      // O_NOFOLLOW also refuses a file replaced by a symlink after preflight.
      const handle = await open(path.join(source, relative), constants.O_RDONLY | constants.O_NOFOLLOW);
      let contents;
      try { contents = await handle.readFile(); } finally { await handle.close(); }
      const target = path.join(staging, 'www', relative);
      await mkdir(path.dirname(target), {recursive: true});
      await writeFile(target, contents);
      entries.push({path: relative, bytes: contents.length, sha256: createHash('sha256').update(contents).digest('hex')});
    }
    const manifest = {
      format: ownerFormat,
      roots: ANDROID_RUNTIME_ROOTS,
      fileCount: entries.length,
      totalBytes: entries.reduce((total, entry) => total + entry.bytes, 0),
      // No timestamp or absolute paths: identical input bytes produce identical manifests.
      contentSha256: createHash('sha256').update(JSON.stringify(entries)).digest('hex'),
      files: entries,
    };
    await writeFile(path.join(staging, 'asset-manifest.json'), `${JSON.stringify(manifest, null, 2)}\n`);
    await writeFile(path.join(staging, ownerFile), `${JSON.stringify({format: ownerFormat, source, output}, null, 2)}\n`);
    // Recheck before publishing, so a newly created unowned output is not replaced.
    if (await validateOutput(source, output)) {
      previous = `${staging}-previous`;
      await rename(output, previous);
    }
    await rename(staging, output);
    staging = null;
    if (previous) { await rm(previous, {recursive: true}); previous = null; }
    return {output, manifest};
  } catch (error) {
    if (previous && !(await statIfPresent(output))) {
      await rename(previous, output);
      previous = null;
    }
    throw error;
  } finally {
    if (staging) await rm(staging, {recursive: true, force: true});
  }
}

export function parseAndroidArguments(args) {
  if (args.length === 0) return {};
  if (args.length === 2 && args[0] === '--output' && args[1] && !args[1].startsWith('--')) return {outputDir: args[1]};
  throw new Error('Usage: node tools/prepare-android.mjs [--output <directory-inside-project>]');
}

if (process.argv[1] && path.resolve(process.argv[1]) === fileURLToPath(import.meta.url)) {
  try {
    const {output, manifest} = await prepareAndroidAssets(parseAndroidArguments(process.argv.slice(2)));
    console.log(`Prepared ${manifest.fileCount} runtime files (${manifest.totalBytes} bytes) in ${path.join(output, 'www')}`);
    console.log(`Runtime SHA-256: ${manifest.contentSha256}`);
  } catch (error) {
    console.error(`Android asset preparation failed: ${error.message}`);
    process.exitCode = 1;
  }
}
