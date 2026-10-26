/*
 * FUN_005dfe70 at 005dfe70
 * undefined FUN_005dfe70(void)
 * Address ranges: 005dfe70-005dfedd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_005dfe70(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (*(int *)(iVar1 + 8) != 0) {
    FUN_005cf400(*(int *)(iVar1 + 8));
    _DAT_007203c0 = 0;
    *(undefined4 *)(iVar1 + 8) = 0;
  }
  if (*(int *)(iVar1 + 0x10) != 0) {
    FUN_005cf400(*(int *)(iVar1 + 0x10));
    _DAT_007203c0 = 0;
    *(undefined4 *)(iVar1 + 0x10) = 0;
  }
  if (*(int *)(iVar1 + 0x1c) != 0) {
    FUN_005cf400(*(int *)(iVar1 + 0x1c));
    _DAT_007203c0 = 0;
    *(undefined4 *)(iVar1 + 0x1c) = 0;
  }
  FUN_005cf400(*param_1);
  _DAT_007203c0 = 0;
  *param_1 = 0;
  return;
}

