import * as THREE from 'three';
import { BspCollider, PlayerController } from './collision.js';
import { moveSolidPlayer } from './moving-solids.js';
import { ActorAnimator, ActorStateAnimator } from './animation.js';
import {cloneActorPoseGeometry} from './actor-geometry.js';
import { sampleCameraRoute } from './script-camera.js';
import { PlayerCameraControl } from './camera-control.js';
import { resolveThirdPersonCamera } from './third-person-camera.js';
import { visibleLiquidGroups, surfaceAlphaTest } from './liquids.js';
import { trailOpacity } from './projectile-hazards.js';
import { projectileVisibilityScale } from './projectile-visibility.js';
import { projectileAnimationFrame } from './projectile-animation.js';
import { triangleCollider, traceActors } from './actor-collision.js';
import { ActorCollisionIndex } from './actor-collision-index.js';
import { WorldEffects } from './world-effects.js';
import { EnemyTargeting, targetAimPoint, targetDirection, targetableObject, transformedTargetBounds, targetMarkerPose } from './targeting.js';
import { actorOrientation, attachedActorVisible, nativePlayerYaw } from './actor-placement.js';
import {pickupBounds,pickupPlacement} from './pickup-placement.js';
import { playerMotion, snapshotPlayerAnimation, restorePlayerAnimation } from './player-animation.js';
import { playerReactionMotion } from './player-lifecycle.js';
import { PLAYER_SUPER_CHARGE, PLAYER_SHOOT_MOTION } from './player-projectiles.js';
import { actorOverrideKey, actorOverrideColor } from './actor-materials.js';
import { placeSpider } from './enemy-ambush.js';
import { isGhostEnemy, ghostMaterials } from './ghost-materials.js';
import { enemyDeathOpacity, applyEnemyDeathOpacity } from './enemy-death-effects.js';
import {stepNativeDebris} from './debris-native.js';
import {DebrisRenderPool} from './debris-render-pool.js';
import {KNIGHT_PARTS,knightDebrisLifetime,createKnightDebrisParticles,restoreKnightDebrisState,snapshotKnightDebrisState} from './knight-debris.js';
import { posedEnemyProjectileOrigins } from './enemy-projectile-origins.js';
import { createActorLighting, updateActorLighting, applyActorLighting } from './actor-lighting.js';
import { ActorWorldLighting } from './actor-world-lighting.js';
import { createActorFloorLighting } from './actor-floor-lighting.js';
import { ActorLightVisibility } from './actor-light-visibility.js';
import { WorldGeometryStream, WORLD_STREAMING } from './world-streaming.js';
import { ActorRenderResidency } from './actor-render-residency.js';
import { ActorTextureStream } from './actor-texture-stream.js';
import { StreamingWorkQueue } from './streaming-work.js';
import { StreamingGpuPreparation } from './streaming-gpu-preparation.js';
import { PlayerShadow, PLAYER_SHADOW_TEXTURE } from './player-shadow.js';
import { nativeSkyboxFaces } from './skybox.js';
const json = async url => { const response=await fetch(url); if(!response.ok) throw new Error(`Ontbrekend spelbestand: ${url}`); return response.json(); };
const binary = async url => {const response=await fetch(url);if(!response.ok)throw new Error(`Ontbrekend spelbestand: ${url}`);return response.arrayBuffer();};
const point = e => (e.Origin || e.origin || '0 0 0').trim().split(/\s+/).map(Number);
// Camera triggers can refer to a real moving platform. Only brushes used
// exclusively as trigger volumes are absent from rendering and collision.
export function triggerOnlyModels(entities,names) {
  const uses=new Map();
  for(const entity of entities) {
    if(entity.classname==='%Model%'||!entity.Model)continue;
    const index=names.get(entity.Model);if(index===undefined)continue;
    if(!uses.has(index))uses.set(index,[]);uses.get(index).push(entity.classname);
  }
  return new Set([...uses].filter(([,classes])=>classes.every(name=>['Trigger','CameraTrigger'].includes(name))).map(([index])=>index));
}
export function actorVisible(object,time) {
  if(object.visible===false||object.collected||object.boss?.hidden)return false;
  if(object.kind==='enemy') {
    // CRcWitchMain's defeat path (0x40b1c0 -> 0x429900 -> 0x4248d0)
    // removes the combat actor; the ending uses separate authored doubles.
    // Also repairs saves that retained a frozen generic Witch corpse.
    if(object.enemyType==='witch'&&object.health<=0)return false;
    // Graveyard scripts destroy the grave cover before enabling its zombie;
    // the tower uses a cinematic double until its combat Witch is enabled.
    // Native MovingEnemy also applies IsInitiallyEnabled to the spawned actor
    // (0x427c18–0x427c3f); inactive zombies must not protrude through the lid.
    // Keep death clips and visible inactive enemies such as gargoyles/Brutus.
    if(['zombie','witch'].includes(object.enemyType)&&object.health>0&&object.enabled===false)return false;
    return object.health>0||(object.animationState==='death'&&time<(object.corpseUntil??((object.animationUntil||0)+2)));
  }
  return object.enabled!==false&&object.health!==0;
}
// Confirmed decorative assets with authored roots inside walls, plinths or
// just below the floor. Character doubles and hazards must not opt in merely
// because they also use AdamAnyActor or start underground.
const BURIED_DECORATIVE_ACTORS=new Set(['tree.act','kandela.act','cross5.act','pbench.act']);
export class CastleWorld {
  constructor(renderer, settings) {
    this.renderer=renderer;this.settings=settings;this.scene=new THREE.Scene();
    // The level scene is an identity container. Moving actors and brushes
    // retain automatic matrices; static world chunks can reuse theirs.
    this.scene.matrixAutoUpdate=false;
    this.scene.background=new THREE.Color('#28243f');
    this.camera=new THREE.PerspectiveCamera(settings.fov,1,1,15000);
    this.yaw=0;this.pitch=0.16;this.elapsed=0;this.modelMeshes=new Map();this.actorInstances=new Map();this.actorCache=new Map();this.actorGeometryCache=new Map();this.projectileMeshes=new Map();this.enemyDebris=new Map();this.resources=new Set();
    this.scene.add(new THREE.HemisphereLight(0xffe8bc,0x505565,2.4));
    const sunlight=new THREE.DirectionalLight(0xffe0bd,2);sunlight.position.set(-500,1400,700);this.scene.add(sunlight);
    this.textureLoader=new THREE.TextureLoader();
    this.streamingWork=new StreamingWorkQueue();this.streamingGpu=new StreamingGpuPreparation(renderer,this.streamingWork);
    this.actorTextures=new ActorTextureStream({load:url=>this.texture(url),track:texture=>this.track(texture),
      work:this.streamingWork,upload:texture=>renderer.initTexture?.(texture),
      release:texture=>{texture.dispose();this.resources.delete(texture);},configure:texture=>{
        texture.flipY=true;texture.colorSpace=THREE.SRGBColorSpace;texture.wrapS=texture.wrapT=THREE.RepeatWrapping;
        texture.magFilter=THREE.LinearFilter;texture.anisotropy=Math.min(8,this.renderer.capabilities.getMaxAnisotropy());
      }});
    this.targeting=new EnemyTargeting();this.cameraControl=new PlayerCameraControl();
    this.hazardMeshes=new Map();this.bossMachines=new Map();this.spiderWebs=new Map();
    this.skyBoundaryMeshes=[];
  }
  track(resource){this.resources.add(resource);return resource;}
  async texture(url,linear=false) {
    const t=this.track(await this.textureLoader.loadAsync(url));t.flipY=false;
    if(t.image?.decode)await t.image.decode();
    t.colorSpace=linear?THREE.NoColorSpace:THREE.SRGBColorSpace;
    t.wrapS=t.wrapT=THREE.RepeatWrapping;t.magFilter=THREE.LinearFilter;
    t.anisotropy=Math.min(8,this.renderer.capabilities.getMaxAnisotropy());return t;
  }
  lazyActorTexture(url){
    const prefix='assets/actors/';
    if(url.startsWith(prefix))url=prefix+(this.actorResourceAliases?.textures?.[url.slice(prefix.length)]||url.slice(prefix.length));
    return this.actorTextures.texture(url);
  }
  async load(id,onProgress=()=>{}) {
    this.id=id;const base=`data/levels/${id}/`;this.level=await json(base+'level.json');const data=this.level;
    [this.scriptProgram,this.motions,this.dialogue,this.textureTransparency]=await Promise.all([json(`data/davi/${id}.json`),json(`data/motions/${id}.json`),json('data/dialogue/nl.json'),json(base+'texture-transparency.json').catch(()=>null)]);
    if(!Array.isArray(this.textureTransparency)||this.textureTransparency.length!==data.textures.length)this.textureTransparency=null;
    onProgress('Originele geometrie en belichting laden…',.12);
    const [meshBuffer,lm,lmUv,lmFrames,floorMetadata,floorBytes,lightVisibility,lightPvs]=await Promise.all([
      binary(base+data.mesh.file),
      data.mesh.lightmap?this.texture(base+data.mesh.lightmap.file,true):null,
      data.mesh.lightmap?binary(base+data.mesh.lightmap.uvFile):null,
      data.mesh.lightmap?.framesFile?binary(base+data.mesh.lightmap.framesFile):null,
      data.mesh.lightmap?.actorFloorFile?json(base+data.mesh.lightmap.actorFloorFile):null,
      data.mesh.lightmap?.actorFloorFile?binary(base+data.preserved.lightmaps):null,
      json(`data/visibility/${id}.json`),binary(`data/visibility/${id}.bin`)
    ]);
    if(lm){lm.channel=1;lm.generateMipmaps=false;lm.minFilter=THREE.LinearFilter;lm.wrapS=lm.wrapT=THREE.ClampToEdgeWrapping;}
    const vertices=new Float32Array(meshBuffer),frames=lmFrames?new Float32Array(lmFrames):null;
    if(frames&&frames.length/8!==vertices.length/11)throw new Error('Onjuiste belichtingsgegevens voor '+id);
    const names=new Map(data.entities.filter(e=>e.classname==='%Model%').map(e=>[e['%name%'],Number(e.Model)]));
    this.modelNames=names;
    const triggerModels=triggerOnlyModels(data.entities,names);
    const invisibleModels=new Set();
    this.physicalModels=[0];
    for(let i=1;i<data.collision.models.length;i++)if(!triggerModels.has(i))this.physicalModels.push(i);
    // Membership is fixed for the level; live door/brush state is kept in
    // disabledModels and modelTransforms. Let collision cache this order.
    Object.freeze(this.physicalModels);
    const liquidGroups=visibleLiquidGroups(data);
    const groups=data.groups.filter(group=>!triggerModels.has(group.model)||liquidGroups.has(group));
    this.geometryStream=new WorldGeometryStream(this,{
      vertices,uv:lmUv?new Float32Array(lmUv):null,frames,visibility:lightVisibility,pvs:new Uint8Array(lightPvs),groups,
      textureFor:index=>this.texture(base+data.textures[index].file),
      materialFor:group=>{
        const skyBoundary=Boolean(group.flags&4),fullbright=Boolean(group.flags&2),gouraud=Boolean(group.flags&32);
        // Preserve all authored sky masks and one-sided fence
        // artwork. Only resource residency changes; brush state is separate.
        return this.track(new THREE.MeshBasicMaterial(skyBoundary?
          {colorWrite:false,depthWrite:true,side:THREE.DoubleSide}:
          {vertexColors:(!lm || gouraud)&&!fullbright,lightMap:fullbright || gouraud?null:lm,lightMapIntensity:1,side:THREE.FrontSide,transparent:group.alpha<1,opacity:group.alpha,depthWrite:group.alpha>=1,alphaTest:surfaceAlphaTest(group,data.textures[group.texture],id)}));
      }
    });
    if(data.sky?.textures?.some(i=>i>=0)) {
      // The six tiny sky faces are global scenery, independent of room chunks.
      const sky=new Map();
      await Promise.all([...new Set(data.sky.textures.filter(i=>i>=0))].map(async i=>sky.set(i,await this.texture(base+data.textures[i].file))));
      const faces=data.sky.textures.map(i=>i<0?null:sky.get(i).image);
      const cube=this.track(new THREE.CubeTexture(nativeSkyboxFaces(faces,this.renderer.capabilities.maxCubemapSize)));cube.colorSpace=THREE.SRGBColorSpace;cube.needsUpdate=true;this.scene.background=cube;
    }
    this.collider=new BspCollider(data.collision);
    invisibleModels.forEach(i=>this.collider.disabledModels.add(i));
    this.actorWorldLighting=new ActorWorldLighting(data.entities);
    this.actorLightVisibility=new ActorLightVisibility(this,lightVisibility,new Uint8Array(lightPvs));
    this.worldLightmapMetadata=floorMetadata;
    this.actorFloorLighting=floorMetadata?createActorFloorLighting(data.collision,floorMetadata,new Uint8Array(floorBytes),this.collider):null;
    this.player=new PlayerController(this.collider,[...data.spawn.position],this.physicalModels);
    this.yaw=nativePlayerYaw(data.spawn.orientation);
    // Spawn points are placed at foot height. Lift slightly before settling to avoid plane rounding.
    this.player.position[1]+=1;
    const ground=this.collider.trace(this.player.position,this.player.position.map((v,i)=>i===1?v-180:v),this.player.mins,this.player.maxs,this.physicalModels);
    if(!ground.startSolid)this.player.position=ground.end;
    onProgress('RedCat en de bewoners van het kasteel laden…',.42);
    [this.actorManifest,this.actorResourceAliases]=await Promise.all([
      json('assets/actors/manifest.json').catch(()=>({})),
      json('assets/actors/shared-resources.json').catch(()=>null)
    ]);
    if(this.actorResourceAliases?.format!=='redcat-actor-resources-v1')this.actorResourceAliases=null;
    this.actorOverrideManifest=await json('assets/actor-overrides/manifest.json');this.actorOverrideMaps=new Map();
    const projectileManifest=await json('assets/projectiles/manifest.json');
    this.projectileStyles=new Map();const frameTextures=new Map();
    await Promise.all(Object.entries(projectileManifest).filter(([,style])=>Array.isArray(style?.frames)).map(async([kind,style])=>{
      const frames=await Promise.all(style.frames.map(file=>{
        if(!frameTextures.has(file))frameTextures.set(file,this.texture('assets/projectiles/'+file));
        return frameTextures.get(file);
      }));
      this.projectileStyles.set(kind,{...style,textures:frames});
    }));
    this.enemyShotStyle=projectileManifest.enemyShot;
    this.enemyShotFrames=this.projectileStyles.get('enemyShot')?.textures||[];
    const targetMap=await this.texture('assets/hud/target.png');
    this.targetMarker=new THREE.Sprite(this.track(new THREE.SpriteMaterial({map:targetMap,color:0x14ff14,transparent:true,depthWrite:false,alphaTest:.01})));
    this.targetMarker.visible=false;this.targetMarker.scale.set(50,50,1);this.scene.add(this.targetMarker);
    const hazardManifest=await json('assets/hazards/manifest.json');
    this.trailTexture=await this.texture('assets/hazards/'+hazardManifest.mushroomTrail.texture);
    const entityActors=data.entities.filter(e=>e.classname==='AdamAnyActor');
    await Promise.all(entityActors.map(async e=>{
      const actor=await this.makeActor(e.ActorFileName,{entity:e,deferTextures:true,scale:Number(e.Scale)>0?Number(e.Scale):undefined,rotation:[Number(e.RotateX||0),Number(e.RotateY||0),Number(e.RotateZ||0)]});
      if(actor){
        const animator=actor.userData.animator;
        if(animator){if(e.MotionName)animator.play(e.MotionName);const rate=Number(e.MotionSpeed??1);if(Number.isFinite(rate))animator.timeScale=rate;}
        actor.position.fromArray(point(e));actor.userData.entity=e;actor.visible=e.IsInitiallyEnabled!=='0';this.scene.add(actor);this.actorInstances.set(e['%name%'],actor);
      }
    }));
    this.redcat=await this.makeActor('redcat.act');
    if(this.redcat){this.scene.add(this.redcat);this.redcat.position.fromArray(this.player.position);if(this.redcat.userData.animator)this.redcat.userData.animator.transitionDuration=.25;}
    this.actorTextures.pinRoot(this.redcat);await this.actorTextures.settle();
    const shadowMap=await this.texture(PLAYER_SHADOW_TEXTURE);
    shadowMap.wrapS=shadowMap.wrapT=THREE.ClampToEdgeWrapping;
    this.playerShadow=new PlayerShadow(this,shadowMap);
    this.updateCamera(1,true);await this.geometryStream.settle();return this;
  }
  async loadActor(name) {
    const stem=name?.replace(/^.*[\\/]/,'').replace(/\.act$/i,'').toLowerCase();if(!stem)return null;
    if(this.actorCache.has(stem))return this.actorCache.get(stem);
    const promise=(async()=>{
      const entry=this.actorManifest?.[stem] || this.actorManifest?.actors?.[stem];
      if(!entry)return null;
      const path=typeof entry==='string'?entry:entry.file;
      const data=await json('assets/actors/'+path);
      // The generated index aliases only byte-identical imported render data.
      // Settings, values, clips and materials still belong to this definition.
      // The first concurrent definition to finish can supply the shared body;
      // no fetch of an otherwise-unused canonical actor is needed.
      const geometryKey=this.actorResourceAliases?.geometry?.[stem]||stem;
      const geometries=this.actorGeometryCache??=new Map();let geometry=geometries.get(geometryKey);
      if(!geometry) {
        geometry=this.track(new THREE.BufferGeometry());
        geometry.setAttribute('position',new THREE.Float32BufferAttribute(data.positions,3));
        geometry.setAttribute('normal',new THREE.Float32BufferAttribute(data.normals,3));
        geometry.setAttribute('uv',new THREE.Float32BufferAttribute(data.uvs,2));geometry.setIndex(data.indices);
        data.groups.forEach(g=>geometry.addGroup(g.start,g.count,g.materialIndex));
        geometries.set(geometryKey,geometry);
      }
      // Hekdoor is a closed grate with front/back faces ten units apart.
      // Native actor rendering culls backfaces (0x5cddac–0x5cddf6); showing
      // the rear face through the front's alpha holes draws a second gate.
      const side=['hekdoor','hekdoor_s1'].includes(stem)?THREE.FrontSide:THREE.DoubleSide;
      const materials=data.materials.map(m=>{
        const map=m.texture?this.lazyActorTexture('assets/actors/'+m.texture):null;
        // Actor importer flips V for the conventional Three.js texture origin.
        if(map){map.flipY=true;map.needsUpdate=true;}
        return this.track(new THREE.MeshLambertMaterial({map,color:m.texture?0xffffff:new THREE.Color().setRGB(...m.color,THREE.SRGBColorSpace),side,alphaTest:0.3}));
      });
      return {geometry,materials,data};
    })();
    this.actorCache.set(stem,promise);return promise;
  }
  async makeActor(name,options={}) {
    const template=await this.loadActor(name);if(!template)return null;
    const key=actorOverrideKey(options.entity),entry=this.actorOverrideManifest?.textures[key];
    if(entry) {
      if(!this.actorOverrideMaps.has(key))this.actorOverrideMaps.set(key,this.lazyActorTexture('assets/actor-overrides/'+entry.file));
      options={...options,overrideMap:this.actorOverrideMaps.get(key)};
    }
    const actor=this.instantiateActor(template,options);
    // Explicit ad-hoc/test actors keep makeActor's ready-to-render contract.
    // Campaign actors and fragment prototypes opt into camera residency.
    if(!options.deferTextures)await this.actorTextures.loadRoot(actor);
    return actor;
  }
  instantiateActor(template,options={}) {
    const animated=template.data.animations?.length>0;
    const geometry=animated?this.track(cloneActorPoseGeometry(template.geometry)):template.geometry;
    const materials=template.materials.map(original=>{
      const material=this.track(original.clone());
      if(options.overrideMap){material.map=options.overrideMap;
        material.color.setRGB(...actorOverrideColor(options.entity),THREE.SRGBColorSpace);
        material.transparent=true;material.alphaTest=.01;material.depthWrite=false;}
      return material;
    });
    const root=new THREE.Group(),mesh=new THREE.Mesh(geometry,materials);
    const defaults=template.data.settings || {};
    const rotate=defaults.initialRotationDegrees || [-90,0,0];
    mesh.rotation.set(...rotate.map(v=>v*Math.PI/180));
    const scale=options.scale ?? defaults.scale ?? 1;
    mesh.scale.setScalar(scale);root.add(mesh);
    if(options.rotation)root.rotation.set(...options.rotation.map(v=>v*Math.PI/180),'ZYX');
    root.userData.template=template;root.userData.mesh=mesh;
    mesh.userData.actorLighting=createActorLighting(defaults);
    // These actors have buried lighting origins. Reuse a floor sample
    // inside their own bounds only if the root starts solid; successful dark
    // samples, placement, collision and Sun visibility remain unchanged.
    // Castle StandingEnemy knights remain one unit below their floor even
    // during combat; unlike moving enemies, they never settle above it.
    const source=template.data.source?.toLowerCase(),actorClass=options.entity?.classname;
    if((actorClass==='AdamAnyActor'&&BURIED_DECORATIVE_ACTORS.has(source))||(actorClass==='StandingEnemy'&&source==='knight.act'))
      mesh.userData.actorLighting.floorRecoveryBounds=new Float64Array(6);
    for(const material of materials)applyActorLighting(material,mesh.userData.actorLighting);
    if(animated) {
      const animator=new ActorAnimator(template.data,geometry);
      // Native AdamAnyActor leaves a blank MotionName in the bind pose. The
      // hand-torch exception preserves our requested animation enhancement.
      const authored=options.entity?.classname==='AdamAnyActor';
      if(!authored||options.entity.MotionName||source==='htorch.act') {
        animator.play(authored&&options.entity.MotionName||'idle')||animator.play(template.data.animations[0].name);
      }
      root.userData.animator=animator;
    }
    if(!geometry.boundingBox)geometry.computeBoundingBox();
    // AdamActor caches its lighting bounds at setup. Breathing or a death
    // pose must not move the Sun reference or retrigger stationary searches.
    mesh.userData.actorLighting.bounds=geometry.boundingBox.clone();
    return root;
  }
  async attachGameplay(gameplay) {
    this.gameplay=gameplay;
    // Cache door references once per level so current closed state is checked
    // without scanning gameplay objects during movement. Shifted warehouse
    // crates also use DoorModel, but are commanded open before the fall.
    this.player.recoveryDoors=new Map(gameplay.objects.filter(o=>o.kind==='door'&&o.modelIndex!==undefined).map(o=>[o.modelIndex,o]));
    // Read the live controller flag, including restored saves and blocked exits.
    gameplay.isPlayerInvulnerable=()=>this.player.noClip===true;
    // Route topology uses stationary world geometry. Doors are tested by the
    // movement sweep instead: opening one must not require reloading a save
    // to discover a link rejected while the door was closed.
    gameplay.navigation?.build((a,b)=>this.collider.trace(a,b,[0,0,0],[0,0,0],[0]).fraction>.98);
    await Promise.all(gameplay.objects.map(async obj=>{
      const e=obj.entity;if(!e)return;
      if(this.actorInstances.has(obj.id)){
        if(obj.kind==='actor'){
          const actor=this.actorInstances.get(obj.id);this.configureDestructible(obj,actor);
          this.configureExplosionTarget(obj,actor);
          this.registerActorCollision(obj,actor);
        }
        return;
      }
      if(e.classname==='DoorModel' && obj.open&&!obj.hasMotion)this.setModel(obj.modelIndex,false);
      let name=obj.actor || obj.actorFile;
      if(!name && obj.kind==='pickup')name={ItemCoin:['imoneys','imoneym','imoneyl'][Math.max(0,Math.min(2,Number(e.Type)-1))],ItemHealth:['ihealths','ihealthm','ihealthl'][Math.max(0,Math.min(2,Number(e.Type)-1))],ItemPotion:'ipotion',ItemMirror:'imirror',ItemLife:'ilife',ItemHart:'hartcontainer',ItemHartContainer:'hartcontainer'}[e.classname];
      if(!name)return;
      const actor=await this.makeActor(name,{entity:e,deferTextures:true,scale:Number(e.Scale)>0?Number(e.Scale):undefined});
      if(actor){
        if(isGhostEnemy(obj)) {
          this.ghostBodyMap??=this.lazyActorTexture('assets/ghosts/ghost.png');
          actor.userData.mesh.material=ghostMaterials(actor.userData.mesh.material,this.ghostBodyMap,obj.variant,material=>this.track(material));
        }
        actor.position.fromArray(gameplay.objectPosition(obj));actor.visible=actorVisible(obj,gameplay.time);this.scene.add(actor);this.actorInstances.set(obj.id,actor);
        if(obj.kind==='actor')this.configureDestructible(obj,actor);
        if(obj.kind==='actor'||obj.kind==='enemy')this.configureExplosionTarget(obj,actor);
        if(obj.kind==='enemy') {
          if(actor.userData.animator) {
            const stateAnimator=new ActorStateAnimator(actor.userData.animator,obj.stats);
            actor.userData.stateAnimator=stateAnimator;obj.animationDurations={...stateAnimator.durations};
            obj.animationSnapshot=()=>stateAnimator.snapshot();
          }
          obj.projectileOrigins=()=>this.enemyProjectileOrigins(obj,actor);
          obj.recoverySafePosition=position=>{
            const mins=obj.collisionMins||[-12,0,-12],maxs=obj.collisionMaxs||[12,45,12];
            if(this.collider.contents(position,mins,maxs,this.physicalModels)&0x60000)return false;
            const overlaps=(p,lo,hi)=>position.every((v,i)=>v+maxs[i]+2>p[i]+lo[i]&&v+mins[i]-2<p[i]+hi[i]);
            if(overlaps(this.player.position,this.player.mins,this.player.maxs))return false;
            return !gameplay.objects.some(other=>other!==obj&&other.kind==='enemy'&&other.enabled&&other.visible&&other.health>0&&
              overlaps(other.position,other.collisionMins||[-12,0,-12],other.collisionMaxs||[12,45,12]));
          };
          obj.rewardPosition=()=>{
            // Evaluate once at defeat, before the death animation changes
            // the pose. Avoid a per-frame actor-bound scan for score effects.
            actor.position.fromArray(gameplay.objectPosition(obj));
            if(obj.yaw!==undefined)actor.rotation.y=obj.yaw;
            if(obj.rotation)actor.rotation.fromArray(obj.rotation);
            actor.userData.animator?.flushGeometry?.();
            const mesh=actor.userData.mesh;actor.updateWorldMatrix(true,true);mesh.geometry.computeBoundingBox();
            return mesh.geometry.boundingBox.getCenter(new THREE.Vector3()).applyMatrix4(mesh.matrixWorld).toArray();
          };
          // Rest-pose feet are at the actor origin. Use its imported dimensions
          // for body height, with a narrow movement hull so long legs and spears
          // do not prevent crossing the original level's doorways.
          const mesh=actor.userData.mesh;mesh.updateMatrix();mesh.geometry.computeBoundingBox();
          const bounds=mesh.geometry.boundingBox.clone().applyMatrix4(mesh.matrix);
          const radius=Math.max(12,Math.min(24,Math.max(Math.abs(bounds.min.x),Math.abs(bounds.max.x),Math.abs(bounds.min.z),Math.abs(bounds.max.z))));
          obj.collisionMins=[-radius,0,-radius];obj.collisionMaxs=[radius,Math.max(16,bounds.max.y),radius];
          if(obj.enemyType==='bat') {
            // A spread-wing animation is not the flight body: the square
            // wing hull embedded yellow bats in their authored wall alcoves.
            const rest=actor.userData.template.data.bounds;
            const body=new THREE.Box3(new THREE.Vector3(...rest.min),new THREE.Vector3(...rest.max)).applyMatrix4(mesh.matrix);
            obj.collisionMins=body.min.toArray();obj.collisionMaxs=body.max.toArray();
          }
          if(obj.enemyType==='spider') {
            placeSpider(gameplay,obj,(a,b,mins,maxs)=>this.collider.trace(a,b,mins,maxs,this.physicalModels,null));
            actor.position.fromArray(obj.position);
          }
          if(obj.enemyType==='maxd') {
            // The generic square body hull protrudes beyond the narrow
            // crate. Refine pellet hits against Max's current pose so that
            // invisible hull corners cannot be hit through its cover.
            obj.projectileNarrowPhase=(start,end,radius)=>{
              const record=this.actorCollisionRecord(obj,actor,{canBeShot:true});
              const hit=traceActors([record],start,end,[-radius,-radius,-radius],[radius,radius,radius],{fraction:1,startSolid:false},'canBeShot');
              return hit.fraction<1?hit.fraction:null;
            };
            const parts=await Promise.all(['turbot','turtop','brcrate'].map(name=>this.makeActor(name,{deferTextures:true,scale:Number(obj.stats.MachineScale)||1.4})));
            // These auxiliary actors have no per-actor INI rotation. Their
            // source vertices use Z-up, just like Max's body and the crate.
            for(const part of parts.slice(0,2))if(part)part.userData.mesh.rotation.x=-Math.PI/2;
            if(parts[2]){const scale=Number(obj.stats.MachineScale)||1.4;parts[2].userData.mesh.scale.set(scale*.6,scale*.6,scale*1.7);}
            const machine=new THREE.Group();for(const part of parts)if(part)machine.add(part);
            machine.position.fromArray(obj.boss.home);this.scene.add(machine);
            // The assembly shares the boss's health: a player pellet hitting
            // any turret part now damages Max, as requested for this remake.
            // His own ammunition still excludes its source assembly.
            const shields=[parts[0],parts[2]].filter(Boolean);
            this.bossMachines.set(obj.id,{root:machine,top:parts[1],shields,serial:-1});
            if(parts[1]?.userData.animator) {
              parts[1].userData.animator.transitionDuration=.25;
              obj.machineAnimationSnapshot=()=>({serial:this.bossMachines.get(obj.id).serial,pose:parts[1].userData.animator.snapshot()});
            }
            for(const part of shields)this.registerActorCollision(obj,part,{blocksPlayer:true,canBeShot:true,blocksLOS:false});
            if(parts[1])this.registerActorCollision(obj,parts[1],{blocksPlayer:true,canBeShot:true,blocksLOS:false});
            obj.machineDurations=Object.fromEntries((parts[1]?.userData.template.data.animations||[]).map(clip=>[clip.name,clip.duration]));
          }
        }
      }
    }));
    // Settle all pickups once, after their possible supporting props exist.
    // Use initial BSP poses and authored prop visibility even when resuming a
    // save in which a crate was destroyed or a supporting platform has moved.
    const placementCollider=new BspCollider(this.level.collision);
    placementCollider.actors=gameplay.objects.filter(obj=>obj.kind==='actor').flatMap(obj=>{
      const record=this.actorInstances.get(obj.id)?.userData.collisionRecord;
      return record?[{...record,active:()=>obj.entity.IsInitiallyEnabled!=='0'}]:[];
    });
    for(const obj of gameplay.objects)if(obj.kind==='pickup') {
      const actor=this.actorInstances.get(obj.id);if(!actor)continue;
      obj.pickupPlacement=pickupPlacement(point(obj.entity),pickupBounds(actor.userData.template.data,obj.entity),
        (start,end,mins,maxs)=>placementCollider.trace(start,end,mins,maxs,this.physicalModels));
      actor.position.fromArray(gameplay.objectPosition(obj));
    }
    if(gameplay.objects.some(obj=>obj.kind==='enemy'&&obj.actorFile==='knight')) {
      this.knightParts=await Promise.all(KNIGHT_PARTS.map(name=>this.loadActor(name)));
      if(this.knightParts.every(Boolean))this.prepareKnightRenderPool();
    }
    // Level objects and actor instances are created once, before play starts.
    // Keep the authored iteration order, including disabled actors, without
    // looking up every waypoint, script command and trigger every frame.
    this.actorObjectPairs=gameplay.objects.flatMap(object=>{
      const actor=this.actorInstances.get(object.id);return actor?[[object,actor]]:[];
    });
    this.mountedActorPairs=this.actorObjectPairs.filter(([object])=>object.kind==='actor'&&object.modelIndex!==undefined);
    this.actorRoots=[...this.actorInstances.values(),...Array.from(this.bossMachines.values(),machine=>machine.root)];
    this.knightTextureSources=this.actorObjectPairs.filter(([object])=>object.enemyType==='knight').map(([,actor])=>actor);
    this.syncModels();
    // Saved player coordinates are restored before effects are constructed,
    // while the final camera is restored afterward. Warm fragment cohorts in
    // that restored room instead of using the level's old spawn neighborhood.
    this.geometryStream?.rooms?.update(this.camera,{playerOnly:true});
    if(this.level)this.effects=await WorldEffects.create(this,gameplay);
    // Build exact lighting query indices during loading. A burst of new
    // fragments must not pay that one-time cost on its first visible frame.
    this.actorFloorLighting?.prepare?.();this.actorLightVisibility?.prepare?.();
    this.collider.traceModelIndices?.(this.physicalModels,[0,0,0],[0,0,0]);
    this.actorResidency=new ActorRenderResidency({scene:this.scene,protectedRoots:[this.redcat],
      nearDistance:WORLD_STREAMING.preloadRadius,retainDistance:WORLD_STREAMING.retainRadius,viewDistance:WORLD_STREAMING.viewRadius,
      boundsVisible:box=>this.geometryStream.boundsVisible(box),boundsAllowed:box=>this.geometryStream.roomBoundsAllowed(box),boundsRequired:box=>this.geometryStream.roomBoundsRequired(box),boundsPreload:box=>this.geometryStream.roomBoundsPreload(box),preloadPosition:()=>this.geometryStream.preloadPosition,textures:this.actorTextures,preparation:this.streamingGpu});
    this.updateRenderResidency();
  }
  configureDestructible(object,actor) {
    object.actorSettings=actor.userData.template?.data.settings||{};
    // Saves retain the prop limit and accumulated damage; older saves supply
    // a remaining-health limit. Only a fresh prop receives the INI threshold.
    if(!object.restoredHealth&&object.health>0){
      const thresholds=object.actorSettings.damageThreshold||[object.health,object.health];
      object.health=(thresholds[0]+thresholds[1])/2;
    }
    let pendingBounds=null;
    object.effectPosition=()=>{
      actor.userData.animator?.flushGeometry?.();
      actor.updateWorldMatrix(true,true);
      const box=new THREE.Box3().setFromObject(actor),position=box.getCenter(new THREE.Vector3()).toArray(),mesh=actor.userData.mesh;
      // destroy() asks for the centre and its relative bounds consecutively.
      // Reuse that posed box only for the same centre and unchanged simple
      // actor; arbitrary compound/mutated actors keep the full query below.
      pendingBounds=actor.boundingBox===undefined&&actor.children.length===1&&actor.children[0]===mesh&&
        mesh.isMesh&&!mesh.isSkinnedMesh&&!mesh.isInstancedMesh&&!mesh.children.length&&mesh.boundingBox===undefined?
        {position,box,geometry:mesh.geometry,version:mesh.geometry.attributes.position?.version,
          matrix:[...mesh.matrixWorld.elements],bounds:mesh.geometry.boundingBox?[...mesh.geometry.boundingBox.min.toArray(),...mesh.geometry.boundingBox.max.toArray()]:null}:null;
      return position;
    };
    object.effectBounds=position=>{
      actor.userData.animator?.flushGeometry?.();
      actor.updateWorldMatrix(true,true);
      const pending=pendingBounds,mesh=actor.userData.mesh;pendingBounds=null;
      const local=mesh?.geometry?.boundingBox;
      const same=pending?.position===position&&actor.boundingBox===undefined&&actor.children.length===1&&actor.children[0]===mesh&&mesh.boundingBox===undefined&&!mesh.children.length&&
        pending.geometry===mesh.geometry&&pending.version===mesh.geometry.attributes.position?.version&&
        pending.matrix.every((v,i)=>v===mesh.matrixWorld.elements[i])&&pending.bounds&&local&&
        pending.bounds[0]===local.min.x&&pending.bounds[1]===local.min.y&&pending.bounds[2]===local.min.z&&
        pending.bounds[3]===local.max.x&&pending.bounds[4]===local.max.y&&pending.bounds[5]===local.max.z;
      const box=same?pending.box:new THREE.Box3().setFromObject(actor),center=new THREE.Vector3().fromArray(position);
      return box.isEmpty()?{min:[0,0,0],max:[0,0,0]}:{min:box.min.sub(center).toArray(),max:box.max.sub(center).toArray()};
    };
    object.effectScale=()=>actor.userData.mesh?.scale.toArray()||[1,1,1];
  }
  configureExplosionTarget(object,actor) {
    const game=this.gameplay;
    object.explosionActive=()=>actorVisible(object,game.time)&&attachedActorVisible(object,game);
    object.explosionMayReach=cell=>{
      const animator=actor.userData.animator,mesh=actor.userData.mesh;
      if(animator?.geometryPending&&animator.geometry===mesh?.geometry&&actor.children.length===1&&actor.children[0]===mesh) {
        const rootScale=Math.max(Math.abs(actor.scale.x),Math.abs(actor.scale.y),Math.abs(actor.scale.z));
        const scale=Math.max(Math.abs(mesh.scale.x),Math.abs(mesh.scale.y),Math.abs(mesh.scale.z))*rootScale;
        // Each box-axis maximum is bounded by the current vertex radius.
        // Thus 3*r encloses the sqrt(3)*norm(maxBBoxAxes) used below, with
        // the same scaled child offset. This is conservative for this exact
        // pose; it needs no animation-wide bounds or deferred vertex upload.
        const radius=3*(animator.conservativePoseRadius?.()??Infinity)*scale+Math.sqrt(3)*mesh.position.length()*rootScale;
        const origin=game.objectPosition(object);
        if(Math.hypot(...origin.map((value,axis)=>value-cell.position[axis]))>cell.radius+radius)return false;
      }
      animator?.flushGeometry?.();
      // The current geometry bound is already updated by pose evaluation.
      // This conservative sphere rejects far actors without updating their
      // world matrices or constructing a posed box. sqrt(3) also encloses
      // the rotated AABB corners used by native radial damage.
      const box=mesh?.geometry.boundingBox;
      if(!box||actor.children.length!==1||actor.children[0]!==mesh)return true;
      const rootScale=Math.max(Math.abs(actor.scale.x),Math.abs(actor.scale.y),Math.abs(actor.scale.z));
      const scale=Math.max(Math.abs(mesh.scale.x),Math.abs(mesh.scale.y),Math.abs(mesh.scale.z))*rootScale;
      const radius=Math.sqrt(3)*(Math.hypot(Math.max(Math.abs(box.min.x),Math.abs(box.max.x)),Math.max(Math.abs(box.min.y),Math.abs(box.max.y)),Math.max(Math.abs(box.min.z),Math.abs(box.max.z)))*scale+mesh.position.length()*rootScale);
      const origin=game.objectPosition(object);
      return Math.hypot(...origin.map((value,axis)=>value-cell.position[axis]))<=cell.radius+radius;
    };
    object.explosionBounds=()=>{
      actor.userData.animator?.flushGeometry?.();
      // Hurt cells use the posed actor box, not the narrower movement hull.
      // Cache within a tick when several nearby crates explode together.
      const cached=actor.userData.explosionBounds,origin=game.objectPosition(object);
      const rotation=object.rotation?.join(',');
      if(cached?.time===game.time&&cached.yaw===object.yaw&&cached.rotation===rotation&&cached.bounds.origin.every((value,axis)=>value===origin[axis]))return cached.bounds;
      actor.position.fromArray(origin);
      if(object.kind==='actor')actorOrientation(object,actor.userData.template?.data.settings||{},game.scripts?.modelTransforms.get(object.modelIndex),actor.quaternion);
      else {
        if(object.yaw!==undefined)actor.rotation.y=object.yaw;
        if(object.rotation)actor.rotation.fromArray(object.rotation);
      }
      actor.updateWorldMatrix(true,true);
      const box=new THREE.Box3().setFromObject(actor),bounds={origin:[...origin],min:box.min.toArray(),max:box.max.toArray()};
      actor.userData.explosionBounds={time:game.time,yaw:object.yaw,rotation,bounds};
      return bounds;
    };
  }
  registerActorCollision(object,actor,overrideFlags={}) {
    const record=this.actorCollisionRecord(object,actor,overrideFlags);
    if(record){
      if(this.collider.actorIndex?.actors!==this.collider.actors)this.collider.actorIndex=new ActorCollisionIndex(this.collider.actors);
      this.collider.actorIndex.add(record);
    }
    return record;
  }
  actorCollisionRecord(object,actor,overrideFlags={}) {
    const flags={...actor.userData.template?.data.settings,...overrideFlags};
    if(!flags.blocksPlayer&&!flags.canBeShot&&!flags.blocksLOS)return;
    const animator=actor.userData.animator;
    // Off-screen props keep exact animation clocks, but need no bone/vertex
    // sampling until a matching nearby collision query reaches their record.
    // Enemies and unsupported geometry retain their existing eager path.
    let deferred=object.kind==='actor'&&animator?.deferGeometry&&animator.geometryPending;
    const poseRadius=deferred?(animator.conservativeAnimationRadius?.()??Infinity):Infinity;
    deferred=deferred&&Number.isFinite(poseRadius);
    if(!deferred)animator?.flushGeometry?.();
    actor.updateWorldMatrix(true,true);
    const mesh=actor.userData.mesh,geometry=mesh.geometry,positions=geometry.attributes.position,index=geometry.index;
    const cached=actor.userData.collisionRecord,matrix=mesh.matrixWorld.elements;
    let sameMatrix=!!cached;
    if(cached)for(let i=0;i<16;i++)if(cached.matrix[i]!==matrix[i]){sameMatrix=false;break;}
    const sameDeferredPose=!deferred||cached?.deferredClip===animator.sampledClip&&cached.deferredTime===animator.sampledTime&&
      cached.deferredTransition===animator.sampledTransition&&cached.deferredWeight===animator.sampledWeight;
    if(cached&&sameMatrix&&cached.positionVersion===positions.version) {
      if(sameDeferredPose)return cached;
      if(deferred&&cached.deferredRadius===poseRadius) {
        // Every pose fits the same conservative envelope. Keep its spatial
        // cells and arrays while invalidating only the exact narrow phase.
        cached.dirty=true;cached.deferredClip=animator.sampledClip;cached.deferredTime=animator.sampledTime;
        cached.deferredTransition=animator.sampledTransition;cached.deferredWeight=animator.sampledWeight;
        return cached;
      }
    }
    const record=cached||{};
    if(!cached) {
      // Keep exact posed triangles available to every collision/targeting
      // consumer, but construct them only when a query reaches this actor.
      // Distant animated torches otherwise rebuild hundreds of SAT axes each
      // frame even though every sweep rejects their bounding box.
      let triangles=[],min,max;
      const prepare=()=>{
        if(!record.dirty)return;
        // The grid and caller masks have already rejected distant/irrelevant
        // props. Materialize the pending current pose before the unchanged SAT.
        actor.userData.animator?.flushGeometry?.();
        const vertices=[],point=new THREE.Vector3(),transform=new THREE.Matrix4().fromArray(record.matrix);
        min=[Infinity,Infinity,Infinity];max=[-Infinity,-Infinity,-Infinity];triangles=[];
        for(let i=0;i<positions.count;i++) {
          point.fromBufferAttribute(positions,i).applyMatrix4(transform);
          const vertex=point.toArray();vertices.push(vertex);
          for(let axis=0;axis<3;axis++){min[axis]=Math.min(min[axis],vertex[axis]);max[axis]=Math.max(max[axis],vertex[axis]);}
        }
        for(let i=0;i<(index?.count||positions.count);i+=3) {
          const triangle=triangleCollider([0,1,2].map(j=>vertices[index?index.getX(i+j):i+j]));
          if(triangle)triangles.push(triangle);
        }
        record.positionVersion=positions.version;record.dirty=false;
      };
      Object.defineProperties(record,{
        triangles:{enumerable:true,get(){prepare();return triangles;}},
        min:{enumerable:true,get(){prepare();return min;}},max:{enumerable:true,get(){prepare();return max;}}
      });
    }
    let bounds;
    if(deferred) {
      // A matrix Frobenius norm bounds every current-pose vertex after parent,
      // child and nonuniform scale/shear transforms. Retain an unbounded
      // candidate if an unsupported transform cannot produce finite bounds.
      const scale=Math.hypot(matrix[0],matrix[1],matrix[2],matrix[4],matrix[5],matrix[6],matrix[8],matrix[9],matrix[10]);
      const radius=poseRadius*scale*(1+1e-12)+1e-6;
      bounds=Number.isFinite(radius)&&Number.isFinite(matrix[12])&&Number.isFinite(matrix[13])&&Number.isFinite(matrix[14])?
        new THREE.Box3(new THREE.Vector3(matrix[12]-radius,matrix[13]-radius,matrix[14]-radius),
          new THREE.Vector3(matrix[12]+radius,matrix[13]+radius,matrix[14]+radius)):
        new THREE.Box3(new THREE.Vector3(-Infinity,-Infinity,-Infinity),new THREE.Vector3(Infinity,Infinity,Infinity));
    } else {
      if(!geometry.boundingBox)geometry.computeBoundingBox();
      bounds=new THREE.Box3().copy(geometry.boundingBox).applyMatrix4(mesh.matrixWorld);
    }
    Object.assign(record,{id:object.id,supportModelIndex:object.kind==='actor'?object.modelIndex:undefined,...flags,matrix:[...matrix],positionVersion:positions.version,
      broadphaseMin:bounds.min.toArray(),broadphaseMax:bounds.max.toArray(),dirty:true,
      deferredClip:deferred?animator.sampledClip:null,deferredTime:deferred?animator.sampledTime:NaN,
      deferredTransition:deferred?animator.sampledTransition:null,deferredWeight:deferred?animator.sampledWeight:0,
      deferredRadius:deferred?poseRadius:null,
      active:()=>actorVisible(object,this.gameplay.time)&&(object.kind!=='actor'||attachedActorVisible(object,this.gameplay))&&(object.kind!=='enemy'||object.health>0)});
    actor.userData.collisionRecord=record;
    return record;
  }
  syncModels() {
    this.syncModelStates();
    const host=this.gameplay?.scripts;if(!host)return;
    const poses=host.modelTransforms;
    this.collider.modelTransforms=poses;
    // Script poses are immutable snapshots in the managed map. A paused,
    // distant brush needs no repeated matrix composition or mesh writes;
    // its next actual pose change is still published before movement traces.
    if(this.syncedPoseSource!==poses) {
      this.unsubscribeModelPoses?.();this.unsubscribeModelPoses=null;
      this.syncedPoseSource=poses;this.pendingModelPoses=null;
      if(poses?.subscribe) {
        const pending=this.pendingModelPoses=new Set(poses.keys());
        this.unsubscribeModelPoses=poses.subscribe(index=>pending.add(index));
      }
    }
    if(this.pendingModelPoses&&(this.syncedPoseMeshes!==this.modelMeshes||this.syncedPoseMeshCount!==this.modelMeshes.size)) {
      for(const index of poses.keys())this.pendingModelPoses.add(index);
      this.syncedPoseMeshes=this.modelMeshes;this.syncedPoseMeshCount=this.modelMeshes.size;
    }
    const indices=this.pendingModelPoses||poses.keys();
    if(this.pendingModelPoses&&!this.pendingModelPoses.size)return;
    const origin=new THREE.Vector3(),rotation=new THREE.Quaternion(),offset=new THREE.Vector3();
    for(const index of indices) {
      const t=poses.get(index);if(!t)continue;
      rotation.fromArray(t.rotation);origin.fromArray(t.origin);
      offset.copy(origin).add(new THREE.Vector3(...t.translation)).sub(origin.clone().applyQuaternion(rotation));
      for(const mesh of this.modelMeshes.get(index)||[]){mesh.position.copy(offset);mesh.quaternion.copy(rotation);}
    }
    this.pendingModelPoses?.clear();
  }
  syncActorLighting(lights=[]) {
    // Traversal also reaches mounted machine parts and temporary breakup
    // actors; their INI settings apply just like regular level actors.
    // The ordinary frame just refreshed every residency-managed actor tree.
    // Direct lighting callers still refresh the whole scene, since they may
    // have moved an actor without running residency first.
    if(!this.actorLightingMatricesPrepared)this.scene.updateMatrixWorld();
    this.actorFloorLighting?.beginFrame();this.actorLightVisibility?.beginFrame();
    const position=new THREE.Vector3(),bounds=new THREE.Box3();
    this.scene.traverseVisible(mesh=>{
      const state=mesh.userData.actorLighting;if(!state||this.actorResidency&&!this.actorResidency.isRendered(mesh))return;
      // RedCat and temporary fragments are not owned by actor residency.
      // Fragments may even have been created after that frame's residency
      // update; refresh their current ancestor chain before sampling them.
      // A pooled fragment keeps a static child-local matrix. Its moving
      // parent does not mark that child dirty during an upward-only refresh;
      // force the current world product before sampling light at its origin.
      if(this.actorLightingMatricesPrepared&&!this.actorResidency?.meshRecords?.has(mesh))mesh.updateWorldMatrix(true,false,true);
      // The prepared matrix includes mounted parts and debris transforms;
      // getWorldPosition would walk/update its ancestors again.
      position.setFromMatrixPosition(mesh.matrixWorld);
      const root=position.toArray(),lighting=state.settings.lighting||{};
      if(!mesh.geometry.boundingBox)mesh.geometry.computeBoundingBox();
      state.bounds??=mesh.geometry.boundingBox.clone();
      bounds.copy(state.bounds).applyMatrix4(mesh.matrixWorld);
      const floorBounds=state.floorRecoveryBounds;
      if(floorBounds){bounds.min.toArray(floorBounds,0);bounds.max.toArray(floorBounds,3);}
      // Native Sun updates are actor-dirty, not world-dirty. A remote rolling
      // brush must not re-light every stationary prop in the level each tick.
      // Moving actors still query the current brush/PVS state immediately.
      const sun=lighting.useSun!==false&&!lighting.useDefaultSunOnly?this.actorWorldLighting?.sample(root,bounds.max.y-bounds.min.y,
        (from,to,entity)=>this.actorLightVisibility.visible(from,to,entity),state):null;
      const ambient=lighting.useAmbient!==false?this.actorFloorLighting?.sample(root,lights,state,floorBounds):null;
      updateActorLighting(state,root,this.gameplay?.time||0,lights,{sun,ambient});
      for(const material of Array.isArray(mesh.material)?mesh.material:[mesh.material])applyActorLighting(material,state);
    });
  }
  syncModelStates() {
    if(!this.gameplay?.modelState)return;
    // Native brushes can have collision but zero render faces (for example
    // the rotating cave doorway's hidden lock). Their state still applies.
    const indices=new Set([...this.physicalModels,...this.modelMeshes.keys()]);
    for(const index of indices) {
      if(index===0)continue;
      const state=this.gameplay.modelState(index);if(!state)continue;
      for(const mesh of this.modelMeshes.get(index)||[])mesh.visible=state.visible;
      if(state.solid)this.collider.disabledModels.delete(index);else this.collider.disabledModels.add(index);
    }
  }
  setModel(index,visible) {
    if(index==null || index===0)return;
    this.modelMeshes.get(index)?.forEach(m=>m.visible=visible);
    if(visible)this.collider.disabledModels.delete(index);else this.collider.disabledModels.add(index);
  }
  look(dx,dy){this.cameraControl.look(this,dx,dy);}
  syncMountedActorCollisions() {
    const game=this.gameplay;if(!game)return;
    // Motion timelines advance before player movement and projectile queries.
    // Move their attached collision surfaces at the same point in the frame;
    // animation clocks and enemy state advance once, in syncActors below.
    const mounted=this.mountedActorPairs||game.objects.filter(object=>object.kind==='actor'&&object.modelIndex!==undefined).map(object=>[object,this.actorInstances.get(object.id)]);
    for(const [object,actor] of mounted) {
      if(!actor?.userData.collisionRecord)continue;
      actor.position.fromArray(game.objectPosition(object));
      actorOrientation(object,actor.userData.template?.data.settings||{},game.scripts?.modelTransforms.get(object.modelIndex),actor.quaternion);
      this.registerActorCollision(object,actor);
    }
  }
  enemyProjectileOrigins(object,actor) {
    // Gameplay releases ammunition before the end-of-frame actor update.
    // Sample the current attack clock here, including the first frame after
    // loading, so the shot cannot inherit the previous frame's hand/head pose.
    actor.position.fromArray(this.gameplay.objectPosition(object));
    if(object.yaw!==undefined)actor.rotation.y=object.yaw;
    if(object.rotation)actor.rotation.fromArray(object.rotation);
    const states=actor.userData.stateAnimator,animator=actor.userData.animator;
    if(states&&animator) {
      states.update(object,0,false,this.gameplay.time);
      if(object.animationState==='attack'&&Number.isFinite(object.animationUntil)&&animator.clip) {
        animator.time=Math.max(0,animator.clip.duration-(object.animationUntil-this.gameplay.time)*animator.timeScale);
        animator.update(0);
        actor.userData.projectilePoseTime=this.gameplay.time;
      }
    }
    const machine=this.bossMachines.get(object.id);
    if(machine)this.syncBossMachine(object,machine,false);
    return posedEnemyProjectileOrigins(object,actor,machine);
  }
  syncBossMachine(object,machine,collision=true) {
    machine.root.position.fromArray(object.boss.home);machine.root.rotation.y=object.yaw||0;
    machine.root.visible=object.visible!==false&&object.health>0;
    const animator=machine.top?.userData.animator;
    if(animator) {
      const restart=machine.serial!==object.boss.machineSerial;
      const initial=machine.serial===-1,now=this.gameplay.time;
      const frozen=!!(this.gameplay.scripts?.enemiesFrozen||this.gameplay.scripts?.cutscene);
      const elapsed=!frozen&&Number.isFinite(machine.poseTime)?Math.max(0,now-machine.poseTime):0;
      machine.poseTime=now;
      const saved=object.machinePose;
      const restored=initial&&saved?.serial===object.boss.machineSerial&&
        String(saved.pose?.name).toLowerCase()===String(object.boss.machineMotion).toLowerCase()&&animator.restore(saved.pose);
      if(!restored) {
        const blendDuration=animator.transitionDuration;
        if(initial){animator.transition=null;animator.transitionDuration=0;}
        animator.play(object.boss.machineMotion,object.boss.machineMotion==='still',restart);
        animator.transitionDuration=blendDuration;
        animator.time=object.boss.machineElapsed;animator.update(0,elapsed);
      }
      if(initial)delete object.machinePose;
      machine.serial=object.boss.machineSerial;
    }
    if(collision) {
      for(const part of machine.shields)this.registerActorCollision(object,part,{blocksPlayer:true,canBeShot:true,blocksLOS:false});
      if(machine.top)this.registerActorCollision(object,machine.top,{blocksPlayer:true,canBeShot:true,blocksLOS:false});
    }
  }
  syncActors(dt) {
    const game=this.gameplay;if(!game)return;
    const frozen=!!(game.scripts?.enemiesFrozen||game.scripts?.cutscene);
    const actors=this.actorObjectPairs||game.objects.map(object=>[object,this.actorInstances.get(object.id)]);
    for(const [obj,actor] of actors) {
      if(!actor)continue;
      const corpse=obj.kind==='enemy'&&obj.health===0&&obj.animationState==='death'&&game.time<(obj.corpseUntil??((obj.animationUntil||0)+2));
      actor.visible=actorVisible(obj,game.time);
      if(obj.kind==='enemy')applyEnemyDeathOpacity(actor,enemyDeathOpacity(obj,game.time),material=>this.track(material));
      actor.position.fromArray(game.objectPosition?.(obj)||obj.position);
      if(obj.kind==='actor'||obj.kind==='pickup') {
        obj.actorAge=(obj.actorAge||0)+(obj.enabled?dt:0);
        actorOrientation(obj,actor.userData.template?.data.settings||{},game.scripts?.modelTransforms.get(obj.modelIndex),actor.quaternion);
        actor.visible=actor.visible&&attachedActorVisible(obj,game);
      }
      if(obj.kind==='enemy'&&obj.yaw!==undefined)actor.rotation.y=obj.yaw;
      if(obj.rotation&&obj.kind!=='actor'&&obj.kind!=='pickup')actor.rotation.fromArray(obj.rotation);
      if(corpse&&obj.actorFile==='knight'&&this.knightParts?.every(Boolean)) {
        if(actor.userData.knightDebrisSerial!==obj.animationSerial) {
          actor.userData.knightDebrisSerial=obj.animationSerial;
          // A restored, expired breakup must not throw its parts again.
          if(!Number.isFinite(obj.deathStartedAt)||game.time-obj.deathStartedAt<knightDebrisLifetime(this.knightParts))this.createKnightDebris(obj,actor);
        }
        actor.visible=false;
      }
      if(actor.userData.stateAnimator) {
        // Advance state clocks even off-screen so an attack or death cannot
        // resume from its first frame when the camera returns to the actor.
        const poseWasSampled=actor.userData.projectilePoseTime===game.time;
        actor.userData.animator.deferGeometry=!!this.actorResidency&&!this.actorResidency.isRendered(actor);
        actor.userData.stateAnimator.update(obj,poseWasSampled?0:dt,frozen&&!(corpse&&game.scripts?.cutscene),game.time);
        delete actor.userData.projectilePoseTime;
      } else if(actor.userData.animator) {
        // Advance off-screen clocks too. Rendering may be culled, but a
        // chandelier's or cutscene double's pose must not depend on the camera.
        const animator=actor.userData.animator;
        animator.deferGeometry=!!this.actorResidency&&!this.actorResidency.isRendered(actor);
        animator.time=(obj.actorAge||0)*animator.timeScale;
        if(actor.visible)animator.update(0);
      }
      if(obj.enemyType==='spider')this.syncSpiderWeb(obj,actor);
      if(obj.kind==='actor'&&actor.userData.collisionRecord)this.registerActorCollision(obj,actor);
      const machine=this.bossMachines.get(obj.id);
      if(machine)this.syncBossMachine(obj,machine);
    }
    this.updateEnemyDebris(frozen?0:dt);
  }
  syncSpiderWeb(object,actor) {
    const state=object.ambush,visible=actor.visible&&object.health>0&&['descending','ascending'].includes(state?.phase)&&state.anchor;
    let line=this.spiderWebs.get(object.id);
    if(!visible){if(line)line.visible=false;return;}
    if(!line){
      const geometry=this.track(new THREE.BufferGeometry());
      geometry.setAttribute('position',new THREE.Float32BufferAttribute(new Float32Array(6),3));
      // RcSpiderMoveToStart draws an untextured line (0x40971c–0x409749),
      // rather than using the unrelated static spiderweb.act prop.
      line=new THREE.Line(geometry,this.track(new THREE.LineBasicMaterial({color:0x0a0a0a})));
      this.scene.add(line);this.spiderWebs.set(object.id,line);
    }
    const positions=line.geometry.attributes.position;
    positions.setXYZ(0,...state.anchor);
    positions.setXYZ(1,object.position[0],object.position[1]+(object.collisionMaxs?.[1]||24)*.6,object.position[2]);
    positions.needsUpdate=true;line.geometry.computeBoundingSphere();line.visible=true;
  }
  prepareKnightRenderPool() {
    if(this.knightRenderPool)return;
    this.knightPartActors=this.knightParts.map(template=>this.instantiateActor(template));
    this.knightTextureResources=new Set(this.knightPartActors.flatMap(prototype=>[...this.actorTextures?.prepareRoot(prototype).resources||[]]));
    this.knightRenderPool=new DebrisRenderPool(this,{opaqueUntilFade:true});
    this.knightRenderPool.prewarm(this.knightPartActors.map(prototype=>({prototype,count:3})),27);
  }
  createKnightDebris(object,actor) {
    this.enemyDebris??=new Map();
    this.prepareKnightRenderPool();
    const scale=actor.userData.mesh.scale.x,settings=actor.userData.template?.data.settings||{};
    const saved=restoreKnightDebrisState(object.knightDebrisState);
    const particles=saved?.particles||createKnightDebrisParticles(object,scale,settings,this.knightParts);
    const parts=particles.map(particle=>{
      const prototype=this.knightPartActors[KNIGHT_PARTS.indexOf(particle.actor)];
      const renderEntry=this.knightRenderPool.acquire(prototype,{scale}),piece=renderEntry.root;
      piece.position.fromArray(particle.position);piece.quaternion.fromArray(particle.orientation);this.scene.add(piece);
      const mesh=piece.userData.mesh,materials=Array.isArray(mesh.material)?mesh.material:[mesh.material];
      return {actor:piece,particle,materials,opacity:materials.map(m=>m.opacity),renderEntry};
    });
    this.enemyDebris.set(object.id,{parts,object,age:saved?.age||0,life:saved?.life??knightDebrisLifetime(this.knightParts)});
    object.knightDebrisSnapshot=()=>snapshotKnightDebrisState(this.enemyDebris.get(object.id));
    delete object.knightDebrisState;
  }
  removeKnightDebrisPart(part) {
    if(part.renderEntry){this.knightRenderPool.release(part.renderEntry,this.gameplay?.time||0);return;}
    this.scene.remove(part.actor);
    for(const material of part.materials){material.dispose();this.resources?.delete(material);}
    const mesh=part.actor.userData.mesh;
    if(mesh.geometry!==part.actor.userData.template?.geometry){mesh.geometry.dispose();this.resources?.delete(mesh.geometry);}
  }
  updateEnemyDebris(dt) {
    if(!this.enemyDebris)return;
    for(const [id,previous] of this.enemyDebris) {
      let debris=previous;
      const object=debris.object,target=Number.isFinite(object?.deathStartedAt)?Math.max(0,this.gameplay.time-object.deathStartedAt):debris.age+Math.max(0,Math.min(.05,dt));
      if(target>=debris.life||object?.health>0) {
        for(const part of debris.parts)this.removeKnightDebrisPart(part);
        this.enemyDebris.delete(id);
        if(object?.health>0)delete this.actorInstances.get(id)?.userData.knightDebrisSerial;
        continue;
      }
      if(target<debris.age-1e-6) {
        for(const part of debris.parts)this.removeKnightDebrisPart(part);
        this.createKnightDebris(object,this.actorInstances.get(id));debris=this.enemyDebris.get(id);
      }
      // New saves resume live positions, spin and contact history directly.
      // Only older saves replay from birth against the available geometry.
      while(debris.age<target-1e-8) {
        const step=Math.min(.05,target-debris.age);debris.age+=step;
        for(let i=debris.parts.length-1;i>=0;i--) {
          const part=debris.parts[i];
          if(!stepNativeDebris(part.particle,step,(start,end,min,max)=>this.collider?.trace(start,end,min,max,this.physicalModels)||{fraction:1,end})){
            this.removeKnightDebrisPart(part);debris.parts.splice(i,1);
          }
        }
      }
      for(const part of debris.parts){
        part.actor.position.fromArray(part.particle.position);part.actor.quaternion.fromArray(part.particle.orientation);
        this.knightRenderPool.setOpacity(part.renderEntry,part.particle.opacity);
        part.materials=part.renderEntry.materials;part.opacity=part.renderEntry.materialOpacity;
      }
      if(!debris.parts.length)this.enemyDebris.delete(id);
    }
    this.knightRenderPool?.trim(this.gameplay?.time||0);
  }
  syncProjectiles() {
    const active=new Set();this.projectileMeshes??=new Map();
    this.camera.updateMatrixWorld();
    for(const projectile of this.gameplay?.projectiles||[]) {
      if(projectile.visualEffect==='gargoyleBlast')continue;
      active.add(projectile.id);let mesh=this.projectileMeshes.get(projectile.id);
      if(!mesh) {
        if(!this.projectileGeometry)this.projectileGeometry=this.track(new THREE.SphereGeometry(1,10,8));
        const key=projectile.kind||'enemyShot';
        const style=this.projectileStyles?.get(key);
        let material;
        if(style?.textures.length) {
          // Independent materials let each projectile animate from its own
          // release time. The original textures remain shared and cached.
          material=this.track(new THREE.SpriteMaterial({map:style.textures[0],color:new THREE.Color(...(style.color||[255,255,255]).map(v=>v/255)),opacity:style.opacity??1,transparent:true,depthWrite:false}));
        } else {
          this.projectileMaterials??=new Map();
          if(!this.projectileMaterials.has(key))this.projectileMaterials.set(key,this.track(new THREE.MeshBasicMaterial({color:({poison:0x95f13f,goo:0x78a82f,bone:0xe6dfbc})[key]||0xfaaf14})));
          material=this.projectileMaterials.get(key);
        }
        mesh=material.isSpriteMaterial?new THREE.Sprite(material):new THREE.Mesh(this.projectileGeometry,material);mesh.userData.projectileId=projectile.id;
        mesh.userData.style=style;
        this.projectileMeshes.set(projectile.id,mesh);this.scene.add(mesh);
      }
      const style=mesh.userData.style;
      const size=style?.size??Math.max(2,projectile.radius||3)*(mesh.isSprite?4:1);
      const scale=style?.nativeScale&&Number.isFinite(projectile.spriteScale)?projectile.spriteScale/style.nativeScale:1;
      mesh.position.fromArray(projectile.position);mesh.scale.set((style?.width??size)*scale,(style?.height??size)*scale,size);
      if(mesh.isSprite) {
        const depth=-mesh.position.clone().applyMatrix4(this.camera.matrixWorldInverse).z;
        const visibility=projectileVisibilityScale(Math.max(mesh.scale.x,mesh.scale.y),depth,this.camera.projectionMatrix.elements[5]);
        mesh.scale.x*=visibility;mesh.scale.y*=visibility;
      }
      if(mesh.isSprite)mesh.material.map=style.textures[projectileAnimationFrame(projectile,style.textures.length)];
    }
    for(const [id,mesh] of this.projectileMeshes)if(!active.has(id)){
      this.scene.remove(mesh);this.projectileMeshes.delete(id);
      if(mesh.isSprite){mesh.material.dispose();this.resources.delete(mesh.material);}
    }
  }
  syncHazards() {
    const active=new Set();this.hazardMeshes??=new Map();
    for(const segment of this.gameplay?.hazards?.segments||[]) {
      active.add(segment.id);let mesh=this.hazardMeshes.get(segment.id);
      if(!mesh) {
        const geometry=this.track(new THREE.BufferGeometry());
        geometry.setAttribute('position',new THREE.Float32BufferAttribute(new Float32Array(12),3));
        geometry.setAttribute('uv',new THREE.Float32BufferAttribute([0,1,0,0,1,1,1,0],2));geometry.setIndex([0,1,2,2,1,3]);
        const material=this.track(new THREE.MeshBasicMaterial({map:this.trailTexture,color:new THREE.Color(...segment.color.map(v=>v/255)),transparent:true,depthWrite:false,side:THREE.DoubleSide}));
        mesh=new THREE.Mesh(geometry,material);mesh.frustumCulled=false;this.scene.add(mesh);this.hazardMeshes.set(segment.id,mesh);
      }
      const a=new THREE.Vector3(...segment.from),b=new THREE.Vector3(...segment.to),direction=b.clone().sub(a);
      // Native ribbon cross product uses camera direction, not a per-segment
      // camera-position vector (0x58785d and 0x587938).
      const view=this.camera.getWorldDirection(new THREE.Vector3());
      const side=new THREE.Vector3().crossVectors(direction,view);
      if(side.lengthSq()<1e-10)side.setFromMatrixColumn(this.camera.matrixWorld,0);
      const depth=-a.clone().add(b).multiplyScalar(.5).applyMatrix4(this.camera.matrixWorldInverse).z;
      const visibility=projectileVisibilityScale(segment.width,depth,this.camera.projectionMatrix.elements[5],'trail');
      side.normalize().multiplyScalar(segment.width*visibility/2);
      const vertices=[a.clone().sub(side),a.clone().add(side),b.clone().sub(side),b.clone().add(side)];
      const position=mesh.geometry.attributes.position;vertices.forEach((v,i)=>position.setXYZ(i,v.x,v.y,v.z));position.needsUpdate=true;
      mesh.material.opacity=trailOpacity(segment);
    }
    for(const [id,mesh] of this.hazardMeshes)if(!active.has(id)) {
      this.scene.remove(mesh);this.hazardMeshes.delete(id);
      for(const resource of [mesh.geometry,mesh.material]){resource.dispose();this.resources.delete(resource);}
    }
  }
  snapshotPlayerAnimation(){return snapshotPlayerAnimation(this.redcat);}
  restorePlayerAnimation(saved){restorePlayerAnimation(this.redcat,saved,this.player);}

