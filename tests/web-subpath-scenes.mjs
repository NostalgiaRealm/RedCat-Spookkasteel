import {chromium} from 'playwright';
import http from 'node:http';
import path from 'node:path';
import {fileURLToPath} from 'node:url';
import {createReadStream} from 'node:fs';
import {mkdir,stat,open,writeFile} from 'node:fs/promises';
import assert from 'node:assert/strict';

// A local static-prefix fixture, not an Nginx deployment test. Keep production
// files and existing servers untouched; bind an ephemeral loopback port.
const root=path.resolve(path.dirname(fileURLToPath(import.meta.url)),'..');
const prefix='/redcatspookkasteel/';
const mime={'.html':'text/html; charset=utf-8','.js':'text/javascript','.mjs':'text/javascript','.css':'text/css','.json':'application/json','.bin':'application/octet-stream','.png':'image/png','.jpg':'image/jpeg','.webm':'video/webm','.wav':'audio/wav','.ogg':'audio/ogg','.mp4':'video/mp4'};
const requests=[],errors=[],report={server:'Local Node static-prefix fixture; Nginx is not installed and was not deployed.'};
const server=http.createServer(async(req,res)=>{
  const url=new URL(req.url,'http://localhost'),record={path:url.pathname,method:req.method,range:req.headers.range||null};requests.push(record);
  const respond=(status,headers={},body='')=>{record.status=status;res.writeHead(status,headers);res.end(req.method==='HEAD'?undefined:body);};
  if(url.pathname===prefix.slice(0,-1)){respond(301,{Location:prefix+url.search});return;}
  if(!url.pathname.startsWith(prefix)||!['GET','HEAD'].includes(req.method)){respond(404,{'Content-Type':'text/plain'},'Not found');return;}
  let relative;
  try{relative=decodeURIComponent(url.pathname.slice(prefix.length))||'index.html';}catch{respond(404);return;}
  // Match the proposed public payload instead of exposing tools, docs, source
  // control metadata, Electron, or the rest of node_modules through this test.
  if(!/^(index\.html|src\/|assets\/|data\/|node_modules\/three\/)/.test(relative)||relative.split('/').some(part=>part.startsWith('.'))){respond(404,{'Content-Type':'text/plain'},'Not found');return;}
  const filename=path.resolve(root,relative);
  try {
    if(!filename.startsWith(root+path.sep))throw new Error('outside root');
    const info=await stat(filename);if(!info.isFile())throw new Error('not a file');
    let start=0,end=info.size-1,status=200;
    const headers={'Content-Type':mime[path.extname(filename)]||'application/octet-stream','Accept-Ranges':'bytes','Cache-Control':'no-cache'};
    if(req.headers.range){
      const match=/^bytes=(\d*)-(\d*)$/.exec(req.headers.range);
      if(!match||(!match[1]&&!match[2])){respond(416,{'Content-Range':`bytes */${info.size}`});return;}
      if(!match[1])start=Math.max(0,info.size-Number(match[2]));
      else{start=Number(match[1]);if(match[2])end=Math.min(end,Number(match[2]));}
      if(start> end||start>=info.size){respond(416,{'Content-Range':`bytes */${info.size}`});return;}
      status=206;headers['Content-Range']=`bytes ${start}-${end}/${info.size}`;
    }
    headers['Content-Length']=String(end-start+1);record.status=status;res.writeHead(status,headers);
    if(req.method==='HEAD'){res.end();return;}
    const stream=createReadStream(filename,{start,end});stream.on('error',()=>res.destroy());res.on('close',()=>stream.destroy());stream.pipe(res);
  }catch{respond(404,{'Content-Type':'text/plain'},'Not found');}
});
await new Promise(resolve=>server.listen(0,'127.0.0.1',resolve));
const origin=`http://127.0.0.1:${server.address().port}`,base=origin+prefix;
let browser;
try {
  await mkdir(path.join(root,'artifacts'),{recursive:true});
  const redirected=await fetch(origin+prefix.slice(0,-1)+'?skipIntro&source=subpath-check',{redirect:'manual'});
  report.redirect={status:redirected.status,location:redirected.headers.get('location')};assert.deepEqual(report.redirect,{status:301,location:prefix+'?skipIntro&source=subpath-check'});
  const missing=await fetch(base+'src/does-not-exist.js');report.missing={status:missing.status,type:missing.headers.get('content-type'),body:await missing.text()};assert.equal(report.missing.status,404);assert.doesNotMatch(report.missing.body,/<!doctype|<html/i,'missing modules must not receive the entry page');
  const manifests=['actors','actor-overrides','projectiles','hazards','hud','effects','ghosts'];
  report.manifests=[];
  for(const folder of manifests){const response=await fetch(base+`assets/${folder}/manifest.json`);assert.equal(response.status,200);const json=await response.json();assert.ok(json&&typeof json==='object');report.manifests.push(folder);}
  report.media=[];
  for(const file of ['assets/media/intronl.webm','assets/media/outronl.webm','assets/audio/rcjump1.wav']){
    const info=await stat(path.join(root,file)),response=await fetch(base+file,{headers:{Range:'bytes=0-63'}}),actual=Buffer.from(await response.arrayBuffer());
    const handle=await open(path.join(root,file),'r'),expected=Buffer.alloc(64);await handle.read(expected,0,64,0);await handle.close();
    assert.equal(response.status,206);assert.equal(response.headers.get('content-range'),`bytes 0-63/${info.size}`);assert.equal(response.headers.get('accept-ranges'),'bytes');assert.deepEqual(actual,expected);
    const head=await fetch(base+file,{method:'HEAD'});assert.equal(head.status,200);assert.equal(Number(head.headers.get('content-length')),info.size);
    report.media.push({file,status:response.status,type:response.headers.get('content-type'),range:response.headers.get('content-range'),headSize:info.size});
  }
  browser=await chromium.launch({executablePath:process.env.CHROME_PATH||'/usr/bin/google-chrome',headless:true,args:['--use-angle=gl','--autoplay-policy=no-user-gesture-required']});
  const page=await browser.newPage({viewport:{width:1280,height:720}}),browserRequests=[];
  page.on('pageerror',e=>errors.push(e.stack));page.on('response',r=>{if(r.status()>=400)errors.push(`${r.status()} ${r.url()}`);});page.on('request',r=>browserRequests.push(r.url()));
  await page.goto(origin+prefix.slice(0,-1)+'?skipIntro&source=subpath-check');await page.waitForFunction(()=>window.__redcat);
  assert.equal(page.url(),base+'?skipIntro&source=subpath-check');
  report.menu=await page.evaluate(()=>({headers:document.querySelectorAll('#menu header').length,cards:document.querySelectorAll('.level-card').length,logo:document.querySelector('.logo').currentSrc,style:document.querySelector('link[rel="stylesheet"]').href,main:document.querySelector('script[type="module"]').src}));
  assert.equal(report.menu.headers,0);assert.equal(report.menu.cards,5);for(const field of ['logo','style','main'])assert.ok(report.menu[field].startsWith(base),field);
  report.addon=await page.evaluate(async()=>{const {ImprovedNoise}=await import('three/addons/math/ImprovedNoise.js');return new ImprovedNoise().noise(.1,.2,.3);});assert.ok(Number.isFinite(report.addon));
  await page.screenshot({path:path.join(root,'artifacts/web-subpath-menu.png')});
  await page.locator('#play-intro').click();await page.waitForFunction(()=>{const v=document.getElementById('intro-video');return v.readyState>=2&&v.videoWidth>0;},{},{timeout:30000});
  report.intro=await page.evaluate(()=>{const v=document.getElementById('intro-video');return {src:v.currentSrc,width:v.videoWidth,height:v.videoHeight,readyState:v.readyState};});assert.equal(report.intro.src,base+'assets/media/intronl.webm');
  await page.locator('#skip-intro').click();await page.locator('#start').click();
  await page.waitForFunction(()=>window.__redcat.world?.id==='lvl00a'&&['playing','paused'].includes(window.__redcat.mode),{},{timeout:60000});
  await page.evaluate(()=>{window.__redcat.pause();document.getElementById('pause').hidden=true;window.__redcat.world.render();});
  report.forest=await page.evaluate(()=>{const a=window.__redcat,w=a.world;return {id:w.id,actors:w.actorInstances.size,meshGroups:w.modelMeshes.size,scriptVersion:w.scriptProgram.version,scriptError:a.gameplay.scripts.vm.lastError,health:a.gameplay.state.health,redcat:!!w.redcat,mode:a.mode};});
  assert.equal(report.forest.id,'lvl00a');assert.ok(report.forest.actors>10&&report.forest.meshGroups>10&&report.forest.redcat);assert.equal(report.forest.scriptError,null);
  report.audio=await page.evaluate(async()=>{
    const a=window.__redcat.audio,results=[];
    // The forest is paused immediately after loading, before its delayed
    // opening dialogue. Exercise both real audio URL constructors explicitly.
    for(const [channel,sound] of [['effects','rcjump1.wav'],['voices','rcgen9.wav']]){
      const record=a.play({channel,sound,key:'subpath-check',pauseWithGame:false});
      await new Promise((resolve,reject)=>{if(record.element.readyState>=3)return resolve();record.element.addEventListener('canplay',resolve,{once:true});record.element.addEventListener('error',()=>reject(new Error('Original audio failed to load')),{once:true});});
      results.push({channel,src:record.element.currentSrc,readyState:record.element.readyState,duration:record.element.duration});a.stop('subpath-check');
    }
    return results;
  });assert.equal(report.audio[0].src,base+'assets/audio/rcjump1.wav');assert.equal(report.audio[1].src,base+'assets/voices/rcgen9.wav');assert.ok(report.audio.every(a=>a.readyState>=3&&a.duration>0));
  await page.screenshot({path:path.join(root,'artifacts/web-subpath-forest.png')});
  const networkPaths=[...new Set(browserRequests.filter(url=>/^https?:/.test(url)))];
  assert.ok(networkPaths.every(url=>url.startsWith(base)||url===origin+prefix.slice(0,-1)+'?skipIntro&source=subpath-check'),'all application resources stay under the prefix');
  for(const required of ['node_modules/three/build/three.module.js','node_modules/three/build/three.core.js','node_modules/three/examples/jsm/math/ImprovedNoise.js','data/levels/lvl00a/level.json','data/levels/lvl00a/mesh.bin','data/davi/lvl00a.json','data/motions/lvl00a.json','data/dialogue/nl.json','assets/actors/manifest.json','assets/effects/manifest.json'])assert.ok(networkPaths.includes(base+required),`requested prefixed ${required}`);
  assert.ok(networkPaths.some(url=>url.startsWith(base+'assets/voices/')),'original dialogue audio stays prefixed');
  report.network={uniqueRequests:networkPaths.length,outsidePrefix:networkPaths.filter(url=>!url.startsWith(base)&&!url.includes('?skipIntro&source=subpath-check')),paths:networkPaths.map(url=>url.replace(origin,''))};
  assert.deepEqual(errors,[]);
  await writeFile(path.join(root,'artifacts/web-subpath-scenes.json'),JSON.stringify({report,errors},null,2)+'\n');
  console.log('PASS local /redcatspookkasteel/ static-prefix fixture: query-preserving canonical redirect; unversioned menu; Three core/addon importmap; original intro and audio; actual forest geometry/actors/scripts; media byte ranges; missing module404; no application requests escaped the prefix. Nginx itself was not run.');
}finally{await browser?.close();server.closeAllConnections();await new Promise(resolve=>server.close(resolve));}
