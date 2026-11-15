#!/usr/bin/env node
// Development server: serves public/ and source/, and the original game files under /data/
// straight from ../RCSPOOK_NEW/RC_ORIGINAL_DECOMPILED/originals (read only). Byte ranges supported.
// The menu's artwork, voices, music, movies and help pages are served under /assets/ straight from
// ../RCSPOOK_NEW/assets (read only; see docs/menu.md).
// For the check of the import from the JavaScript port (tools/legacy-check.mjs) that port itself is
// served under /classic/ from ../RCSPOOK_NEW, on the same origin and so with the same browser
// storage, as it would be on the public site. Only its web files are reachable.
//   node tools/serve.mjs [--port 4221]
// The default port is DEV_PORT of tools/dev-port.mjs, which the checks open by default too (not 4190: Firefox and WebKit refuse that port).
import http from 'node:http';
import fs from 'node:fs';
import path from 'node:path';
import { fileURLToPath } from 'node:url';
import { DEV_PORT } from './dev-port.mjs';
import { input } from './inputs.mjs';

const ROOT = path.resolve(path.dirname(fileURLToPath(import.meta.url)), '..');
const ORIGINALS = process.env.RC_ORIGINALS || input('RC_ORIGINAL_DECOMPILED/originals');
const MENU_ASSETS = process.env.RC_MENU_ASSETS || input('assets');
const CLASSIC = process.env.RC_CLASSIC || path.resolve(ROOT, '../RCSPOOK_NEW');
const CLASSIC_ALLOWED = /^(index\.html$|src\/|source\/|assets\/|data\/|node_modules\/three\/)/;
const args = process.argv.slice(2);
const opt = (n, d) => { const k = args.indexOf('--' + n); return k >= 0 ? args[k + 1] : d; };
const port = Number(opt('port', DEV_PORT));
const TYPES = { '.html': 'text/html; charset=utf-8', '.js': 'text/javascript; charset=utf-8', '.mjs': 'text/javascript; charset=utf-8', '.css': 'text/css; charset=utf-8', '.json': 'application/json', '.wasm': 'application/wasm', '.png': 'image/png', '.svg': 'image/svg+xml', '.wav': 'audio/wav', '.jpg': 'image/jpeg', '.ico': 'image/x-icon', '.webm': 'video/webm', '.mp4': 'video/mp4' };
const MOUNTS = [['/classic/', CLASSIC], ['/data/', ORIGINALS], ['/assets/', MENU_ASSETS], ['/source/', path.join(ROOT, 'source')], ['/', path.join(ROOT, 'public')]];

http.createServer((req, res) => {
  let p = decodeURIComponent(new URL(req.url, 'http://x').pathname);
  if (p.endsWith('/')) p += 'index.html';
  const mount = MOUNTS.find(([prefix]) => p.startsWith(prefix));
  const file = path.join(mount[1], p.slice(mount[0].length));
  if (!file.startsWith(mount[1])) { res.writeHead(403); res.end(); return; }
  if (mount[0] === '/classic/' && !CLASSIC_ALLOWED.test(p.slice(mount[0].length))) { res.writeHead(404); res.end('not found'); return; }
  fs.stat(file, (err, st) => {
    if (err || !st.isFile()) { res.writeHead(404); res.end('not found'); return; }
    const headers = { 'Content-Type': TYPES[path.extname(file).toLowerCase()] || 'application/octet-stream', 'Accept-Ranges': 'bytes', 'Cache-Control': 'no-cache' };
    // shared memory between the page and the game worker needs a cross-origin isolated page
    headers['Cross-Origin-Opener-Policy'] = 'same-origin'; headers['Cross-Origin-Embedder-Policy'] = 'require-corp'; headers['Cross-Origin-Resource-Policy'] = 'same-origin';
    const m = /^bytes=(\d*)-(\d*)$/.exec(req.headers.range || '');
    if (m) {
      const start = m[1] ? Number(m[1]) : st.size - Number(m[2]);
      const end = m[1] && m[2] ? Math.min(Number(m[2]), st.size - 1) : st.size - 1;
      if (start > end || start >= st.size) { res.writeHead(416, { 'Content-Range': `bytes */${st.size}` }); res.end(); return; }
      res.writeHead(206, { ...headers, 'Content-Range': `bytes ${start}-${end}/${st.size}`, 'Content-Length': end - start + 1 });
      if (req.method === 'HEAD') { res.end(); return; }
      fs.createReadStream(file, { start, end }).pipe(res);
      return;
    }
    res.writeHead(200, { ...headers, 'Content-Length': st.size });
    if (req.method === 'HEAD') { res.end(); return; }
    fs.createReadStream(file).pipe(res);
  });
}).listen(port, '127.0.0.1', () => console.log(`http://127.0.0.1:${port}/  (game files from ${ORIGINALS})`));
