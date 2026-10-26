/*
 * FUN_1000a584 at 1000a584
 * undefined __cdecl FUN_1000a584(char * param_1, int param_2, int * param_3, int * param_4)
 * Address ranges: 1000a584-1000a5bb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_1000a584(char *param_1,int param_2,int *param_3,int *param_4)

{
  char cVar1;
  
  do {
    if (param_2 < 1) {
      return;
    }
    param_2 = param_2 + -1;
    cVar1 = *param_1;
    param_1 = param_1 + 1;
    FUN_1000a51e((int)cVar1,param_3,param_4);
  } while (*param_4 != -1);
  return;
}

