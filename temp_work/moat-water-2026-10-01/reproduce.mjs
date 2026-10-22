import {chromium} from 'playwright';
import {spawn} from 'node:child_process';
import {readFile,writeFile} from 'node:fs/promises';
import {resolve} from 'node:path';
process.env.TMPDIR='current_work';
const root=resolve('current_work/moat-water-2026-10-01'),label=process.argv[2]||'before';
const save=JSON.parse(await readFile(resolve(root,'live-autosave.json'),'utf8'));
const server=spawn(process.execPath,['tools/serve.mjs'],{env:{...process.env,PORT:'4318'},stdio:['ignore','pipe','inherit']});
await new Promise((r,j)=>{server.stdout.once('data',r);server.once('error',j);});
let context;
try{
 context=await chromium.launchPersistentContext(resolve(root,`profile-${label}`),{executablePath:'/usr/bin/google-chrome',headless:true,args:['--use-angle=gl'],viewport:{width:1280,height:720}});
 const page=context.pages()[0],errors=[];
 page.on('pageerror',e=>errors.push(String(e)));
 await page.addInitScript(s=>{localStorage.setItem('redcat.save.v1',JSON.stringify(s));localStorage.setItem('redcat.settings.v1',JSON.stringify({autoIntro:false,volume:0}));},save);
 await page.goto('http://127.0.0.1:4318/?skipIntro');await page.waitForFunction(()=>window.__redcat);
 const report=await page.evaluate(async()=>{
  const a=window.__redcat;await a.loadSave();a.pause();document.querySelector('#pause').hidden=true;document.querySelector('#toast').hidden=true;
  const w=a.world;w.syncModels();w.syncActors(0);w.updateCamera(1,true);await w.geometryStream.settle();w.render();
  return {position:w.player.position,camera:w.camera.position.toArray(),state:a.gameplay.modelState(135),groups:w.level.groups.filter(g=>g.model===135),chunks:w.geometryStream.chunks.filter(c=>c.group.model===135).map(c=>({visible:c.mesh.visible,resident:c.resident,inView:c.inView,layer:c.mesh.layers.mask,map:!!c.material.material.map})),trigger:a.gameplay.objects.filter(o=>o.modelIndex===135).map(o=>({id:o.id,kind:o.kind,enabled:o.enabled,entity:o.entity}))};
 });
 await page.screenshot({path:resolve(root,`${label}.png`)});
 await writeFile(resolve(root,`${label}.json`),JSON.stringify({...report,errors},null,2));console.log(JSON.stringify(report));
}finally{await context?.close();server.kill();}
