#!/usr/bin/env node
// Builds the Android app (android/) from the packaged site in dist/site and copies
// the results to dist/android/<version>/, named as the JavaScript port's releases are:
//
//   RedCat-Spookkasteel-<version>-android.apk    signed, for installing directly
//   RedCat-Spookkasteel-<version>-android.aab    signed, for Google Play
//   SHA256SUMS.txt, build.json                   checksums; which site revision is inside
//
//   node tools/build-android.mjs                 the release (needs the signing file, below)
//   node tools/build-android.mjs --debug         RedCat-Spookkasteel-<version>-android-debug.apk (own application id, debug key)
//   ... --abi x86_64                             for the emulator; the file name then ends in -x86_64 (default arm64-v8a: phones)
//
// Needs: dist/site (npm run package), JAVA_HOME pointing at a JDK 17 or newer (21 was used), the
// Android SDK (ANDROID_HOME, default ~/Android/Sdk) and, for the release, REDCAT_ANDROID_SIGNING_PROPERTIES
// naming the private properties file of the upload key (storeFile, storePassword, keyAlias,
// keyPassword). That file is read by Gradle only; nothing of it is printed or copied.
// Nothing is uploaded or published. Temporary files: tools/out/android/tmp.
import { spawn } from 'node:child_process';
import { createHash } from 'node:crypto';
import fs from 'node:fs';
import os from 'node:os';
import path from 'node:path';
import { fileURLToPath } from 'node:url';

const ROOT = path.resolve(path.dirname(fileURLToPath(import.meta.url)), '..');
const args = process.argv.slice(2);
const debug = args.includes('--debug');
const abi = args.includes('--abi') ? args[args.indexOf('--abi') + 1] : 'arm64-v8a';
const fail = (message) => { console.error('build-android: ' + message); process.exit(1); };
if (!['arm64-v8a', 'armeabi-v7a', 'x86_64', 'x86'].includes(abi)) fail('--abi is one of arm64-v8a, armeabi-v7a, x86_64, x86');
if (!fs.existsSync(path.join(ROOT, 'dist/site/build.json'))) fail('dist/site is missing: run `npm run package` first');
if (!process.env.JAVA_HOME || !fs.existsSync(path.join(process.env.JAVA_HOME, 'bin/javac'))) fail('set JAVA_HOME to a JDK 17 or newer');
const signing = process.env.REDCAT_ANDROID_SIGNING_PROPERTIES;
if (!debug && !(signing && fs.existsSync(signing))) fail('set REDCAT_ANDROID_SIGNING_PROPERTIES to the private properties file of the upload key, or build with --debug');

const gradle = fs.readFileSync(path.join(ROOT, 'android/app/build.gradle.kts'), 'utf8');
const version = gradle.match(/versionName\s*=\s*"([^"]+)"/)?.[1];
const versionCode = Number(gradle.match(/versionCode\s*=\s*(\d+)/)?.[1]);
if (!version || !Number.isInteger(versionCode) || versionCode < 1) fail('no versionName / versionCode in android/app/build.gradle.kts');
const site = JSON.parse(fs.readFileSync(path.join(ROOT, 'dist/site/build.json'), 'utf8'));
const pkg = JSON.parse(fs.readFileSync(path.join(ROOT, 'package.json'), 'utf8'));
if (pkg.version !== version) console.warn(`build-android: note: package.json says version ${pkg.version}, the app is built as ${version} (android/app/build.gradle.kts)`);

const temp = path.join(ROOT, 'tools/out/android/tmp');
fs.mkdirSync(temp, { recursive: true });
const env = { ...process.env, ANDROID_HOME: process.env.ANDROID_HOME || path.join(os.homedir(), 'Android/Sdk'), TMPDIR: temp, TMP: temp, TEMP: temp,
  JAVA_TOOL_OPTIONS: `${process.env.JAVA_TOOL_OPTIONS || ''} -Djava.io.tmpdir="${temp}"`.trim() };
const tasks = debug ? [':app:assembleDebug'] : [':app:assembleRelease', ':app:bundleRelease'];
const child = spawn(process.platform === 'win32' ? 'gradlew.bat' : './gradlew', ['--no-daemon', '--max-workers=4', '-q', `-PgeckoAbi=${abi}`, ...tasks],
  { cwd: path.join(ROOT, 'android'), stdio: 'inherit', shell: process.platform === 'win32', env });
const code = await new Promise((resolve, reject) => { child.on('error', reject); child.on('exit', (value, signal) => (signal ? reject(new Error('Gradle stopped by ' + signal)) : resolve(value))); });
if (code !== 0) fail(`Gradle failed (${code}); nothing was copied`);

const destination = path.join(ROOT, 'dist/android', version);
fs.mkdirSync(destination, { recursive: true });
const tail = abi === 'arm64-v8a' ? '' : '-' + abi;
const artifacts = debug
  ? [['android/app/build/outputs/apk/debug/app-debug.apk', `RedCat-Spookkasteel-${version}-android-debug${tail}.apk`]]
  : [['android/app/build/outputs/bundle/release/app-release.aab', `RedCat-Spookkasteel-${version}-android${tail}.aab`],
     ['android/app/build/outputs/apk/release/app-release.apk', `RedCat-Spookkasteel-${version}-android${tail}.apk`]];
const sha256 = (file) => new Promise((resolve, reject) => { const h = createHash('sha256'); fs.createReadStream(file).on('data', (c) => h.update(c)).on('end', () => resolve(h.digest('hex'))).on('error', reject); });
for (const [source, name] of artifacts) fs.copyFileSync(path.join(ROOT, source), path.join(destination, name));
// the checksums of everything that is in the folder now (a debug build does not drop the release's lines)
const names = fs.readdirSync(destination).filter((n) => /\.(apk|aab)$/.test(n)).sort();
const lines = [];
for (const name of names) lines.push(`${await sha256(path.join(destination, name))}  ${name}`);
fs.writeFileSync(path.join(destination, 'SHA256SUMS.txt'), lines.join('\n') + '\n');
const record = path.join(destination, 'build.json');
const builds = fs.existsSync(record) ? JSON.parse(fs.readFileSync(record, 'utf8')) : {};
for (const [, name] of artifacts) builds[name] = { version, versionCode, abi, signed: debug ? 'debug key' : 'upload key', site: site.revision, bytes: fs.statSync(path.join(destination, name)).size, built: new Date().toISOString() };
fs.writeFileSync(record, JSON.stringify(builds, null, 1) + '\n');
for (const [, name] of artifacts) console.log(`${(fs.statSync(path.join(destination, name)).size / 1048576).toFixed(1)} MB  ${path.join(destination, name)}`);
if (!debug) console.log('Signed with the upload key. Nothing was uploaded: the .aab is for Google Play, the .apk for installing directly.');
