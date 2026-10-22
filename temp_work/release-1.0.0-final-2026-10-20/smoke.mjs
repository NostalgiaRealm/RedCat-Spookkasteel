import {_electron as electron} from 'playwright';
import assert from 'node:assert/strict';
import {createHash} from 'node:crypto';
import {createRequire} from 'node:module';
import {mkdir, mkdtemp, readFile, writeFile} from 'node:fs/promises';
import path from 'node:path';
import {fileURLToPath} from 'node:url';

const output = path.dirname(fileURLToPath(import.meta.url));
const root = path.resolve(output, '../..');
const temporary = path.join(output, 'tmp');
await mkdir(temporary, {recursive:true});
process.chdir(root);
// Keep Chromium's socket path short and every temporary file in this run.
process.env.TMPDIR = path.relative(root, temporary);
const run = await mkdtemp(path.join(output, 'smoke-'));
const profile = path.join(run, 'profile');
await mkdir(profile);
const executablePath = path.join(root, 'dist/linux-unpacked/redcat-spookkasteel');
const asarPath = path.join(root, 'dist/linux-unpacked/resources/app.asar');
const args = [
  '--ozone-platform=x11',
  '--use-angle=swiftshader',
  '--enable-unsafe-swiftshader',
  `--user-data-dir=${profile}`
];
const report = {
  scope:'Linux x64 packaged application on Xvfb using software ANGLE/SwiftShader; first level only. This is not hardware graphics validation or a campaign playthrough.',
  started:new Date().toISOString(), run, profile, temporary:process.env.TMPDIR,
  executablePath, args, checks:[], pageErrors:[], consoleErrors:[],
  moduleRequests:[], failedRequests:[], badResponses:[], stderr:[], success:false
};
const sha256 = bytes => createHash('sha256').update(bytes).digest('hex');
const require = createRequire(import.meta.url);
const asar = require('@electron/asar');
let app, page, timeout;
const fatal = async () => page ? page.evaluate(() => ({
  visible:!document.getElementById('fatal')?.hidden,
  text:document.getElementById('fatal-message')?.textContent || '',
  mode:window.__redcat?.mode
})).catch(() => null) : null;
const snapshot = () => page.evaluate(() => {
  const game=window.__redcat;
  return {
    mode:game.mode, level:game.world?.id,
    position:[...(game.world?.player.position || [])],
    health:game.gameplay?.state.health,
    scriptError:game.gameplay?.scripts.vm.lastError ?? null,
    fatalVisible:!document.getElementById('fatal').hidden
  };
});
const assertHealthy = state => {
  assert.equal(state.fatalVisible,false);
  assert.equal(state.scriptError,null);
  assert.equal(state.level,'lvl00a');
  assert.ok(state.health>0);
};
const waitForMenu = async () => {
  await page.waitForFunction(() => window.__redcat,null,{timeout:45000});
  const failure = await fatal();
  assert.equal(failure.visible,false, failure.text);
  if (await page.locator('#intro').isVisible()) await page.locator('#skip-intro').click();
  await page.waitForFunction(() => window.__redcat.mode==='menu',null,{timeout:15000});
};

