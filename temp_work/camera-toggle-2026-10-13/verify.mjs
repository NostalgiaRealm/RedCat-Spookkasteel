import assert from 'node:assert/strict';
import {createServer} from 'node:http';
import {readFile,mkdir,writeFile} from 'node:fs/promises';
import {fileURLToPath} from 'node:url';
import path from 'node:path';
import {createRequire} from 'node:module';

const require=createRequire(import.meta.url);
const lab=process.argv[2];
if(!['RC_ACTOR_TEST','RC_COIN_TEST'].includes(lab))throw new Error('Choose a test app');
const diagnostic=lab==='RC_ACTOR_TEST'?'__actorTest':'__coinTest';
const {configureEnvironment}=require('../../'+lab+'/electron/runtime.cjs');
const runtime=configureEnvironment();
const {chromium}=await import('playwright');
const root=fileURLToPath(new URL('../../'+lab+'/',import.meta.url));
const evidence=path.resolve(root,'../temp_work/camera-toggle-2026-10-13/'+lab);
await mkdir(evidence,{recursive:true});
// Linux Unix sockets cannot use the project's full, long pathname. This
// process-relative alias still stores every file in the requested temp_work.
process.chdir(root);
await mkdir(path.resolve(root,'../temp_work/actor-browser'),{recursive:true});
const browserTemp=process.platform==='linux'?'/proc/self/cwd/../temp_work/actor-browser':runtime.tmp;
const mime={'.html':'text/html','.js':'text/javascript','.css':'text/css','.json':'application/json','.png':'image/png','.wav':'audio/wav'};
const server=createServer(async(req,res)=>{
  try{
    const url=new URL(req.url,'http://localhost');
    const file=path.resolve(root,'.'+decodeURIComponent(url.pathname==='/'?'/index.html':url.pathname));
    if(!file.startsWith(root)){res.writeHead(403).end();return;}
    const data=await readFile(file);res.writeHead(200,{'Content-Type':mime[path.extname(file)]||'application/octet-stream'});res.end(data);
  }catch{res.writeHead(404).end();}
});
await new Promise(resolve=>server.listen(0,'127.0.0.1',resolve));
let browser;
const errors=[],missing=[],consoleErrors=[];
try{
  browser=await chromium.launchPersistentContext(path.join(evidence,'browser-profile'),{
    executablePath:process.env.CHROME_PATH||'/usr/bin/google-chrome',headless:true,
    viewport:{width:1440,height:900},args:['--use-angle=gl'],
    env:{...process.env,TMPDIR:browserTemp,TMP:browserTemp,TEMP:browserTemp},
  });
  const page=await browser.newPage();
  page.on('pageerror',e=>errors.push(e.stack));
  page.on('console',m=>{if(m.type()==='error')consoleErrors.push(m.text());});
  page.on('response',r=>{if(r.status()>=400)missing.push(r.url());});
  await page.goto(`http://127.0.0.1:${server.address().port}/`);
  await page.waitForFunction(key=>window[key],diagnostic,{timeout:30000});
  const read=()=>page.evaluate(key=>{
    const t=window[key],w=t.world;
    return {mode:w.settings.camera,position:[...w.player.position],camera:w.camera.position.toArray(),visible:w.redcat.visible,paused:t.snapshot().paused};
  },diagnostic);
  await page.locator('#resume').click();
  assert.equal((await read()).mode,'third');
  await page.keyboard.press('KeyV');
  const first=await read();
  assert.equal(first.mode,'first');assert.equal(first.visible,false);
  for(let i=0;i<3;i++)assert.ok(Math.abs(first.camera[i]-first.position[i]-(i===1?51:0))<.001,'native eye position');
  await page.screenshot({path:path.join(evidence,'first-person.png')});
  await page.evaluate(()=>document.body.dispatchEvent(new KeyboardEvent('keydown',{code:'KeyV',repeat:true,bubbles:true})));
  assert.equal((await read()).mode,'first','key repeats do not toggle');
  await page.keyboard.down('KeyW');await page.waitForTimeout(140);await page.keyboard.up('KeyW');
  assert.ok((await read()).position[2]<first.position[2]-10,'first-person movement works');
  await page.keyboard.press('KeyV');
  const third=await read();assert.equal(third.mode,'third');assert.equal(third.visible,true);
  assert.ok(Math.abs(third.camera[2]-third.position[2])>100,'third-person camera behind RedCat');
  await page.keyboard.press('KeyV');
  await page.evaluate(async key=>window[key].reset(),diagnostic);
  assert.equal((await read()).mode,'first','room reset retains chosen camera');
  assert.equal((await read()).visible,false);
  await page.keyboard.press('Escape');assert.equal((await read()).paused,true);
  await page.keyboard.press('KeyV');assert.equal((await read()).mode,'first','pause menu ignores V');
  await page.locator('#resume').click();await page.keyboard.press('KeyV');
  assert.equal((await read()).mode,'third');
  assert.deepEqual(errors,[]);assert.deepEqual(missing,[]);assert.deepEqual(consoleErrors,[]);
  await writeFile(path.join(evidence,'results.json'),JSON.stringify({passed:true,lab,first,third,checks:['V both directions','eye position and player visibility','key-repeat guard','first-person movement','camera mode retained after reset','pause guard']},null,2)+'\n');
  console.log('PASS',lab,'V toggle, native camera/visibility, movement, repeat/pause guards and reset');
}catch(error){
  console.error({errors,missing,consoleErrors});
  if(browser){const page=browser.pages().at(-1);await page.screenshot({path:path.join(evidence,'failure.png')}).catch(()=>{});console.error(await page.locator('#overlay-message').textContent().catch(()=>''));}
  throw error;
}finally{await browser?.close();await new Promise(resolve=>server.close(resolve));}
