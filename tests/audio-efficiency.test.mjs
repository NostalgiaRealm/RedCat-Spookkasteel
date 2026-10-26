import test from 'node:test';
import assert from 'node:assert/strict';
import {readFileSync} from 'node:fs';
import {GameAudio,nativeGainToAmplitude} from '../source/audio.js';
import {BspAudioEnvironment,createStereoRoute} from '../source/spatial-audio.js';
import {doorPortalOpen} from '../source/bsp-visibility.js';

class CountedMedia {
  constructor(){this._volume=1;this.writes=0;this.currentTime=0;this.paused=true;this.plays=0;}
  get volume(){return this._volume;}
  set volume(value){this._volume=value;this.writes++;}
  play(){this.paused=false;this.plays++;return Promise.resolve();}
  pause(){this.paused=true;}
}

test('stationary voices do not resend gains, while settings, motion and fades remain immediate',()=>{
  const audio=new GameAudio({createAudio:()=>new CountedMedia(),createContext:()=>null});
  const records=Array.from({length:40},(_,i)=>audio.play({sound:'test.wav',sourceId:String(i),spatial:true,position:[100+i,0,0],loop:true}));
  const initial=records.map(record=>({gain:record.element.volume,writes:record.element.writes}));
  for(let frame=0;frame<600;frame++)audio.update(1/120,[0,0,0]);
  records.forEach((record,i)=>{
    assert.equal(record.element.writes,initial[i].writes,'no unchanged HTML/buffered volume assignment');
    assert.equal(record.element.volume,initial[i].gain);
    assert.equal(record.element.plays,1,'steady updates do not reschedule playback');
  });
  audio.setMaster(.3);
  records.forEach((record,i)=>{assert.equal(record.element.writes,initial[i].writes+1);assert.equal(record.element.volume,initial[i].gain/2);});
  const record=records[0];
  audio.setScriptVolume(record.sourceId,.5);
  assert.equal(record.element.volume,.3*nativeGainToAmplitude(.5*record.distanceGain));
  audio.channels.effects=.5;audio.update(1/120,[500,0,0]);
  assert.equal(record.element.volume,.3*nativeGainToAmplitude(.25*record.distanceGain));
  const before=record.element.writes;
  record.fade={from:1,to:0,duration:1,elapsed:0};
  audio.update(.25,[500,0,0]);
  assert.equal(record.element.writes,before+1);
  assert.equal(record.element.volume,.3*nativeGainToAmplitude(.25*record.distanceGain*record.fadeGain));
  assert.ok(record.fadeGain<1&&record.fadeGain>0);
  // Keep compatibility with an externally changed media volume as well.
  record.element.volume=1;audio.applyGain(record);
  assert.equal(record.element.volume,.3*nativeGainToAmplitude(.25*record.distanceGain*record.fadeGain));
  audio.pause();audio.update(.25,[500,0,0]);assert.ok(records.every(r=>r.element.paused));
  audio.resume();assert.ok(records.every(r=>!r.element.paused));
  audio.reset();assert.equal(audio.sounds.size,0);
});

test('stereo routing avoids duplicate backend writes even when AudioParam getters round to float32',()=>{
  const node=()=>({gain:{_value:1,writes:0,get value(){return Math.fround(this._value);},set value(value){this._value=value;this.writes++;}},connect(){},disconnect(){this.disconnected=true;}});
  const context={destination:node(),createMediaElementSource:node,createGain:node,createChannelSplitter:node,createChannelMerger:node};
  const route=createStereoRoute(context,{}),gains={left:10**(-.5),right:1};
  route.apply(gains);
  assert.notEqual(route.left.gain.value,gains.left,'fixture exercises actual AudioParam precision difference');
  for(let frame=0;frame<600;frame++)route.apply(gains);
  assert.equal(route.left.gain.writes,1);assert.equal(route.right.gain.writes,1);
  route.apply({left:1,right:gains.left});
  assert.equal(route.left.gain.writes,2);assert.equal(route.right.gain.writes,2);
  route.apply({left:1,right:1});assert.equal(route.left.gain.writes,2);assert.equal(route.right.gain.writes,3);
  route.disconnect();assert.ok([route.source,route.upmix,route.splitter,route.left,route.right,route.merger].every(n=>n.disconnected));
});

