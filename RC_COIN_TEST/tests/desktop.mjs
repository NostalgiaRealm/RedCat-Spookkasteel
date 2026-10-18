import assert from 'node:assert/strict';
import {createRequire} from 'node:module';
import {mkdir,writeFile} from 'node:fs/promises';
import path from 'node:path';
const require=createRequire(import.meta.url);
const {labRoot,configureEnvironment}=require('../electron/runtime.cjs');
const runtime=configureEnvironment();
const {_electron}=await import('playwright');
const evidence=path.resolve(labRoot,'../temp_work/coin-test-2026-10-13/verification');
await mkdir(evidence,{recursive:true});
let app;
try{
  app=await _electron.launch({args:[labRoot,'--ozone-platform=wayland'],env:process.env});
  const page=await app.firstWindow(),errors=[];
  page.on('pageerror',e=>errors.push(e.stack));
  await page.waitForFunction(()=>window.__coinTest,null,{timeout:30000});
  const profile=await app.evaluate(({app})=>({profile:app.getPath('userData'),temp:app.getPath('temp'),ozone:app.commandLine.getSwitchValue('ozone-platform')}));
  assert.equal(profile.profile,runtime.profile);assert.equal(profile.temp,runtime.tmp);assert.equal(profile.ozone,'wayland');
  assert.equal(new URL(page.url()).protocol,'rc-coin:');
  assert.deepEqual(await page.evaluate(()=>window.__coinTest.snapshot().pickups.map(c=>c.actor)),['icoins','imoneys','icoinm','imoneym','icoinl','imoneyl']);
  await page.screenshot({path:path.join(evidence,'electron-wayland.png')});
  assert.deepEqual(errors,[]);
  await writeFile(path.join(evidence,'electron-wayland.json'),JSON.stringify({passed:true,...profile},null,2)+'\n');
  console.log('PASS isolated Electron Wayland launch, local protocol, original HUD and actors',profile);
}finally{await app?.close();}
