/*
 * FUN_10014450 at 10014450
 * undefined FUN_10014450(void)
 * Address ranges: 10014450-100144a3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_10014450(float *param_1,float *param_2,float param_3)

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

