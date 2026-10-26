import {writeFile,readFile} from 'node:fs/promises';
import assert from 'node:assert/strict';
import {GameAudio as Before} from './audio-baseline/audio.js';
import {GameAudio as After} from '../../src/audio.js';
import {BspAudioEnvironment as BeforeEnvironment} from './audio-baseline/spatial-audio.js';
import {BspAudioEnvironment as AfterEnvironment} from '../../src/spatial-audio.js';
const root=new URL('../../',import.meta.url);
function exercise(Audio) {
  const writes={media:0,stereo:0};
  const node=()=>({gain:{_value:1,get value(){return Math.fround(this._value);},set value(value){this._value=value;writes.stereo++;}},connect(){},disconnect(){}});
  const context={state:'running',destination:node(),createMediaElementSource:node,createGain:node,createChannelSplitter:node,createChannelMerger:node};
  const createAudio=()=>({_volume:1,currentTime:0,paused:true,get volume(){return this._volume;},set volume(value){this._volume=value;writes.media++;},play(){this.paused=false;return Promise.resolve();},pause(){this.paused=true;}});
  const audio=new Audio({createAudio,createContext:()=>context});
  for(let i=0;i<40;i++)audio.play({sound:'test.wav',spatial:true,position:[100+i,0,0],loop:true});
  const start=performance.now();
  for(let frame=0;frame<600;frame++)audio.update(1/120,[0,0,0]);
  const elapsedMs=performance.now()-start,save=audio.saveState(),snapshots=audio.snapshot();audio.reset();return {writes,elapsedMs,save,snapshots};
}
const before=exercise(Before),after=exercise(After);
assert.deepEqual(after.snapshots,before.snapshots);assert.deepEqual(after.save,before.save);
const graphs=[];
for(const id of ['lvl00a','lvl01a','lvl02a','lvl03a','lvl04a']) {
  const metadata=JSON.parse(await readFile(new URL(`data/visibility/${id}.json`,root)));
  const models=[...new Set(metadata.areaPortals.map(([model])=>model))];
  const exercisePortals=Environment=>{
    let reads=0;
    const objects=models.map(modelIndex=>({id:`door${modelIndex}`,kind:'door',modelIndex,open:false,visible:true,openFraction:0}));
    const world={level:{collision:{}},gameplay:{objects,scripts:{players:new Map()}},modelMeshes:new Map(models.map(model=>[model,[{get material(){reads++;return {opacity:1};}}]]))};
    const env=new Environment(world,metadata,new Uint8Array());for(let frame=0;frame<600;frame++)env.refreshPortals();return {reads,open:env.open};
  };
  const original=exercisePortals(BeforeEnvironment),optimized=exercisePortals(AfterEnvironment);
  assert.deepEqual(optimized.open,original.open.map(Boolean));
  graphs.push({level:id,directedLinks:metadata.areaPortals.length,physicalModels:models.length,beforeMaterialReads:original.reads,afterMaterialReads:optimized.reads});
}
const report={scope:'Isolated source-level operation-count comparison, not game FPS or physical audio-device benchmark',voices:40,updates:600,rate:120,saveAndAudioSnapshotEqual:true,before:{writes:before.writes,elapsedMs:before.elapsedMs},after:{writes:after.writes,elapsedMs:after.elapsedMs},avoidedGainAssignments:before.writes.media+before.writes.stereo-after.writes.media-after.writes.stereo,portalGraphs:graphs};
await writeFile(new URL('core-audio-benchmark.json',import.meta.url),JSON.stringify(report,null,2)+'\n');
console.log(JSON.stringify(report,null,2));
