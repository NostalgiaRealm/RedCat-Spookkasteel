import {_electron as electron} from 'playwright';
import assert from 'node:assert/strict';
import fs from 'node:fs/promises';
import path from 'node:path';
const output=path.resolve('temp_work/release-1.0.0-2026-10-20');
const software=process.argv.includes('--software');
const name=software?'linux-smoke-swiftshader':'linux-smoke-default-diagnostic';
const args=['--ozone-platform=x11',`--user-data-dir=${output}/profile-${name}`];
if(software)args.push('--use-angle=swiftshader','--enable-unsafe-swiftshader');
const report={args,software,started:new Date().toISOString(),version:null,about:null,levels:[],pageErrors:[],console:[],stderr:[],success:false};
await fs.mkdir(output,{recursive:true});
let app,page;
const fatal=async()=>page?await page.locator('#fatal-message').innerText().catch(()=>null):null;
try{
 app=await electron.launch({executablePath:path.resolve('dist/linux-unpacked/redcat-spookkasteel'),args,timeout:45000});
 app.process().stderr?.on('data',chunk=>report.stderr.push(String(chunk)));
 page=await app.firstWindow();
 page.on('pageerror',e=>report.pageErrors.push(e.message));
 page.on('console',m=>report.console.push({type:m.type(),text:m.text()}));
 await page.waitForFunction(()=>window.__redcat,{timeout:45000});
 report.version=await app.evaluate(({app})=>app.getVersion());assert.equal(report.version,'1.0.0');
 await page.waitForTimeout(1000);
 report.initialMode=await page.evaluate(()=>window.__redcat.mode);
 report.initialFatal=await fatal();
 console.log(JSON.stringify({name,initialMode:report.initialMode,initialFatal:report.initialFatal}));
 if(report.initialFatal)throw new Error(`Startup fatal: ${report.initialFatal}`);
 if(await page.locator('#intro').isVisible())await page.locator('#skip-intro').click();
 await page.locator('#open-about').click({timeout:5000});
 report.about=await page.locator('#about').innerText();assert.match(report.about,/Versie 1\.0/);
 await page.screenshot({path:`${output}/${name}-about.png`});
 await page.locator('#close-about').click();
 report.gl=await page.evaluate(()=>{let g=document.getElementById('game').getContext('webgl2');let d=g?.getExtension('WEBGL_debug_renderer_info');return g?{vendor:g.getParameter(g.VENDOR),renderer:g.getParameter(g.RENDERER),unmaskedRenderer:d?g.getParameter(d.UNMASKED_RENDERER_WEBGL):null}:null;});
 for(const level of [0,1,2,3,4]){
  const begin=Date.now();
  const started=await page.evaluate(async level=>await window.__redcat.startLevel(level),level);
  if(started===false)throw new Error(`level ${level} start returned false; ${await fatal()}`);
  await page.waitForFunction(()=>['playing','error'].includes(window.__redcat.mode),{timeout:120000});
  assert.equal(await page.evaluate(()=>window.__redcat.mode),'playing',await fatal());
  await page.waitForTimeout(1000);
  const info=await page.evaluate(()=>({mode:window.__redcat.mode,level:window.__redcat.world?.level?.id,health:window.__redcat.gameplay?.state?.health,canvas:{width:document.getElementById('game').width,height:document.getElementById('game').height}}));
  assert.equal(info.mode,'playing',await fatal());
  await page.screenshot({path:`${output}/${name}-level-${level}.png`});
  report.levels.push({index:level,elapsedMs:Date.now()-begin,...info});
  console.log(JSON.stringify(report.levels.at(-1)));
 }
 assert.deepEqual(report.pageErrors,[]);report.success=true;
}catch(e){report.error=String(e.stack||e);report.fatal=await fatal();if(page)await page.screenshot({path:`${output}/${name}-failure.png`}).catch(()=>{});console.error(report.error);console.error('Fatal:',report.fatal);console.error('Console:',JSON.stringify(report.console));process.exitCode=1;}
finally{report.finished=new Date().toISOString();if(app)await app.close();await fs.writeFile(`${output}/${name}.json`,JSON.stringify(report,null,2)+'\n');}
