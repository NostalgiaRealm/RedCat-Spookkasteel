/*
 * FUN_005cd320 at 005cd320
 * undefined FUN_005cd320(void)
 * Address ranges: 005cd320-005cd36b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_005cd320(int param_1)

{
  (**(code **)(*(int *)(param_1 + 4) + 0x2c))();
  if (*(int *)(param_1 + 0x2c) != 0) {
    FUN_005cd320();
  }
  FUN_005cf400(*(undefined4 *)(param_1 + 0x10));
  *(undefined4 *)(param_1 + 0x10) = 0;
  _DAT_007203c0 = 0;
  FUN_005cf400(param_1);
  _DAT_007203c0 = 0;
  return 1;
}

