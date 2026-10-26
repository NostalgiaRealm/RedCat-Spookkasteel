/*
 * FUN_10015cb0 at 10015cb0
 * undefined FUN_10015cb0(void)
 * Address ranges: 10015cb0-10015ced
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10015cb0(undefined4 *param_1,float param_2)

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

