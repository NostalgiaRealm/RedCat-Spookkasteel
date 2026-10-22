import assert from 'node:assert/strict';
import {mkdir,writeFile} from 'node:fs/promises';
import path from 'node:path';
import {fileURLToPath} from 'node:url';
import {createRequire} from 'node:module';
import {_electron as electron} from 'playwright';
const root=fileURLToPath(new URL('../../',import.meta.url)),lab=path.join(root,'RC_SHOVE_TEST');
const out=path.join(root,'temp_work/release-housekeeping-2026-10-15/shove-launch');
await mkdir(out,{recursive:true});
const {configureEnvironment,runtimeRoot}=createRequire(import.meta.url)(path.join(lab,'electron/runtime.cjs'));
configureEnvironment();
const report={errors:[],runtimeRoot,method:'Standalone lab source on Wayland; checks relocated runtime paths and visible WebGL scene, without main-game profile access.'};
let app;
try{
  app=await electron.launch({executablePath:path.join(lab,'node_modules/electron/dist/electron'),args:['.','--ozone-platform=wayland'],cwd:lab,env:{...process.env},timeout:30000});
  const page=await app.firstWindow();page.on('pageerror',error=>report.errors.push(String(error.stack||error)));
  await page.waitForFunction(()=>window.__shoveTest,null,{timeout:30000});
  report.paths=await app.evaluate(({app})=>({profile:app.getPath('userData'),temp:app.getPath('temp'),cache:process.env.XDG_CACHE_HOME}));
  for(const item of Object.values(report.paths))assert.ok(item.startsWith(runtimeRoot+path.sep));
  report.scene=await page.evaluate(()=>({url:location.href,models:window.__shoveTest.models.size,drawCalls:window.__shoveTest.renderer.info.render.calls}));
  assert.ok(report.scene.drawCalls>0);assert.equal(report.scene.url,'rc-shove://lab/index.html');
  await page.screenshot({path:path.join(out,'shove-wayland.png')});assert.deepEqual(report.errors,[]);report.passed=true;
}catch(error){report.failure=String(error.stack||error);throw error;}
finally{await writeFile(path.join(out,'report.json'),JSON.stringify(report,null,2)+'\n');await app?.close();console.log(JSON.stringify(report));}
