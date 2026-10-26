/*
 * FUN_005b16a0 at 005b16a0
 * undefined FUN_005b16a0(void)
 * Address ranges: 005b16a0-005b16de
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005b16a0(float *param_1,float param_2)

{
  float10 fVar1;
  float10 fVar2;
  
  fVar1 = (float10)fcos((float10)param_2);
  fVar2 = (float10)fsin((float10)param_2);
  *param_1 = (float)fVar1;
  param_1[1] = 0.0;
  param_1[2] = (float)-fVar2;
  return;
}

