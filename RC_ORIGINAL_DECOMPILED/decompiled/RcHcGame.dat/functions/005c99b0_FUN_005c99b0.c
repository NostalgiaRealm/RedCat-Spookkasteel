/*
 * FUN_005c99b0 at 005c99b0
 * undefined FUN_005c99b0(void)
 * Address ranges: 005c99b0-005c9a16
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005c99b0(int param_1)

{
  if (param_1 != 0) {
    FUN_005bbd10(param_1);
    FUN_005d1f10(param_1);
    FUN_005b6040(param_1);
    FUN_005bc340(param_1);
    FUN_005bb9e0(param_1);
    FUN_005bb840(param_1);
    FUN_005cf400(*(undefined4 *)(param_1 + 0x39054));
    *(undefined4 *)(param_1 + 0x39054) = 0;
    _DAT_007203c0 = 0;
    FUN_005d5d30();
    FUN_005cf400(param_1);
    _DAT_007203c0 = 0;
  }
  return;
}

