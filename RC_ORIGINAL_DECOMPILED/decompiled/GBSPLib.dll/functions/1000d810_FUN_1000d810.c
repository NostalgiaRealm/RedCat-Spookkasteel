/*
 * FUN_1000d810 at 1000d810
 * undefined FUN_1000d810(void)
 * Address ranges: 1000d810-1000d85e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1000d810(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  FUN_100145f0();
  iVar1 = 0;
  if (0 < *param_1) {
    do {
      FUN_10014580(param_2);
      iVar1 = iVar1 + 1;
    } while (iVar1 < *param_1);
  }
  FUN_10014530(1.0 / (float)*param_1);
  return;
}

