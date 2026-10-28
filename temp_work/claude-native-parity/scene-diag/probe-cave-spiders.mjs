// Set A probe: where the Caves' red spiders are and whether a floor lies below them.
import {spawn} from 'node:child_process';
import {chromium} from 'playwright';
import {sceneTemp} from '../../../tests/support/scene-output.mjs';
import {unlockChapters} from '../../../tests/support/scene-progress.mjs';
process.env.TMPDIR=sceneTemp();
const server=spawn(process.execPath,['tools/serve.mjs'],{env:{...process.env,PORT:'4434'},stdio:['ignore','pipe','inherit']});
await new Promise(r=>server.stdout.once('data',r));let browser;
try{
  browser=await chromium.launch({executablePath:process.env.CHROME_PATH,headless:true,args:['--use-angle=gl']});
  const page=await browser.newPage();await unlockChapters(page);
  await page.goto('http://127.0.0.1:4434/?skipIntro');await page.waitForFunction(()=>window.__redcat);
  console.log(JSON.stringify(await page.evaluate(async()=>{const app=window.__redcat;await app.startLevel(3);app.pause();const w=app.world,g=app.gameplay;
    return g.objects.filter(o=>o.id==='MovingEnemy1').map(o=>{return {ambush:o.ambush,pos:o.position};const t=w.collider.trace([o.position[0],o.position[1]+64,o.position[2]],[o.position[0],o.position[1]-256,o.position[2]],o.collisionMins,o.collisionMaxs,w.physicalModels);
      return {id:o.id,file:o.actorFile,variant:o.variant,ranged:o.ranged,pos:o.position.map(Math.round),phase:o.ambush?.phase,start:o.entity.StartPoint,solid:t.startSolid,frac:+t.fraction.toFixed(2),end:t.end.map(Math.round)};});}),null,0));
}finally{await browser?.close();server.kill();}
