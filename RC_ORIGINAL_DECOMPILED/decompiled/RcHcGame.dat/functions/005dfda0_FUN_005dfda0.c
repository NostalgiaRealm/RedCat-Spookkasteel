/*
 * FUN_005dfda0 at 005dfda0
 * undefined FUN_005dfda0(void)
 * Address ranges: 005dfda0-005dfe09
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_005dfda0(float *param_1,float *param_2,float *param_3)

{
  *param_3 = *param_1 * *param_2;
  param_3[3] = param_1[3] * *param_2;
  param_3[6] = param_1[6] * *param_2;
  param_3[1] = param_1[1] * param_2[1];
  param_3[4] = param_1[4] * param_2[1];
  param_3[7] = param_1[7] * param_2[1];
  param_3[2] = param_1[2] * param_2[2];
  param_3[5] = param_1[5] * param_2[2];
  param_3[8] = param_1[8] * param_2[2];
  param_3[9] = param_1[9];
  param_3[10] = param_1[10];
  param_3[0xb] = param_1[0xb];
  return;
}

