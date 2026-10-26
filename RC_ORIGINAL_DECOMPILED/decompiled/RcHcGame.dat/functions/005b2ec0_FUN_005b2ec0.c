/*
 * FUN_005b2ec0 at 005b2ec0
 * undefined FUN_005b2ec0(void)
 * Address ranges: 005b2ec0-005b2f13
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_005b2ec0(float *param_1,float *param_2,float param_3)

{
  if (param_3 < ABS(*param_2 - *param_1)) {
    return 0;
  }
  if (param_3 < ABS(param_2[1] - param_1[1])) {
    return 0;
  }
  if (param_3 < ABS(param_2[2] - param_1[2])) {
    return 0;
  }
  return 1;
}

