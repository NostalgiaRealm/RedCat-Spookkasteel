import test from 'node:test';
import assert from 'node:assert/strict';
import http from 'node:http';
import path from 'node:path';
import {once} from 'node:events';
import {mkdir, mkdtemp, symlink, utimes, writeFile} from 'node:fs/promises';
import {fileURLToPath} from 'node:url';
import {createGameServer} from '../tools/serve.mjs';

const evidence = fileURLToPath(new URL('../temp_work/efficiency-2026-10-26/server-tests/', import.meta.url));
async function fixture(t) {
  await mkdir(evidence, {recursive:true});
  const root = await mkdtemp(path.join(evidence, 'run-'));
  const bytes = Buffer.from('0123456789abcdef');
  await writeFile(path.join(root, 'index.html'), '<html>game</html>');
  await writeFile(path.join(root, 'movie.mp4'), bytes);
  await writeFile(path.join(root, 'empty.bin'), '');
  const server = await createGameServer({projectDir:root});
  server.listen(0, '127.0.0.1'); await once(server, 'listening');
  t.after(async () => {server.closeAllConnections(); await new Promise(resolve => server.close(resolve));});
  const url = `http://127.0.0.1:${server.address().port}`;
  return {root, bytes, server, url, get:(file='/', headers={}, method='GET') => request(url+file, headers, method)};
}
function request(url, headers, method='GET') {
  return new Promise((resolve, reject) => {
    const req = http.request(url, {headers, method}, res => {
      const chunks = [];
      res.on('data', chunk => chunks.push(chunk));
      res.on('error', reject);
      res.on('end', () => resolve({status:res.statusCode, headers:res.headers, body:Buffer.concat(chunks)}));
    });
    req.on('error', reject);req.end();
  });
}

test('GET streams original bytes and HEAD returns the same metadata without a body', async t => {
  const f = await fixture(t), full = await f.get('/movie.mp4'), head = await f.get('/movie.mp4', {}, 'HEAD');
  assert.equal(full.status, 200);assert.deepEqual(full.body, f.bytes);
  assert.equal(full.headers['content-type'], 'video/mp4');
  for (const key of ['content-length','content-type','etag','last-modified','accept-ranges','cache-control']) assert.equal(head.headers[key], full.headers[key]);
  assert.equal(head.body.length, 0);assert.equal(full.headers['cache-control'], 'no-cache');
  assert.equal((await f.get()).body.toString(), '<html>game</html>');
  assert.equal((await f.get('/empty.bin')).body.length, 0);
});

test('media seeking returns exact bounded, open and suffix byte ranges', async t => {
  const f = await fixture(t);
  for (const [range,start,end] of [['bytes=2-7',2,7],['bytes=12-',12,15],['bytes=-5',11,15],['bytes=12-999',12,15]]) {
    const result = await f.get('/movie.mp4', {Range:range});
    assert.equal(result.status,206);assert.deepEqual(result.body,f.bytes.subarray(start,end+1));
    assert.equal(result.headers['content-range'],`bytes ${start}-${end}/16`);
    assert.equal(Number(result.headers['content-length']),end-start+1);
  }
  assert.equal((await f.get('/movie.mp4', {Range:'bytes=17-'})).status,416);
  assert.equal((await f.get('/empty.bin', {Range:'bytes=0-'})).status,416);
  assert.equal((await f.get('/movie.mp4', {Range:'bytes=-0'})).status,416);
  assert.equal((await f.get('/movie.mp4', {Range:'bytes=0-1,4-5'})).status,200);
  assert.equal((await f.get('/movie.mp4', {Range:'bytes=2-7'}, 'HEAD')).status,200);
});

test('unchanged assets revalidate without a body; changed source is returned immediately', async t => {
  const f = await fixture(t), original = await f.get('/movie.mp4');
  for (const headers of [{'If-None-Match':original.headers.etag},{'If-None-Match':'"other", '+original.headers.etag},{'If-Modified-Since':original.headers['last-modified']}]) {
    const response = await f.get('/movie.mp4', headers);
    assert.equal(response.status,304);assert.equal(response.body.length,0);
  }
  await writeFile(path.join(f.root,'movie.mp4'),'fedcba9876543210');
  const later = new Date(Date.now()+2000);await utimes(path.join(f.root,'movie.mp4'),later,later);
  const changed = await f.get('/movie.mp4', {'If-None-Match':original.headers.etag});
  assert.equal(changed.status,200);assert.equal(changed.body.toString(),'fedcba9876543210');
  assert.notEqual(changed.headers.etag,original.headers.etag);
  assert.equal((await f.get('/movie.mp4', {'If-None-Match':'"outdated"','If-Modified-Since':changed.headers['last-modified']})).status,200);
});

test('If-Range uses the matching date and otherwise returns the whole current file', async t => {
  const f = await fixture(t), original = await f.get('/movie.mp4');
  assert.equal((await f.get('/movie.mp4',{Range:'bytes=2-7','If-Range':original.headers['last-modified']})).status,206);
  for (const value of ['Thu, 01 Jan 1970 00:00:00 GMT',original.headers.etag]) {
    const result=await f.get('/movie.mp4',{Range:'bytes=2-7','If-Range':value});
    assert.equal(result.status,200);assert.deepEqual(result.body,f.bytes);
  }
});

test('missing, hidden, invalid and escaping paths remain unavailable; mutations are rejected', async t => {
  const f = await fixture(t);
  await writeFile(path.join(f.root,'.private'),'private');
  await symlink(path.join(evidence,'outside.txt'),path.join(f.root,'escape'));
  await writeFile(path.join(evidence,'outside.txt'),'outside');
  for (const file of ['/missing','/%2Eprivate','/%ZZ','/%2e%2e%2foutside.txt','/escape']) assert.equal((await f.get(file)).status,404,file);
  const post=await f.get('/movie.mp4',{},'POST');assert.equal(post.status,405);assert.equal(post.headers.allow,'GET, HEAD');
});

test('large files stream exactly and an aborted movie does not prevent subsequent requests', async t => {
  const f = await fixture(t), bytes = Buffer.alloc(2*1024*1024+17);
  for(let i=0;i<bytes.length;i++)bytes[i]=i%251;
  await writeFile(path.join(f.root,'large.bin'),bytes);
  assert.deepEqual((await f.get('/large.bin')).body,bytes);
  await new Promise((resolve,reject)=>{
    const req=http.get(f.url+'/large.bin',res=>res.once('data',()=>{res.destroy();resolve();}));
    req.on('error',reject);
  });
  assert.deepEqual((await f.get('/movie.mp4')).body,f.bytes);
});
