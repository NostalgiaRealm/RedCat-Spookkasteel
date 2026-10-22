import {_electron as electron} from 'playwright';
import {writeFile} from 'node:fs/promises';
import path from 'node:path';
const out=path.resolve('temp_work/fairy-idle-regression-2026-10-18');
let app;
try{
 app=await electron.launch({args:[out+'/read-save.cjs','--ozone-platform=x11',`--user-data-dir=${out}/profile-copy`],env:{...process.env,TMPDIR:'temp_work/fairy-idle-regression-2026-10-18/scratch'}});
 const page=await app.firstWindow();await page.waitForURL('redcat://game/index.html');
 const storage=await page.evaluate(()=>Object.fromEntries(Object.keys(localStorage).filter(k=>k.startsWith('redcat.')).map(k=>[k,localStorage.getItem(k)])));
 await writeFile(out+'/saved-storage.json',JSON.stringify(storage,null,2)+'\n');
 const profiles=JSON.parse(storage['redcat.players.v1']||'null'),id=profiles?.activeId||'legacy',key=id==='legacy'?'redcat.save.v1':`redcat.player.${id}.redcat.save.v1`;
 const save=JSON.parse(storage[key]||'null');await writeFile(out+'/user-save-copy.json',JSON.stringify(save,null,2)+'\n');
 console.log(JSON.stringify({keys:Object.keys(storage),profiles,save:save?{keys:Object.keys(save),level:save.level,player:save.game?.player,fairies:save.game?.objects?.filter(o=>o.fairyState),audio:save.audio}:null},null,2));
}finally{await app?.close();}
