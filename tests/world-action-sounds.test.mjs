import test from 'node:test';
import assert from 'node:assert/strict';
import {readFileSync,existsSync} from 'node:fs';
import {GameAudio,distanceGain} from '../src/audio.js';
import {GameplayAudio} from '../src/gameplay-audio.js';
import {doorMovementSound} from '../src/door-audio.js';
import {nearbyAmbienceGain,CASTLE_AMBIENCE_RANGE,CAVE_AMBIENCE_RANGE} from '../src/ambience-ranges.js';
import {Gameplay} from '../src/gameplay.js';
import {ScriptHost} from '../src/script-host.js';
import {TELEPORT_EFFECT_SECONDS} from '../src/teleporter-effects.js';
import {BspCollider} from '../src/collision.js';

const json=path=>JSON.parse(readFileSync(new URL('../'+path,import.meta.url)));
class Media {play(){this.paused=false;return Promise.resolve();}pause(){this.paused=true;}}
function boot(id) {
  const audio=new GameAudio({createAudio:()=>new Media()}),router=new GameplayAudio(audio),events=[],level=json(`data/levels/${id}/level.json`);
  audio.setLevel(id);
  const game=new Gameplay(level,{deferInit:true,onEvent:event=>{
    events.push(event);router.handle(event,game);
    if(event.type==='scriptSound'){
      const key=event.id?`effect:${event.id}`:null;
      if(event.stop)audio.stop(key);else audio.play({...event,key,sourceId:event.id});
    }
  }});
  const host=new ScriptHost(game,json(`data/davi/${id}.json`),{motions:json(`data/motions/${id}.json`)});
  host.initialize();for(const p of host.players.values())p.stop();host.cutscene=false;host.playerVisible=true;host.enemiesFrozen=true;
  audio.reset();events.length=0;
  const step=(seconds)=>{for(let t=0;t<seconds-1e-8;t+=.025){host.update(.025);for(const o of game.objects)if(Number.isFinite(o.teleportEffectAge))o.teleportEffectAge=Math.min(TELEPORT_EFFECT_SECONDS,o.teleportEffectAge+.025);}};
  return {audio,router,events,level,game,host,step};
}

test('fairy idle reaches exactly three times the former distance in all five levels and follows RedCat through camera cuts',()=>{
  for(const id of ['lvl00a','lvl01a','lvl02a','lvl03a','lvl04a']) {
    const audio=new GameAudio({createAudio:()=>new Media()});audio.setLevel(id);
    const fairy=audio.play({sound:'idlefee1.wav',loop:true,spatial:true,position:[0,0,0]});
    for(const oldDistance of [4,12,24,29,50,120]){
      const player=[oldDistance*3*32,0,0];audio.setPlayerListener(player);audio.update(0,[0,0,0]);
      const oldPosition=[oldDistance*32,0,0],range=id==='lvl01a'?CASTLE_AMBIENCE_RANGE:id==='lvl03a'?CAVE_AMBIENCE_RANGE:null;
      const previous=range?nearbyAmbienceGain(oldPosition,[0,0,0],range):distanceGain(oldPosition,[0,0,0],audio.spatial);
      assert.ok(Math.abs(fairy.distanceGain-previous)<1e-12,`${id}: distance ${oldDistance}`);
      const before=fairy.element.volume;audio.update(.025,[999999,500000,999999]);assert.equal(fairy.element.volume,before);
    }
    const router=new GameplayAudio(audio),game={state:{health:10},settings:{game:{}}},world={player:{position:[64,0,0]}};
    router.update(.025,world,game);audio.update(.025,[999999,0,0]);assert.equal(fairy.distanceGain,1);
    audio.reset();assert.equal(audio.playerListener,null);
  }
});

