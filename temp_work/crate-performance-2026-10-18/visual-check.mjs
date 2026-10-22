import {_electron as electron} from 'playwright';
import {readFile,writeFile,mkdir} from 'node:fs/promises';
import path from 'node:path';
const root='temp_work/crate-performance-2026-10-18',label=process.argv[2],out=path.resolve(root,label),snapshot=process.argv.includes('snapshot');
await mkdir(out,{recursive:true});const seed=JSON.parse(await readFile(root+'/local-storage.json')),save=JSON.parse(await readFile(root+'/saved-scene.json'));
for(const object of save.game.objects)if(/^AdamAnyActor6[1-7]$/.test(object.id)){object.enabled=true;object.health=1;delete object.propDamage;}
let app;const result={errors:[],frames:[]};
try{
 app=await electron.launch({args:['.','--ozone-platform=wayland',`--user-data-dir=${out}/profile`,'--mute-audio'],cwd:process.cwd(),env:{...process.env,TMPDIR:root+'/scratch',REDCAT_VSYNC:'0'}});
 const page=await app.firstWindow();page.on('pageerror',e=>result.errors.push(e.stack));await page.waitForFunction(()=>window.__redcat);
 await page.evaluate(storage=>{localStorage.clear();for(const[k,v]of Object.entries(storage))localStorage.setItem(k,v);},seed.storage);
 if(snapshot){const html=await readFile('index.html','utf8');await writeFile(root+'/before-entry.html',html.replace('<head>','<head><base href="redcat://game/">').replace('src="src/main.js"','src="temp_work/crate-performance-2026-10-18/before/src/main.js"'));}
 await page.goto(snapshot?'redcat://game/'+root+'/before-entry.html?skipIntro':'redcat://game/index.html?skipIntro');await page.waitForFunction(()=>window.__redcat&&window.__redcat.mode==='menu');
 await page.evaluate(async save=>{const a=window.__redcat;await a.startLevel(3,save);a.pause();document.getElementById('pause').hidden=true;window.fixedFrame=0;},save);
 result.source={snapshot,url:page.url(),pooled:await page.evaluate(()=>!!window.__redcat.world.effects.destructibles.renderPool)};
 for(const frame of [0,30,60,120,240,400,700,1000,1300]){
  result.frames.push(await page.evaluate(frame=>{const a=window.__redcat,w=a.world,g=a.gameplay;while(window.fixedFrame<frame){w.update(.005,{attack:window.fixedFrame<1000});window.fixedFrame++;}w.render();return{frame,time:g.time,crates:g.objects.filter(o=>/^AdamAnyActor6[1-7]$/.test(o.id)).map(o=>({id:o.id,health:o.health,enabled:o.enabled,propDamage:o.propDamage})),particles:w.effects.destructibles.particles.map(p=>({actor:p.actor,position:p.position,velocity:p.velocity,orientation:p.orientation,age:p.age,life:p.life,opacity:p.opacity,contacts:p.contacts})),draws:w.renderer.info.render.calls,glError:w.renderer.getContext().getError()};},frame));
  await page.screenshot({path:out+`/frame-${frame}.png`});
 }
 console.log(JSON.stringify({label,frames:result.frames.map(f=>({...f,particles:f.particles.length}))},null,2));
}finally{await writeFile(out+'/states.json',JSON.stringify(result,null,2)+'\n');await app?.close();}