  syncPlayer(dt,input) {
    if(!this.redcat)return;
    const game=this.gameplay,host=game?.scripts,animator=this.redcat.userData.animator;
    this.redcat.visible=(this.settings.camera==='third'||!!host?.camera)&&host?.playerVisible!==false;
    this.redcat.position.fromArray(this.player.position);this.redcat.rotation.y=this.yaw+Math.PI;
    if(!animator)return;
    if(host?.cutscene) {
      // Scripted conversations leave RedCat breathing in his ordinary idle
      // pose, even when entered during a jump or a pending shot.
      this.redcat.userData.motionState={};
      this.redcat.userData.reactionPhase=null;
      animator.timeScale=1;animator.play('idle',true);animator.update(dt);return;
    }
    const reaction=playerReactionMotion(game?.playerReaction);
    if(reaction) {
      this.redcat.userData.motionState={};
      this.redcat.userData.reactionPhase=game.playerReaction.phase;
      animator.timeScale=reaction.speed;animator.play(reaction.name,false);
      animator.time=reaction.time;animator.update(0,dt);return;
    }
    const state=this.redcat.userData.motionState||={};
    if(this.redcat.userData.reactionPhase==='respawn')state.respawnIdle=true;
    this.redcat.userData.reactionPhase=null;
    let gap=0;
    if(!this.player.grounded&&!this.player.noClip) {
      const origin=this.player.position,down=[origin[0],origin[1]-1000,origin[2]];
      const floor=this.collider.trace(origin,down,[0,0,0],[0,0,0],this.physicalModels);
      gap=origin[1]-floor.end[1];
    }
    const motion=playerMotion(state,this.player,input,dt,gap);
    // Keep the saved full-clip deadline and weapon cooldown unchanged. Native
    // releases visual priority at 80%, before the shoot1 file itself ends.
    const shotTime=PLAYER_SHOOT_MOTION.duration-((game?.playerAttackUntil||0)-(game?.time||0))*PLAYER_SHOOT_MOTION.rate;
    const shooting=game?.playerAttackUntil>game?.time&&shotTime<PLAYER_SHOOT_MOTION.duration*PLAYER_SHOOT_MOTION.finishFraction;
    if(game?.playerCharge) {
      state.respawnIdle=false;
      animator.timeScale=0;animator.play('shoot1',false);
      animator.time=PLAYER_SHOOT_MOTION.duration*PLAYER_SUPER_CHARGE.holdFraction;animator.update(0,dt);
    } else if(shooting) {
      state.respawnIdle=false;
      const restart=this.redcat.userData.attackSerial!==game.playerAttackSerial;
      this.redcat.userData.attackSerial=game.playerAttackSerial;
      animator.timeScale=PLAYER_SHOOT_MOTION.rate;animator.play('shoot1',false,restart);
      // Derive the pose from the same clock that releases the pellet, including
      // save restoration and cutscene pauses, instead of a held input button.
      animator.time=Math.max(0,shotTime);animator.update(0,dt);
    } else {
      animator.timeScale=motion.speed;animator.play(motion.name,motion.loop);
      if(motion.time!==undefined){animator.time=motion.time;animator.update(0,dt);}
      else animator.update(dt);
    }
  }
  updateTargeting(dt,input) {
    const game=this.gameplay,host=game?.scripts;
    for(const object of game?.objects||[]){
      if(object.kind==='enemy')continue;
      if(object.kind==='actor'){
        // Decorative props can receive damage without belonging to the native
        // aiming list. Only crates opted in by the level need aiming bounds.
        if(!(Number(object.entity?.Targetable)>0&&object.actorSettings?.canBeShot===true))continue;
        const actor=this.actorInstances.get(object.id),record=actor?.userData.collisionRecord;
        object.targetAvailable=!!actor&&actorVisible(object,game.time)&&attachedActorVisible(object,game);
        if(record)object.targetBounds={min:[...record.min],max:[...record.max]};
      }else if(object.kind==='button'&&Number(object.entity?.ShootToSwitch)>0&&object.modelIndex!==undefined){
        object.targetAvailable=game.modelState(object.modelIndex).visible;
        object.targetBounds=transformedTargetBounds(this.level.collision.models[object.modelIndex],host?.modelTransforms.get(object.modelIndex));
      }
    }
    this.targeting.update({time:game?.time||0,objects:game?.objects||[],position:this.player.position,yaw:this.yaw,
      range:Number(game?.settings.game?.Player?.DetectionRange)||480,
      attack:!!input.attack||game?.playerAttackUntil>game?.time,
      enabled:!!game&&game.state.health>0&&!game.completed&&!host?.cutscene&&host?.weaponsEnabled!==false&&!!(game.state.skill&1),
      lineOfSight:(a,b,object)=>{
        const hit=this.collider.trace(a,b,[0,0,0],[0,0,0],this.physicalModels,'blocksLOS');
        // A percentage tolerance can see through walls near distant buttons.
        // Native targeting accepts a clear ray or the selected object's hull.
        return hit.fraction>=1||hit.actorId===object.id||(object.kind!=='enemy'&&object.modelIndex!==undefined&&hit.modelIndex===object.modelIndex);
      }});
    if(this.targeting.locked){
      const target=targetAimPoint(this.targeting.target),dx=target[0]-this.player.position[0],dz=target[2]-this.player.position[2];
      const desired=Math.atan2(-dx,-dz),delta=Math.atan2(Math.sin(desired-this.yaw),Math.cos(desired-this.yaw));
      this.yaw+=delta*(1-Math.exp(-12*dt));
    }
  }
  syncTargetMarker() {
    const target=this.targeting.target,marker=this.targetMarker;
    if(!marker)return;
    marker.visible=!!target&&targetableObject(target)&&!this.gameplay?.scripts?.cutscene;
    if(!marker.visible)return;
    const pose=targetMarkerPose(target,this.camera.position.toArray(),this.elapsed);
    marker.position.fromArray(pose.position);marker.scale.set(pose.width,pose.width,1);
    marker.material.rotation=pose.rotation;marker.material.color.setRGB(...pose.color,THREE.SRGBColorSpace);
  }
  update(dt,input) {
    if(this.geometryStream?.error)throw this.geometryStream.error;
    this.elapsed+=dt;
    const host=this.gameplay?.scripts;
    const before=[...this.player.position];
    this.player.platformVelocity=[0,0,0];
    if(host) {
      this.collider.modelTransforms=host.modelTransforms;
      host.beforeMotionAdvance=(object,motion,from,to)=>{
        const sample=time=>({...motion.sample(time),origin:motion.motion.origin});
        return moveSolidPlayer(this.collider,this.player,object.modelIndex,sample(from),sample(to),{sample,from,to,
          onCarry:delta=>{if(dt>0)for(let i=0;i<3;i++)this.player.platformVelocity[i]+=delta[i]/dt;}});
      };
      host.update(dt);
    }
    this.syncModels();
    this.syncMountedActorCollisions();
    this.cameraControl.sync(this);
    // Hurt is a presentation/weapon reaction, not a freeze of the physics
    // controller. Keep falling, riding platforms and escaping water possible.
    const playerFrozen=host?.cutscene||this.gameplay?.completed||this.gameplay?.playerReaction?.phase==='respawn'||this.gameplay?.state.health<=0;
    if(playerFrozen)input={forward:0,right:0,turn:0,jump:false,attack:false,use:false};
    if(input.turn&&!this.targeting.locked)this.yaw+=input.turn*dt*1.7;
    this.updateTargeting(dt,input);
    this.player.skill=this.gameplay?.state.skill||0;
    this.player.environmentVelocity=!playerFrozen&&this.gameplay?.state.health>0?this.gameplay.environmentVelocity(this.player.position):[0,0,0];
    const stepStart=[...this.player.position];
    if(!playerFrozen)this.player.update(dt,input,this.yaw,this.pitch);
    // Scripted support carrying happened earlier in the frame. Only RedCat's
    // own horizontal step participates in footstep contact feedback.
    this.player.stepDisplacement=playerFrozen||this.player.recoveredThisStep?0:Math.hypot(this.player.position[0]-stepStart[0],this.player.position[2]-stepStart[2]);
    if(!playerFrozen&&this.player.didJump)this.gameplay?.emit('jump',{position:[...this.player.position],kind:this.player.didJump});
    if(!playerFrozen&&this.player.didLand>0)this.gameplay?.emit('land',{position:[...this.player.position],impactSpeed:this.player.didLand});
    if(!this.player.noClip&&this.player.position[1]<this.level.bounds.min[1]-350) {this.player.position=[...this.player.lastSafe];this.player.position[1]+=4;this.player.resetVelocity();this.player.movementRecovery.reset();this.gameplay?.damage?.(2);}
    const p=this.player.position;
    if(this.gameplay){
      const forward=[-Math.sin(this.yaw)*Math.cos(this.pitch),-Math.sin(this.pitch),-Math.cos(this.yaw)*Math.cos(this.pitch)];
      this.gameplay.update(dt,p,{attack:input.attack,use:input.use,forward,touchedModels:this.player.contacts||[],
        previousPlayerPosition:this.player.recoveredThisStep?p:before,
        aimTarget:()=>this.targeting.locked&&targetableObject(this.targeting.target)?targetAimPoint(this.targeting.target):null,
        attackTarget:()=>this.targeting.locked&&targetableObject(this.targeting.target)?this.targeting.target:null,
        environmentContents:this.collider.contents(p,this.player.mins,this.player.maxs,this.physicalModels),
        releaseOrigin:()=>{
          this.syncPlayer(0,input);
          const animator=this.redcat?.userData.animator,mesh=this.redcat?.userData.mesh;
          const index=animator?.data.bones.findIndex(b=>b.name.toLowerCase()==='rchc_bip01 r hand');
          if(index===undefined||index<0||!mesh)return null;
          const bone=animator.transforms[index];
          mesh.updateWorldMatrix(true,false);
          return mesh.localToWorld(new THREE.Vector3(bone[9],bone[10],bone[11])).toArray();
        },
        traceShot:(a,b)=>this.collider.trace(a,b,[0,0,0],[0,0,0],this.physicalModels,'canBeShot'),
        traceBeam:(a,b)=>this.collider.trace(a,b,[0,0,0],[0,0,0],this.physicalModels,null),
        explosionLineOfSight:(a,b)=>this.collider.trace(a,b,[0,0,0],[0,0,0],this.physicalModels,null).fraction===1,
        traceEnemy:(a,b,mins,maxs,object)=>this.collider.trace(a,b,mins,maxs,this.physicalModels,{mask:'blocksPlayer',ignoreId:object?.id}),
        traceProjectile:(a,b,radius=0,projectile)=>this.collider.trace(a,b,[-radius,-radius,-radius],[radius,radius,radius],this.physicalModels,{mask:'canBeShot',ignoreId:projectile?.sourceId}),
        lineOfSight:(a,b)=>this.collider.trace(a,b,[0,0,0],[0,0,0],this.physicalModels,'blocksLOS').fraction>0.98});
      this.syncActors(dt);
      this.syncModelStates();
    }
    this.syncPlayer(dt,input);this.updateCamera(dt);this.syncProjectiles();this.syncTargetMarker();this.syncHazards();this.updateRenderResidency();this.residencyPrepared=true;
    // Effects read managed actor poses and may create unmanaged fragments.
    // Limit matrix reuse to this synchronous call; pause/restore/direct
    // lighting calls must never inherit an earlier frame's preparation.
    this.actorLightingMatricesPrepared=true;
    try{this.effects?.update(dt);}finally{this.actorLightingMatricesPrepared=false;}
    return p;
  }
  updateCamera(dt,snap=false) {
    const scripted=this.cameraControl.sync(this);
    if(this.cameraOccludesPlayer){
      this.cameraOccludesPlayer=false;
      if(this.redcat)this.redcat.visible=(this.settings.camera==='third'||!!scripted)&&this.gameplay?.scripts?.playerVisible!==false;
    }
    if(scripted&&scripted.mode!==0&&scripted.mode!==1) {
      const host=this.gameplay.scripts;
      const route=sampleCameraRoute(scripted.points,host.time-scripted.start);
      const pos=new THREE.Vector3(...(route||scripted.position));
      const target=scripted.target?this.gameplay.find(scripted.target)[0]?.position:null;
      const look=new THREE.Vector3(...(scripted.targetPosition||target||this.player.position));
      if(!scripted.targetPosition&&!target)look.y+=43;
      pos.add(new THREE.Vector3(...scripted.offset));this.camera.position.copy(pos);this.camera.lookAt(look);return;
    }
    const locked=this.targeting.locked&&(!scripted||scripted.mode===1)&&targetableObject(this.targeting.target)?this.targeting.target:null;
    const offsetMode=scripted?.mode===1&&!locked;
    const p=new THREE.Vector3(...this.player.position);p.y+=offsetMode?Math.max(1,scripted.offset[1])*32:this.settings.camera==='first'?51:43;
    const pitch=this.pitch;
    const direction=locked?new THREE.Vector3(...targetDirection(p.toArray(),locked)):new THREE.Vector3(-Math.sin(this.yaw)*Math.cos(pitch),-Math.sin(pitch),-Math.cos(this.yaw)*Math.cos(pitch));
    if(this.settings.camera==='first'&&!offsetMode){this.camera.position.copy(p);this.camera.lookAt(p.clone().add(direction));}
    else {
      const desired=p.clone().addScaledVector(direction,offsetMode?-Math.max(1,scripted.offset[0])*32:-145);desired.y+=13;
      let lift=0;
      if(this.player.noClip)this.camera.position.lerp(desired,snap?1:1-Math.exp(-12*dt));
      else{
        const resolved=resolveThirdPersonCamera({anchor:p.toArray(),desired:desired.toArray(),previous:this.camera.position.toArray(),playerPosition:this.player.position,dt,snap,
          trace:(a,b)=>this.collider.trace(a,b,[-4,-4,-4],[4,4,4],this.physicalModels)});
        this.camera.position.fromArray(resolved.position);lift=resolved.lift;
        this.cameraOccludesPlayer=resolved.hidePlayer;
        if(resolved.hidePlayer&&this.redcat)this.redcat.visible=false;
      }
      this.camera.lookAt(locked?new THREE.Vector3(...targetAimPoint(locked)):p.clone().addScaledVector(direction,80*(1-lift)));
    }
  }
  updateRenderResidency(){
    this.geometryStream?.update();
    this.actorResidency?.update(this.actorRoots||[...this.actorInstances.values(),...Array.from(this.bossMachines.values(),machine=>machine.root)],this.camera,performance.now()/1000);
    if(this.knightTextureResources&&this.knightTextureSources?.some(actor=>this.actorResidency?.isResident(actor)))
      this.actorTextures?.request(this.knightTextureResources);
    // Camera turns and scripted cuts can reveal an actor in this same frame.
    // Resolve its current pose before lighting and renderer submission.
    if(this.actorResidency)for(const actor of this.actorInstances.values())if(this.actorResidency.isRendered(actor))actor.userData.animator?.flushGeometry?.();
  }
  async settleActorTextures(){
    this.updateRenderResidency();this.updateActorTextureResidency();
    await this.actorResidency?.settle();await this.actorTextures?.settle();
    this.updateRenderResidency();this.updateActorTextureResidency();
  }
  async prepareStreamingPrograms(){
    if(!this.renderer.compileAsync)return;
    // Shader variants do not require distant artwork. Compile with one tiny
    // map while the loading screen is up, after actor/world lighting patches
    // are installed. Later room entries reuse these programs and sampler slots.
    const placeholder=new THREE.DataTexture(new Uint8Array([255,255,255,255]),1,1);placeholder.colorSpace=THREE.SRGBColorSpace;
    const changed=[];
    for(const {material}of this.geometryStream?.materials.values()||[])if(!material.map&&material.colorWrite!==false){changed.push(material);material.map=placeholder;material.needsUpdate=true;}
    try{await this.renderer.compileAsync(this.scene,this.camera);}finally{for(const material of changed){material.map=null;material.needsUpdate=true;}placeholder.dispose();}
  }
  updateActorTextureResidency(){
    this.actorTextures?.update(this.camera,{nearDistance:WORLD_STREAMING.preloadRadius,viewDistance:WORLD_STREAMING.viewRadius,
      preloadPosition:this.geometryStream?.preloadPosition,
      boundsAllowed:(position,radius)=>this.geometryStream?.rooms?.sphereAllowed(position,radius)??true,
      boundsRequired:(position,radius)=>this.geometryStream?.rooms?.sphereRequired(position,radius)??true});
  }
  render(renderScene=null){
    if(!this.residencyPrepared)this.updateRenderResidency();this.residencyPrepared=false;
    // Retain the completed frame during an unexpected camera cut until the
    // new view is ready, instead of displaying holes or untextured walls.
    this.updateActorTextureResidency();
    if(this.geometryStream&&!this.geometryStream.readyForView||this.actorResidency?.readyForView===false||this.actorTextures?.readyForView===false)return;
    this.playerShadow?.update();
    if(renderScene)renderScene(this.scene,this.camera);else this.renderer.render(this.scene,this.camera);
  }
  dispose(){this.streamingWork?.dispose();this.streamingGpu?.dispose();this.unsubscribeModelPoses?.();this.playerShadow?.dispose();this.actorResidency?.dispose();this.geometryStream?.dispose();this.effects?.dispose();this.knightRenderPool?.dispose();this.actorTextures?.dispose();for(const resource of this.resources)resource.dispose();this.resources.clear();this.scene.clear();this.enemyDebris?.clear();this.projectileMeshes?.clear();this.hazardMeshes.clear();this.bossMachines.clear();this.spiderWebs.clear();}
}
