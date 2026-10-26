#!/usr/bin/env node
// Reproducible Android release packaging. Signing stays in a private properties
// file referenced by REDCAT_ANDROID_SIGNING_PROPERTIES, never in this checkout.
import { spawn } from 'node:child_process';
import { createHash } from 'node:crypto';
import { createReadStream } from 'node:fs';
import { copyFile, mkdir, readFile, writeFile } from 'node:fs/promises';
import path from 'node:path';
import { fileURLToPath } from 'node:url';

const root = path.resolve(path.dirname(fileURLToPath(import.meta.url)), '..');
const args = process.argv.slice(2);
if (args.length) throw new Error('Usage: npm run build:android (see ANDROID.md for debug builds)');
if (!process.env.REDCAT_ANDROID_SIGNING_PROPERTIES) {
  throw new Error('Set REDCAT_ANDROID_SIGNING_PROPERTIES to your private upload-key properties file. See ANDROID.md.');
}
const { version } = JSON.parse(await readFile(path.join(root, 'package.json'), 'utf8'));
const gradle = await readFile(path.join(root, 'android/app/build.gradle.kts'), 'utf8');
const androidVersion = gradle.match(/versionName\s*=\s*"([^"]+)"/)?.[1];
const versionCode = Number(gradle.match(/versionCode\s*=\s*(\d+)/)?.[1]);
if (androidVersion !== version || !Number.isInteger(versionCode) || versionCode < 1) {
  throw new Error('Android versionName/versionCode must match the release in package.json.');
}
const work = path.join(root, 'temp_work', `android-build-${version}-${Date.now()}`);
await mkdir(work, { recursive: true });
const temp = path.join(work, 'tmp');
await mkdir(temp);
const javaOptions = `${process.env.JAVA_TOOL_OPTIONS || ''} -Djava.io.tmpdir="${temp}"`.trim();
const command = process.platform === 'win32' ? 'gradlew.bat' : './gradlew';
const child = spawn(command, ['--no-daemon', '--max-workers=2', ':app:assembleRelease', ':app:bundleRelease'], {
  cwd: path.join(root, 'android'), stdio: 'inherit', shell: process.platform === 'win32',
  env: { ...process.env, TMPDIR: temp, TMP: temp, TEMP: temp, JAVA_TOOL_OPTIONS: javaOptions },
});
const code = await new Promise((resolve, reject) => {
  child.on('error', reject);
  child.on('exit', (value, signal) => signal ? reject(new Error(`Gradle stopped by ${signal}`)) : resolve(value));
});
if (code !== 0) throw new Error(`Android release build failed (${code}); no release files copied.`);
const destination = path.join(root, 'dist/android', version);
await mkdir(destination, { recursive: true });
const artifacts = [
  ['android/app/build/outputs/bundle/release/app-release.aab', `RedCat-Spookkasteel-${version}-android.aab`],
  ['android/app/build/outputs/apk/release/app-release.apk', `RedCat-Spookkasteel-${version}-android.apk`],
];
const hashes = [];
for (const [source, name] of artifacts) {
  const output = path.join(destination, name);
  await copyFile(path.join(root, source), output);
  const hash = createHash('sha256');
  for await (const chunk of createReadStream(output)) hash.update(chunk);
  hashes.push(`${hash.digest('hex')}  ${name}`);
}
await copyFile(path.join(root, 'android/app/build/generated/gameAssets/asset-manifest.json'), path.join(destination, 'asset-manifest.json'));
await writeFile(path.join(destination, 'SHA256SUMS.txt'), `${hashes.join('\n')}\n`);
await writeFile(path.join(work, 'build-result.json'), `${JSON.stringify({ version, versionCode, artifacts: artifacts.map(([, name]) => name), sha256: hashes, releaseRuntimeTested: false }, null, 2)}\n`);
console.log(`Signed Android bundle and APK: ${destination}`);
console.log('Upload the .aab to Google Play. See ANDROID.md and docs/android-google-play-release.md.');
