import {chromium} from 'playwright';
import http from 'node:http';
import {readFile,mkdir,writeFile} from 'node:fs/promises';
import path from 'node:path';
import assert from 'node:assert/strict';
import {fileURLToPath} from 'node:url';

// Focused shared-shader comparison: native quad construction on the CPU versus
// the existing instanced renderer. No game startup, saves, or audio are used.
const root=process.cwd(),work=path.dirname(fileURLToPath(import.meta.url));
await mkdir(path.join(root,'temp_work/t'),{recursive:true});
process.env.TMPDIR='temp_work/t';
const server=http.createServer(async(req,res)=>{
  try {
    const url=new URL(req.url,'http://localhost');
    if(url.pathname==='/'){res.setHeader('Content-Type','text/html');res.end('<script type="importmap">{"imports":{"three":"/node_modules/three/build/three.module.js"}}</script>');return;}
    const file=path.resolve(root,'.'+decodeURIComponent(url.pathname));
    if(!file.startsWith(root+path.sep))throw Error('Outside project');
    res.setHeader('Content-Type',file.endsWith('.png')?'image/png':'text/javascript');res.end(await readFile(file));
  }catch{res.statusCode=404;res.end();}
});
await new Promise(resolve=>server.listen(0,'127.0.0.1',resolve));
let browser;
const errors=[];
try {
  browser=await chromium.launch({executablePath:'/usr/bin/google-chrome',headless:true,
    env:{...process.env,TMPDIR:'temp_work/t'},args:['--use-angle=gl']});
  const page=await browser.newPage();page.on('pageerror',error=>errors.push(error.stack));
  page.on('console',message=>{if(message.type()==='error'&&/shader|webgl|gl_invalid|program/i.test(message.text()))errors.push(message.text());});
  await page.goto(`http://127.0.0.1:${server.address().port}/`);
  const result=await page.evaluate(async()=>{
    const THREE=await import('three'),{BillboardBatch}=await import('/src/world-effects.js');
    const renderer=new THREE.WebGLRenderer({antialias:false}),target=new THREE.WebGLRenderTarget(128,128);
    renderer.setRenderTarget(target);const camera=new THREE.PerspectiveCamera(45,1,.1,1000);
    const texture=new THREE.DataTexture(new Uint8Array([255,0,0,255,0,255,0,255,0,0,255,255,255,255,255,255]),2,2);
    texture.flipY=true;texture.needsUpdate=true;texture.magFilter=texture.minFilter=THREE.NearestFilter;
    const scene=new THREE.Scene(),world={scene,camera,track:resource=>resource},batch=new BillboardBatch(world,texture);
    scene.background=new THREE.Color(0);
    const referenceScene=new THREE.Scene();referenceScene.background=new THREE.Color(0);
    const refGeometry=new THREE.BufferGeometry(),refMaterial=batch.mesh.material.clone();
    refMaterial.vertexShader='varying vec2 effectUv;varying vec4 effectTint;void main(){effectUv=uv;effectTint=vec4(1.);gl_Position=projectionMatrix*modelViewMatrix*vec4(position,1.);}';
    const reference=new THREE.Mesh(refGeometry,refMaterial);reference.frustumCulled=false;referenceScene.add(reference);
    const cases=[];
    for(const selector of [1,2])for(const [name,eye]of [['front',[0,0,100]],['above',[50,70,100]],['below',[50,-70,100]],['vertical-above',[0,100,0]],['vertical-below',[0,-100,0]],['off-axis',[95,10,25]]]) {
      camera.position.fromArray(eye);camera.up.set(0,eye[0]===0&&eye[2]===0?0:1,eye[0]===0&&eye[2]===0?1:0);camera.lookAt(0,0,0);
      if(name==='off-axis'){camera.rotateZ(.7);camera.rotateY(.15);}camera.updateMatrixWorld(true);
      batch.count=0;batch.add([0,0,0],40,40,[1,1,1],1,0,null,selector);batch.flush(0);
      // Native 0x477d50/0x46e4b0 (including the established finite parallel-view guard).
      const toward=camera.position.clone(),upRef=new THREE.Vector3(0,toward.y<0?-1:1,0);
      if(toward.clone().sub(upRef).toArray().every(v=>Math.abs(v)<=.1))upRef.set(0,0,toward.z<0?-1:1);
      const right=new THREE.Vector3().crossVectors(toward,upRef);
      if(right.lengthSq()<1e-12)right.crossVectors(toward,new THREE.Vector3(0,0,1));right.normalize();
      const up=new THREE.Vector3().crossVectors(toward,right).normalize();if(toward.y>0){right.negate();up.negate();}
      const corners=[[-1,1],[1,1],[1,-1],[-1,-1]].map(([x,y])=>right.clone().multiplyScalar(x*20).addScaledVector(up,y*20).add(new THREE.Vector3(x*.5,y*.5,0)));
      const nativeUvs=selector===2?[[0,0],[1,0],[1,1],[0,1]]:[[1,1],[0,1],[0,0],[1,0]];
      // Genesis UVs above are converted to texture upload coordinates (flipY=true).
      const order=[0,3,1,3,2,1];refGeometry.setAttribute('position',new THREE.Float32BufferAttribute(order.flatMap(i=>corners[i].toArray()),3));
      refGeometry.setAttribute('uv',new THREE.Float32BufferAttribute(order.flatMap(i=>nativeUvs[i]),2));
      renderer.render(scene,camera);const actual=new Uint8Array(128*128*4);renderer.readRenderTargetPixels(target,0,0,128,128,actual);
      renderer.render(referenceScene,camera);const expected=new Uint8Array(actual.length);renderer.readRenderTargetPixels(target,0,0,128,128,expected);
      let colored=0,different=0,maxDelta=0;for(let i=0;i<actual.length;i+=4){if(actual[i]+actual[i+1]+actual[i+2]>3)colored++;let delta=0;for(let j=0;j<4;j++)delta=Math.max(delta,Math.abs(actual[i+j]-expected[i+j]));if(delta>1)different++;maxDelta=Math.max(maxDelta,delta);}
      cases.push({selector,name,colored,different,maxDelta,glError:renderer.getContext().getError()});
    }
    const debug=renderer.getContext().getExtension('WEBGL_debug_renderer_info');
    const gpu=debug?renderer.getContext().getParameter(debug.UNMASKED_RENDERER_WEBGL):null;
    target.dispose();texture.dispose();batch.mesh.geometry.dispose();batch.mesh.material.dispose();refGeometry.dispose();refMaterial.dispose();renderer.dispose();
    return {cases,gpu};
  });
  await writeFile(path.join(work,'smoke-billboard-report.json'),JSON.stringify({...result,errors},null,2)+'\n');
  assert.deepEqual(errors,[]);for(const item of result.cases){assert.ok(item.colored>20,JSON.stringify(item));assert.equal(item.different,0,JSON.stringify(item));assert.equal(item.glError,0);}
  console.log('PASS native CPU-constructed and instanced spout/death-smoke quads match in all twelve front, elevated, vertical and rolled camera views.');
}finally{await browser?.close();await new Promise(resolve=>server.close(resolve));}
