/*
 * FUN_005de760 at 005de760
 * undefined FUN_005de760(void)
 * Address ranges: 005de760-005de77c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool __fastcall FUN_005de760(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_005e1e20(*(undefined4 *)(param_1 + 8));
  *(int *)(param_1 + 0xc) = iVar1;
  return iVar1 != 0;
}

