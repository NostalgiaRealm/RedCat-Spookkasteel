import http from 'node:http';
import { readFile } from 'node:fs/promises';
import path from 'node:path';
import { fileURLToPath } from 'node:url';
const root = path.resolve(path.dirname(fileURLToPath(import.meta.url)), '..');
const types = { '.html':'text/html', '.js':'text/javascript', '.mjs':'text/javascript', '.css':'text/css', '.json':'application/json', '.png':'image/png', '.jpg':'image/jpeg', '.mp4':'video/mp4', '.webm':'video/webm', '.ogg':'audio/ogg', '.wav':'audio/wav', '.bin':'application/octet-stream' };
const server = http.createServer(async (req, res) => {
  try {
    const url = new URL(req.url, 'http://localhost');
    const filename = path.resolve(root, '.' + decodeURIComponent(url.pathname === '/' ? '/index.html' : url.pathname));
    if (!filename.startsWith(root + path.sep) || /(?:^|[\\/])\./.test(path.relative(root, filename))) throw new Error('Invalid path');
    const data = await readFile(filename);
    res.writeHead(200, { 'Content-Type':types[path.extname(filename)] || 'application/octet-stream', 'Cache-Control':'no-cache' }); res.end(data);
  } catch { res.writeHead(404); res.end('Not found'); }
});
server.listen(Number(process.env.PORT || 4173), '127.0.0.1', () => console.log(`RedCat: http://127.0.0.1:${server.address().port}`));
