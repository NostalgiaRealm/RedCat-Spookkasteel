/*
 * FUN_0061106f at 0061106f
 * undefined FUN_0061106f(void)
 * Address ranges: 0061106f-0061109f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0061106f(undefined4 param_1,int param_2,undefined4 param_3,int *param_4)

{
  do {
    if (param_2 < 1) {
      return;
    }
    param_2 = param_2 + -1;
    FUN_0061103a(param_1,param_3,param_4);
  } while (*param_4 != -1);
  return;
}

