/*
 * FUN_0047ef00 at 0047ef00
 * undefined FUN_0047ef00(void)
 * Address ranges: 0047ef00-0047ef6b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

float10 FUN_0047ef00(float param_1,float param_2,float param_3,float param_4,float param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = ABS(param_1 - param_2) * 0.5;
  fVar2 = ABS(param_5 - param_2);
  if (fVar2 <= fVar1) {
    fVar2 = fVar1 - fVar2;
  }
  else {
    fVar2 = fVar2 - fVar1;
  }
  fVar3 = param_3 - (fVar2 / fVar1) * param_3;
  if (0.7 < fVar2 / fVar1) {
    return ((float10)param_3 * (float10)0.2 + (float10)fVar3) * (float10)param_4;
  }
  return (float10)fVar3 * (float10)param_4;
}

