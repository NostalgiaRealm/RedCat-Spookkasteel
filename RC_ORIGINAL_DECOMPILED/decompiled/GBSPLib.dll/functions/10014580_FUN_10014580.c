/*
 * FUN_10014580 at 10014580
 * undefined FUN_10014580(void)
 * Address ranges: 10014580-1001459e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10014580(float *param_1,float *param_2,float *param_3)

{
  *param_3 = *param_1 + *param_2;
  param_3[1] = param_1[1] + param_2[1];
  param_3[2] = param_1[2] + param_2[2];
  return;
}

