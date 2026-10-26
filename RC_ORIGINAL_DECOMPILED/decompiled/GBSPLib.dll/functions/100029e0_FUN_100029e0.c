/*
 * FUN_100029e0 at 100029e0
 * undefined FUN_100029e0(void)
 * Address ranges: 100029e0-10002a42
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100029e0(float *param_1,float *param_2)

{
  if ((((ABS(*param_1 - *param_2) < 1e-05) && (ABS(param_1[1] - param_2[1]) < 1e-05)) &&
      (ABS(param_1[2] - param_2[2]) < 1e-05)) && (ABS(param_1[3] - param_2[3]) < 0.01)) {
    return 1;
  }
  return 0;
}

