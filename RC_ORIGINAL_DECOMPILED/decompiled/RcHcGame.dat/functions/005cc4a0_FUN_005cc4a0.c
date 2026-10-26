/*
 * FUN_005cc4a0 at 005cc4a0
 * undefined FUN_005cc4a0(void)
 * Address ranges: 005cc4a0-005cc4d8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005cc4a0(int *param_1)

{
  if (*param_1 != 0) {
    FUN_005cf400(*param_1);
    *param_1 = 0;
    _DAT_007203c0 = 0;
  }
  FUN_005cf400(param_1);
  _DAT_007203c0 = 0;
  return;
}

