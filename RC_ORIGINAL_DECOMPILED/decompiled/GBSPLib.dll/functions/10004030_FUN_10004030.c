/*
 * FUN_10004030 at 10004030
 * undefined FUN_10004030(void)
 * Address ranges: 10004030-10004065
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10004030(int *param_1)

{
  if (param_1 != (int *)0x0) {
    if (*param_1 == -1) {
      FUN_10002830(param_1);
      return;
    }
    FUN_10004030(param_1[4]);
    FUN_10004030(param_1[5]);
    FUN_10002830(param_1);
  }
  return;
}

