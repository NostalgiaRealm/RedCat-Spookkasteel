/*
 * FUN_10006c31 at 10006c31
 * undefined __cdecl FUN_10006c31(char * param_1, int param_2, int * param_3, int * param_4)
 * Address ranges: 10006c31-10006c68
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_10006c31(char *param_1,int param_2,int *param_3,int *param_4)

{
  char cVar1;
  
  do {
    if (param_2 < 1) {
      return;
    }
    param_2 = param_2 + -1;
    cVar1 = *param_1;
    param_1 = param_1 + 1;
    FUN_10006bcb((int)cVar1,param_3,param_4);
  } while (*param_4 != -1);
  return;
}

