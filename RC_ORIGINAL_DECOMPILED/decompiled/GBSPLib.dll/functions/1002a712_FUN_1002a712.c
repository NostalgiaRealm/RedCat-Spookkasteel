/*
 * FUN_1002a712 at 1002a712
 * undefined FUN_1002a712(void)
 * Address ranges: 1002a712-1002a749
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1002a712(char *param_1,int param_2,undefined4 param_3,int *param_4)

{
  char cVar1;
  
  do {
    if (param_2 < 1) {
      return;
    }
    param_2 = param_2 + -1;
    cVar1 = *param_1;
    param_1 = param_1 + 1;
    FUN_1002a6ac((int)cVar1,param_3,param_4);
  } while (*param_4 != -1);
  return;
}

