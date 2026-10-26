/*
 * FUN_100145a0 at 100145a0
 * undefined FUN_100145a0(void)
 * Address ranges: 100145a0-100145ca
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_100145a0(float *param_1,float *param_2,float param_3,float *param_4)

{
  *param_4 = param_3 * *param_2 + *param_1;
  param_4[1] = param_3 * param_2[1] + param_1[1];
  param_4[2] = param_3 * param_2[2] + param_1[2];
  return;
}

