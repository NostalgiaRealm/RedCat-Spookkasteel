import assert from 'node:assert/strict';
import {once} from 'node:events';
import {readFile,writeFile} from 'node:fs/promises';
import {createHash} from 'node:crypto';
import {createGameServer} from '../../tools/serve.mjs';
const server=await createGameServer();server.listen(0,'127.0.0.1');await once(server,'listening');
const base=`http://127.0.0.1:${server.address().port}`,report={assets:[]};
try {
 for(const asset of ['assets/media/intronl.mp4','assets/audio/level 3 - the graveyard.wav','src/game.bundle.js']) {
  const source=await readFile(asset),url=base+'/'+encodeURI(asset),head=await fetch(url,{method:'HEAD'});
  assert.equal(Number(head.headers.get('content-length')),source.length);
  assert.equal((await head.arrayBuffer()).byteLength,0);
  const cached=await fetch(url,{headers:{'If-None-Match':head.headers.get('etag')}});
  assert.equal(cached.status,304);assert.equal((await cached.arrayBuffer()).byteLength,0);
  const start=65536,end=131071,response=await fetch(url,{headers:{Range:`bytes=${start}-${end}`}});
  const bytes=Buffer.from(await response.arrayBuffer());assert.equal(response.status,206);assert.deepEqual(bytes,source.subarray(start,end+1));
  report.assets.push({asset,fullBytes:source.length,headBodyBytes:0,revalidatedBodyBytes:0,rangeBytes:bytes.length,rangeSha256:createHash('sha256').update(bytes).digest('hex')});
 }
 report.passed=true;
 await writeFile('temp_work/efficiency-2026-10-26/server-assets-report.json',JSON.stringify(report,null,2)+'\n');
 console.log(JSON.stringify(report));
} finally {server.closeAllConnections();await new Promise(resolve=>server.close(resolve));}
