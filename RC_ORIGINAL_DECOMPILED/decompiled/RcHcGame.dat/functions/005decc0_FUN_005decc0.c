/*
 * FUN_005decc0 at 005decc0
 * undefined FUN_005decc0(void)
 * Address ranges: 005decc0-005dece8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_005decc0(int param_1)

{
  int iVar1;
  
  FUN_005cd3f0();
  iVar1 = param_1 - *(int *)(param_1 + 0x14);
  *(int *)(param_1 + 0x18) = iVar1;
  if (*(int *)(param_1 + 0x1c) < iVar1) {
    *(int *)(param_1 + 0x1c) = iVar1;
  }
  return;
}

