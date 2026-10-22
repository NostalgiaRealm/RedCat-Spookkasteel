import {chromium} from 'playwright';
import {resolve} from 'node:path';
import {writeFile} from 'node:fs/promises';
const out='temp_work/msaa-settings-2026-10-20';
const context=await chromium.launchPersistentContext(resolve(out,'hardware-profile'),{executablePath:'/usr/bin/google-chrome',headless:true,env:{...process.env,TMPDIR:'temp_work'},args:['--use-gl=angle','--use-angle=gl-egl']});
try{const page=await context.newPage();const info=await page.evaluate(()=>{const gl=document.createElement('canvas').getContext('webgl2',{antialias:false});if(!gl)return {available:false};const ext=gl.getExtension('WEBGL_debug_renderer_info');return {available:true,renderer:ext?gl.getParameter(ext.UNMASKED_RENDERER_WEBGL):gl.getParameter(gl.RENDERER),color:[...gl.getInternalformatParameter(gl.RENDERBUFFER,gl.SRGB8_ALPHA8,gl.SAMPLES)],depth:[...gl.getInternalformatParameter(gl.RENDERBUFFER,gl.DEPTH_COMPONENT24,gl.SAMPLES)]};});await writeFile(`${out}/hardware-capabilities.json`,JSON.stringify(info,null,2)+'\n');console.log(info);}finally{await context.close();}
