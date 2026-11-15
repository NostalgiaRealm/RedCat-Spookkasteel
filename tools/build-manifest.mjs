#!/usr/bin/env node
// Lists the original game files the game module can read (name and size) into
// public/game/files.json. The browser mounts them from this list and fetches each on first use.
//   node tools/build-manifest.mjs
import fs from 'node:fs';
import path from 'node:path';
import { fileURLToPath } from 'node:url';
import { input } from './inputs.mjs';

const ROOT = path.resolve(path.dirname(fileURLToPath(import.meta.url)), '..');
const ORIGINALS = process.env.RC_ORIGINALS || input('RC_ORIGINAL_DECOMPILED/originals');
const SKIP = /\.(dll|exe|dat|hlp|cnt|img|ind)$|^\.~lock/i;      // programs, help, menu archives: not read by the game module
const out = [];
const walk = (dir, rel) => {
  for (const e of fs.readdirSync(dir, { withFileTypes: true }).sort((a, b) => a.name.localeCompare(b.name))) {
    const r = rel ? rel + '/' + e.name : e.name;
    if (e.isDirectory()) walk(path.join(dir, e.name), r);
    else if (!SKIP.test(e.name)) out.push([r, fs.statSync(path.join(dir, e.name)).size]);
  }
};
walk(ORIGINALS, '');
fs.mkdirSync(path.join(ROOT, 'public/game'), { recursive: true });
fs.writeFileSync(path.join(ROOT, 'public/game/files.json'), JSON.stringify({ base: 'data/', files: out }));
console.log(`${out.length} files, ${(out.reduce((s, f) => s + f[1], 0) / 1048576).toFixed(1)} MB -> public/game/files.json`);