async function check() {
  assert.ok(process.env.DISPLAY,'Run this check through xvfb-run.');
  const packedIndex = asar.extractFile(asarPath,'index.html');
  const sourceIndex = await readFile(path.join(root,'index.html'));
  assert.deepEqual(packedIndex,sourceIndex,'Package must contain the current regenerated index.html.');
  report.indexSha256 = sha256(packedIndex);
  const map = JSON.parse(packedIndex.toString().match(/<script\b[^>]*id="game-importmap"[^>]*>([\s\S]*?)<\/script>/)[1]).imports;
  report.revision = new URL(map['./src/actor-render-residency.js'],'redcat://game/').searchParams.get('v');
  assert.match(report.revision,/^[a-f0-9]{24}$/);
  const mappedModules=Object.values(map).filter(value=>/\.m?js(?:\?|$)/.test(value));
  assert.ok(mappedModules.length>100);
  for (const value of mappedModules) assert.equal(new URL(value,'redcat://game/').searchParams.get('v'),report.revision);
  report.mappedModules=mappedModules.length;
  report.checks.push('Packaged entry HTML matches the current source and revisions the complete module map.');

  app = await electron.launch({
    executablePath,args,cwd:root,
    env:{...process.env,TMPDIR:process.env.TMPDIR,REDCAT_VSYNC:'1'},
    timeout:45000
  });
  app.process().stderr?.on('data',chunk => report.stderr.push(String(chunk)));
  report.application = await app.evaluate(({app}) => ({
    version:app.getVersion(), isPackaged:app.isPackaged,
    appPath:app.getAppPath(), userData:app.getPath('userData')
  }));
  assert.equal(report.application.version,'1.0.0');
  assert.equal(report.application.isPackaged,true);
  assert.equal(path.resolve(report.application.userData),profile);
  assert.equal(path.resolve(report.application.appPath),asarPath);
  page = await app.firstWindow();
  page.setDefaultTimeout(15000);
  page.on('pageerror',error => report.pageErrors.push(error.message));
  page.on('console',message => {if(message.type()==='error')report.consoleErrors.push(message.text());});
  page.on('request',request => {if(/\.m?js(?:\?|$)/.test(request.url()))report.moduleRequests.push(request.url());});
  page.on('requestfailed',request => report.failedRequests.push({url:request.url(),error:request.failure()?.errorText}));
  page.on('response',response => {if(response.status()>=400)report.badResponses.push({url:response.url(),status:response.status()});});
  await waitForMenu();
  await page.locator('#open-about').click();
  report.about = await page.locator('#about').innerText();
  assert.match(report.about,/Versie 1\.0(?:\s|$)/);
  await page.screenshot({path:path.join(run,'about.png')});
  await page.locator('#close-about').click();
  report.gl = await page.evaluate(() => {
    const gl=document.getElementById('game').getContext('webgl2');
    const info=gl?.getExtension('WEBGL_debug_renderer_info');
    return gl ? {vendor:gl.getParameter(gl.VENDOR),renderer:gl.getParameter(gl.RENDERER),
      unmaskedRenderer:info?gl.getParameter(info.UNMASKED_RENDERER_WEBGL):null} : null;
  });
  assert.ok(report.gl,'WebGL 2 context must exist.');
  assert.match(report.gl.unmaskedRenderer || report.gl.renderer,/SwiftShader/i);
  report.checks.push('Packaged version 1.0.0, About version 1.0, isolated user profile and software WebGL 2 confirmed.');

  report.firstStart = await page.evaluate(async () => {
    const game=window.__redcat;
    const started=await game.startLevel(0);
    const modeBeforePause=game.mode;
    game.pause();
    return {started,modeBeforePause,modeAfterPause:game.mode};
  });
  assert.equal(report.firstStart.started,true);
  assert.equal(report.firstStart.modeBeforePause,'playing');
  assert.equal(report.firstStart.modeAfterPause,'paused');
  report.firstLevel = await snapshot();
  assertHealthy(report.firstLevel);
  report.actor = await page.evaluate(async () => {
    const {ActorRenderResidency}=await import('./src/actor-render-residency.js');
    return {
      settleType:typeof window.__redcat.world.actorResidency?.settle,
      classSettleType:typeof ActorRenderResidency.prototype.settle,
      sameClass:window.__redcat.world.actorResidency instanceof ActorRenderResidency
    };
  });
  assert.deepEqual(report.actor,{settleType:'function',classSettleType:'function',sameClass:true});
  await page.screenshot({path:path.join(run,'first-level-paused.png')});
  report.checks.push('First campaign level starts and pauses; actor residency uses the current class and settle function.');

  const saved = await page.evaluate(() => {
    const game=window.__redcat, ok=game.saveGame(true),key=game.profiles.key('redcat.save.v1');
    return {ok,key,bytes:localStorage.getItem(key)};
  });
  assert.equal(saved.ok,true);
  const save=JSON.parse(saved.bytes);
  assert.equal(save.level,'lvl00a');
  assert.deepEqual(save.position,report.firstLevel.position);
  assert.equal(save.game.state.health,report.firstLevel.health);
  report.save={key:saved.key,sha256:sha256(saved.bytes),bytes:Buffer.byteLength(saved.bytes),
    level:save.level,position:save.position,health:save.game.state.health};
  await page.reload();
  await waitForMenu();
  // Reload invokes the game's normal beforeunload autosave. It can update
  // timestamps/audio state, so verify persisted gameplay rather than raw bytes
  // across that autosave; byte stability is checked around loadSave below.
  const persistedBytes=await page.evaluate(key=>localStorage.getItem(key),saved.key);
  const persisted=JSON.parse(persistedBytes);
  assert.equal(persisted.level,save.level);
  assert.deepEqual(persisted.position,save.position);
  assert.deepEqual(persisted.game.state,save.game.state);
  report.persistedAfterDocumentReload={
    sha256:sha256(persistedBytes),bytes:Buffer.byteLength(persistedBytes),
    beforeUnloadAutosaveChangedBytes:persistedBytes!==saved.bytes,
    level:persisted.level,position:persisted.position,health:persisted.game.state.health
  };
  assert.equal(await page.locator('#continue').isVisible(),true);
  report.reload = await page.evaluate(async key => {
    const game=window.__redcat, before=localStorage.getItem(key);
    const loaded=await game.loadSave();
    const restored={loaded,mode:game.mode,level:game.world?.id,
      position:[...(game.world?.player.position || [])],health:game.gameplay?.state.health,
      settleType:typeof game.world?.actorResidency?.settle,
      scriptError:game.gameplay?.scripts.vm.lastError ?? null,
      fatalVisible:!document.getElementById('fatal').hidden,
      savedBytesUnchangedBeforePause:localStorage.getItem(key)===before};
    game.pause();
    return {...restored,modeAfterPause:game.mode};
  },saved.key);
  assertHealthy(report.reload);
  assert.equal(report.reload.loaded,true);
  assert.equal(report.reload.mode,'playing');
  assert.equal(report.reload.modeAfterPause,'paused');
  assert.equal(report.reload.settleType,'function');
  assert.equal(report.reload.savedBytesUnchangedBeforePause,true);
  assert.deepEqual(report.reload.position,save.position);
  assert.equal(report.reload.health,save.game.state.health);
  await page.screenshot({path:path.join(run,'reloaded-save-paused.png')});
  report.checks.push('After document reload, Continue is available and the saved first-level position and health restore; saved bytes stay unchanged before normal pause autosave.');

  // Resource Timing omits this application's custom redcat: protocol. The
  // Playwright network events span the document reload and record its graph.
  report.moduleURLs = [...new Set(report.moduleRequests)].sort();
  assert.ok(report.moduleURLs.length>100);
  for (const url of report.moduleURLs) assert.equal(new URL(url).searchParams.get('v'),report.revision,url);
  report.finalFatal = await fatal();
  assert.equal(report.finalFatal.visible,false,report.finalFatal.text);
  assert.deepEqual(report.pageErrors,[]);
  assert.deepEqual(report.badResponses,[]);
  report.checks.push('Runtime module requests all carry the current revision; no page exceptions, fatal overlay or failed HTTP status responses.');
}

try {
  await Promise.race([
    check(),
    new Promise((_,reject)=>{timeout=setTimeout(()=>reject(new Error('Package smoke exceeded 240 seconds.')),240000);})
  ]);
  report.success=true;
} catch(error) {
  report.error=String(error.stack || error);
  report.fatal=await fatal();
  if(page)await page.screenshot({path:path.join(run,'failure.png')}).catch(()=>{});
  process.exitCode=1;
} finally {
  clearTimeout(timeout);
  if(app)await app.close().catch(error=>{report.closeError=String(error);});
  report.finished=new Date().toISOString();
  await writeFile(path.join(run,'report.json'),JSON.stringify(report,null,2)+'\n');
  await writeFile(path.join(output,'smoke-report.json'),JSON.stringify(report,null,2)+'\n');
  console.log(JSON.stringify({success:report.success,scope:report.scope,run,checks:report.checks,error:report.error},null,2));
}
