#!/usr/bin/env node
// Lists, for each world, the original files the game reads when that world starts, into
// public/game/preload.json. The page fetches these together before the game thread starts
// (source/web/worker.js); without the list every file is fetched on its first use, one after the
// other, which is slow over a network (more than five hundred requests for a world).
//
// How the lists are made:
//   common, start   measured: each world is run in the Node runner for --seconds of game time
//                   (default 90) and every original file the game reads is recorded
//                   (tools/run-headless.mjs --files-read). "common" is what all five worlds read.
//   later           inferred: the sounds and voices whose names occur in the world's own level
//                   files (Levels/lvl0Na.*) and were not read in that time. The page fetches these
//                   in the background while the game runs, so a wrong name costs a download and
//                   a missing one a short wait; neither changes what the game does.
//
//   node tools/build-preload.mjs [--seconds 90]
import fs from 'node:fs';
import path from 'node:path';
import { spawn } from 'node:child_process';
import { fileURLToPath } from 'node:url';
import { input } from './inputs.mjs';

const ROOT = path.resolve(path.dirname(fileURLToPath(import.meta.url)), '..');
const ORIGINALS = process.env.RC_ORIGINALS || input('RC_ORIGINAL_DECOMPILED/originals');
const args = process.argv.slice(2);
const opt = (n, d) => { const k = args.indexOf('--' + n); return k >= 0 ? args[k + 1] : d; };
const seconds = Number(opt('seconds', 90));
const WORLDS = [1, 2, 3, 4, 5];
const outDir = path.join(ROOT, 'tools/out/preload');
fs.mkdirSync(outDir, { recursive: true });

const manifest = JSON.parse(fs.readFileSync(path.join(ROOT, 'public/game/files.json'), 'utf8'));
const size = new Map(manifest.files);

const run = (world) => new Promise((resolve, reject) => {
  const file = path.join(outDir, `w${world}.json`);
  const p = spawn(process.execPath, [path.join(ROOT, 'tools/run-headless.mjs'), '--seconds', String(seconds), '--fresh', '--world', String(world), '--out', path.join(outDir, `w${world}`), '--files-read', file], { stdio: ['ignore', 'pipe', 'pipe'] });
  let log = '';
  p.stdout.on('data', (d) => { log += d; }); p.stderr.on('data', (d) => { log += d; });
  p.on('exit', (code) => {
    fs.writeFileSync(path.join(outDir, `w${world}.log`), log);
    if (code !== 0) reject(new Error(`world ${world}: the runner ended with code ${code}, see ${path.join(outDir, `w${world}.log`)}`));
    else resolve(JSON.parse(fs.readFileSync(file, 'utf8')).map(([name]) => name).filter((name) => size.has(name)));
  });
});
const read = await Promise.all(WORLDS.map(run));

const common = read[0].filter((name) => read.every((list) => list.includes(name)));
const inCommon = new Set(common);
const stem = (name) => path.basename(name, path.extname(name)).toLowerCase();
const sounds = new Map();           // bare name -> the sound and voice files of that name
for (const [name] of manifest.files) if (/^(VoiceNL|Sounds)\/.+\.wav$/i.test(name)) { const k = stem(name); sounds.set(k, [...(sounds.get(k) || []), name]); }

const worlds = {};
const mb = (names) => (names.reduce((s, n) => s + size.get(n), 0) / 1048576).toFixed(1);
for (const [k, world] of WORLDS.entries()) {
  const list = read[k], had = new Set(list);
  const levels = list.filter((name) => /^Levels\/.+\.bsp$/i.test(name));
  if (levels.length !== 1) throw new Error(`world ${world}: expected one level file to be read, got ${levels.join(', ') || 'none'}`);
  const level = stem(levels[0]);
  let text = '';
  for (const [name] of manifest.files) if (name.toLowerCase().startsWith('levels/' + level + '.')) text += fs.readFileSync(path.join(ORIGINALS, name)).toString('latin1') + '\n';
  const later = new Set();
  for (const m of text.matchAll(/[A-Za-z0-9_-]{3,40}/g)) for (const name of sounds.get(m[0].toLowerCase()) || []) if (!had.has(name)) later.add(name);
  worlds[world] = { level, start: list.filter((name) => !inCommon.has(name)), later: [...later].sort() };
  console.log(`world ${world} (${level}): ${list.length} files, ${mb(list)} MB at the start; ${later.size} files, ${mb([...later])} MB named for later`);
}
fs.writeFileSync(path.join(ROOT, 'public/game/preload.json'), JSON.stringify({ version: 1, seconds, common, worlds }));
console.log(`common to all worlds: ${common.length} files, ${mb(common)} MB -> public/game/preload.json`);
