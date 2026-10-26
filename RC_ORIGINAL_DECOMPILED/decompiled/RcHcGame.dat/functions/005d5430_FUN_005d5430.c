/*
 * FUN_005d5430 at 005d5430
 * undefined FUN_005d5430(void)
 * Address ranges: 005d5430-005d54d9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005d5430(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x18);
  if (iVar1 != 0) {
    if (*(int *)(iVar1 + 0xd5d4) != 0) {
      FUN_005cf400(*(int *)(iVar1 + 0xd5d4));
      *(undefined4 *)(iVar1 + 0xd5d4) = 0;
      _DAT_007203c0 = 0;
    }
    if (*(int *)(iVar1 + 0xd5d0) != 0) {
      FUN_005cf400(*(int *)(iVar1 + 0xd5d0));
      *(undefined4 *)(iVar1 + 0xd5d0) = 0;
      _DAT_007203c0 = 0;
    }
    if (*(int *)(iVar1 + 0xd5d8) != 0) {
      FUN_005cf400(*(int *)(iVar1 + 0xd5d8));
      *(undefined4 *)(iVar1 + 0xd5d8) = 0;
      _DAT_007203c0 = 0;
    }
    if (*(int *)(iVar1 + 0x1d5dc) != 0) {
      FUN_005cf400(*(int *)(iVar1 + 0x1d5dc));
      *(undefined4 *)(iVar1 + 0x1d5dc) = 0;
      _DAT_007203c0 = 0;
    }
    *(undefined4 *)(iVar1 + 0xd5d4) = 0;
    *(undefined4 *)(iVar1 + 0xd5d0) = 0;
    *(undefined4 *)(iVar1 + 0xd5d8) = 0;
    *(undefined4 *)(iVar1 + 0x1d5dc) = 0;
  }
  return;
}

