import {chromium} from 'playwright';
import {spawn} from 'node:child_process';
import {mkdir,writeFile} from 'node:fs/promises';
import assert from 'node:assert/strict';

const server=spawn(process.execPath,['tools/serve.mjs'],{env:{...process.env,PORT:'4297'},stdio:['ignore','pipe','inherit']});
await new Promise((resolve,reject)=>{server.stdout.once('data',resolve);server.once('error',reject);});
let browser;
try {
  browser=await chromium.launch({executablePath:process.env.CHROME_PATH||'/usr/bin/google-chrome',headless:true,args:['--use-angle=gl']});
  const page=await browser.newPage(),errors=[];
  page.on('pageerror',e=>errors.push(e.stack));page.on('console',m=>{if(m.type()==='error')errors.push(m.text());});
  await page.goto('http://127.0.0.1:4297/?skipIntro');await page.waitForFunction(()=>window.__redcat);
  const reports=await page.evaluate(async()=>{
    const THREE=await import('three');
    const {createActorLighting,updateActorLighting,applyActorLighting}=await import('/src/actor-lighting.js');
    const {sampleActorDynamicLights,shadeActorVertexRaw}=await import('/src/actor-light-sampling.js');
    const renderer=new THREE.WebGLRenderer({antialias:false,preserveDrawingBuffer:true});renderer.setSize(64,32,false);
    renderer.outputColorSpace=THREE.SRGBColorSpace;
    const reports=[];
    for(const transformed of [false,true]) {
      const scene=new THREE.Scene(),parent=new THREE.Group();scene.add(parent);
      const vertices=[[-32,-16,0],[32,-16,0],[-32,16,0]],normals=[[0,0,1],[.98,0,.2],[0,.8,.6]].map(n=>new THREE.Vector3(...n).normalize());
      const geometry=new THREE.BufferGeometry();geometry.setAttribute('position',new THREE.Float32BufferAttribute(vertices.flat(),3));
      geometry.setAttribute('normal',new THREE.Float32BufferAttribute(normals.flatMap(n=>n.toArray()),3));
      const material=new THREE.MeshLambertMaterial(),state=createActorLighting({lighting:{useAmbient:false,overrideAmbient:true,ambientColor:[20,30,40]}});
      applyActorLighting(material,state);
      const mesh=new THREE.Mesh(geometry,material);parent.add(mesh);
      if(transformed){parent.rotation.set(.3,.5,.2);parent.position.set(110,35,-180);mesh.rotation.set(-.6,.7,-.3);mesh.scale.setScalar(1.7);}
      scene.updateMatrixWorld(true);
      const rotation=mesh.getWorldQuaternion(new THREE.Quaternion()),root=mesh.getWorldPosition(new THREE.Vector3());
      const scale=transformed?1.7:1,camera=new THREE.OrthographicCamera(-32*scale,32*scale,16*scale,-16*scale,1,400);
      camera.position.copy(new THREE.Vector3(0,0,200).applyQuaternion(rotation).add(root));camera.quaternion.copy(rotation);camera.updateMatrixWorld();
      const direction=new THREE.Vector3(0,0,1).applyQuaternion(rotation),sun={normal:direction.toArray(),color:[350,200,75]};
      const lights=[{position:direction.clone().multiplyScalar(10).add(root).toArray(),radius:100,color:[.4,.2,.1]}];
      updateActorLighting(state,root.toArray(),0,lights,{sun});
      renderer.render(scene,camera);
      const gl=renderer.getContext(),pixels=new Uint8Array(64*32*4);gl.readPixels(0,0,64,32,gl.RGBA,gl.UNSIGNED_BYTE,pixels);
      const matrix=new THREE.Matrix3().getNormalMatrix(mesh.matrixWorld);
      const colours=normals.map(n=>shadeActorVertexRaw({normal:n.clone().applyMatrix3(matrix).normalize().toArray(),ambient:[20/255,30/255,40/255],
        fill:{direction:sun.normal,color:sun.color.map(v=>v/255)},lights:sampleActorDynamicLights(root.toArray(),lights)}));
      const samples=[[5,4],[25,6],[8,22]].map(([x,y])=>{
        const weights=[1-(x+.5)/64-(y+.5)/32,(x+.5)/64,(y+.5)/32];
        const expected=[0,1,2].map(c=>colours.reduce((sum,rgb,i)=>sum+rgb[c]*weights[i],0)),actual=Array.from(pixels.slice((y*64+x)*4,(y*64+x)*4+3));
        return {expected,actual,error:Math.max(...actual.map((v,i)=>Math.abs(v-expected[i])))};
      });
      reports.push({name:transformed?'parent rotation, actor rotation and scale':'per-vertex clamp before interpolation',samples});
      geometry.dispose();material.dispose();
    }
    renderer.dispose();return reports;
  });
  assert.deepEqual(errors,[]);
  for(const report of reports)for(const sample of report.samples)assert.ok(sample.error<1.2,JSON.stringify(report));
  await mkdir('artifacts',{recursive:true});await writeFile('artifacts/actor-vertex-lighting-scenes.json',JSON.stringify(reports,null,2)+'\n');
  console.log('PASS native per-vertex clamp/interpolation and transformed actor normals match GPU pixels.');
}finally{await browser?.close();server.kill();}
