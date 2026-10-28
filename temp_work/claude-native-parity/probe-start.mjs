// Probe why startLevel leaves gameplay null in a fresh isolated browser profile.
import {chromium} from 'playwright';
import {spawn} from 'node:child_process';
const project=process.argv[2]||process.cwd(),level=Number(process.argv[3]||1);
const server=spawn(process.execPath,['tools/serve.mjs'],{cwd:project,env:{...process.env,PORT:'4399'},stdio:['ignore','pipe','inherit']});
await new Promise(r=>server.stdout.once('data',r));
const browser=await chromium.launch({executablePath:process.env.CHROME_PATH,headless:true,args:['--use-angle=gl']});
try{
  const page=await browser.newPage(),logs=[];
  page.on('console',m=>logs.push(m.type()+': '+m.text()));page.on('pageerror',e=>logs.push('pageerror: '+e.stack));
  await page.goto('http://127.0.0.1:4399/?skipIntro');await page.waitForFunction(()=>window.__redcat);
  const r=await page.evaluate(async level=>{const app=window.__redcat;let result;try{result=await app.startLevel(level);}catch(e){result='threw '+e.stack;}
    return {result:String(result),gameplay:!!app.gameplay,toast:document.getElementById('toast')?.textContent};},level);
  console.log(JSON.stringify(r,null,1));console.log(logs.slice(-15).join('\n'));
}finally{await browser.close();server.kill();}
