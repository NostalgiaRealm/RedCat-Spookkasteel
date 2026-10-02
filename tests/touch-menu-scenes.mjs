import assert from 'node:assert/strict';
import {spawn} from 'node:child_process';
import {mkdir, writeFile} from 'node:fs/promises';
import {resolve} from 'node:path';
import {chromium, devices} from 'playwright';

// Only the mobile control cleanup and responsive end-of-level overview.
// Keep every profile, log and screenshot for later reference.
const output = `current_work/touch-menu-${new Date().toISOString().replace(/[:.]/g, '-')}`;
await mkdir(output, {recursive: true});
const port = Number(process.env.TOUCH_MENU_TEST_PORT || 4315);
const report = {checks: [], errors: [], layouts: []};
const server = spawn(process.execPath, ['tools/serve.mjs'], {
  env: {...process.env, PORT: String(port)}, stdio: ['ignore', 'pipe', 'inherit'],
});
await new Promise((resolve, reject) => {
  server.stdout.once('data', resolve); server.once('error', reject);
  server.once('exit', code => reject(new Error(`Server exited: ${code}`)));
});
let context;
const check = name => {report.checks.push(name); console.log(`PASS ${name}`);};
async function inspectLayout(page, name, viewport, mobile) {
  await page.setViewportSize(viewport);
  await page.waitForTimeout(100);
  const layout = await page.evaluate(() => {
    const rect = selector => {
      const r = document.querySelector(selector).getBoundingClientRect();
      return {x:r.x, y:r.y, width:r.width, height:r.height};
    };
    const canvas = document.querySelector('#debriefing canvas');
    return {frame:rect('.debriefing-frame'), canvas:rect('#debriefing canvas'), button:rect('#debriefing button'), bitmap:[canvas.width,canvas.height], dpr:devicePixelRatio, viewport:[innerWidth,innerHeight], text:document.querySelector('#debriefing button').textContent};
  });
  for(const [key, r] of Object.entries({frame:layout.frame,canvas:layout.canvas,button:layout.button})) {
    assert.ok(r.width > 0 && r.height > 0, `${name}: ${key} has size`);
    assert.ok(r.x >= -1 && r.y >= -1 && r.x+r.width <= viewport.width+1 && r.y+r.height <= viewport.height+1, `${name}: ${key} fits ${JSON.stringify(r)}`);
  }
  if(!name.endsWith('safe-area'))assert.ok(Math.abs(layout.frame.width-viewport.width)<1 && Math.abs(layout.frame.height-viewport.height)<1, `${name}: scoreboard fills the window`);
  assert.ok(Math.abs(layout.canvas.width-layout.frame.width) < 1 && Math.abs(layout.canvas.height-layout.frame.height) < 1);
  assert.ok(Math.abs(layout.bitmap[0]-layout.canvas.width*layout.dpr) <= 1 && Math.abs(layout.bitmap[1]-layout.canvas.height*layout.dpr) <= 1, `${name}: canvas follows resized frame`);
  assert.equal(layout.text, 'KLIK/TIK hier om verder te gaan');
  report.layouts.push({name,...layout});
  await page.screenshot({path:`${output}/${name}.png`});
}
try {
  for(const mobile of [true, false]) {
    const label = mobile ? 'mobile' : 'desktop';
    context = await chromium.launchPersistentContext(resolve(output, `${label}-profile`), {
      executablePath:process.env.CHROME_PATH || '/usr/bin/google-chrome', headless:true,
      env:{...process.env,TMPDIR:'current_work'}, args:['--use-angle=gl','--autoplay-policy=no-user-gesture-required'],
      ...(mobile ? devices['Pixel 7'] : {}), viewport:{width:844,height:390}, deviceScaleFactor:1,
    });
    await context.addInitScript(() => {
      localStorage.clear();
      // The same scoreboard prompt applies with touch enabled on desktop.
      localStorage.setItem('redcat.settings.v1', JSON.stringify({autoIntro:false,touchControls:'on',volume:0,resolution:'640x480'}));
    });
    const page = context.pages()[0];
    page.on('pageerror', error => report.errors.push(error.stack || String(error)));
    await page.goto(`http://127.0.0.1:${port}/?skipIntro`);
    await page.waitForFunction(() => window.__redcat?.touchControls);
    assert.equal(await page.locator('#touch-use, #touch-options, #touch-tools, #touch-save, #touch-load').count(), 0);
    assert.doesNotMatch(await page.locator('#help').textContent(), /Meer bevat|Spring, Schieten en Gebruik/);
    await page.evaluate(async () => {
      const app = window.__redcat;
      await app.startLevel(0); app.pause(); app.audio.reset();
      for(const player of app.gameplay.scripts.players.values())player.stop();
      app.gameplay.scripts.cutscene = false;
      app.gameplay.scripts.update = () => {};
      for(const object of app.gameplay.objects)object.enabled = false;
    });
    assert.equal(await page.locator('#save').isVisible(),true);
    assert.equal(await page.locator('#load-save').isVisible(),true);
    await page.locator('#resume').click();
    await page.waitForFunction(() => !window.__redcat.touchControls.context.cutscene);
    assert.equal(await page.locator('#touch-skip').isVisible(),false);
    for(const selector of ['#touch-attack','#touch-jump','#touch-camera','#touch-walk','#game-menu'])assert.equal(await page.locator(selector).isVisible(),true,selector);
    if(mobile) {
      for(const [width,height] of [[320,568],[844,390]]) {
        await page.setViewportSize({width,height});
        const controls = await page.evaluate(() => ['touch-move','touch-attack','touch-jump','touch-camera','touch-walk','game-menu'].map(id => {
          const r=document.getElementById(id).getBoundingClientRect();
          return {id,x:r.x,y:r.y,width:r.width,height:r.height};
        }));
        for(const r of controls)assert.ok(r.width>=40 && r.height>=40 && r.x>=0 && r.y>=0 && r.x+r.width<=width && r.y+r.height<=height,`${r.id} fits ${width}x${height}`);
        for(const [i,a] of controls.entries())for(const b of controls.slice(i+1))assert.ok(a.x+a.width<=b.x || b.x+b.width<=a.x || a.y+a.height<=b.y || b.y+b.height<=a.y, `${a.id} does not overlap ${b.id}`);
        await page.screenshot({path:`${output}/controls-${width}x${height}.png`});
      }
      // Exercise the renamed skip button through the app's existing hold timer.
      await page.evaluate(() => {
        const host=window.__redcat.gameplay.scripts;
        host.cutscene=true;
        host.skipCutscene=()=>{window.__skipCalled=true;host.cutscene=false;return true;};
      });
      await page.locator('#touch-skip').waitFor({state:'visible'});
      const r=await page.locator('#touch-skip').boundingBox(),client=await context.newCDPSession(page);
      await client.send('Input.dispatchTouchEvent',{type:'touchStart',touchPoints:[{x:r.x+r.width/2,y:r.y+r.height/2}]});
      await page.waitForFunction(()=>window.__skipCalled===true,null,{timeout:6000});
      await client.send('Input.dispatchTouchEvent',{type:'touchEnd',touchPoints:[]});
      await page.waitForFunction(()=>!window.__redcat.readInput().use);
      assert.equal(await page.locator('#touch-skip').isVisible(),false);
      check('mobile: compact controls fit without overlap and dedicated hold-to-skip still works');
    }
    check(`${label}: removed controls absent; Menu retains save/load; normal controls remain`);
    await page.evaluate(() => window.__redcat.gameplay.complete());
    await page.waitForFunction(() => window.__redcat.mode === 'debriefing', null, {timeout:30000});
    await page.waitForFunction(() => !document.querySelector('#debriefing button').disabled);
    const sizes = mobile ? [[390,844],[844,390],[320,568],[568,320]] : [[1280,720],[800,600],[480,270],[1920,1080]];
    for(const [width,height] of sizes)await inspectLayout(page,`${label}-${width}x${height}`,{width,height},mobile);
    // Emulate asymmetric browser safe-area padding while the overview is open.
    await page.addStyleTag({content:'#debriefing{padding:20px 44px 24px 12px}'});
    await inspectLayout(page,`${label}-safe-area`,{width:844,height:390},mobile);
    const safe = report.layouts.at(-1).frame;
    assert.ok(safe.x >= 12 && safe.y >= 20 && safe.x+safe.width <= 800.5 && safe.y+safe.height <= 366.5);
    check(`${label}: correct prompt and proportional scoreboard at every size, live resize and safe area`);
    if(mobile) {
      await page.locator('#debriefing button').tap();
      await page.waitForFunction(() => window.__redcat.world?.id === 'lvl01a' && window.__redcat.mode === 'playing', null, {timeout:90000});
      check('mobile: tapping the ending screen advances to the next level');
    }
    await context.close(); context=null;
  }
  assert.deepEqual(report.errors, []);
} catch(error) {
  report.failure = error.stack || String(error);
  await context?.pages()[0]?.screenshot({path:`${output}/failure.png`}).catch(() => {});
  throw error;
} finally {
  await writeFile(`${output}/report.json`,JSON.stringify(report,null,2)+'\n');
  await context?.close(); server.kill();
  console.log(`Report: ${output}/report.json`);
}
