import {chromium} from 'playwright';
import {spawn} from 'node:child_process';
import {mkdir,writeFile} from 'node:fs/promises';
import assert from 'node:assert/strict';

const baseline=process.argv.includes('--baseline');
const server=spawn(process.execPath,['tools/serve.mjs'],{env:{...process.env,PORT:'4296'},stdio:['ignore','pipe','inherit']});
await new Promise((resolve,reject)=>{server.stdout.once('data',resolve);server.once('error',reject);});
let browser;
try {
  browser=await chromium.launch({executablePath:process.env.CHROME_PATH||'/usr/bin/google-chrome',headless:true,args:['--use-angle=gl']});
  const page=await browser.newPage(),errors=[];
  page.on('pageerror',e=>errors.push(e.stack));page.on('console',m=>{if(m.type()==='error')errors.push(m.text());});
  await page.goto('http://127.0.0.1:4296/?skipIntro');await page.waitForFunction(()=>window.__redcat);
  const reports=await page.evaluate(async()=>{
    const THREE=await import('three');
    const {createActorLighting,updateActorLighting,applyActorLighting}=await import('/src/actor-lighting.js');
    const {sampleActorDynamicLights,shadeActorVertexRaw}=await import('/src/actor-light-sampling.js');
    const renderer=new THREE.WebGLRenderer({antialias:false,preserveDrawingBuffer:true});renderer.setSize(64,32,false);
    renderer.outputColorSpace=THREE.SRGBColorSpace;
    const camera=new THREE.OrthographicCamera(-32,32,16,-16,1,300);camera.position.set(0,0,200);camera.lookAt(0,0,0);
    const cases=[
      {name:'white light, root attenuation',texture:[255,255,255],tint:[255,255,255],lights:[{position:[0,0,60],radius:100,color:[1,1,1]}]},
      {name:'dark texture modulation',texture:[128,128,128],tint:[255,255,255],lights:[{position:[0,0,60],radius:100,color:[1,1,1]}]},
      {name:'coloured lights add before clamping',texture:[255,255,255],tint:[255,255,255],lights:[{position:[0,0,10],radius:100,color:[.7,.3,.1]},{position:[0,0,20],radius:100,color:[.7,.4,.2]}]},
      {name:'material tint before saturation',texture:[255,255,255],tint:[128,64,32],lights:[{position:[0,0,10],radius:100,color:[1,1,1]},{position:[0,0,20],radius:100,color:[1,1,1]}]},
      {name:'authored ambient without hemisphere',texture:[128,100,80],tint:[255,255,255],ambient:[55,100,200],lights:[]},
      {name:'zero dynamic lights',texture:[255,255,255],tint:[255,255,255],maximum:0,lights:[{position:[0,0,10],radius:100,color:[1,1,1]}]},
      {name:'authored four-light capacity',texture:[255,255,255],tint:[255,255,255],maximum:4,lights:[10,20,30,40].map(z=>({position:[0,0,z],radius:100,color:[.2,.2,.2]}))},
    ];
    const reports=[];
    for(const fixture of cases) {
      const scene=new THREE.Scene(),geometry=new THREE.PlaneGeometry(64,32);
      const map=new THREE.DataTexture(new Uint8Array([...fixture.texture,255]),1,1);map.colorSpace=THREE.SRGBColorSpace;map.needsUpdate=true;
      const material=new THREE.MeshLambertMaterial({map,color:new THREE.Color().setRGB(...fixture.tint.map(v=>v/255),THREE.SRGBColorSpace)});
      const state=createActorLighting({lighting:{useSun:false,useAmbient:false,overrideAmbient:true,ambientColor:fixture.ambient||[0,0,0],maxDynamicLights:fixture.maximum??2}});
      applyActorLighting(material,state);updateActorLighting(state,[0,0,0],0,fixture.lights);
      scene.add(new THREE.Mesh(geometry,material));renderer.render(scene,camera);
      const pixels=new Uint8Array(64*32*4);renderer.getContext().readPixels(0,0,64,32,renderer.getContext().RGBA,renderer.getContext().UNSIGNED_BYTE,pixels);
      const light=shadeActorVertexRaw({normal:[0,0,1],material:fixture.tint,ambient:(fixture.ambient||[0,0,0]).map(v=>v/255),lights:sampleActorDynamicLights([0,0,0],fixture.lights,fixture.maximum??2)});
      const expected=light.map((v,i)=>v*fixture.texture[i]/255),samples=[8,31,55].map(x=>Array.from(pixels.slice((16*64+x)*4,(16*64+x)*4+3)));
      reports.push({name:fixture.name,expected,samples,maximumError:Math.max(...samples.flatMap(p=>p.map((v,i)=>Math.abs(v-expected[i]))))});
      geometry.dispose();material.dispose();map.dispose();
    }
    renderer.dispose();return reports;
  });
  assert.deepEqual(errors,[]);
  if(!baseline)for(const report of reports)assert.ok(report.maximumError<1.2,JSON.stringify(report));
  await mkdir('artifacts',{recursive:true});
  await writeFile(`artifacts/actor-lighting-${baseline?'before':'native'}-gpu.json`,JSON.stringify({reports,errors},null,2)+'\n');
  console.log(baseline?'Recorded existing actor shader deviations from native reference.':'PASS actor GPU samples match native root lighting, raw RGB accumulation/clamp and texture modulation.');
}finally{await browser?.close();server.kill();}