test('stepping onto the original chapel floor button plays its native push cue once; all native button types switch audibly',()=>{
  const {game,host,level,audio,events}=boot('lvl02a'),button=game.find('hek2_button_mc')[0];
  for(const o of game.objects)if(['enemy','trigger','pickup','button','door','controller'].includes(o.kind))o.enabled=o===button;
  const collider=new BspCollider(level.collision);collider.modelTransforms=host.modelTransforms;
  const bounds=level.collision.models[button.modelIndex],p=bounds.min.map((v,i)=>i===1?bounds.max[i]+2:(v+bounds.max[i])/2);
  const hit=collider.trace(p,[p[0],p[1]-4,p[2]],[-11,0,-11],[11,56,11],[button.modelIndex]);assert.equal(hit.modelIndex,button.modelIndex);
  game.update(.025,hit.end,{touchedModels:[hit.modelIndex]});game.update(.025,hit.end,{touchedModels:[hit.modelIndex]});
  assert.equal(events.filter(e=>e.type==='button'&&e.id===button.id).length,1);
  const cue=[...audio.sounds].find(r=>r.name==='switchpushbutton.wav');assert.ok(cue);assert.equal(cue.spatial,true);assert.deepEqual(cue.currentPosition,game.objectPosition(button));
  const router=new GameplayAudio(audio);audio.reset();
  for(const [type,sound] of [[1,'switchpushbutton.wav'],[2,'switchhandle.wav'],[3,'switchtrigger.wav']]){
    button.entity.ButtonType=String(type);router.handle({type:'button',id:button.id,on:true},game);router.handle({type:'button',id:button.id,on:false},game);
    assert.equal([...audio.sounds].filter(r=>r.name===sound).length,2);assert.ok(existsSync(new URL(`../assets/audio/${sound}`,import.meta.url)));
  }
});

test('native door types and the explicitly requested type-4 panel fallback cover actual doors without adding the fallback to lifts or props',()=>{
  const expected={lvl00a:['knopdeur_l_mc','knopdeur_r_mc'],lvl01a:['doorhallway05_01','secretdoor04','fence'],lvl02a:['mazedeur1_dm','kerk_1_links','froggerdeur_links'],lvl03a:['door_left_walab01','door_right_airlab01']};
  for(const [id,names] of Object.entries(expected)){
    const {game}=boot(id);
    for(const name of names){const object=game.find(name)[0];assert.ok(object,`${id}:${name}`);assert.ok(doorMovementSound(object,game.level),`${id}:${name}`);}
  }
  for(const [id,names] of [['lvl01a',['trap01','schuinvlaktrap']],['lvl02a',['heg2_mc']]]){
    const {game}=boot(id);for(const name of names){const object=game.find(name)[0];assert.ok(object,`${id}:${name}`);assert.equal(doorMovementSound(object,game.level),null);}
  }
  const chapel=boot('lvl02a');assert.equal(doorMovementSound(chapel.game.find('kerklift_mc')[0],chapel.level),'opendoornormal.wav','retain the lift’s explicitly authored native type-1 cue');
  for(const [type,sound] of [[1,'opendoornormal.wav'],[2,'opendoorkey.wav'],[3,'opendoorsecret.wav']])assert.equal(doorMovementSound({entity:{DoorType:String(type)}}),sound);
});

test('forest area crossings keep invisible door controls silent while real gate panels retain their cue',()=>{
  const {game,level,host,events,audio,router}=boot('lvl00a');
  const barriers=game.objects.filter(o=>o.kind==='door'&&/^deur\d+_mc$/.test(o.entity.DaviName));
  assert.equal(barriers.length,12);
  for(const door of barriers){
    assert.ok(level.groups.filter(g=>g.model===door.modelIndex).every(g=>g.alpha===0));
    assert.equal(doorMovementSound(door,level),null);
    // Geometry exclusion also protects against a non-silent type being
    // assigned to an invisible controller in a later import.
    assert.equal(doorMovementSound({...door,entity:{...door.entity,DoorType:'1'}},level),null);
  }
  // Execute the authored crossing callbacks, not just the sound selector.
  game.playerPosition=[0,10000,0];
  for(const name of ['triggerbrush1_mc','triggerbrush2_mc','triggerbrush3_mc','triggerbrush4_mc','triggerbrush5_mc','triggerbrush6_mc'])game.trigger(game.find(name)[0]);
  assert.equal(host.vm.lastError,null);
  assert.equal(events.filter(e=>e.type==='door').length,5,'crossings still change barriers, including opening and closing the second barrier');
  assert.deepEqual([1,2,3,4].map(i=>game.find(`deur${i}_mc`)[0].open),[false,false,true,true]);
  assert.equal([...audio.sounds].filter(record=>/^opendoor/.test(record.name)).length,0);
  for(const name of ['knopdeur_l_mc','knopdeur_r_mc']){
    const door=game.find(name)[0];router.handle({type:'door',id:door.id,open:true},game);
    assert.equal(audio.keyed.get(`door:${door.id}`)?.name,'opendoornormal.wav');
  }
});

test('door cues exclude hidden or faceless controllers without muting visible scripted and locked panels',()=>{
  const {game,level}=boot('lvl01a'),door=game.find('doorhallway05_01')[0];
  assert.equal(doorMovementSound({...door,visible:false},level),null);
  assert.equal(doorMovementSound(door,{...level,groups:level.groups.filter(g=>g.model!==door.modelIndex)}),null);
  assert.equal(doorMovementSound({...door,enabled:false,locked:true},level),'opendoornormal.wav');
  const graveyard=boot('lvl02a');
  assert.equal(doorMovementSound(graveyard.game.find('rc_fall_mc')[0],graveyard.level),null,'invisible RedCat cinematic carrier is not a door panel');
});

