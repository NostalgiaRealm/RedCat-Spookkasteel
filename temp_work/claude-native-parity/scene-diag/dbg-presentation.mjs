// Debug: what does the presentation fairy render-target readback contain?
import {chromium} from 'playwright';
import {spawn} from 'node:child_process';
import {unlockChapters} from '../../../tests/support/scene-progress.mjs';
import {sceneTemp} from '../../../tests/support/scene-output.mjs';
process.env.TMPDIR=sceneTemp();
const server=spawn(process.execPath,['tools/serve.mjs'],{env:{...process.env,PORT:'4596'},stdio:['ignore','pipe','inherit']});
await new Promise(r=>server.stdout.once('data',r));
const browser=await chromium.launch({executablePath:process.env.CHROME_PATH,headless:true,args:['--use-angle=gl','--autoplay-policy=no-user-gesture-required']});
try{
  const page=await browser.newPage({viewport:{width:1280,height:720}});await unlockChapters(page);
  page.on('console',m=>{if(m.type()==='error'||m.type()==='warning')console.log('console',m.type(),m.text().slice(0,200));});
  await page.goto('http://127.0.0.1:4596/?skipIntro');await page.waitForFunction(()=>window.__redcat);
  const r=await page.evaluate(async()=>{
    const app=window.__redcat;await app.startLevel(0);app.pause();document.getElementById('pause').hidden=true;
    const world=app.world,game=app.gameplay,host=game.scripts,THREE=await import('three');
    for(const p of host.players.values())p.stop();host.cutscene=false;host.camera=null;
    for(const o of game.objects)if(['enemy','trigger','fairy'].includes(o.kind))o.enabled=false;
    const fn=host.vm.program.functions.find(f=>f.name==='CSL001_MotionCommand');
    for(const label of ['rcshow','startcutscene','startcamera','startfairy'])host.vm.invoke(fn,[label,0]);
    world.player.grounded=true;world.syncPlayer(0,{});world.updateCamera(1,true);world.syncActors(0);
    const object=game.find('fairy11')[0];for(let i=0;i<8;i++)world.effects.update(.2);
    const state=world.effects.entries.get(object.id);
    const v=new THREE.Vector3(...object.position).project(world.camera);
    const batches=[...world.effects.batches.entries()].map(([k,b])=>[k,b.count,b.geometry.instanceCount,b.mesh.visible]).filter(e=>e[1]||e[2]);
    const renderer=world.renderer,target=new THREE.WebGLRenderTarget(640,360),before=new Uint8Array(640*360*4),after=new Uint8Array(before.length);
    renderer.setRenderTarget(target);renderer.render(world.scene,world.camera);renderer.readRenderTargetPixels(target,0,0,640,360,before);
    object.visible=false;world.effects.update(0);const batches2=[...world.effects.batches.entries()].map(([k,b])=>[k,b.count,b.geometry.instanceCount]).filter(e=>e[1]||e[2]);
    renderer.render(world.scene,world.camera);renderer.readRenderTargetPixels(target,0,0,640,360,after);renderer.setRenderTarget(null);
    let pixels=0;for(let i=0;i<before.length;i+=4)if(Math.abs(before[i]-after[i])+Math.abs(before[i+1]-after[i+1])+Math.abs(before[i+2]-after[i+2])>3)pixels++;
    const fairyMeshes=[];world.scene.traverse(o=>{if(/fairy/i.test(o.name||''))fairyMeshes.push([o.name,o.visible,o.type]);});
    return {pixels,batches,batches2,fairyMeshes:fairyMeshes.slice(0,8),fairy:object.position,enabled:object.enabled,visible:object.visible,ndc:v.toArray(),cam:world.camera.position.toArray(),camQ:world.camera.quaternion.toArray(),player:world.player.position,host:{camera:host.camera,cutscene:host.cutscene},sprites:state?.fairyGeometry?.sprites.length,
      keys:state?Object.keys(state):null};
  });
  console.log(JSON.stringify(r));
}finally{await browser.close();server.kill();}
