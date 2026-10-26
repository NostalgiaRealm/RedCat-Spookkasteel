/*
 * FUN_005d4820 at 005d4820
 * undefined FUN_005d4820(void)
 * Address ranges: 005d4820-005d487b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005d4820(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x18);
  if (iVar1 != 0) {
    if (*(int *)(iVar1 + 0x1c4) != 0) {
      FUN_005cf400(*(int *)(iVar1 + 0x1c4));
      *(undefined4 *)(iVar1 + 0x1c4) = 0;
      _DAT_007203c0 = 0;
    }
    if (*(int *)(iVar1 + 0x1c0) != 0) {
      FUN_005cf400(*(int *)(iVar1 + 0x1c0));
      *(undefined4 *)(iVar1 + 0x1c0) = 0;
      _DAT_007203c0 = 0;
    }
    *(undefined4 *)(iVar1 + 0x1c4) = 0;
    *(undefined4 *)(iVar1 + 0x1c0) = 0;
  }
  return;
}