test('shared scripted door cues replay at each invoking door and suppress automatic double playback',()=>{
  const {game,audio,events}=boot('lvl01a');
  for(const name of ['secretdoor04','secretdoor03']){
    const door=game.find(name)[0];assert.ok(door);door.open=false;door.locked=false;game.command(door,'open');
    const cue=events.filter(e=>e.type==='scriptSound'&&e.doorId===door.id&&!e.stop).at(-1);assert.ok(cue,name);
    assert.equal(cue.sound.toLowerCase(),'opendoorsecret.wav');assert.deepEqual(cue.position,game.objectPosition(door));
    assert.ok(audio.keyed.has(`effect:${cue.id}`));assert.equal(audio.keyed.has(`door:${door.id}`),false);
  }
  assert.equal(events.filter(e=>e.type==='scriptSound'&&e.sound?.toLowerCase()==='opendoorsecret.wav'&&!e.stop).length,2);
});

test('native heart-container pickup uses IHart rather than the large-health recording',()=>{
  const {game,audio}=boot('lvl01a'),heart=game.objects.find(o=>o.subtype==='hart');assert.ok(heart);
  game.pickup(heart);const sound=[...audio.sounds].find(r=>r.group==='pickup');assert.equal(sound.name,'ihart.wav');
  assert.ok(existsSync(new URL('../assets/audio/ihart.wav',import.meta.url)));
});

test('all eleven authored portal journeys emit the native terminal cue exactly at disappearance and reappearance',()=>{
  let journeys=0;
  for(const [id,names] of [['lvl02a',['teleport1_tr','teleport3_tr','teleport4_tr','easterknop2_tr','teleport6_tr']],['lvl04a',['telepoort01_trigger','telepoort02_trigger','telepoort03_trigger','telepoort04_trigger','telepoort05_trigger']]]){
    for(const name of names){
      const {game,host,events,step}=boot(id),object=game.find(name)[0];object.enabled=true;
      const transitions=[],audibleTransitions=[],native=host.callNative.bind(host),onEvent=game.onEvent;
      game.onEvent=event=>{if(event.portalPhase)audibleTransitions.push({visible:host.playerVisible,time:host.time});onEvent(event);};
      host.callNative=(name,args)=>{const before=host.playerVisible,result=native(name,args);if(before!==host.playerVisible)transitions.push({visible:host.playerVisible,time:host.time});return result;};
      const start=o=>o.kind==='button'?game.switchButton(o,true):game.trigger(o);
      start(object);step(24);
      const verify=()=>{
        const cues=events.filter(e=>e.portalPhase);assert.deepEqual(cues.map(e=>e.portalPhase),['departure','arrival']);
        assert.ok(cues.every(e=>e.sound==='Magiev1.wav'&&e.spatial));
        assert.deepEqual(transitions.map(t=>t.visible),[false,true]);assert.deepEqual(audibleTransitions,transitions);assert.equal(host.playerVisible,true);assert.equal(host.vm.lastError,null);journeys++;
      };
      verify();
      if(name==='easterknop2_tr'){
        events.length=0;transitions.length=0;audibleTransitions.length=0;game.trigger(game.find('enabletrig_tr')[0]);start(game.find('eastertrig_tr')[0]);step(24);verify();
      }
    }
  }
  assert.equal(journeys,11);
});

test('portal cue state survives a save between effect and player transition, and ordinary visibility calls or skip do not add it',()=>{
  const {game,host,events,step}=boot('lvl04a');host.callNative('RcHide');host.callNative('RcShow');assert.equal(events.filter(e=>e.portalPhase).length,0);
  game.trigger(game.find('telepoort01_trigger')[0]);step(4);const saved=game.snapshot(),savedHost=host.snapshot();
  const next=boot('lvl04a');next.game.restore(saved);next.host.restore(savedHost);next.step(20);
  assert.deepEqual(next.events.filter(e=>e.portalPhase).map(e=>e.portalPhase),['departure','arrival']);
  const skipped=boot('lvl04a');skipped.game.trigger(skipped.game.find('telepoort01_trigger')[0]);skipped.step(1);assert.equal(skipped.host.skipCutscene(),true);
  assert.equal(skipped.host.playerVisible,true);assert.equal(skipped.events.filter(e=>e.portalPhase).length,0);
});
