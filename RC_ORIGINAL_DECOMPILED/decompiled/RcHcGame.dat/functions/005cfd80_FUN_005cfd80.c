/*
 * FUN_005cfd80 at 005cfd80
 * undefined FUN_005cfd80(void)
 * Address ranges: 005cfd80-005cfdbe
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_005cfd80(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x118);
  if (*(int *)(iVar1 + param_2 * 0x8c) != -1) {
    FUN_005cfd80();
  }
  FUN_005cf910(param_1,*(undefined4 *)(iVar1 + param_2 * 0x8c));
  FUN_005cfc10();
  return;
}

