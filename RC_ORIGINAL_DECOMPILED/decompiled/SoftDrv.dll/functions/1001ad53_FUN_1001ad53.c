/*
 * FUN_1001ad53 at 1001ad53
 * undefined FUN_1001ad53(void)
 * Address ranges: 1001ad53-1001ad83
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1001ad53(undefined4 param_1,int param_2,undefined4 param_3,int *param_4)

{
  do {
    if (param_2 < 1) {
      return;
    }
    param_2 = param_2 + -1;
    FUN_1001ad1e(param_1,param_3,param_4);
  } while (*param_4 != -1);
  return;
}

