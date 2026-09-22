import {chromium} from 'playwright';
import {spawn} from 'node:child_process';
import {mkdir,writeFile} from 'node:fs/promises';
import assert from 'node:assert/strict';

const server=spawn(process.execPath,['tools/serve.mjs'],{env:{...process.env,PORT:'4218'},stdio:['ignore','pipe','inherit']});
await new Promise((resolve,reject)=>{server.stdout.once('data',resolve);server.once('error',reject);});
let browser;
try {
  await mkdir('artifacts',{recursive:true});
  browser=await chromium.launch({executablePath:process.env.CHROME_PATH||'/usr/bin/google-chrome',headless:true,args:['--use-angle=gl','--autoplay-policy=no-user-gesture-required']});
  const page=await browser.newPage({viewport:{width:1280,height:720}}),errors=[];
  page.on('pageerror',error=>errors.push(error.stack));
  page.on('response',response=>{if(response.status()>=400)errors.push(`${response.status()} ${response.url()}`);});
  await page.goto('http://127.0.0.1:4218/?skipIntro');await page.waitForFunction(()=>window.__redcat);
  const poses=await page.evaluate(async()=>{
    const app=window.__redcat;await app.startLevel(1);app.pause();document.getElementById('pause').hidden=true;
    const world=app.world,game=app.gameplay,host=game.scripts,THREE=await import('three');
    for(const player of host.players.values())player.stop();host.cutscene=false;host.camera=null;
    world.syncActors(0);
    const objects=game.objects.filter(o=>/^paint(br|sl|rc|wk|mx)\.act$/i.test(o.entity?.ActorFileName||''));
    window.__portraitScene={world,game,THREE,objects};
    return objects.map(object=>{
      const actor=world.actorInstances.get(object.id),bounds=new THREE.Box3().setFromObject(actor);
      return {name:object.entity.DaviName,position:actor.position.toArray(),origin:object.position,visible:actor.visible,min:bounds.min.toArray(),max:bounds.max.toArray()};
    });
  });
  assert.equal(poses.length,7);
  for(const pose of poses){assert.equal(pose.visible,true);assert.deepEqual(pose.position,pose.origin);assert.ok(pose.max[0]-pose.min[0]<.001);assert.ok(Math.abs(pose.max[1]-pose.min[1]-100)<.001);}
  const views=[];
  for(const name of ['schiderijBR01','schilderijSL01']) {
    const result=await page.evaluate(name=>{
      const {world,game,THREE}=window.__portraitScene,object=game.find(name)[0],actor=world.actorInstances.get(object.id),p=actor.position;
      const side=Number(object.entity.RotateY)<0?-1:1;
      world.camera.position.set(p.x+side*125,p.y+55,p.z+30);world.camera.lookAt(p.x,p.y+50,p.z);
      const renderer=world.renderer,target=new THREE.WebGLRenderTarget(640,360),original=renderer.getRenderTarget();
      const shown=new Uint8Array(640*360*4),hidden=new Uint8Array(shown.length);
      renderer.setRenderTarget(target);renderer.render(world.scene,world.camera);renderer.readRenderTargetPixels(target,0,0,640,360,shown);
      actor.visible=false;renderer.render(world.scene,world.camera);renderer.readRenderTargetPixels(target,0,0,640,360,hidden);actor.visible=true;
      renderer.setRenderTarget(original);target.dispose();let pixels=0;
      for(let i=0;i<shown.length;i+=4)if(Math.abs(shown[i]-hidden[i])+Math.abs(shown[i+1]-hidden[i+1])+Math.abs(shown[i+2]-hidden[i+2])>3)pixels++;
      world.render();return {name,pixels,error:game.scripts.vm.lastError};
    },name);
    views.push(result);assert.ok(result.pixels>3000,`${name}: portrait must visibly cover its wall, ${result.pixels} pixels`);assert.equal(result.error,null);
    await page.screenshot({path:`artifacts/castle-portrait-${name}.png`});
  }
  assert.deepEqual(errors,[]);await writeFile('artifacts/portrait-scenes.json',JSON.stringify({poses,views,errors},null,2)+'\n');
  console.log('PASS all seven native castle portrait wall planes, both authored wall orientations visibly rendered, no script/browser/HTTP errors.');
}finally{await browser?.close();server.kill();}
