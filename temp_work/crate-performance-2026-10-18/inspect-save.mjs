import {_electron as electron} from 'playwright';
import {writeFile} from 'node:fs/promises';
import path from 'node:path';
const root='temp_work/crate-performance-2026-10-18';let app;
try {
  app=await electron.launch({args:['.','--ozone-platform=wayland',`--user-data-dir=${path.resolve(root,'profile-copy')}`,'--mute-audio'],env:{...process.env,TMPDIR:root+'/scratch'},cwd:process.cwd()});
  await app.context().addInitScript(()=>{
    window.sourceSettings=JSON.parse(localStorage.getItem('redcat.settings.v1')||'{}');
    localStorage.setItem('redcat.settings.v1',JSON.stringify({...window.sourceSettings,autoIntro:false,fullscreen:false,volume:0}));
  });
  const page=await app.firstWindow();await page.waitForFunction(()=>window.__redcat);
  const data=await page.evaluate(()=>({originalSettings:window.sourceSettings,active:window.__redcat.profiles.active,settings:window.__redcat.settings,storage:Object.fromEntries(Object.keys(localStorage).filter(key=>/redcat\.(players|settings|progress|save|player\.)/.test(key)).map(key=>[key,localStorage.getItem(key)]))}));
  const profile=data.active.id,key=profile==='legacy'?'redcat.save.v1':`redcat.player.${profile}.redcat.save.v1`,save=JSON.parse(data.storage[key]||'null');
  await writeFile(root+'/local-storage.json',JSON.stringify(data,null,2)+'\n');await writeFile(root+'/saved-scene.json',JSON.stringify(save,null,2)+'\n');
  console.log(JSON.stringify({active:data.active,originalSettings:data.originalSettings,settings:data.settings,save:{level:save?.level,position:save?.position,yaw:save?.yaw,pitch:save?.pitch,savedAt:save?.savedAt,health:save?.game?.state?.health}},null,2));
}finally{await app?.close();}
