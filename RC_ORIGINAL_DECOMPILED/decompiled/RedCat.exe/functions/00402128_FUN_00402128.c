/*
 * FUN_00402128 at 00402128
 * undefined __cdecl FUN_00402128(uint param_1, int param_2, int * param_3, int * param_4)
 * Address ranges: 00402128-00402158
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_00402128(uint param_1,int param_2,int *param_3,int *param_4)

{
  do {
    if (param_2 < 1) {
      return;
    }
    param_2 = param_2 + -1;
    FUN_004020f3(param_1,param_3,param_4);
  } while (*param_4 != -1);
  return;
}

