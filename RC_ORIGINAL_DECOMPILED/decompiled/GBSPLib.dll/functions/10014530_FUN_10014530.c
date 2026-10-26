/*
 * FUN_10014530 at 10014530
 * undefined FUN_10014530(void)
 * Address ranges: 10014530-1001454e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10014530(float *param_1,float *param_2,float param_3)

{
  *param_2 = param_3 * *param_1;
  param_2[1] = param_3 * param_1[1];
  param_2[2] = param_3 * param_1[2];
  return;
}

