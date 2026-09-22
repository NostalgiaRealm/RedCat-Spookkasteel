import test from 'node:test';
import assert from 'node:assert/strict';
import {readFileSync} from 'node:fs';
import {Box3,BufferGeometry,Float32BufferAttribute,MeshBasicMaterial,Vector3} from 'three';
import {CastleWorld} from '../src/world.js';
import {actorOrientation} from '../src/actor-placement.js';

const json=path=>JSON.parse(readFileSync(new URL('../'+path,import.meta.url)));
const stems=['paintbr','paintsl','paintrc','paintwk','paintmx'];
const close=(actual,expected,message)=>assert.ok(Math.abs(actual-expected)<.001,`${message}: ${actual} != ${expected}`);

test('all seven castle portraits stand upright on their original walls with the native missing-INI basis',()=>{
  const world=new CastleWorld({},{}),manifest=json('assets/actors/manifest.json').actors;
  const entities=json('data/levels/lvl01a/level.json').entities.filter(e=>e.classname==='AdamAnyActor'&&stems.includes(e.ActorFileName?.replace(/\.act$/i,'').toLowerCase()));
  assert.equal(entities.length,7);
  try {
    for(const entity of entities) {
      const stem=entity.ActorFileName.replace(/\.act$/i,'').toLowerCase(),data=json(`assets/actors/${stem}.json`);
      assert.deepEqual(data.settings.initialRotationDegrees,[-90,0,0]);
      assert.deepEqual(manifest[stem].settings,data.settings);
      const geometry=world.track(new BufferGeometry());geometry.setAttribute('position',new Float32BufferAttribute(data.positions,3));
      const template={data,geometry,materials:[world.track(new MeshBasicMaterial())]};
      const actor=world.instantiateActor(template,{scale:Number(entity.Scale),rotation:['X','Y','Z'].map(axis=>Number(entity['Rotate'+axis]||0))});
      const origin=entity.Origin.split(/\s+/).map(Number);actor.position.fromArray(origin);
      actor.quaternion.copy(actorOrientation({entity},data.settings));actor.updateMatrixWorld(true);
      const bounds=new Box3().setFromObject(actor),size=bounds.getSize(new Vector3());
      close(size.x,0,`${entity.DaviName} remains on its wall plane`);
      close(size.y,100,`${entity.DaviName} height`);close(size.z,100,`${entity.DaviName} width`);
      close(bounds.min.x,origin[0],`${entity.DaviName} original wall X`);
      close(bounds.min.y,8.0414675,`${entity.DaviName} original base height`);
      close(bounds.max.y,108.041465,`${entity.DaviName} original top height`);
      // Geometry Z is portrait-up; its front normal stays horizontal, pointing
      // out from the wall after the authored +90/-90 degree world Y turn.
      const up=new Vector3(0,0,1).transformDirection(actor.userData.mesh.matrixWorld);
      close(up.x,0,'up X');close(up.y,1,'up Y');close(up.z,0,'up Z');
      assert.deepEqual(actor.position.toArray(),origin,'do not compensate with invented world offsets');
    }
  }finally{world.dispose();}
});
