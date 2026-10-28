// Which WebGL renderer does headless Chromium get with different flags? (debug)
import {chromium} from 'playwright';
for(const args of [['--use-angle=gl'],['--use-angle=swiftshader','--enable-unsafe-swiftshader'],['--use-gl=angle','--use-angle=swiftshader-webgl','--enable-unsafe-swiftshader'],[]]){
  const b=await chromium.launch({executablePath:process.env.CHROME_PATH,headless:true,args});
  const p=await b.newPage();
  const r=await p.evaluate(()=>{const c=document.createElement('canvas');const g=c.getContext('webgl2');if(!g)return 'no webgl2';
    const e=g.getExtension('WEBGL_debug_renderer_info');g.clearColor(1,0,0,1);g.clear(g.COLOR_BUFFER_BIT);const px=new Uint8Array(4);g.readPixels(0,0,1,1,g.RGBA,g.UNSIGNED_BYTE,px);
    return (e?g.getParameter(e.UNMASKED_RENDERER_WEBGL):g.getParameter(g.RENDERER))+' | clear pixel '+[...px].join(',');});
  console.log(JSON.stringify(args),'->',r);await b.close();
}
