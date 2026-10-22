import {_electron as electron} from 'playwright';
import {readFile,writeFile,mkdir} from 'node:fs/promises';
import path from 'node:path';
const base='temp_work/crate-performance-2026-10-18',out=path.resolve(base,'debris-lighting-dump');await mkdir(out,{recursive:true});
const seed=JSON.parse(await readFile(base+'/local-storage.json')),save=JSON.parse(await readFile(base+'/saved-scene.json'));
for(const object of save.game.objects)if(/^AdamAnyActor6[1-7]$/.test(object.id)){object.enabled=true;object.health=1;delete object.propDamage;}
const report={};
for(const snapshot of [true,false]){
 let app;const key=snapshot?'before':'after';
 try{
  app=await electron.launch({args:['.','--ozone-platform=wayland',`--user-data-dir=${out}/${key}-profile`,'--mute-audio'],cwd:process.cwd(),env:{...process.env,TMPDIR:base+'/scratch',REDCAT_VSYNC:'0'}});
  const page=await app.firstWindow();await page.waitForFunction(()=>window.__redcat);
  await page.evaluate(storage=>{localStorage.clear();for(const [key,value]of Object.entries(storage))localStorage.setItem(key,value);},seed.storage);
  await page.goto(snapshot?`redcat://game/${base}/before-entry.html?skipIntro`:'redcat://game/index.html?skipIntro');await page.waitForFunction(()=>window.__redcat?.mode==='menu');
  await page.evaluate(async save=>{const a=window.__redcat;await a.startLevel(3,save);a.pause();},save);
  report[key]=await page.evaluate(()=>{
   const {world:w,gameplay:g}=window.__redcat;
   for(let frame=0;frame<240;frame++)w.update(.005,{attack:true});w.render();
   const vector=value=>value?.toArray?value.toArray():Array.isArray(value)?value.map(vector):value;
   return{pooled:!!w.effects.destructibles.renderPool,time:g.time,fragments:w.effects.destructibles.particles.map(p=>{
    const mesh=p.mesh.children[0],state=mesh.userData.actorLighting,position=[mesh.matrixWorld.elements[12],mesh.matrixWorld.elements[13],mesh.matrixWorld.elements[14]],floor=w.actorFloorLighting?.locate(position,state),sun=w.actorWorldLighting.cache.get(state);
    return{actor:p.actor,position:p.position,orientation:p.orientation,meshMatrix:mesh.matrix.elements,worldMatrix:mesh.matrixWorld.elements,
     bounds:state.bounds?{min:state.bounds.min.toArray(),max:state.bounds.max.toArray()}:null,geometryBounds:{min:mesh.geometry.boundingBox.min.toArray(),max:mesh.geometry.boundingBox.max.toArray()},
     uniforms:Object.fromEntries(Object.entries(state.uniforms).map(([key,u])=>[key,vector(u.value)])),settings:state.settings,
     floor:floor?{index:floor.index,model:floor.model,luxel:floor.luxel,base:floor.base,point:floor.point}:null,
     sun:sun?{x:sun.x,y:sun.y,z:sun.z,height:sun.height,value:sun.value}:null,
     materials:(Array.isArray(mesh.material)?mesh.material:[mesh.material]).map(m=>({side:m.side,transparent:m.transparent,opacity:m.opacity,depthWrite:m.depthWrite,alphaTest:m.alphaTest,color:m.color.toArray()}))};
   })};
  });
 }finally{await app?.close();}
}
await writeFile(out+'/report.json',JSON.stringify(report,null,2)+'\n');
const diffs=[];for(let i=0;i<report.before.fragments.length;i++){const a=report.before.fragments[i],b=report.after.fragments[i];for(const key of Object.keys(a))if(JSON.stringify(a[key])!==JSON.stringify(b[key]))diffs.push({index:i,actor:a.actor,key,before:a[key],after:b[key]});}
await writeFile(out+'/differences.json',JSON.stringify(diffs,null,2)+'\n');console.log(JSON.stringify(diffs.slice(0,12),null,2));
