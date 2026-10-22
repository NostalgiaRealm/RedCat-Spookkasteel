import {_electron as electron} from 'playwright';
import {mkdir,writeFile} from 'node:fs/promises';
import path from 'node:path';
const root='temp_work/crate-performance-2026-10-18',out=path.resolve(root,'debris-material-visual');await mkdir(out,{recursive:true});
let app;const report={errors:[],frames:[]};
try{
  app=await electron.launch({args:['.','--ozone-platform=wayland',`--user-data-dir=${out}/profile`,'--mute-audio'],cwd:process.cwd(),env:{...process.env,TMPDIR:root+'/scratch',REDCAT_VSYNC:'0'}});
  const page=await app.firstWindow();page.on('pageerror',error=>report.errors.push(error.stack));await page.waitForFunction(()=>window.__redcat);
  await page.goto('redcat://game/'+root+'/debris-material-visual.html');await page.waitForFunction(()=>window.fixture);
  const fixture=await page.evaluate(()=>window.fixture);
  for(const name of fixture.names)for(const character of fixture.knights.includes(name)?[false,true]:[false])for(const opacity of [1,.5])for(const turn of [.9,-1.4]) {
    const result=await page.evaluate(windowCase=>window.checkCase(windowCase),{name,opacity,turn,character});report.frames.push(result);
    if(result.changedPixels)await page.screenshot({path:out+`/${name}-${character?'character':'prop'}-${opacity}-${turn}.png`});
  }
  report.summary={models:fixture.names.length,cases:report.frames.length,changedCases:report.frames.filter(frame=>frame.changedPixels).length,maxDelta:Math.max(...report.frames.map(frame=>frame.maxDelta)),glErrors:report.frames.filter(frame=>frame.glError)};
  console.log(JSON.stringify(report.summary,null,2));
}finally{await writeFile(out+'/report.json',JSON.stringify(report,null,2)+'\n');await app?.close();}
