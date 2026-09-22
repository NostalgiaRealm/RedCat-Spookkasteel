// The native state-6 jump selects the whole jump1 motion at 1.4x. The
// second half of that motion already brings the limbs back down. Its jump
// flag suppresses the separate long-drop motion until the player lands.
export function playerMotion(state,player,input,dt,groundDistance=0) {
  const wasAirborne=state.airborne===true,airborne=!player.grounded&&!player.noClip;
  const gap=Math.max(0,groundDistance),previousGap=state.groundDistance??0;
  state.groundDistance=gap;
  if(!airborne){state.jumping=false;state.falling=false;state.age=0;}
  else {
    if(!wasAirborne){state.age=0;state.jumping=player.velocityY>0;state.falling=false;}
    // 0x4363a0 compares the downward floor probe with its previous value;
    // only a >80-unit increase starts fall1, not a negative Y velocity.
    if(!state.jumping&&!state.falling&&gap-previousGap>80){state.falling=true;state.age=0;}
    state.age=(state.age||0)+Math.max(0,dt);
  }
  state.airborne=airborne;
  if(state.jumping)return {name:'jump1',speed:1.4,loop:false,time:state.age*1.4};
  if(state.falling)return {name:'fall1',speed:1.5,loop:false,time:state.age*1.5};
  return {name:player.noClip?'idle':input.forward>0?'walkfw':input.forward<0?'walkbw':input.right>0?'strafer':input.right<0?'strafel':'idle',speed:1,loop:true};
}
