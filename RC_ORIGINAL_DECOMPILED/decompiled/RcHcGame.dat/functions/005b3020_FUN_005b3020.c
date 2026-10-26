/*
 * FUN_005b3020 at 005b3020
 * undefined FUN_005b3020(void)
 * Address ranges: 005b3020-005b304a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_005b3020(float *param_1,float *param_2,float param_3,float *param_4)

{
  *param_4 = param_3 * *param_2 + *param_1;
  param_4[1] = param_3 * param_2[1] + param_1[1];
  param_4[2] = param_3 * param_2[2] + param_1[2];
  return;
}

