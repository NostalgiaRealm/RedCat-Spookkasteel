/*
 * FUN_10001870 at 10001870
 * undefined __cdecl FUN_10001870(int param_1, int param_2)
 * Address ranges: 10001870-1000189b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_10001870(int param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = DAT_100274c8;
  if (param_2 != *(int *)(&DAT_10016ab0 + param_1 * 4)) {
    *(int *)(&DAT_10016ab0 + param_1 * 4) = param_2;
    (**(code **)(*piVar1 + 0x98))(piVar1,param_1,param_2);
  }
  return;
}

