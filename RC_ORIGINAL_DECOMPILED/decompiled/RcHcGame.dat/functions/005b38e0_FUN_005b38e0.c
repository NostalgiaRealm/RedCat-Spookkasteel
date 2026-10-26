/*
 * FUN_005b38e0 at 005b38e0
 * undefined FUN_005b38e0(void)
 * Address ranges: 005b38e0-005b3930
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_005b38e0(float *param_1,float *param_2,float *param_3,float *param_4)

{
  *param_1 = -*param_2;
  param_1[3] = -param_2[1];
  param_1[6] = -param_2[2];
  param_1[1] = *param_3;
  param_1[4] = param_3[1];
  param_1[7] = param_3[2];
  param_1[2] = -*param_4;
  param_1[5] = -param_4[1];
  param_1[8] = -param_4[2];
  FUN_005b3070();
  return;
}

