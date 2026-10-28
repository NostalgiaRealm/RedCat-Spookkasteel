// Real HTTP-cache regression under the public URL prefix. No Playwright routes:
// routing disables the cache and would turn this into a misleading simulation.
// Profiles, browser temporary files, and evidence stay in this repository.
import {chromium} from 'playwright';
import assert from 'node:assert/strict';
import {createHash} from 'node:crypto';
import {execFileSync} from 'node:child_process';
import {createReadStream} from 'node:fs';
import {mkdir, readFile, stat, writeFile} from 'node:fs/promises';
import http from 'node:http';
import path from 'node:path';
import {fileURLToPath} from 'node:url';
import {Gameplay} from '../source/gameplay.js';
import {validAdventureSave} from '../source/campaign-progress.js';

import {sceneOutput,sceneTemp} from './support/scene-output.mjs';
const root=path.resolve(path.dirname(fileURLToPath(import.meta.url)),'..');
const out=path.join(root,sceneOutput('temp_work'),`web-cache-${new Date().toISOString().slice(0,10)}`,`run-${Date.now()}`);
const temporary=path.join(out,'tmp');
await mkdir(temporary,{recursive:true});
// Playwright itself reads TMPDIR before launching Chromium. Also supply it in
// the browser's environment so neither process uses a live user's profile.
// A relative path avoids Linux's 108-byte Unix-socket path limit in this long
// checkout path while keeping Chrome's singleton socket inside the evidence.
process.chdir(root);
process.env.TMPDIR=sceneTemp();
const prefix='/redcatspookkasteel/';
const actorPath='src/actor-render-residency.js',currentActorPath='source/actor-render-residency.js';
const sha256=value=>createHash('sha256').update(value).digest('hex');
const requests=[],browserRequests=[],errors=[];
const report={out,scope:'Isolated loopback HTTP-cache fixture; no live browser, deployment, or campaign-completion test.',checks:[]};
let context,server,phase='setup',serveOldActor=true;
let sourceSavePath,sourceSaveBytes;

