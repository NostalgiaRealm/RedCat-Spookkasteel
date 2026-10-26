/*
 * FUN_100094aa at 100094aa
 * undefined __cdecl FUN_100094aa(uint param_1, int param_2, int * param_3, int * param_4)
 * Address ranges: 100094aa-100094da
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_100094aa(uint param_1,int param_2,int *param_3,int *param_4)

{
  do {
    if (param_2 < 1) {
      return;
    }
    param_2 = param_2 + -1;
    FUN_10009475(param_1,param_3,param_4);
  } while (*param_4 != -1);
  return;
}

