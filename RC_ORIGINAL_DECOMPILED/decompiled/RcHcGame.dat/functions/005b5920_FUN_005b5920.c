/*
 * FUN_005b5920 at 005b5920
 * undefined FUN_005b5920(void)
 * Address ranges: 005b5920-005b59e4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_005b5920(float *param_1,float *param_2)

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
  float fVar10;
  float fVar11;
  
  fVar8 = param_1[1] + param_1[1];
  fVar1 = param_1[1];
  fVar2 = param_1[2];
  fVar3 = param_1[3];
  fVar4 = *param_1;
  fVar9 = param_1[2] + param_1[2];
  fVar5 = param_1[2];
  fVar6 = param_1[3];
  fVar7 = *param_1;
  fVar10 = param_1[3] + param_1[3];
  fVar11 = fVar10 * param_1[3];
  fVar10 = fVar10 * *param_1;
  param_2[0xb] = 0.0;
  param_2[10] = 0.0;
  param_2[9] = 0.0;
  *param_2 = (1.0 - fVar9 * fVar5) - fVar11;
  param_2[1] = fVar8 * fVar2 - fVar10;
  param_2[2] = fVar9 * fVar7 + fVar8 * fVar3;
  param_2[3] = fVar10 + fVar8 * fVar2;
  fVar1 = 1.0 - fVar8 * fVar1;
  param_2[4] = fVar1 - fVar11;
  param_2[5] = fVar9 * fVar6 - fVar8 * fVar4;
  param_2[6] = fVar8 * fVar3 - fVar9 * fVar7;
  param_2[7] = fVar9 * fVar6 + fVar8 * fVar4;
  param_2[8] = fVar1 - fVar9 * fVar5;
  return;
}

