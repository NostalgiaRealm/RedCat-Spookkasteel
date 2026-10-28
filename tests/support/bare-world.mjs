// Helper for unit tests that attach gameplay to a CastleWorld built without a
// renderer, streamed geometry or effect assets.
//
// CastleWorld.attachGameplay reads `level` twice: first for pickup placement
// (it needs `level.collision`), then to decide whether to build WorldEffects,
// which fetches effect artwork. Collision-only tests need the first read but
// not the second, so the level is exposed once and then reported as absent
// until the test assigns `world.level` itself.
export const EMPTY_BSP=Object.freeze({planes:[],nodes:[],leaves:[],leafSides:[],models:[]});

export function prepareBareWorld(world,{level={collision:EMPTY_BSP},physicalModels=[0]}={}) {
  world.player??={};
  world.physicalModels??=physicalModels;
  world.updateRenderResidency=()=>{};
  let read=false;
  Object.defineProperty(world,'level',{configurable:true,
    get(){if(read)return undefined;read=true;return level;},
    set(value){Object.defineProperty(world,'level',{configurable:true,writable:true,enumerable:true,value});}});
  return world;
}
