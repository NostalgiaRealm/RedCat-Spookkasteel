/*
 * FUN_10014990 at 10014990
 * undefined FUN_10014990(void)
 * Address ranges: 10014990-100149db
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_10014990(int param_1)

{
  (**(code **)(*(int *)(param_1 + 4) + 0x2c))();
  if (*(int *)(param_1 + 0x2c) != 0) {
    FUN_10014990();
  }
  FUN_10014360(*(undefined4 *)(param_1 + 0x10));
  *(undefined4 *)(param_1 + 0x10) = 0;
  _DAT_1003fde8 = 0;
  FUN_10014360(param_1);
  _DAT_1003fde8 = 0;
  return 1;
}