const referenceOpen=(world,metadata)=>metadata.areaPortals.map(([model])=>{
  const door=world.gameplay.objects.find(object=>object.modelIndex===model),motion=world.gameplay.scripts.players.get(door?.id);
  return Boolean(doorPortalOpen(door,motion,(world.modelMeshes.get(model)||[]).some(mesh=>mesh.material?.opacity!==0)));
});
const connectedAreas=(metadata,open,area)=>{
  const found=new Set(),pending=[area];
  while(pending.length){const current=pending.pop();if(found.has(current))continue;found.add(current);const [count,first]=metadata.areas[current]||[0,0];for(let i=first;i<first+count;i++)if(open[i])pending.push(metadata.areaPortals[i][1]);}
  return found;
};

test('all five original portal graphs retain visibility through door motion and material changes',()=>{
  for(const id of ['lvl00a','lvl01a','lvl02a','lvl03a','lvl04a']) {
    const metadata=JSON.parse(readFileSync(new URL(`../data/visibility/${id}.json`,import.meta.url)));
    const models=[...new Set(metadata.areaPortals.map(([model])=>model))];
    let materialReads=0;
    const objects=models.map(modelIndex=>({id:`door-${modelIndex}`,kind:'door',modelIndex,visible:true,open:false,openFraction:0}));
    const surfaces=new Map(models.map(model=>[model,{opacity:1}]));
    const world={level:{collision:{}},gameplay:{objects,scripts:{players:new Map()}},modelMeshes:new Map(models.map(model=>[model,[{get material(){materialReads++;return surfaces.get(model);}}]]))};
    const env=new BspAudioEnvironment(world,metadata,new Uint8Array());
    for(let phase=0;phase<5;phase++) {
      for(let i=0;i<objects.length;i++) {
        const door=objects[i];door.open=phase===1;door.openFraction=phase===2&&i%2===0?.1:0;door.visible=phase===3&&i%2===0?false:true;
        surfaces.get(door.modelIndex).opacity=phase===4&&i%2===0?0:1;
        world.gameplay.scripts.players.delete(door.id);
        if(phase===2&&i%2)world.gameplay.scripts.players.set(door.id,{time:.5,motion:{startTime:0}});
      }
      const expected=referenceOpen(world,metadata);materialReads=0;
      env.refreshPortals();
      assert.deepEqual(env.open,expected,`${id}, phase ${phase}`);
      assert.equal(materialReads,models.length,'one material inspection per physical portal model');
      for(let area=0;area<metadata.areas.length;area++) {
        const reachable=connectedAreas(metadata,expected,area);
        for(let target=0;target<metadata.areas.length;target++)assert.equal(env.connected(area,target),reachable.has(target));
      }
      const cached=[...env.areaCache.values()],open=env.open;
      env.refreshPortals();
      assert.equal(env.open,open,'stable portal states reuse the array');
      assert.deepEqual([...env.areaCache.values()],cached,'unchanged state retains connectivity caches');
      for(let i=0;i<cached.length;i++)assert.equal(env.areaCache.get(i),cached[i]);
    }
  }
});

test('pickup-pending detection sees records added and released without allocating a copy',()=>{
  const audio=new GameAudio({createAudio:()=>new CountedMedia(),createContext:()=>null});
  assert.equal(audio.pickupsPending,false);
  audio.play({sound:'ordinary.wav'});assert.equal(audio.pickupsPending,false);
  const pickup=audio.play({sound:'icoinl.wav',group:'pickup'});assert.equal(audio.pickupsPending,true);
  audio.release(pickup);assert.equal(audio.pickupsPending,false);audio.reset();
});
