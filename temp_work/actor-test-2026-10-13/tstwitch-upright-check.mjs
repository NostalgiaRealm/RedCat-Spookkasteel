import assert from 'node:assert/strict';
import {createServer} from 'node:http';
import {readFile,mkdir,writeFile} from 'node:fs/promises';
import {fileURLToPath} from 'node:url';
import path from 'node:path';
import {createRequire} from 'node:module';

const require=createRequire(import.meta.url);
const {configureEnvironment}=require('../../RC_ACTOR_TEST/electron/runtime.cjs');
const runtime=configureEnvironment();
const {chromium}=await import('playwright');
const root=fileURLToPath(new URL('../../RC_ACTOR_TEST/',import.meta.url));
const evidence=path.resolve(root,'../temp_work/actor-test-2026-10-13/verification');
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
  await page.waitForFunction(()=>window.__actorTest,{},{timeout:30000});
  await page.locator('#model').selectOption('11');
  await page.locator('#visit').click();
  const pose=await page.evaluate(async()=>{
    const THREE=await import('./vendor/three.module.js');
    const e=window.__actorTest.world.exhibits[11],mesh=e.root.userData.mesh,data=e.root.userData.template.data;
    mesh.updateWorldMatrix(true,false);
    const centroid=name=>{
      const index=data.bones.findIndex(b=>b.name===name),sum=new THREE.Vector3();let count=0;
      for(let i=0;i<data.joints.length;i++)if(data.joints[i]===index){sum.add(new THREE.Vector3().fromArray(data.positions,i*3));count++;}
      return sum.divideScalar(count).applyMatrix4(mesh.matrixWorld).toArray();
    };
    const box=new THREE.Box3().setFromObject(e.root);
    return {head:centroid('WITCHBIP01 HEAD'),foot:centroid('WITCHBIP01 L FOOT'),mouth:centroid('MOUTHBONE'),floor:box.min.y,label:e.labelSprite.position.y,top:box.max.y,player:[...window.__actorTest.world.player.position]};
  });
  assert.ok(pose.head[1]>pose.foot[1]+15,'head above feet');
  assert.ok(pose.mouth[2]>pose.head[2]+4,'face towards +Z approach aisle');
  assert.ok(Math.abs(pose.floor-.1)<.001,'upright bounds settle on floor');
  assert.ok(pose.label>pose.top+15,'label clears upright model');
  await page.keyboard.down('KeyW');await page.waitForTimeout(180);await page.keyboard.up('KeyW');
  assert.ok(await page.evaluate(before=>window.__actorTest.world.player.position[2]<before[2]-10,pose.player),'RedCat can approach witch');
  await page.keyboard.down('KeyA');await page.waitForTimeout(180);await page.keyboard.up('KeyA');
  await page.screenshot({path:path.join(evidence,'tstwitch-upright.png')});
  assert.deepEqual(errors,[]);assert.deepEqual(missing,[]);assert.deepEqual(consoleErrors,[]);
  await writeFile(path.join(evidence,'tstwitch-upright.json'),JSON.stringify({passed:true,pose},null,2)+'\n');
  console.log('PASS upright witch, face direction, floor placement, label and walking approach',pose);
}catch(error){
  console.error({errors,missing,consoleErrors});
  if(browser){const page=browser.pages().at(-1);await page.screenshot({path:path.join(evidence,'failure.png')}).catch(()=>{});console.error(await page.locator('#overlay-message').textContent().catch(()=>''));}
  throw error;
}finally{await browser?.close();await new Promise(resolve=>server.close(resolve));}
