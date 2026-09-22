import {_electron as electron} from 'playwright';
import {mkdtemp,rm} from 'node:fs/promises';import path from 'node:path';import os from 'node:os';
const profile=await mkdtemp(path.join(os.tmpdir(),'redcat-gpu-'));
const app=await electron.launch({args:['.',`--user-data-dir=${profile}`,...process.argv.slice(2)]});
try {
 const page=await app.firstWindow();await page.waitForFunction(()=>window.__redcat);
 console.log('GPU',await app.evaluate(({app})=>app.getGPUFeatureStatus()));
 console.log('Contexts',await page.evaluate(()=>[{}, {antialias:false}, {powerPreference:'low-power'}, {powerPreference:'high-performance'}].map(options=>{
 const canvas=document.createElement('canvas');let error='';canvas.addEventListener('webglcontextcreationerror',e=>error=e.statusMessage);
 const gl=canvas.getContext('webgl2',options);return {options,ok:!!gl,error};
 })));
}finally {await app.close();await rm(profile,{recursive:true,force:true});}
