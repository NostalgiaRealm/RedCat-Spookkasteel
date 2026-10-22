const {chromium}=require('playwright');
const fs=require('node:fs/promises');
const {spawn}=require('node:child_process');
const http=require('node:http');
const out=process.cwd()+'/temp_work/caves-full-input-2026-10-18/runtime-attempt4';
(async()=>{
 await fs.mkdir(out,{recursive:true});const env={...process.env,TMPDIR:'temp_work/t'};
 const server=spawn(process.execPath,['tools/serve.mjs'],{env:{...env,PORT:'4564'},stdio:['ignore','pipe','inherit']});
 await new Promise(r=>server.stdout.once('data',r));
 const browser=await chromium.launchPersistentContext(out+'/profile',{executablePath:'/usr/bin/google-chrome',headless:true,env,viewport:{width:960,height:540},args:['--use-angle=gl','--autoplay-policy=no-user-gesture-required','--crash-dumps-dir='+out]});
 const page=await browser.newPage();page.on('pageerror',e=>fs.appendFile(out+'/errors.log',e.stack+'\n'));
 await page.goto('http://127.0.0.1:4564/?skipIntro');await page.waitForFunction(()=>window.__redcat,null,{polling:100});
 let busy=false;
 const api=http.createServer(async(req,res)=>{if(busy){res.writeHead(409);return res.end('Busy');}busy=true;try{let text='';for await(const c of req)text+=c;const {code}=JSON.parse(text);await fs.appendFile(out+'/commands.jsonl',JSON.stringify({time:Date.now(),code})+'\n');const result=await eval('(async()=>{'+code+'})()');res.setHeader('Content-Type','application/json');res.end(JSON.stringify({result}));}catch(e){res.end(JSON.stringify({error:e.stack}));}finally{busy=false;}}).listen(4565,'127.0.0.1',()=>console.log('READY '+out));
 process.on('SIGTERM',async()=>{api.close();await browser.close();server.kill();process.exit(0);});
})();
