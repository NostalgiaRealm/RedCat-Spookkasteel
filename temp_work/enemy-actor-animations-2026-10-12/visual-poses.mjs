import {chromium} from 'playwright';
import {spawn} from 'node:child_process';
import {mkdir,writeFile} from 'node:fs/promises';
import path from 'node:path';
const out=path.resolve(`temp_work/enemy-actor-animations-2026-10-12/visual-${Date.now()}`);
await mkdir(out,{recursive:true});
const env={...process.env,TMPDIR:'temp_work'};
const server=spawn(process.execPath,['tools/serve.mjs'],{env:{...env,PORT:'0'},stdio:['ignore','pipe','inherit']});
const base=await new Promise((resolve,reject)=>{server.stdout.once('data',s=>resolve(s.toString().match(/http:\/\/127.0.0.1:\d+/)[0]));server.once('error',reject);});
let context;
try {
 context=await chromium.launchPersistentContext(path.join(out,'profile'),{executablePath:'/usr/bin/google-chrome',headless:true,env,viewport:{width:1280,height:720},args:['--use-angle=gl','--autoplay-policy=no-user-gesture-required',`--crash-dumps-dir=${out}`]});
 const page=await context.newPage();
 await page.addInitScript(()=>localStorage.setItem('redcat.settings.v1',JSON.stringify({fullscreen:false,volume:0,resolution:'native',autoIntro:false})));
 await page.goto(base+'/?skipIntro');await page.waitForFunction(()=>window.__redcat);
 const result=await page.evaluate(async()=>{
  const THREE=await import('three'),app=window.__redcat;
  document.getElementById('cheat-unlock-levels').click();await app.startLevel(1);app.pause();
  const w=app.world,g=app.gameplay;for(const p of g.scripts.players.values())p.stop();g.scripts.cutscene=false;g.scripts.camera=null;
  const object=g.objects.find(o=>o.enemyType==='knight'),actor=w.actorInstances.get(object.id);
  object.enabled=true;object.visible=true;object.health=object.maxHealth;g.enemyAnimation(object,'idle');w.syncActors(0);
  for(let i=0;i<20;i++){g.time+=1/60;w.syncActors(1/60);}
  const scene=new THREE.Scene();scene.background=new THREE.Color('#292e38');
  scene.add(new THREE.HemisphereLight(0xffffff,0x777777,2));
  const rows=[];
  for(let pose=0;pose<4;pose++) {
   if(pose===1)g.enemyAnimation(object,'attack',g.enemyDuration(object,'attack'));
   if(pose)for(let i=0;i<8;i++){g.time+=1/60;w.syncActors(1/60);}
   const original=actor.userData.mesh;
   const mesh=new THREE.Mesh(original.geometry.clone(),original.material);
   mesh.position.copy(original.position);mesh.quaternion.copy(original.quaternion);mesh.scale.copy(original.scale);
   const group=new THREE.Group();group.add(mesh);group.updateMatrixWorld(true);
   const box=new THREE.Box3().setFromObject(group),center=box.getCenter(new THREE.Vector3());
   group.position.set((pose-1.5)*90-center.x,-box.min.y,-center.z);scene.add(group);
   rows.push({pose:actor.userData.animator.snapshot(),bounds:{min:box.min.toArray(),max:box.max.toArray()}});
  }
  const camera=new THREE.PerspectiveCamera(40,1280/720,1,2000);camera.position.set(0,130,560);camera.lookAt(0,50,0);
  for(const id of ['pause','hud','toast'])document.getElementById(id).hidden=true;
  // Draw a controlled pose comparison; authored room walls obscured the first
  // integration screenshot. No production scene or save is modified.
  w.renderer.setSize(1280,720,false);w.render=()=>w.renderer.render(scene,camera);w.render();
  return rows;
 });
 await page.screenshot({path:path.join(out,'knight-poses.png')});
 await writeFile(path.join(out,'poses.json'),JSON.stringify(result,null,2)+'\n');console.log(out);
} finally {await context?.close();server.kill();}
