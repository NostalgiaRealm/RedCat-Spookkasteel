import {chromium} from 'playwright';
import {spawn} from 'node:child_process';
import {mkdir,writeFile} from 'node:fs/promises';
import path from 'node:path';
import assert from 'node:assert/strict';

const out=path.resolve(`temp_work/skybox-native-2026-10-12/scenes-${Date.now()}`);
await mkdir(out,{recursive:true});
const env={...process.env,TMPDIR:'temp_work'};
const server=spawn(process.execPath,['tools/serve.mjs'],{env:{...env,PORT:process.env.SKY_PORT||'0'},stdio:['ignore','pipe','inherit']});
const base=await new Promise((resolve,reject)=>{server.stdout.once('data',s=>resolve(s.toString().match(/http:\/\/127.0.0.1:\d+/)[0]));server.once('error',reject);});
let context;
try {
  context=await chromium.launchPersistentContext(path.join(out,'profile'),{executablePath:process.env.CHROME_PATH||'/usr/bin/google-chrome',headless:true,env,
    viewport:{width:1280,height:720},args:['--use-angle=gl','--autoplay-policy=no-user-gesture-required',`--crash-dumps-dir=${out}`]});
  const page=await context.newPage(),errors=[];
  page.on('pageerror',e=>errors.push(e.stack));
  page.on('console',m=>{if(m.type()==='error'&&/shader|webgl|gl_invalid|program/i.test(m.text()))errors.push(m.text());});
  page.on('response',r=>{if(r.status()>=400)errors.push(`${r.status()} ${r.url()}`);});
  await page.addInitScript(()=>{
    localStorage.setItem('redcat.progress.v1',JSON.stringify({version:1,highestUnlocked:4}));
    localStorage.setItem('redcat.settings.v1',JSON.stringify({fullscreen:false,volume:0,resolution:'native',autoIntro:false}));
  });
  await page.goto(base+'/?skipIntro');await page.waitForFunction(()=>window.__redcat);
  const reports=[];
  for(let level=-1;level<5;level++) {
    const report=await page.evaluate(async level=>{
      const THREE=await import('three'),{nativeSkyboxFaces}=await import('/source/skybox.js'),app=window.__redcat;
      const renderer=new THREE.WebGLRenderer({preserveDrawingBuffer:true});renderer.setSize(256,256);renderer.setPixelRatio(1);
      const target=new THREE.WebGLRenderTarget(256,256);target.texture.colorSpace=THREE.SRGBColorSpace;
      const actualScene=new THREE.Scene(),referenceScene=new THREE.Scene();referenceScene.background=new THREE.Color(0);
      const camera=new THREE.PerspectiveCamera(90,1,.1,100),resources=[],images=[],views=[];
      const load=src=>new Promise((resolve,reject)=>{const image=new Image();image.onload=()=>resolve(image);image.onerror=()=>reject(new Error(src));image.src=src;});
      let id='asymmetric-fixture',indices=[0,1,2,3,4,5],worldView,boundaries;
      if(level<0) {
        for(let face=0;face<6;face++) {
          const canvas=document.createElement('canvas');canvas.width=canvas.height=256;const ctx=canvas.getContext('2d');
          // Each face and quadrant is distinguishable, including the caps.
          for(let y=0;y<256;y+=16)for(let x=0;x<256;x+=16){ctx.fillStyle=`rgb(${20+face*35},${x},${y})`;ctx.fillRect(x,y,16,16);}
          images.push(canvas);
        }
        const cube=new THREE.CubeTexture(nativeSkyboxFaces(images,renderer.capabilities.maxCubemapSize));
        cube.colorSpace=THREE.SRGBColorSpace;cube.needsUpdate=true;resources.push(cube);actualScene.background=cube;
      } else {
        if(!await app.startLevel(level))throw new Error('Failed to load '+level);
        app.pause();document.getElementById('pause').hidden=true;
        const w=app.world;id=w.id;indices=w.level.sky.textures;
        // Exercise the real loader, not a second copy of its face conversion.
        actualScene.background=w.scene.background;
        const loaded=new Map(await Promise.all([...new Set(indices.filter(i=>i>=0))].map(async i=>[i,await load(`/data/levels/${id}/${w.level.textures[i].file}`)])));
        images.push(...indices.map(i=>i<0?null:loaded.get(i)));
        w.render();worldView={glError:w.renderer.getContext().getError(),skyMasks:w.skyBoundaryMeshes.length,image:w.renderer.domElement.toDataURL('image/png').split(',')[1]};
        boundaries={authoredVertices:w.level.groups.filter(g=>g.flags&4).reduce((n,g)=>n+g.count,0),retainedVertices:w.skyBoundaryMeshes.reduce((n,m)=>n+m.userData.worldChunk.count,0)};
      }
      // Independent Genesis BuildSkyBox oracle: native quad vertices and UVs,
      // with the imported world coordinates unchanged. This does NOT use cube
      // lookup rules, the production face permutation, or its cap rotations.
      const quads=[
        [[-1,1,1],[1,1,1],[1,1,-1],[-1,1,-1]],
        [[-1,-1,-1],[1,-1,-1],[1,-1,1],[-1,-1,1]],
        [[-1,1,1],[-1,1,-1],[-1,-1,-1],[-1,-1,1]],
        [[1,1,-1],[1,1,1],[1,-1,1],[1,-1,-1]],
        [[-1,1,-1],[1,1,-1],[1,-1,-1],[-1,-1,-1]],
        [[1,1,1],[-1,1,1],[-1,-1,1],[1,-1,1]]
      ];
      const size=Math.max(1,...images.filter(Boolean).flatMap(image=>[image.width,image.height]));
      for(let face=0;face<6;face++) {
        if(!images[face])continue; // Native skips -1 instead of copying a face.
        // Match the separately tested uniform-size upload resampling, without
        // rotating/reordering any reference image. Vertex UVs define orientation.
        const canvas=document.createElement('canvas');canvas.width=canvas.height=size;canvas.getContext('2d').drawImage(images[face],0,0,size,size);
        const texture=new THREE.CanvasTexture(canvas);texture.flipY=false;texture.colorSpace=THREE.SRGBColorSpace;
        const geometry=new THREE.BufferGeometry();geometry.setAttribute('position',new THREE.Float32BufferAttribute(quads[face].flatMap(p=>p.map(v=>v*10)),3));
        geometry.setAttribute('uv',new THREE.Float32BufferAttribute([0,0,1,0,1,1,0,1],2));geometry.setIndex([0,1,2,0,2,3]);
        const material=new THREE.MeshBasicMaterial({map:texture,side:THREE.DoubleSide});referenceScene.add(new THREE.Mesh(geometry,material));resources.push(texture,geometry,material);
      }
      const pixels=scene=>{renderer.setRenderTarget(target);renderer.render(scene,camera);const bytes=new Uint8Array(256*256*4);renderer.readRenderTargetPixels(target,0,0,256,256,bytes);return bytes;};
      const capture=scene=>{renderer.setRenderTarget(null);renderer.render(scene,camera);return renderer.domElement.toDataURL('image/png').split(',')[1];};
      const directions=[['right',[1,0,0]],['left',[-1,0,0]],['up',[0,1,0]],['down',[0,-1,0]],['front',[0,0,-1]],['back',[0,0,1]],
        ['corner-a',[1,.5,1]],['corner-b',[-1,.5,1]],['corner-c',[-1,.5,-1]],['corner-d',[1,.5,-1]]];
      if(indices.some(i=>i>=0))for(const [name,direction]of directions) {
        camera.position.set(0,0,0);camera.up.set(0,Math.abs(direction[1])===1?0:1,Math.abs(direction[1])===1?-1:0);camera.lookAt(...direction);camera.updateMatrixWorld(true);
        const actual=pixels(actualScene),expected=pixels(referenceScene);let maxError=0,totalError=0,count=0,largeErrors=0;
        // Exclude the one-pixel seam where ordinary 2D edge clamping and seamless
        // cubemap filtering differ. Compare the rest, including face interiors.
        for(let y=8;y<248;y+=4)for(let x=8;x<248;x+=4) {
          const ray=new THREE.Vector3((x+.5)/128-1,(y+.5)/128-1,1).unproject(camera).normalize(),axes=[Math.abs(ray.x),Math.abs(ray.y),Math.abs(ray.z)].sort((a,b)=>b-a);
          if(axes[0]-axes[1]<.025)continue;
          for(let c=0;c<3;c++){const delta=Math.abs(actual[(y*256+x)*4+c]-expected[(y*256+x)*4+c]);maxError=Math.max(maxError,delta);totalError+=delta;count++;if(delta>3)largeErrors++;}
        }
        const translated=(()=>{camera.position.set(123,-98,456);camera.lookAt(camera.position.clone().add(new THREE.Vector3(...direction)));camera.updateMatrixWorld(true);return pixels(actualScene);})();
        let parallaxError=0;for(let i=0;i<actual.length;i++)parallaxError=Math.max(parallaxError,Math.abs(actual[i]-translated[i]));
        camera.position.set(0,0,0);camera.lookAt(...direction);camera.updateMatrixWorld(true);
        views.push({name,maxError,meanError:totalError/count,largeErrors,samples:count,parallaxError,glError:renderer.getContext().getError(),image:capture(actualScene),reference:capture(referenceScene)});
      }
      if(boundaries?.authoredVertices) {
        const source=app.world.skyBoundaryMeshes.find(mesh=>mesh.geometry.attributes.position.count>=3);
        if(!source)throw new Error('No resident sky boundary in '+id);
        const points=[0,1,2].map(i=>new THREE.Vector3().fromBufferAttribute(source.geometry.attributes.position,i));
        const center=points[0].clone().add(points[1]).add(points[2]).multiplyScalar(1/3);
        const normal=points[1].clone().sub(points[0]).cross(points[2].clone().sub(points[0])).normalize();
        camera.position.copy(center).addScaledVector(normal,10);camera.up.set(0,Math.abs(normal.y)>.99?0:1,Math.abs(normal.y)>.99?1:0);camera.lookAt(center);camera.updateMatrixWorld(true);
        const sample=()=>[...pixels(actualScene).slice((128*256+128)*4,(128*256+128)*4+3)];
        const sky=sample(),geometry=new THREE.BoxGeometry(.5,.5,.5),material=new THREE.MeshBasicMaterial({color:0xff00ff}),marker=new THREE.Mesh(geometry,material);
        marker.position.copy(center).addScaledVector(normal,-1);actualScene.add(marker);const withoutMask=sample();
        const mask=new THREE.Mesh(source.geometry,source.material);mask.renderOrder=source.renderOrder;actualScene.add(mask);const behindMask=sample();
        marker.position.copy(center).addScaledVector(normal,1);const beforeMask=sample();
        boundaries.occlusion={sky,withoutMask,behindMask,beforeMask,glError:renderer.getContext().getError()};
        actualScene.remove(mask,marker);geometry.dispose();material.dispose();
      }
      const report={id,indices,noAuthoredSky:!indices.some(i=>i>=0),isCube:!!actualScene.background?.isCubeTexture,sizes:actualScene.background?.images?.map(image=>[image.width,image.height]),views,worldView,boundaries};
      for(const resource of resources)resource.dispose();target.dispose();renderer.dispose();return report;
    },level);
    for(const view of report.views)for(const key of ['image','reference']){await writeFile(path.join(out,`${report.id}-${view.name}-${key}.png`),Buffer.from(view[key],'base64'));delete view[key];}
    if(report.worldView){await writeFile(path.join(out,`${report.id}-in-game.png`),Buffer.from(report.worldView.image,'base64'));delete report.worldView.image;}
    reports.push(report);console.log(`${report.id}: ${report.views.length} sky views checked`);
  }
  await writeFile(path.join(out,'report.json'),JSON.stringify({reports,errors},null,2)+'\n');
  assert.equal(reports.length,6);assert.equal(reports.find(r=>r.id==='lvl03a').isCube,false);
  for(const report of reports) {
    if(report.worldView)assert.equal(report.worldView.glError,0,report.id);
    if(report.boundaries){
      assert.equal(report.boundaries.retainedVertices,report.boundaries.authoredVertices,`${report.id}: preserve every original SKY boundary`);
      const o=report.boundaries.occlusion;
      if(o){assert.deepEqual(o.behindMask,o.sky,`${report.id}: distant scenery stays behind the sky`);assert.deepEqual(o.withoutMask,[255,0,255]);assert.deepEqual(o.beforeMask,[255,0,255],`${report.id}: nearby scenery stays visible`);assert.equal(o.glError,0);}
    }
    if(report.noAuthoredSky)continue;
    assert.ok(report.isCube);assert.ok(report.sizes.every(([w,h])=>w===256&&h===256));assert.equal(report.views.length,10);
    for(const view of report.views){
      assert.equal(view.glError,0,`${report.id} ${view.name}`);
      assert.ok(view.meanError<1,`${report.id} ${view.name}: ${JSON.stringify(view)}`);
      assert.ok(view.largeErrors/view.samples<.02,`${report.id} ${view.name}: ${JSON.stringify(view)}`);
      assert.ok(view.parallaxError<=2,`${report.id} ${view.name} must stay centered on the camera`);
    }
  }
  assert.deepEqual(errors,[]);
  console.log(`PASS all five level loaders and 50 sky directions against native quad/UV reference, including cap orientation, missing faces, seams, camera translation and authored sky boundaries.\n${out}`);
} finally {await context?.close();server.kill();}
