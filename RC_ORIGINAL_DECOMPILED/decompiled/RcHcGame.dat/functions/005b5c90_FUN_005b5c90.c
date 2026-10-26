/*
 * FUN_005b5c90 at 005b5c90
 * undefined FUN_005b5c90(void)
 * Address ranges: 005b5c90-005b5d75
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_005b5c90(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar1 = *param_1;
  fVar2 = param_1[1];
  fVar3 = param_1[2];
  fVar4 = param_1[3];
  fVar5 = *param_2;
  fVar6 = param_2[1];
  fVar7 = param_2[2];
  fVar8 = param_2[3];
  *param_3 = ((fVar5 * fVar1 - fVar6 * fVar2) - fVar7 * fVar3) - fVar8 * fVar4;
  param_3[1] = (fVar2 * fVar5 + fVar6 * fVar1 + fVar8 * fVar3) - fVar4 * fVar7;
  param_3[2] = fVar3 * fVar5 + fVar4 * fVar6 + (fVar7 * fVar1 - fVar8 * fVar2);
  param_3[3] = fVar4 * fVar5 + ((fVar8 * fVar1 + fVar7 * fVar2) - fVar3 * fVar6);
  return;
}

