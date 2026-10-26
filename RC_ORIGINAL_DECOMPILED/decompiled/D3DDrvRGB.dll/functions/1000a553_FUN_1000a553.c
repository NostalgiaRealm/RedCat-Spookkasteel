/*
 * FUN_1000a553 at 1000a553
 * undefined __cdecl FUN_1000a553(uint param_1, int param_2, int * param_3, int * param_4)
 * Address ranges: 1000a553-1000a583
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_1000a553(uint param_1,int param_2,int *param_3,int *param_4)

{
  do {
    if (param_2 < 1) {
      return;
    }
    param_2 = param_2 + -1;
    FUN_1000a51e(param_1,param_3,param_4);
  } while (*param_4 != -1);
  return;
}

