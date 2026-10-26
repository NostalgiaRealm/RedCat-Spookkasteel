/*
 * FUN_10002b20 at 10002b20
 * undefined __cdecl FUN_10002b20(int param_1, int param_2, undefined4 param_3, undefined4 param_4)
 * Address ranges: 10002b20-10002b4d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_10002b20(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  if (*(int *)(&DAT_1000e87c + param_1 * 4) != param_2) {
    _grTexSource_16(param_1,param_2,param_3,param_4);
    *(int *)(&DAT_1000e87c + param_1 * 4) = param_2;
  }
  return;
}

