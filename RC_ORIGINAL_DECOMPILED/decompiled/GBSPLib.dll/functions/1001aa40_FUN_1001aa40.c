/*
 * FUN_1001aa40 at 1001aa40
 * undefined FUN_1001aa40(void)
 * Address ranges: 1001aa40-1001aa68
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1001aa40(int param_1)

{
  int iVar1;
  
  FUN_10014ac0();
  iVar1 = param_1 - *(int *)(param_1 + 0x14);
  *(int *)(param_1 + 0x18) = iVar1;
  if (*(int *)(param_1 + 0x1c) < iVar1) {
    *(int *)(param_1 + 0x1c) = iVar1;
  }
  return;
}

