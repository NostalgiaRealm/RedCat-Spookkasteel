/*
 * FUN_005c1960 at 005c1960
 * undefined FUN_005c1960(void)
 * Address ranges: 005c1960-005c19ad
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_005c1960(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x68) != 0) {
    return 1;
  }
  iVar1 = FUN_005c6ad0();
  if (iVar1 != 0) {
    return 1;
  }
  iVar1 = FUN_005c6a90();
  if ((iVar1 != 0) && (*(int *)(param_1 + 0x24) != 0)) {
    iVar1 = FUN_005c6ad0();
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}

