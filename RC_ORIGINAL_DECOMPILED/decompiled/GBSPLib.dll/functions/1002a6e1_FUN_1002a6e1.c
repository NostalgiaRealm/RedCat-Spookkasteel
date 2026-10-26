/*
 * FUN_1002a6e1 at 1002a6e1
 * undefined FUN_1002a6e1(void)
 * Address ranges: 1002a6e1-1002a711
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1002a6e1(undefined4 param_1,int param_2,undefined4 param_3,int *param_4)

{
  do {
    if (param_2 < 1) {
      return;
    }
    param_2 = param_2 + -1;
    FUN_1002a6ac(param_1,param_3,param_4);
  } while (*param_4 != -1);
  return;
}

