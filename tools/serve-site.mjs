#!/usr/bin/env node
// Serves a packaged site (dist/site, tools/package.mjs) the way the host is meant to: only below
// a path prefix, with the response headers of docs/nginx-redcatspookkasteel*.conf, a .gz copy for
// clients that accept it, 304 for a copy that is still good, byte ranges for the movies, and a
// plain 404 for anything else. For tools/package-check.mjs and for trying a package by hand. It is
// a stand-in for the web server, not the web server: it says nothing about that configuration file
// being right for nginx.
//   node tools/serve-site.mjs [--root dist/site] [--port 4195] [--prefix /redcatspookkasteel/]
//        [--latency 0]           wait this many ms before every answer (a network's round trip)
//        [--classic folder]      the JavaScript port's folder, served at <prefix>classic/ (its web files only)
//        [--without preload.json] answer 404 for paths ending in this (to compare loading with and without the lists)
import http from 'node:http';
import fs from 'node:fs';
import path from 'node:path';
import { fileURLToPath } from 'node:url';

const ROOT = path.resolve(path.dirname(fileURLToPath(import.meta.url)), '..');
const TYPES = { '.html': 'text/html', '.js': 'application/javascript', '.css': 'text/css', '.json': 'application/json', '.wasm': 'application/wasm', '.png': 'image/png', '.svg': 'image/svg+xml', '.wav': 'audio/wav', '.jpg': 'image/jpeg', '.ico': 'image/x-icon', '.webm': 'video/webm', '.mp4': 'video/mp4', '.txt': 'text/plain', '.bmp': 'image/x-ms-bmp' };
const CLASSIC_ALLOWED = /^(index\.html$|src\/|source\/|assets\/|data\/|node_modules\/three\/)/;
const ISOLATION = { 'Cross-Origin-Opener-Policy': 'same-origin', 'Cross-Origin-Embedder-Policy': 'require-corp' };
/** Cache-Control for a path below the prefix, as the map in docs/nginx-redcatspookkasteel-cache.conf; like nginx's add_header it goes on successful answers only. */
const cachePolicy = (rel) => (/^(app|data)\//.test(rel) ? 'public, max-age=31536000, immutable' : /^assets\//.test(rel) ? 'public, max-age=86400' : 'no-cache');

/**
 * Starts the server. Returns { url, port, log, close() }; log is every request as
 * { method, path (below the prefix), status, encoding, range }.
 */
export function serveSite({ root = path.join(ROOT, 'dist/site'), port = 4195, prefix = '/redcatspookkasteel/', latency = 0, classic = null, without = null, isolation = true, refuseOnce = null } = {}) {
  const log = [];
  const refused = new Set();          // refuseOnce (a RegExp on the path below the prefix): such a path gets 503 the first time it is asked for
  const server = http.createServer((req, res) => {
    const answer = () => {
      const url = new URL(req.url, 'http://x');
      let p = decodeURIComponent(url.pathname);
      const note = (status, extra = {}) => log.push({ method: req.method, path: p.startsWith(prefix) ? p.slice(prefix.length) : p, status, ...extra });
      const plain = (status, headers = {}) => { note(status); res.writeHead(status, { 'Content-Type': 'text/html', ...headers }); res.end(req.method === 'HEAD' ? undefined : String(status)); };
      if (p === prefix.slice(0, -1)) { note(301); res.writeHead(301, { Location: prefix + url.search }); res.end(); return; }
      if (!p.startsWith(prefix)) { plain(404); return; }
      let rel = p.slice(prefix.length);
      if (rel === '' || rel.endsWith('/')) rel += 'index.html';
      // classic/ is the JavaScript port's own location: the server's "no-cache" on every answer, no isolation headers
      const old = classic && rel.startsWith('classic/');
      const policy = old ? 'no-cache' : cachePolicy(rel);
      const base = old ? { 'Cache-Control': 'no-cache' } : { ...(isolation ? ISOLATION : {}) };
      const miss = () => plain(404, base);
      if (refuseOnce && refuseOnce.test(rel) && !refused.has(rel)) { refused.add(rel); plain(503, base); return; }
      let file;
      if (old) {
        const inner = rel.slice('classic/'.length);
        if (!CLASSIC_ALLOWED.test(inner)) { miss(); return; }
        file = path.join(classic, inner);
        if (!file.startsWith(classic)) { miss(); return; }
      } else {
        file = path.join(root, rel);
        if (!file.startsWith(root + path.sep)) { miss(); return; }
      }
      if (without && rel.endsWith(without)) { miss(); return; }
      let st;
      try { st = fs.statSync(file); } catch (e) { miss(); return; }
      if (st.isDirectory()) { note(301); res.writeHead(301, { ...base, Location: prefix + rel + '/' }); res.end(); return; }
      const headers = { ...base, 'Content-Type': TYPES[path.extname(file).toLowerCase()] || 'application/octet-stream', 'Cache-Control': policy };
      // gzip_static: the .gz copy next to the file, for a client that accepts it
      let encoding = 'identity';
      if (/\bgzip\b/.test(req.headers['accept-encoding'] || '') && !req.headers.range) {
        try { const gz = fs.statSync(file + '.gz'); file += '.gz'; st = gz; encoding = 'gzip'; headers['Content-Encoding'] = 'gzip'; } catch (e) { /* none */ }
      }
      const etag = `"${Math.floor(st.mtimeMs).toString(16)}-${st.size.toString(16)}"`;
      headers.ETag = etag; headers['Last-Modified'] = st.mtime.toUTCString();
      if (req.headers['if-none-match'] === etag) { note(304, { encoding }); res.writeHead(304, headers); res.end(); return; }
      headers['Accept-Ranges'] = 'bytes';
      const m = /^bytes=(\d*)-(\d*)$/.exec(req.headers.range || '');
      if (m) {
        const start = m[1] ? Number(m[1]) : st.size - Number(m[2]);
        const end = m[1] && m[2] ? Math.min(Number(m[2]), st.size - 1) : st.size - 1;
        if (start > end || start >= st.size) { note(416); res.writeHead(416, { ...base, 'Content-Range': `bytes */${st.size}` }); res.end(); return; }
        note(206, { range: req.headers.range });
        res.writeHead(206, { ...headers, 'Content-Range': `bytes ${start}-${end}/${st.size}`, 'Content-Length': end - start + 1 });
        if (req.method === 'HEAD') res.end(); else fs.createReadStream(file, { start, end }).pipe(res);
        return;
      }
      note(200, { encoding });
      res.writeHead(200, { ...headers, 'Content-Length': st.size });
      if (req.method === 'HEAD') res.end(); else fs.createReadStream(file).pipe(res);
    };
    if (latency > 0) setTimeout(answer, latency); else answer();
  });
  return new Promise((resolve, reject) => {
    server.on('error', reject);
    server.listen(port, '127.0.0.1', () => resolve({ url: `http://127.0.0.1:${server.address().port}${prefix}`, port: server.address().port, log, close: () => new Promise((done) => { server.closeAllConnections(); server.close(done); }) }));
  });
}

if (process.argv[1] && path.resolve(process.argv[1]) === fileURLToPath(import.meta.url)) {
  const args = process.argv.slice(2);
  const opt = (n, d) => { const k = args.indexOf('--' + n); return k >= 0 ? args[k + 1] : d; };
  const classic = opt('classic', null);
  const s = await serveSite({ root: path.resolve(opt('root', path.join(ROOT, 'dist/site'))), port: Number(opt('port', 4195)), prefix: opt('prefix', '/redcatspookkasteel/'), latency: Number(opt('latency', 0)), classic: classic ? path.resolve(classic) : null, without: opt('without', null) });
  console.log(s.url);
}
