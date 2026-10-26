/*
 * FUN_005b3130 at 005b3130
 * undefined FUN_005b3130(void)
 * Address ranges: 005b3130-005b316b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_005b3130(float *param_1,float param_2)

{
  float10 fVar1;
  float10 fVar2;
  
  fVar1 = (float10)fcos((float10)param_2);
  param_1[4] = 1.0;
  param_1[7] = 0.0;
  param_1[5] = 0.0;
  param_1[3] = 0.0;
  param_1[1] = 0.0;
  param_1[0xb] = 0.0;
  param_1[10] = 0.0;
  param_1[9] = 0.0;
  fVar2 = (float10)fsin((float10)param_2);
  *param_1 = (float)fVar1;
  param_1[2] = (float)fVar2;
  param_1[6] = (float)-fVar2;
  param_1[8] = (float)fVar1;
  return;
}

