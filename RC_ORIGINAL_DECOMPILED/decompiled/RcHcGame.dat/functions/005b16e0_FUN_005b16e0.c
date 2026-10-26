/*
 * FUN_005b16e0 at 005b16e0
 * undefined FUN_005b16e0(void)
 * Address ranges: 005b16e0-005b1735
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005b16e0(float *param_1,float *param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float10 fVar4;
  float10 fVar5;
  
  fVar4 = (float10)fcos((float10)param_3);
  fVar3 = param_2[1];
  fVar5 = (float10)fsin((float10)param_3);
  fVar1 = param_2[2];
  fVar2 = *param_2;
  *param_1 = (float)(fVar4 * (float10)*param_2 + fVar5 * (float10)param_2[2]);
  param_1[1] = fVar3;
  param_1[2] = (float)(fVar4 * (float10)fVar1 - fVar5 * (float10)fVar2);
  return;
}

