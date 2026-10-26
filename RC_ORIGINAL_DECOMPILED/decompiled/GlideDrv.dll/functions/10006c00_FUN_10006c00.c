/*
 * FUN_10006c00 at 10006c00
 * undefined __cdecl FUN_10006c00(uint param_1, int param_2, int * param_3, int * param_4)
 * Address ranges: 10006c00-10006c30
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_10006c00(uint param_1,int param_2,int *param_3,int *param_4)

{
  do {
    if (param_2 < 1) {
      return;
    }
    param_2 = param_2 + -1;
    FUN_10006bcb(param_1,param_3,param_4);
  } while (*param_4 != -1);
  return;
}

