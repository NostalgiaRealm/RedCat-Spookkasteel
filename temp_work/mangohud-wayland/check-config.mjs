import {_electron as electron} from 'playwright';
import {mkdir,writeFile,readFile} from 'node:fs/promises';
import {resolve} from 'node:path';
import {execFileSync} from 'node:child_process';
const variant=process.argv[2]||'wayland',dir=resolve('temp_work/mangohud-wayland',variant);await mkdir(dir,{recursive:true});let app;const report={variant,logs:[]};
try{
 app=await electron.launch({args:['.',`--ozone-platform=${variant==='x11'?'x11':'wayland'}`,`--user-data-dir=${dir}/profile`,...process.argv.slice(3),'--enable-logging=stderr'],env:{...process.env,TMPDIR:'./temp_work',MANGOHUD:'1',MANGOHUD_CONFIG:'fps,frame_timing,position=top-left,font_size=32,fps_limit=0',LD_PRELOAD:'/usr/$LIB/mangohud/libMangoHud_shim.so'},timeout:30000});
 app.process().stderr.on('data',b=>report.logs.push(String(b)));
 const page=await app.firstWindow();await page.waitForFunction(()=>window.__redcat);
 await page.evaluate(()=>localStorage.setItem('redcat.settings.v1',JSON.stringify({fullscreen:false,autoIntro:false,volume:0})));
 await page.reload();await page.waitForFunction(()=>window.__redcat);
 // Animate a visible WebGL canvas without loading or touching the user's save.
 await page.evaluate(()=>{document.getElementById('menu').hidden=true;const c=document.getElementById('game'),g=c.getContext('webgl2');function draw(t){g.clearColor(.1,.2,.3+Math.sin(t/500)*.05,1);g.clear(g.COLOR_BUFFER_BIT);requestAnimationFrame(draw);}requestAnimationFrame(draw);});
 await page.waitForTimeout(1500);
 report.window=await page.evaluate(()=>({visibility:document.visibilityState,gl:document.getElementById('game').getContext('webgl2').getParameter(7937)}));
 report.gpu=await app.evaluate(async({app})=>({info:await app.getGPUInfo('complete'),processes:app.getAppMetrics().filter(p=>p.type==='GPU')}));
 for(const p of report.gpu.processes){const maps=await readFile(`/proc/${p.pid}/maps`,'utf8');report.libs=[...new Set(maps.split('\n').filter(l=>/Mango|libEGL|libGLX|libvulkan/.test(l)).map(l=>l.split(/\s+/).at(-1)))];}
 await app.evaluate(({BrowserWindow})=>{const w=BrowserWindow.getAllWindows()[0];w.show();w.focus();});await page.waitForTimeout(500);
 await page.screenshot({path:resolve(dir,'page.png')});
 execFileSync('spectacle',['-a','-b','-n','-o',resolve(dir,'window.png')],{timeout:10000});
 console.log(variant,report.libs);
}catch(e){report.error=String(e);console.log(report.error);}finally{await writeFile(resolve(dir,'report.json'),JSON.stringify(report,null,2));await app?.close();}
