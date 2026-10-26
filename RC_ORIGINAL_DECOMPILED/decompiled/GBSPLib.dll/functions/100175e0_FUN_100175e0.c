/*
 * FUN_100175e0 at 100175e0
 * undefined FUN_100175e0(void)
 * Address ranges: 100175e0-1001762d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_100175e0(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x68) != 0) {
    return 1;
  }
  iVar1 = FUN_10020410();
  if (iVar1 != 0) {
    return 1;
  }
  iVar1 = FUN_100203f0();
  if ((iVar1 != 0) && (*(int *)(param_1 + 0x24) != 0)) {
    iVar1 = FUN_10020410();
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}

