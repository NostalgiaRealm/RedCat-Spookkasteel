// CAdamPlayer box (ctor 0x4d57b0, 0x4d5d28-0x4d5d7b): Game.ini [Player]
// BBXSize/BBYSize/BBZSize are scaled by 32 units per metre and centred on
// X/Z; the box spans the feet to BBYSize. The native box origin is the eye
// (EyeHeight*32 above the feet), used by the door/button radius test 0x4d14f0.
// The movement sweep, contents query, trigger containment and model pushes
// all use this one box.
export const UNITS_PER_METRE=32;
export const PLAYER_HALF_WIDTH=.78*UNITS_PER_METRE/2;   // 12.48
export const PLAYER_HEIGHT=1.81*UNITS_PER_METRE;        // 57.92
export const PLAYER_EYE_HEIGHT=1.69*UNITS_PER_METRE;    // 54.08
export const PLAYER_MINS=Object.freeze([-PLAYER_HALF_WIDTH,0,-PLAYER_HALF_WIDTH]);
export const PLAYER_MAXS=Object.freeze([PLAYER_HALF_WIDTH,PLAYER_HEIGHT,PLAYER_HALF_WIDTH]);
// Enemy sight targets the player's box centre (0x49bc80), then retries at
// the centre plus the full box height (0x423ad0-0x423af2).
export const PLAYER_CENTRE_HEIGHT=PLAYER_HEIGHT/2;
