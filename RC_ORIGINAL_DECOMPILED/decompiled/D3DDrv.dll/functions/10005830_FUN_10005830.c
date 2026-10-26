/*
 * FUN_10005830 at 10005830
 * undefined4 __cdecl FUN_10005830(int param_1)
 * Address ranges: 10005830-10005878
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __cdecl FUN_10005830(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 8) != 0) {
    iVar1 = FUN_10004fc0(*(int *)(param_1 + 8));
    if (iVar1 == param_1) {
      return 1;
    }
  }
  iVar1 = FUN_10004f70(*(int *)(param_1 + 4));
  *(int *)(param_1 + 8) = iVar1;
  FUN_10004fb0(iVar1,param_1);
  (**(code **)(*DAT_100274c8 + 0x58))(DAT_100274c8,0x32,0);
  return 0;
}

