/*
 * FUN_1001e440 at 1001e440
 * undefined FUN_1001e440(void)
 * Address ranges: 1001e440-1001e468
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1001e440(float *param_1,float *param_2,float param_3)

{
  *param_2 = param_3 * *param_1;
  param_2[1] = param_3 * param_1[1];
  param_2[2] = param_3 * param_1[2];
  param_2[3] = param_3 * param_1[3];
  return;
}

