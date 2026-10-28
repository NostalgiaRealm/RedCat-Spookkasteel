import assert from 'node:assert/strict';
import {createServer} from 'node:http';
import {readFile,mkdir,writeFile} from 'node:fs/promises';
import {resolve,relative,extname} from 'node:path';
import {chromium} from 'playwright';

import {sceneOutput,sceneTemp} from './support/scene-output.mjs';
// Run with retained pre-change UI modules for a same-browser differential check.
// No game profile, save, native game or release package is opened or changed.
const root=resolve('.'),evidence=resolve(sceneOutput('temp_work/efficiency-2026-10-26'));
const baseline=resolve(process.env.UI_EFFICIENCY_BASELINE||"temp_work/efficiency-2026-10-26/ui-baseline");
const output=resolve(evidence,`ui-scenes-${Date.now()}`);
await mkdir(output,{recursive:true});process.env.TMPDIR=sceneTemp();
const types={'.js':'text/javascript','.json':'application/json','.css':'text/css','.png':'image/png','.woff2':'font/woff2'};
const html='<!doctype html><meta charset="utf-8"><link rel="stylesheet" href="/src/style.css"><body></body>';
const server=createServer(async(req,res)=>{
  try{
    const url=new URL(req.url,'http://localhost');
    if(url.pathname==='/'){res.setHeader('Content-Type','text/html');res.end(html);return;}
    const before=url.pathname.match(/^\/source\/__before-(debriefing|gamepad-menu)\.js$/);
    const path=before?resolve(baseline,`${before[1]}.js`):resolve(root,`.${decodeURIComponent(url.pathname)}`);
    if(!path.startsWith(root+'/'))throw Error('outside fixture');
    const bytes=await readFile(path);res.setHeader('Content-Type',types[extname(path)]||'application/octet-stream');res.end(bytes);
  }catch{res.statusCode=404;res.end('Not found');}
});
await new Promise(resolve=>server.listen(0,'127.0.0.1',resolve));
const report={errors:[],controller:null,scoreboards:[]};let browser;
try{
  browser=await chromium.launch({executablePath:process.env.CHROME_PATH||'/usr/bin/google-chrome',headless:true});
  const page=await browser.newPage({viewport:{width:1280,height:720}});
  page.on('pageerror',error=>report.errors.push(String(error)));
  await page.goto(`http://127.0.0.1:${server.address().port}/`);await page.evaluate(()=>document.fonts.ready);
  report.controller=await page.evaluate(async()=>{
    const {GamepadMenu:Before}=await import('/source/__before-gamepad-menu.js');
    const {GamepadMenu:After}=await import('/source/gamepad-menu.js');
    const run=Menu=>{
      document.body.innerHTML='<main id="scope"><button id="first">First</button><button disabled>Disabled</button><div hidden><button>Hidden</button></div><button style="visibility:hidden">Invisible</button><select id="choice"><option>A</option><option disabled>B</option><option>C</option></select><input id="range" type="range" min="0" max="1" step=".1" value=".5"><input id="toggle" type="checkbox"><a id="link" href="#">Link</a><div id="extras"></div></main><button id="outside">Outside</button><dialog id="modal"><button autofocus id="cancel">Cancel</button><button id="confirm">Confirm</button></dialog>';
      for(let i=0;i<40;i++){const holder=document.createElement('div');holder.innerHTML=`<button id="extra-${i}">Extra ${i}</button>`;document.getElementById('extras').append(holder);}
      const menu=new Menu(),root=document.getElementById('scope'),events=[];
      root.addEventListener('click',event=>events.push(['click',event.target.id]));
      root.addEventListener('change',event=>events.push(['change',event.target.id,event.target.value,event.target.checked]));
      const state=label=>events.push([label,document.activeElement.id,menu.focused?.id??null]);
      menu.update(root,{confirm:true});state('opened');
      let queries=0,styles=0;const originalQuery=root.querySelectorAll,originalStyle=window.getComputedStyle;
      root.querySelectorAll=function(...args){queries++;return originalQuery.apply(this,args);};
      window.getComputedStyle=function(...args){styles++;return originalStyle.apply(this,args);};
      for(let i=0;i<600;i++)menu.update(root,{});
      root.querySelectorAll=originalQuery;window.getComputedStyle=originalStyle;
      const counts={queries,styles};state('neutral');
      menu.focused.classList.remove('gamepad-focus');menu.update(root,{});
      events.push(['highlight-restored',menu.focused.classList.contains('gamepad-focus')]);
      menu.update(root,{confirm:true});menu.update(root,{down:true});state('skip-hidden');
      menu.update(root,{right:true});menu.update(root,{confirm:true});
      menu.update(root,{down:true});menu.update(root,{right:true});
      menu.update(root,{down:true});menu.update(root,{confirm:true});
      document.getElementById('extra-2').focus();menu.update(root,{});state('external-focus');
      document.getElementById('extras').style.display='none';menu.update(root,{});state('hidden-ancestor');
      document.getElementById('first').disabled=true;menu.update(root,{});state('disabled');
      menu.focus(document.getElementById('link'));document.getElementById('link').removeAttribute('href');menu.update(root,{});state('not-control');
      menu.focus(document.getElementById('choice'));document.getElementById('choice').remove();menu.update(root,{});state('removed');
      document.getElementById('range').disabled=true;document.getElementById('toggle').disabled=true;menu.update(root,{});state('all-disabled');
      document.getElementById('extras').style.display='';menu.update(root,{});state('newly-available');
      const first=document.createElement('button');first.id='inserted';first.textContent='Inserted';root.prepend(first);menu.update(root,{up:true});state('inserted-before-action');
      const modal=document.getElementById('modal');modal.showModal();menu.update(modal,{confirm:true});state('modal-open');menu.update(modal,{down:true});state('modal-navigation');
      modal.close();menu.reset();state('reset');root.remove();menu.update(root,{});state('detached');
      return {counts,events};
    };
    return {before:run(Before),after:run(After)};
  });
  assert.deepEqual(report.controller.after.events,report.controller.before.events);
  assert.equal(report.controller.before.counts.queries,600);assert.equal(report.controller.after.counts.queries,0);
  assert.ok(report.controller.after.counts.styles<report.controller.before.counts.styles/10);
  for(const viewport of [{width:1280,height:720},{width:390,height:844},{width:844,height:390}]){
    await page.setViewportSize(viewport);
    const result=await page.evaluate(async()=>{
      const {OriginalDebriefing:Before}=await import('/source/__before-debriefing.js');
      const {OriginalDebriefing:After}=await import('/source/debriefing.js');
      const create=async Type=>{
        document.body.innerHTML='<section id="debriefing" hidden><div class="debriefing-frame"><canvas></canvas><p class="accessible-hud" role="status"></p><button type="button"></button></div></section>';
        const d=new Type(document.getElementById('debriefing'),()=>{});await d.ready;
        const summary={level:'lvl00a',rows:['Potion','Money','Enemy','Secret'].map(kind=>({kind,found:12,total:15,bonus:180})),oldScore:1234,bonus:720,newScore:1954};
        d.show(summary);return d;
      };
      const capture=async Type=>{
        const d=await create(Type),images=[];
        for(const elapsed of [0,.05,.2,.5,1,2]){d.elapsed=elapsed;d.render();images.push(d.canvas.toDataURL());}
        const c=d.canvas.getContext('2d'),counts={clear:0,text:0,draw:0};
        for(const [method,key] of [['clearRect','clear'],['fillText','text'],['drawImage','draw']]){const original=c[method];c[method]=function(...args){counts[key]++;return original.apply(this,args);};}
        for(let i=0;i<600;i++)d.update(1/120);
        const stable={...counts};
        images.push(d.canvas.toDataURL());
        d.summary.rows[0].found++;d.render();images.push(d.canvas.toDataURL());
        return {d,images,counts,stable};
      };
      const before=await capture(Before),after=await capture(After);
      const same=before.images.map((image,i)=>image===after.images[i]);
      // Explicitly invalidate while already stable: the fresh draw must match.
      const pixels=after.d.canvas.toDataURL();after.d.invalidate();after.d.render();
      const restored=after.d.canvas.toDataURL()===pixels;
      return {same,restored,before:before.counts,after:after.counts,stableBefore:before.stable,stableAfter:after.stable};
    });
    assert.ok(result.same.every(Boolean));assert.equal(result.restored,true);
    assert.equal(result.before.clear,601);assert.equal(result.after.clear,2);
    assert.deepEqual(result.stableAfter,{clear:0,text:0,draw:0});
    report.scoreboards.push({viewport,...result});
    await page.screenshot({path:resolve(output,`scoreboard-${viewport.width}x${viewport.height}.png`)});
  }
  assert.deepEqual(report.errors,[]);report.passed=true;
  console.log('PASS controller transition equivalence, 600-frame work counts and 24 scoreboard pixel comparisons');
}catch(error){report.failure=String(error.stack||error);throw error;}
finally{await writeFile(resolve(output,'report.json'),JSON.stringify(report,null,2)+'\n');await browser?.close();await new Promise(resolve=>server.close(resolve));console.log(output);}
