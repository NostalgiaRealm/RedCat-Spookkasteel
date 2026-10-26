/*
 * FUN_005d0bd0 at 005d0bd0
 * undefined FUN_005d0bd0(void)
 * Address ranges: 005d0bd0-005d0c84
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005d0bd0(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar1 = *param_1;
  fVar2 = param_1[1];
  fVar3 = param_1[2];
  fVar4 = param_3[1];
  fVar5 = param_3[2];
  fVar6 = param_3[4];
  fVar7 = param_3[5];
  fVar8 = param_3[7];
  fVar9 = param_3[8];
  *param_2 = fVar1 * *param_3 + fVar2 * param_3[3] + fVar3 * param_3[6];
  param_2[1] = fVar1 * fVar4 + fVar2 * fVar6 + fVar3 * fVar8;
  param_2[2] = fVar1 * fVar5 + fVar2 * fVar7 + fVar3 * fVar9;
  return;
}

