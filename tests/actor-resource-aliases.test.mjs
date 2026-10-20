import test from 'node:test';
import assert from 'node:assert/strict';
import {readFileSync} from 'node:fs';
import * as THREE from 'three';
import {CastleWorld} from '../src/world.js';
import {ActorTextureStream} from '../src/actor-texture-stream.js';
import {Gameplay} from '../src/gameplay.js';

const read=path=>JSON.parse(readFileSync(new URL('../'+path,import.meta.url)));
const bags=['imoneys','imoneym','imoneyl'];

function fixture(t,{aliases=read('assets/actors/shared-resources.json')}={}) {
  const requests=[],decoded=[],world={actorManifest:read('assets/actors/manifest.json'),actorResourceAliases:aliases,
    actorCache:new Map(),actorGeometryCache:new Map(),resources:new Set(),track(resource){this.resources.add(resource);return resource;},
    loadActor:CastleWorld.prototype.loadActor,lazyActorTexture:CastleWorld.prototype.lazyActorTexture,instantiateActor:CastleWorld.prototype.instantiateActor};
  t.mock.method(globalThis,'fetch',async url=>{
    requests.push(String(url));
    try {const content=read(String(url));return {ok:true,json:async()=>content};}
    catch{return {ok:false,json:async()=>null};}
  });
  world.actorTextures=new ActorTextureStream({placeholder:{width:1,height:1},clock:()=>0,track:texture=>world.track(texture),
    load:async url=>{readFileSync(new URL('../'+url,import.meta.url));decoded.push(url);return new THREE.Texture({width:1,height:1});},
    release:texture=>{texture.dispose();world.resources.delete(texture);}});
  return {world,requests,decoded,aliases,dispose:()=>{world.actorTextures.dispose();for(const resource of world.resources)resource.dispose();}};
}

test('byte-identical moneybag variants share body geometry and two decoded maps without merging definitions or rewards',async t=>{
  const {world,requests,decoded,aliases,dispose}=fixture(t);
  try {
    const templates=await Promise.all(bags.map(stem=>world.loadActor(stem+'.act')));
    assert.equal(templates[0].geometry,templates[1].geometry);assert.equal(templates[0].geometry,templates[2].geometry);
    assert.equal(world.actorGeometryCache.size,1);assert.equal(world.actorTextures.entries.size,2,'all nine bag map references have only two distinct PNG contents');
    for(const [i,template]of templates.entries()) {
      const original=read('assets/actors/'+bags[i]+'.json');assert.deepEqual(template.data,original);
      assert.notEqual(template.data,templates[(i+1)%3].data);assert.notEqual(template.data.settings,templates[(i+1)%3].data.settings);
      assert.deepEqual(template.data.materials,original.materials);
      for(const [slot,material]of template.materials.entries()) {
        const source=template.data.materials[slot].texture,canonical=aliases.textures[source]||source;
        assert.equal(material.map,world.actorTextures.entries.get('assets/actors/'+canonical).texture);
      }
    }
    const roots=templates.map(template=>world.instantiateActor(template)),group=new THREE.Group();group.add(...roots);
    await world.actorTextures.loadRoot(group);assert.equal(decoded.length,2);assert.equal(new Set(decoded).size,2);
    assert.deepEqual(requests.slice().sort(),bags.map(stem=>'assets/actors/'+stem+'.json').sort());
    const events=[],rewards=[],game={settings:{},state:{coins:0,score:0},addRewardEffect:(_kind,_object,score)=>rewards.push(score),emit:(_type,event)=>events.push(event),runEvent:()=>{}};
    for(let i=0;i<3;i++)Gameplay.prototype.pickup.call(game,{id:bags[i],subtype:'coin',enabled:true,collected:false,entity:{Type:String(i+1)}});
    assert.deepEqual(rewards,[5,25,50]);assert.deepEqual(events.map(event=>event.score),[5,25,50]);
    assert.equal(game.state.coins,16);assert.equal(game.state.score,80,'deduplicated artwork must not merge the native pickup values');
  }finally{dispose();}
});

