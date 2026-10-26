/*
 * FUN_004098d0 at 004098d0
 * undefined FUN_004098d0(void)
 * Address ranges: 004098d0-004098e0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_004098d0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x14) + -1;
  *(int *)(param_1 + 0x14) = iVar1;
  if (iVar1 == 0) {
    FUN_005abfc0(0);
  }
  return;
}

