import http from 'node:http';
import {open, realpath} from 'node:fs/promises';
import {pipeline} from 'node:stream/promises';
import path from 'node:path';
import { fileURLToPath } from 'node:url';
import {refreshWebCache} from './refresh-web-cache.mjs';
const root = path.resolve(path.dirname(fileURLToPath(import.meta.url)), '..');
const types = { '.html':'text/html', '.js':'text/javascript', '.mjs':'text/javascript', '.css':'text/css', '.json':'application/json', '.png':'image/png', '.svg':'image/svg+xml', '.ico':'image/x-icon', '.jpg':'image/jpeg', '.mp4':'video/mp4', '.webm':'video/webm', '.ogg':'audio/ogg', '.wav':'audio/wav', '.bin':'application/octet-stream' };

function permittedPath(root, filename) {
  return filename.startsWith(root + path.sep) && !/(?:^|[\\/])\./.test(path.relative(root, filename));
}

// Single byte ranges cover browser media seeking. Ignore unsupported syntax or
// multipart ranges; an otherwise valid but unsatisfiable range receives 416.
function byteRange(value, size) {
  const match = /^bytes=(\d*)-(\d*)$/.exec(value || '');
  if (!match || (!match[1] && !match[2])) return null;
  let start = match[1] ? Number(match[1]) : Math.max(0, size - Number(match[2]));
  let end = match[1] && match[2] ? Number(match[2]) : size - 1;
  if (!Number.isSafeInteger(start) || !Number.isSafeInteger(end) || start >= size || end < start || (!match[1] && Number(match[2]) === 0)) return false;
  return {start, end:Math.min(end, size - 1)};
}

/** Local development server; construction has no filesystem/build side effects. */
export async function createGameServer({projectDir = root} = {}) {
  const directory = await realpath(projectDir);
  return http.createServer(async (req, res) => {
    let file;
    try {
      if (req.method !== 'GET' && req.method !== 'HEAD') {
        res.writeHead(405, {Allow:'GET, HEAD'}); res.end(); return;
      }
      const url = new URL(req.url, 'http://localhost');
      const requested = path.resolve(directory, '.' + decodeURIComponent(url.pathname === '/' ? '/index.html' : url.pathname));
      if (!permittedPath(directory, requested)) throw new Error('Invalid path');
      const filename = await realpath(requested);
      if (!permittedPath(directory, filename)) throw new Error('Invalid path');
      file = await open(filename, 'r');
      const stat = await file.stat();
      if (!stat.isFile()) throw new Error('Not a file');
      const etag = `W/"${stat.size}-${stat.mtimeMs}"`;
      const modified = stat.mtime.toUTCString();
      const headers = {
        'Content-Type':types[path.extname(filename)] || 'application/octet-stream',
        'Cache-Control':'no-cache', 'ETag':etag, 'Last-Modified':modified,
        'Accept-Ranges':'bytes',
      };
      // Revalidate on every visit, but avoid retransmitting unchanged files.
      const tags = req.headers['if-none-match'];
      const unchanged = tags !== undefined ? tags.split(',').some(tag => tag.trim() === '*' || tag.trim().replace(/^W\//,'') === etag.slice(2)) :
        req.headers['if-modified-since'] && Date.parse(req.headers['if-modified-since']) >= Date.parse(modified);
      if (unchanged) { res.writeHead(304, headers); res.end(); return; }
      // Our metadata ETag is weak, so only an exact HTTP date can satisfy
      // If-Range. A mismatched validator requests the complete fresh file.
      const ifRange = req.headers['if-range'];
      const range = req.method === 'GET' && (!ifRange || ifRange === modified) ? byteRange(req.headers.range, stat.size) : null;
      if (range === false) {
        res.writeHead(416, {...headers, 'Content-Range':`bytes */${stat.size}`, 'Content-Length':0}); res.end(); return;
      }
      headers['Content-Length'] = range ? range.end - range.start + 1 : stat.size;
      if (range) headers['Content-Range'] = `bytes ${range.start}-${range.end}/${stat.size}`;
      res.writeHead(range ? 206 : 200, headers);
      if (req.method === 'HEAD' || stat.size === 0) { res.end(); return; }
      // Backpressure bounds memory even for movies, slow clients and parallel
      // requests. Closing a tab cancels the stream and releases its file handle.
      await pipeline(file.createReadStream({autoClose:false, ...range}), res);
    } catch {
      if (res.headersSent) res.destroy();
      else { res.writeHead(404); res.end('Not found'); }
    } finally {
      await file?.close();
    }
  });
}

if (process.argv[1] && path.resolve(process.argv[1]) === fileURLToPath(import.meta.url)) {
  await refreshWebCache({projectDir:root});
  const server = await createGameServer();
  server.listen(Number(process.env.PORT || 4173), '127.0.0.1', () => console.log(`RedCat: http://127.0.0.1:${server.address().port}`));
}
