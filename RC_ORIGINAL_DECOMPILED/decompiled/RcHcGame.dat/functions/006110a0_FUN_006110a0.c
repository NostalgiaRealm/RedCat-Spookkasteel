/*
 * FUN_006110a0 at 006110a0
 * undefined FUN_006110a0(void)
 * Address ranges: 006110a0-006110d7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_006110a0(char *param_1,int param_2,undefined4 param_3,int *param_4)

{
  char cVar1;
  
  do {
    if (param_2 < 1) {
      return;
    }
    param_2 = param_2 + -1;
    cVar1 = *param_1;
    param_1 = param_1 + 1;
    FUN_0061103a((int)cVar1,param_3,param_4);
  } while (*param_4 != -1);
  return;
}

