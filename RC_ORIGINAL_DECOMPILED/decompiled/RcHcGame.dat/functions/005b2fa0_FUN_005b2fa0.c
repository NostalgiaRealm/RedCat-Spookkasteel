/*
 * FUN_005b2fa0 at 005b2fa0
 * undefined FUN_005b2fa0(void)
 * Address ranges: 005b2fa0-005b2fbe
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_005b2fa0(float *param_1,float *param_2,float param_3)

{
  *param_2 = param_3 * *param_1;
  param_2[1] = param_3 * param_1[1];
  param_2[2] = param_3 * param_1[2];
  return;
}

