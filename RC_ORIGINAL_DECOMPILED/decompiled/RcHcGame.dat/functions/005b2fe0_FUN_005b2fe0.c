/*
 * FUN_005b2fe0 at 005b2fe0
 * undefined FUN_005b2fe0(void)
 * Address ranges: 005b2fe0-005b2ffe
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_005b2fe0(float *param_1,float *param_2,float *param_3)

{
  *param_3 = *param_1 - *param_2;
  param_3[1] = param_1[1] - param_2[1];
  param_3[2] = param_1[2] - param_2[2];
  return;
}

