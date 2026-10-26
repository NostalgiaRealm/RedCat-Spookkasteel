/*
 * FUN_005cfdc0 at 005cfdc0
 * undefined FUN_005cfdc0(void)
 * Address ranges: 005cfdc0-005cfdeb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool __fastcall FUN_005cfdc0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0059b230();
  if (iVar1 != 0) {
    iVar1 = FUN_005bd690();
    return iVar1 == *(int *)(param_1 + 4);
  }
  return false;
}

