/*
 * FUN_005b3000 at 005b3000
 * undefined FUN_005b3000(void)
 * Address ranges: 005b3000-005b301e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_005b3000(float *param_1,float *param_2,float *param_3)

{
  *param_3 = *param_1 + *param_2;
  param_3[1] = param_1[1] + param_2[1];
  param_3[2] = param_1[2] + param_2[2];
  return;
}

