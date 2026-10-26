/*
 * FUN_005b30f0 at 005b30f0
 * undefined FUN_005b30f0(void)
 * Address ranges: 005b30f0-005b312d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_005b30f0(undefined4 *param_1,float param_2)

{
  float10 fVar1;
  float10 fVar2;
  
  fVar1 = (float10)fcos((float10)param_2);
  *param_1 = 0x3f800000;
  param_1[6] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  fVar2 = (float10)fsin((float10)param_2);
  param_1[4] = (float)fVar1;
  param_1[5] = (float)-fVar2;
  param_1[7] = (float)fVar2;
  param_1[8] = (float)fVar1;
  return;
}

