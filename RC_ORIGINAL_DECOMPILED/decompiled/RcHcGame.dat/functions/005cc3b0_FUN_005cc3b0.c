/*
 * FUN_005cc3b0 at 005cc3b0
 * undefined FUN_005cc3b0(void)
 * Address ranges: 005cc3b0-005cc3fb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005cc3b0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    FUN_005cf400(*(int *)(param_1 + 4));
    *(undefined4 *)(param_1 + 4) = 0;
    _DAT_007203c0 = 0;
  }
  if (*(int *)(param_1 + 8) != 0) {
    FUN_005cf400(*(int *)(param_1 + 8));
    *(undefined4 *)(param_1 + 8) = 0;
    _DAT_007203c0 = 0;
  }
  FUN_005cf400(param_1);
  _DAT_007203c0 = 0;
  return;
}

