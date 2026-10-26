/*
 * FUN_1001e2c0 at 1001e2c0
 * undefined FUN_1001e2c0(void)
 * Address ranges: 1001e2c0-1001e2e7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1001e2c0(float *param_1,float *param_2,float *param_3)

{
  *param_3 = *param_1 + *param_2;
  param_3[1] = param_1[1] + param_2[1];
  param_3[2] = param_1[2] + param_2[2];
  param_3[3] = param_1[3] + param_2[3];
  return;
}