try {
  const oldActor=execFileSync('git',['show',`v0.9.9:${actorPath}`],{cwd:root});
  const currentActor=await readFile(path.join(root,currentActorPath));
  assert.notEqual(sha256(oldActor),sha256(currentActor),'fixture requires distinct v0.9.9 and current actor modules');
  const index=await readFile(path.join(root,'index.html'),'utf8');
  const importMapMatch=index.match(/<script\b[^>]*\bid=["']game-importmap["'][^>]*>([\s\S]*?)<\/script>/i);
  assert.ok(importMapMatch,'Regenerate index.html with npm run web:refresh before running this regression.');
  const imports=JSON.parse(importMapMatch[1]).imports;
  const actorMapping=imports[`./${currentActorPath}`];
  assert.ok(actorMapping,`generated import map covers ${currentActorPath}`);
  const revision=new URL(actorMapping,'http://fixture.invalid/').searchParams.get('v');
  assert.ok(revision,'generated actor import uses a content revision');
  report.revision=revision;
  report.actorSources={oldTag:'v0.9.9',oldSha256:sha256(oldActor),currentSha256:sha256(currentActor)};

  let savedBytes;
  if(process.env.REDCAT_TEST_SAVE) {
    sourceSavePath=path.resolve(process.env.REDCAT_TEST_SAVE);
    sourceSaveBytes=await readFile(sourceSavePath);
    savedBytes=sourceSaveBytes.toString('utf8');
    report.saveSource={path:sourceSavePath,sha256:sha256(sourceSaveBytes)};
  }else{
    // A valid first-level save from the real Gameplay snapshot makes this
    // regression portable; an older read-only save can be supplied explicitly.
    const level=JSON.parse(await readFile(path.join(root,'data/levels/lvl00a/level.json'),'utf8'));
    const game=new Gameplay(level,{deferInit:true});
    savedBytes=JSON.stringify({version:1,level:level.id,position:[...level.spawn.position],
      lastSafe:[...level.spawn.position],yaw:0,pitch:0,noClip:false,game:game.snapshot(),
      savedAt:'2026-01-01T00:00:00.000Z'});
    report.saveSource={generated:'First-level Gameplay snapshot',sha256:sha256(savedBytes)};
  }
  const saved=JSON.parse(savedBytes);
  assert.ok(validAdventureSave(saved),'provided or generated save must pass the application validator');
  assert.ok(saved.game.state.health>0&&!saved.game.completed,'fixture requires a living, incomplete adventure');
  await writeFile(path.join(out,'seed-save.json'),savedBytes);
  report.saveSource.level=saved.level;

  const legacyImportMap=JSON.stringify({imports:{
    three:'./node_modules/three/build/three.module.js',
    'three/addons/':'./node_modules/three/examples/jsm/'
  }});
  const probePage=body=>`<!doctype html><html><head><meta charset="utf-8"><link rel="icon" href="data:,"><script type="importmap">${legacyImportMap}</script></head><body><script type="module">${body}</script></body></html>`;
  const warmPage=probePage(`
    import {ActorRenderResidency} from './${actorPath}';
    window.__cacheWarm={settleType:typeof ActorRenderResidency.prototype.settle};
  `);
  const mixedPage=probePage(`
    import {CastleWorld} from './source/world.js';
    import {ActorRenderResidency} from './${actorPath}';
    const actorResidency=new ActorRenderResidency();
    const receiver={actorResidency,actorTextures:{settle:async()=>{}},
      updateRenderResidency(){},updateActorTextureResidency(){}};
    try {
      await CastleWorld.prototype.settleActorTextures.call(receiver);
      window.__cacheMixed={settleType:typeof actorResidency.settle,error:null};
    }catch(error){
      window.__cacheMixed={settleType:typeof actorResidency.settle,
        error:{name:error.name,message:error.message,stack:error.stack},
        worldMethod:CastleWorld.prototype.settleActorTextures.toString()};
    }
  `);
  const mime={'.html':'text/html; charset=utf-8','.js':'text/javascript','.mjs':'text/javascript',
    '.css':'text/css','.json':'application/json','.png':'image/png','.jpg':'image/jpeg',
    '.webm':'video/webm','.wav':'audio/wav','.ogg':'audio/ogg','.mp4':'video/mp4','.ico':'image/x-icon'};
  server=http.createServer(async(req,res)=>{
    const url=new URL(req.url,'http://localhost');
    const record={phase,method:req.method,url:url.pathname+url.search};
    requests.push(record);
    const send=(status,headers={},body='')=>{
      record.status=status;res.writeHead(status,headers);res.end(req.method==='HEAD'?undefined:body);
    };
    try{
      if(!['GET','HEAD'].includes(req.method)||!url.pathname.startsWith(prefix)){send(404);return;}
      const relative=decodeURIComponent(url.pathname.slice(prefix.length))||'index.html';
      if(relative==='__cache-warm.html'||relative==='__cache-mixed.html'){
        send(200,{'Content-Type':'text/html; charset=utf-8','Cache-Control':'no-store'},
          relative==='__cache-warm.html'?warmPage:mixedPage);return;
      }
      if(!/^(index\.html|src\/|source\/|assets\/|data\/|node_modules\/three\/)/.test(relative)||
          relative.split('/').some(part=>part.startsWith('.'))){send(404);return;}
      const filename=path.resolve(root,relative);
      if(!filename.startsWith(root+path.sep)){send(404);return;}
      const cache=relative.endsWith('.js')||relative.endsWith('.css')?
        'public, max-age=31536000, immutable':'no-store';
      const headers={'Content-Type':mime[path.extname(filename)]||'application/octet-stream',
        'Cache-Control':cache,'Accept-Ranges':'bytes'};
      if(relative===actorPath){
        const source=serveOldActor&&!url.search?oldActor:currentActor;
        record.sourceSha256=sha256(source);
        send(200,{...headers,'Content-Length':String(source.length)},source);return;
      }
      const info=await stat(filename);
      if(!info.isFile()){send(404);return;}
      let start=0,end=info.size-1,status=200;
      if(req.headers.range){
        const match=/^bytes=(\d*)-(\d*)$/.exec(req.headers.range);
        if(!match||(!match[1]&&!match[2])){send(416,{'Content-Range':`bytes */${info.size}`});return;}
        if(!match[1])start=Math.max(0,info.size-Number(match[2]));
        else {start=Number(match[1]);if(match[2])end=Math.min(end,Number(match[2]));}
        if(start>end||start>=info.size){send(416,{'Content-Range':`bytes */${info.size}`});return;}
        status=206;headers['Content-Range']=`bytes ${start}-${end}/${info.size}`;
      }
      record.status=status;
      res.writeHead(status,{...headers,'Content-Length':String(end-start+1)});
      if(req.method==='HEAD'){res.end();return;}
      const stream=createReadStream(filename,{start,end});
      stream.on('error',()=>res.destroy());res.on('close',()=>stream.destroy());stream.pipe(res);
    }catch(error){
      if(res.headersSent)res.destroy();else send(404,{'Content-Type':'text/plain'},'Not found');
      if(error.code!=='ENOENT')record.error=String(error);
    }
  });
  await new Promise(resolve=>server.listen(0,'127.0.0.1',resolve));
  const origin=`http://127.0.0.1:${server.address().port}`,base=origin+prefix;
  report.base=base;
  context=await chromium.launchPersistentContext(path.join(out,'profile'),{
    executablePath:process.env.CHROME_PATH||'/usr/bin/google-chrome',headless:true,
    env:{...process.env},viewport:{width:1280,height:720},
    args:[`--use-angle=${process.env.REDCAT_TEST_ANGLE||'swiftshader'}`,'--enable-unsafe-swiftshader','--autoplay-policy=no-user-gesture-required']
  });
  context.on('request',request=>browserRequests.push({phase,url:request.url(),type:request.resourceType()}));
  const page=await context.newPage();
  page.on('pageerror',error=>errors.push({phase,error:String(error)}));
  page.on('response',response=>{
    if(response.status()>=400)errors.push({phase,status:response.status(),url:response.url()});
  });
  await page.addInitScript(({savedBytes})=>{
    if(!localStorage.getItem('redcat.save.v1'))localStorage.setItem('redcat.save.v1',savedBytes);
    localStorage.setItem('redcat.settings.v1',JSON.stringify({
      autoIntro:false,fullscreen:false,touchControls:'auto'
    }));
    // No world ticks occur between restoration and the pause. Loading's
    // explicit settle paths still run normally and pump their own work queue.
    let id=0;
    window.requestAnimationFrame=()=>++id;
    window.cancelAnimationFrame=()=>{};
    HTMLCanvasElement.prototype.requestPointerLock=()=>Promise.resolve();
  },{savedBytes});

  phase='warm';
  await page.goto(base+'__cache-warm.html');
  await page.waitForFunction(()=>window.__cacheWarm,null,{polling:100});
  report.warm=await page.evaluate(()=>window.__cacheWarm);
  assert.equal(report.warm.settleType,'undefined','exact old release has no settle method');
  const unversionedActorRequests=()=>requests.filter(request=>request.url===prefix+actorPath);
  assert.equal(unversionedActorRequests().length,1);
  assert.equal(unversionedActorRequests()[0].sourceSha256,report.actorSources.oldSha256);
  serveOldActor=false;

  phase='mixed';
  await page.goto(base+'__cache-mixed.html');
  await page.waitForFunction(()=>window.__cacheMixed,null,{polling:100,timeout:30000});
  report.mixed=await page.evaluate(actorUrl=>({...window.__cacheMixed,
    resource:performance.getEntriesByName(actorUrl).map(entry=>({
      transferSize:entry.transferSize,encodedBodySize:entry.encodedBodySize
    }))}),base+actorPath);
  assert.equal(report.mixed.settleType,'undefined');
  assert.equal(report.mixed.error?.name,'TypeError');
  assert.match(report.mixed.error.message,/actorResidency.*settle is not a function/);
  assert.ok(requests.some(request=>request.phase==='mixed'&&request.url===prefix+'source/world.js'),
    'mixed page fetches the current world module from the real HTTP server');
  assert.equal(unversionedActorRequests().length,1,'second document reuses the stale HTTP-cache actor without contacting the server');
  report.mixed.unversionedActorRequests=unversionedActorRequests().length;
  report.checks.push('A fresh document and current world reproduce the original TypeError using the cached v0.9.9 actor.');

  phase='fixed';
  await page.goto(base+'?skipIntro&cache-regression=fixed');
  await page.waitForFunction(()=>window.__redcat,null,{polling:100,timeout:30000});
  report.fixedMenu=await page.evaluate(()=>({
    mode:__redcat.mode,continueVisible:__redcat.originalMenu.getState().hasSave,
    fatalVisible:!document.getElementById('fatal').hidden,
    save:localStorage.getItem('redcat.save.v1'),
    entry:document.querySelector('script[type="module"][src]').src,
    styles:[...document.querySelectorAll('link[rel="stylesheet"]')].map(link=>link.href)
  }));
  assert.equal(report.fixedMenu.mode,'menu');
  assert.equal(report.fixedMenu.continueVisible,true);
  assert.equal(report.fixedMenu.fatalVisible,false);
  assert.equal(report.fixedMenu.save,savedBytes,'menu startup preserves the exact older save string');
  delete report.fixedMenu.save;
  for(const url of [report.fixedMenu.entry,...report.fixedMenu.styles])
    assert.equal(new URL(url).searchParams.get('v'),revision,`entry and style use the current revision: ${url}`);
  await page.screenshot({path:path.join(out,'fixed-menu.png')});
  await page.evaluate(async()=>{
    // Call the installed DOM handler, with the original Continue implementation.
    // Capture the stored string before pause(), which intentionally autosaves.
    const menu=__redcat.originalMenu,continueHandler=menu.launch;
    menu.launch=async function(options){
      try{
        const loaded=await continueHandler.call(this,options),app=__redcat;
        const result={loaded,modeBeforePause:app.mode,settleType:typeof app.world?.actorResidency?.settle,
          saveBeforePause:localStorage.getItem('redcat.save.v1'),level:app.world?.id,
          position:app.world?[...app.world.player.position]:null,
          health:app.gameplay?.state.health,scriptError:app.gameplay?.scripts.vm.lastError,
          fatalVisible:!document.getElementById('fatal').hidden};
        app.pause();
        result.modeAfterPause=app.mode;
        result.saveAfterPause=localStorage.getItem('redcat.save.v1');
        app.world?.render();
        window.__cacheContinue=result;
      }catch(error){window.__cacheContinue={error:String(error)};}
    };
    menu.home();menu.next();document.getElementById('native-start').click();
  });
  await page.waitForFunction(()=>window.__cacheContinue,null,{polling:100,timeout:120000});
  const continued=await page.evaluate(()=>window.__cacheContinue);
  assert.equal(continued.error,undefined);
  assert.equal(continued.loaded,true);
  assert.equal(continued.modeBeforePause,'playing');
  assert.equal(continued.modeAfterPause,'paused');
  assert.equal(continued.settleType,'function');
  assert.equal(continued.level,saved.level);
  assert.deepEqual(continued.position,saved.position,'save position restores without a gameplay tick');
  assert.equal(continued.health,saved.game.state.health);
  assert.equal(continued.scriptError,null);
  assert.equal(continued.fatalVisible,false);
  assert.equal(continued.saveBeforePause,savedBytes,'successful Continue preserves the exact save string before normal pause autosave');
  report.continue={...continued,saveBeforePause:undefined,saveAfterPause:undefined,
    savedBytesUnchangedBeforePause:true,savedSha256BeforePause:sha256(continued.saveBeforePause),
    normalPauseAutosaveChangedBytes:continued.saveAfterPause!==continued.saveBeforePause};
  const servedCurrentActor=requests.filter(request=>request.phase==='fixed'&&request.url===prefix+actorMapping.replace(/^\.\//,''));
  assert.equal(servedCurrentActor.length,0,'fixed page contains the current actor in its bundle, without a separate actor request');
  assert.equal(requests.filter(request=>request.phase==='fixed'&&request.url===`${prefix}src/game.bundle.js?v=${revision}`).length,1,
    'fixed page fetches the complete current bundle despite the cached old individual modules');
  assert.equal(unversionedActorRequests().length,1,'fixed page never requests the stale unversioned actor URL');
  await page.screenshot({path:path.join(out,'continued-save-paused.png')});
  await page.evaluate(()=>{document.getElementById('pause').hidden=true;__redcat.world.render();});
  await page.screenshot({path:path.join(out,'continued-save-scene.png')});
  await page.evaluate(()=>{document.getElementById('pause').hidden=false;});
  report.checks.push('Actual regenerated entry page loads the current actor graph and Continue restores the saved adventure; pause follows immediately.');

  phase='mobile';
  await page.setViewportSize({width:390,height:844});
  await page.reload();
  await page.waitForFunction(()=>window.__redcat,null,{polling:100,timeout:30000});
  report.mobile=await page.evaluate(()=>({
    viewport:{width:innerWidth,height:innerHeight},mode:__redcat.mode,
    continueVisible:__redcat.originalMenu.getState().hasSave,
    fatalVisible:!document.getElementById('fatal').hidden
  }));
  assert.equal(report.mobile.mode,'menu');assert.equal(report.mobile.continueVisible,true);
  assert.equal(report.mobile.fatalVisible,false);
  await page.screenshot({path:path.join(out,'mobile-menu.png')});
  const fixedRequests=browserRequests.filter(request=>['fixed','mobile'].includes(request.phase));
  const jsRequests=fixedRequests.filter(request=>/\.m?js$/.test(new URL(request.url).pathname));
  assert.equal(jsRequests.length,2,'desktop and narrow-viewport documents each request one runtime bundle');
  assert.equal(new Set(jsRequests.map(request=>request.url)).size,1,'both documents use the same complete bundle');
  for(const request of jsRequests){
    assert.ok(request.url.startsWith(base),'all JavaScript remains under the deployment prefix');
    assert.equal(new URL(request.url).searchParams.get('v'),revision,`every transitive JavaScript request uses the revision: ${request.url}`);
  }
  report.network={versionedJavaScriptRequests:jsRequests.length,
    uniqueVersionedJavaScriptURLs:new Set(jsRequests.map(request=>request.url)).size,
    unversionedActorRequests:unversionedActorRequests().length};
  report.checks.push('Desktop Continue and a narrow-viewport reload request only revisioned JavaScript under /redcatspookkasteel/.');
  assert.deepEqual(errors,[]);
  report.passed=true;
}catch(error){
  report.failure=error.stack;
  throw error;
}finally{
  try{
    await context?.close();
    if(sourceSavePath){
      const after=await readFile(sourceSavePath);
      report.saveSource.unchanged=after.equals(sourceSaveBytes);
      assert.ok(report.saveSource.unchanged,'source save fixture remains byte-identical');
    }
  }finally{
    if(server){server.closeAllConnections();await new Promise(resolve=>server.close(resolve));}
    await writeFile(path.join(out,'report.json'),JSON.stringify({...report,errors},null,2)+'\n');
    await writeFile(path.join(out,'requests.json'),JSON.stringify({server:requests,browser:browserRequests},null,2)+'\n');
  }
}
console.log(`PASS real stale-module HTTP cache reproduction, revisioned bundle, Continue save restoration and narrow-viewport reload. Evidence: ${out}`);