test('shared canonical maps retain independent per-template and per-instance colour, transparency and native settings',async t=>{
  const {world,dispose}=fixture(t);
  try {
    const [small,large]=await Promise.all([world.loadActor('imoneys'),world.loadActor('imoneyl')]);
    const first=world.instantiateActor(small),second=world.instantiateActor(large),a=first.userData.mesh,b=second.userData.mesh;
    assert.equal(a.geometry,b.geometry);assert.equal(a.material[0].map,b.material[0].map);
    assert.notEqual(a.material[0],b.material[0]);assert.notEqual(a.userData.actorLighting,b.userData.actorLighting);
    a.material[0].color.setRGB(.9,.1,.2);a.material[0].opacity=.25;a.material[0].transparent=true;a.material[0].depthWrite=false;
    assert.deepEqual(b.material[0].color.toArray(),[1,1,1]);assert.equal(b.material[0].opacity,1);assert.equal(b.material[0].transparent,false);assert.equal(b.material[0].depthWrite,true);
    assert.deepEqual(small.materials[0].color.toArray(),[1,1,1]);assert.equal(small.materials[0].opacity,1);
    const ownLargeScale=large.data.settings.scale;small.data.settings.scale=3;
    assert.equal(large.data.settings.scale,ownLargeScale);first.visible=false;assert.equal(second.visible,true);
  }finally{dispose();}
});

test('concurrent names fetch each actor definition once without fetching an unused canonical definition',async t=>{
  const {world,requests,aliases,dispose}=fixture(t);
  try {
    const [a,b,c]=await Promise.all([world.loadActor('Actors\\IMONEYS.ACT'),world.loadActor('imoneys.act'),world.loadActor('/other/path/ImoneyS.act')]);
    assert.equal(a,b);assert.equal(b,c);assert.deepEqual(requests,['assets/actors/imoneys.json']);
    assert.equal(world.actorCache.size,1);assert.equal(world.actorGeometryCache.get(aliases.geometry.imoneys||'imoneys'),a.geometry);
    assert.notEqual(a.data.source.toLowerCase(),'imoneym.act');
  }finally{dispose();}
});

test('a missing optional alias sidecar keeps the ordinary loading and rendering contract',async t=>{
  const {world,requests,decoded,dispose}=fixture(t,{aliases:null});
  try {
    const templates=await Promise.all(bags.map(stem=>world.loadActor(stem)));
    assert.equal(world.actorGeometryCache.size,3);assert.notEqual(templates[0].geometry,templates[1].geometry);
    assert.equal(world.actorTextures.entries.size,9);
    const roots=templates.map(template=>world.instantiateActor(template)),group=new THREE.Group();group.add(...roots);await world.actorTextures.loadRoot(group);
    assert.equal(decoded.length,9);assert.ok(roots.every(root=>world.actorTextures.ready(root.userData.mesh.material.map(material=>material.map))));
    assert.equal(requests.length,3);assert.deepEqual(templates.map(template=>template.data.source.toLowerCase()),['imoneys.act','imoneym.act','imoneyl.act']);
  }finally{dispose();}
});

test('only actor PNG URLs are canonicalized; override, ghost and other asset namespaces stay unchanged',t=>{
  const {world,aliases,dispose}=fixture(t);
  try {
    const relative='textures/imoneyl-0.png',canonical=aliases.textures[relative]||relative;
    const actor=world.lazyActorTexture('assets/actors/'+relative);
    assert.equal(actor,world.lazyActorTexture('assets/actors/'+canonical));
    for(const url of ['assets/actor-overrides/'+relative,'assets/ghosts/ghost.png','assets/effects/'+relative,'https://example.test/assets/actors/'+relative]) {
      const texture=world.lazyActorTexture(url);assert.equal(world.actorTextures.entries.get(url).texture,texture);assert.notEqual(texture,actor);
    }
  }finally{dispose();}
});
