/*
 * FUN_005b5e20 at 005b5e20
 * undefined FUN_005b5e20(void)
 * Address ranges: 005b5e20-005b5e47
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_005b5e20(float *param_1,float *param_2,float *param_3)

{
  *param_3 = *param_1 + *param_2;
  param_3[1] = param_1[1] + param_2[1];
  param_3[2] = param_1[2] + param_2[2];
  param_3[3] = param_1[3] + param_2[3];
  return;
}

