import {chromium} from 'playwright';
import {spawn} from 'node:child_process';
import {mkdir,writeFile} from 'node:fs/promises';
import {pathToFileURL} from 'node:url';
import assert from 'node:assert/strict';

export async function verifyCheatScenes(page) {
  await mkdir('artifacts',{recursive:true});
  // Desktop verification can enter here after another scene has paused the
  // game and hidden its pause panel to capture the world unobstructed.
  if(await page.evaluate(()=>window.__redcat.mode==='intro'))await page.locator('#skip-intro').click();
  await page.evaluate(()=>{
    const app=window.__redcat;if(app.mode==='playing')app.pause();
    if(app.mode==='paused') {
      for(const id of ['settings','cheats','help'])document.getElementById(id).hidden=true;
      document.getElementById('pause').hidden=false;
    }
  });
  if(await page.evaluate(()=>window.__redcat.mode==='paused'))await page.locator('#return-menu').click();
  // A native renderer reload has no ?skipIntro URL. Persist this through the
  // actual settings controls before exercising settings/save restoration.
  await page.locator('#open-settings').click();await page.locator('#auto-intro').uncheck();
  await page.locator('#apply-settings').click();await page.locator('#settings').waitFor({state:'hidden'});
  await page.locator('#open-settings').click();await page.locator('#open-cheats').click();
  assert.equal(await page.locator('#cheat-supplies').isDisabled(),true);
  await page.locator('#cheat-noclip').check();
  assert.equal(await page.evaluate(()=>JSON.parse(localStorage.getItem('redcat.settings.v1')).noClip),true);
  await page.keyboard.press('Escape');assert.equal(await page.locator('#settings').isVisible(),true);
  assert.equal(await page.locator('#cheats').isVisible(),false);
  await page.keyboard.press('Escape');assert.equal(await page.locator('#settings').isVisible(),false);
  await page.reload();await page.waitForFunction(()=>window.__redcat);
  assert.equal(await page.evaluate(()=>window.__redcat.settings.noClip),true);

  await page.evaluate(async()=>{
    const app=window.__redcat;await app.startLevel(0);app.pause();
    const game=app.gameplay;game.scripts.update=()=>{};game.scripts.cutscene=false;game.scripts.camera=null;
    for(const object of game.objects)if(object.kind==='enemy'||object.kind==='trigger')object.enabled=false;
    document.body.classList.remove('in-cutscene');document.getElementById('subtitle').hidden=true;
    game.state.score=123;game.state.potions=3;game.state.mirror=2;
    window.__cheatEvents=[];const onEvent=game.onEvent;
    game.onEvent=event=>{window.__cheatEvents.push(event.type);onEvent(event);};
    window.__cheatMirrorBefore=JSON.stringify(game.objects.filter(o=>o.subtype==='mirror').map(o=>({id:o.id,collected:o.collected,enabled:o.enabled})));
  });
  await page.locator('#pause-settings').click();await page.locator('#open-cheats').click();
  assert.equal(await page.locator('#cheat-noclip').isChecked(),true);
  await page.locator('#cheat-supplies').click();
  const reward=await page.evaluate(()=>({
    state:{...window.__redcat.gameplay.state},completed:window.__redcat.gameplay.completed,events:window.__cheatEvents,
    mirrorsUnchanged:window.__cheatMirrorBefore===JSON.stringify(window.__redcat.gameplay.objects.filter(o=>o.subtype==='mirror').map(o=>({id:o.id,collected:o.collected,enabled:o.enabled}))),
    hud:[document.getElementById('mirror').textContent,document.getElementById('potions').textContent,document.getElementById('score').textContent]
  }));
  assert.equal(reward.state.mirror,5);assert.equal(reward.state.potions,100);assert.equal(reward.state.score,9123);
  assert.equal(reward.completed,false);assert.deepEqual(reward.events,[]);assert.equal(reward.mirrorsUnchanged,true);
  assert.deepEqual(reward.hud,['5','100','9123']);
  await page.locator('#cheat-supplies').click();
  assert.equal(await page.evaluate(()=>window.__redcat.gameplay.state.score),18123);
  await page.screenshot({path:'artifacts/cheats-menu.png'});
  await page.locator('#back-cheats').click();assert.equal(await page.locator('#settings').isVisible(),true);
  await page.keyboard.press('Escape');await page.locator('#resume').click();
  await page.waitForFunction(()=>window.__redcat.mode==='playing');

  // Exercise keyboard bindings through the running frame loop, including the
  // vertical controls that used to mean jump and slow walk.
  const start=await page.evaluate(()=>[...window.__redcat.world.player.position]);
  await page.keyboard.down('Space');await page.waitForTimeout(250);await page.keyboard.up('Space');
  const risen=await page.evaluate(()=>[...window.__redcat.world.player.position]);
  assert.ok(risen[1]>start[1]+15,`Space did not fly up: ${start} -> ${risen}`);
  await page.keyboard.down('Shift');await page.waitForTimeout(180);await page.keyboard.up('Shift');
  const lowered=await page.evaluate(()=>[...window.__redcat.world.player.position]);
  assert.ok(lowered[1]<risen[1]-10,`Shift did not fly down: ${risen} -> ${lowered}`);
  await page.evaluate(()=>{window.__redcat.world.yaw=0;window.__redcat.world.pitch=-.7;});
  await page.keyboard.down('KeyW');await page.waitForTimeout(180);await page.keyboard.up('KeyW');
  const pitched=await page.evaluate(()=>[...window.__redcat.world.player.position]);
  assert.ok(pitched[1]>lowered[1]+8&&pitched[2]<lowered[2]-10,'W must follow the upward camera pitch');
  await page.evaluate(()=>window.__redcat.pause());
  const outside=await page.evaluate(()=>{
    const app=window.__redcat,world=app.world,game=app.gameplay;
    world.player.position=[world.level.bounds.max[0]+500,world.level.bounds.min[1]-500,world.level.bounds.max[2]+500];
    const health=game.state.health,lastSafe=[...world.player.lastSafe],before=[...world.player.position];
    for(let i=0;i<4;i++)world.update(.025,{forward:0,right:0});
    world.updateCamera(1,true);world.render();app.saveGame(true);
    return {before,position:[...world.player.position],lastSafe,health,afterHealth:game.state.health,camera:world.camera.position.toArray()};
  });
  assert.deepEqual(outside.position,outside.before);assert.equal(outside.health,outside.afterHealth);
  assert.ok(Math.hypot(...outside.camera.map((v,i)=>v-outside.position[i]))>100,'third-person camera remains outside the level with RedCat');
  await page.evaluate(async()=>{const app=window.__redcat;await app.loadSave();app.pause();});
  const restored=await page.evaluate(()=>({position:[...window.__redcat.world.player.position],lastSafe:[...window.__redcat.world.player.lastSafe],enabled:window.__redcat.world.player.noClip,settings:window.__redcat.settings.noClip,state:{...window.__redcat.gameplay.state},completed:window.__redcat.gameplay.completed}));
  assert.deepEqual(restored.position,outside.position);assert.deepEqual(restored.lastSafe,outside.lastSafe);
  assert.equal(restored.enabled,true);assert.equal(restored.settings,true);assert.equal(restored.state.score,18123);
  assert.equal(restored.state.mirror,5);assert.equal(restored.state.potions,100);assert.equal(restored.completed,false);

  await page.locator('#pause-settings').click();await page.locator('#open-cheats').click();
  await page.locator('#cheat-noclip').uncheck();
  const returned=await page.evaluate(()=>{
    const app=window.__redcat,world=app.world;
    return {enabled:world.player.noClip,position:[...world.player.position],solid:world.collider.trace(world.player.position,world.player.position,world.player.mins,world.player.maxs,world.physicalModels).startSolid,
      status:document.getElementById('cheat-status').textContent,saved:JSON.parse(localStorage.getItem('redcat.save.v1')).noClip};
  });
  assert.equal(returned.enabled,false);assert.equal(returned.solid,false);assert.equal(returned.saved,false);
  assert.ok(Math.hypot(...returned.position.map((v,i)=>v-outside.lastSafe[i]))<=1,'an exact floor-plane spawn can be lifted one unit to clear its collision hull');
  assert.match(returned.status,/veilige plek/);
  await page.screenshot({path:'artifacts/cheats-safe-return.png'});
  await page.reload();await page.waitForFunction(()=>window.__redcat);
  assert.equal(await page.evaluate(()=>window.__redcat.settings.noClip),false);
  await writeFile('artifacts/cheat-scenes.json',JSON.stringify({reward,start,risen,lowered,pitched,outside,restored,returned},null,2)+'\n');
  console.log('PASS Cheats submenu, maximum supplies/+9000, no premature level completion, keyboard free flight, outside-world save/load, collision-safe return and settings persistence.');
}

if(import.meta.url===pathToFileURL(process.argv[1]).href) {
  const server=spawn(process.execPath,['tools/serve.mjs'],{env:{...process.env,PORT:'4188'},stdio:['ignore','pipe','inherit']});
  await new Promise((resolve,reject)=>{server.stdout.once('data',resolve);server.once('error',reject);});
  let browser;
  try {
    browser=await chromium.launch({executablePath:process.env.CHROME_PATH||'/usr/bin/google-chrome',headless:true,args:['--use-angle=gl','--autoplay-policy=no-user-gesture-required']});
    const page=await browser.newPage({viewport:{width:1280,height:720}}),errors=[];
    page.on('pageerror',error=>errors.push(error.stack));page.on('response',response=>{if(response.status()>=400)errors.push(`${response.status()} ${response.url()}`);});
    await page.goto('http://127.0.0.1:4188/?skipIntro');await page.waitForFunction(()=>window.__redcat);
    await verifyCheatScenes(page);assert.deepEqual(errors,[]);
  } finally {await browser?.close();server.kill();}
}
