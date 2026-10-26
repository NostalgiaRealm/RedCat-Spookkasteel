/*
 * FUN_100018a0 at 100018a0
 * undefined __cdecl FUN_100018a0(int param_1, int param_2)
 * Address ranges: 100018a0-100018cb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_100018a0(int param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = DAT_1001bcd0;
  if (param_2 != *(int *)(&DAT_10019f68 + param_1 * 4)) {
    *(int *)(&DAT_10019f68 + param_1 * 4) = param_2;
    (**(code **)(*piVar1 + 0x8c))(piVar1,param_1,param_2);
  }
  return;
}

