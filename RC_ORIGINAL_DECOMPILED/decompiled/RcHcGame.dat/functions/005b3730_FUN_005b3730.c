/*
 * FUN_005b3730 at 005b3730
 * undefined FUN_005b3730(void)
 * Address ranges: 005b3730-005b3785
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_005b3730(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = *param_2 - param_1[9];
  fVar3 = param_2[1] - param_1[10];
  fVar2 = param_2[2] - param_1[0xb];
  *param_3 = fVar1 * *param_1 + fVar3 * param_1[3] + fVar2 * param_1[6];
  param_3[1] = fVar1 * param_1[1] + fVar3 * param_1[4] + fVar2 * param_1[7];
  param_3[2] = fVar1 * param_1[2] + fVar3 * param_1[5] + fVar2 * param_1[8];
  return;
}

