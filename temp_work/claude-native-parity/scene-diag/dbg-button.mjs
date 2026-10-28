// Debug: does the Castle push button emit its sound after host ticks?
import {chromium} from 'playwright';
import {spawn} from 'node:child_process';
import {unlockChapters} from '../../../tests/support/scene-progress.mjs';
import {sceneTemp} from '../../../tests/support/scene-output.mjs';
process.env.TMPDIR=sceneTemp();
const server=spawn(process.execPath,['tools/serve.mjs'],{env:{...process.env,PORT:'4597'},stdio:['ignore','pipe','inherit']});
await new Promise(r=>server.stdout.once('data',r));
const browser=await chromium.launch({executablePath:process.env.CHROME_PATH,headless:true,args:['--use-angle=gl','--autoplay-policy=no-user-gesture-required']});
try{
  const page=await browser.newPage();await unlockChapters(page);
  await page.goto('http://127.0.0.1:4597/?skipIntro');await page.waitForFunction(()=>window.__redcat);
  console.log(JSON.stringify(await page.evaluate(async()=>{
    const app=window.__redcat;await app.startLevel(1);app.pause();
    const game=app.gameplay,host=game.scripts,events=[];const prev=game.onEvent;game.onEvent=e=>{events.push(e.type);prev(e);};
    for(const p of host.players.values())p.stop();host.cutscene=false;
    const button=game.objects.find(o=>o.kind==='button'&&o.entity.ButtonType==='1');button.enabled=true;button.switchedOn=false;button.switchCount=0;
    game.switchButton(button,true);const out=[{phase:button.buttonPhase,pending:button.pendingButtonSwitch,hasMotion:button.hasMotion,player:!!host.players.get(button.id)}];
    for(let i=0;i<4;i++){host.update(.05);out.push({phase:button.buttonPhase,pending:button.pendingButtonSwitch,on:button.switchedOn});}
    return {out,events:events.filter(t=>t!=='scriptMusic'),id:button.id,max:button.entity.MaxSwitchTimes};
  })));
}finally{await browser.close();server.kill();}
