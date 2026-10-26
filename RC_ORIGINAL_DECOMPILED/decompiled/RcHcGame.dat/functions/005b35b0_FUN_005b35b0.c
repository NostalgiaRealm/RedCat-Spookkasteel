/*
 * FUN_005b35b0 at 005b35b0
 * undefined FUN_005b35b0(void)
 * Address ranges: 005b35b0-005b3622
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_005b35b0(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = *param_2;
  fVar2 = param_2[1];
  fVar3 = param_2[2];
  *param_3 = fVar1 * *param_1 + fVar2 * param_1[1] + fVar3 * param_1[2];
  param_3[1] = fVar1 * param_1[3] + fVar2 * param_1[4] + fVar3 * param_1[5];
  param_3[2] = fVar1 * param_1[6] + fVar2 * param_1[7] + fVar3 * param_1[8];
  return;
}

