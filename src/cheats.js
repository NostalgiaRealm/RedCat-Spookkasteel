// Optional player conveniences. Inventory grants deliberately do not collect
// level entities or dispatch their scripts: a mirror pickup remains a gateway.
import { playerInventoryLimits } from './player-inventory.js';

export function grantCheatSupplies(game) {
  if(!game?.state)return null;
  const limits=playerInventoryLimits(game.settings);
  const score=Number.isFinite(game.state.score)?Math.max(0,game.state.score):0;
  game.state.mirror=limits.mirrors;
  game.state.potions=limits.potions;
  game.state.score=Math.min(limits.score,score+9000);
  return {mirror:game.state.mirror,potions:game.state.potions,score:game.state.score};
}

export function safeFlightExit(world,position) {
  if(!Array.isArray(position)||position.length!==3||!position.every(Number.isFinite))return false;
  const bounds=world.level?.bounds;
  if(bounds&&position.some((v,i)=>v<bounds.min[i]||v>bounds.max[i]))return false;
  const player=world.player;
  return !world.collider.trace(position,position,player.mins,player.maxs,world.physicalModels).startSolid;
}

export function setNoClip(world,enabled) {
  const player=world.player;
  let returned=false;
  if(!enabled&&player.noClip&&!safeFlightExit(world,player.position)) {
    // Platforms and doors may have moved since lastSafe was recorded. Verify
    // candidates in the current world before restoring ordinary collision.
    const candidates=[player.lastSafe,world.gameplay?.checkpoint?.position,world.level?.spawn?.position];
    let safe=candidates.find(position=>safeFlightExit(world,position));
    if(!safe)for(const position of candidates) {
      if(!Array.isArray(position))continue;
      for(const rise of [1,4,16,32,64]) {
        const lifted=[position[0],position[1]+rise,position[2]];
        if(safeFlightExit(world,lifted)){safe=lifted;break;}
      }
      if(safe)break;
    }
    if(!safe)return {enabled:true,returned:false,blocked:true};
    player.position=[...safe];player.lastSafe=[...safe];returned=true;
  }
  player.noClip=!!enabled;player.resetVelocity();player.grounded=false;player.contacts=new Set();
  player.movementRecovery?.reset();
  return {enabled:player.noClip,returned,blocked:false};
}
