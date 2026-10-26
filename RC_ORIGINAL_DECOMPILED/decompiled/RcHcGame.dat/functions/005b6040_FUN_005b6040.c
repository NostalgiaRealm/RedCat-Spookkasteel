/*
 * FUN_005b6040 at 005b6040
 * undefined FUN_005b6040(void)
 * Address ranges: 005b6040-005b606d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005b6040(int param_1)

{
  if (*(int *)(param_1 + 0x34ec8) != 0) {
    FUN_005cf400(*(int *)(param_1 + 0x34ec8));
    _DAT_007203c0 = 0;
    *(undefined4 *)(param_1 + 0x34ec8) = 0;
  }
  return;
}

