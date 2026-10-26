/*
 * FUN_1001ad84 at 1001ad84
 * undefined FUN_1001ad84(void)
 * Address ranges: 1001ad84-1001adbb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1001ad84(char *param_1,int param_2,undefined4 param_3,int *param_4)

{
  char cVar1;
  
  do {
    if (param_2 < 1) {
      return;
    }
    param_2 = param_2 + -1;
    cVar1 = *param_1;
    param_1 = param_1 + 1;
    FUN_1001ad1e((int)cVar1,param_3,param_4);
  } while (*param_4 != -1);
  return;
}

