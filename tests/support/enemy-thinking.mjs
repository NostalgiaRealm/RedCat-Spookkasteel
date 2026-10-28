// Fixture state for unit tests that start mid-encounter. In the game an enemy
// first thinks on its 14th update, within the think radius, and its state
// logic sees the previous sight test (Gameplay.updateEnemy). These helpers put
// an enemy in the state it has from then on: thinking, with a sight test just
// run against `playerPosition`.
export function thinkingEnemy(game,object,playerPosition=null,lineOfSight=()=>true) {
  object.think={count:0,inRadius:true};
  if(playerPosition)game.testEnemySight(object,playerPosition,lineOfSight);
  return object;
}

export function thinkingEnemies(game,playerPosition=null,lineOfSight=()=>true) {
  for(const object of game.objects)if(object.kind==='enemy')thinkingEnemy(game,object,playerPosition,lineOfSight);
  return game;
}

/**
 * Prime each enemy on its first update, against that update's player position
 * and line of sight, for fixtures that learn them only then. Covers both
 * game.update (all enemies) and direct game.updateEnemy calls.
 */
export function thinkingOnFirstUpdate(game) {
  const primed=new WeakSet(),update=game.update,updateEnemy=game.updateEnemy;
  const prime=(object,playerPosition,lineOfSight)=>{
    if(object.kind!=='enemy'||primed.has(object))return;
    primed.add(object);thinkingEnemy(game,object,playerPosition,lineOfSight||(()=>true));
  };
  game.update=function(dt,playerPosition,options={}) {
    for(const object of game.objects)prime(object,playerPosition,options.lineOfSight);
    return update.call(this,dt,playerPosition,options);
  };
  game.updateEnemy=function(object,dt,playerPosition,lineOfSight,...rest) {
    prime(object,playerPosition,lineOfSight);
    return updateEnemy.call(this,object,dt,playerPosition,lineOfSight,...rest);
  };
  return game;
}
