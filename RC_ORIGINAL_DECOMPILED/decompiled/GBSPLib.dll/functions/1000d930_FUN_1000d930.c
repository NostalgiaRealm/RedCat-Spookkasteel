/*
 * FUN_1000d930 at 1000d930
 * undefined FUN_1000d930(void)
 * Address ranges: 1000d930-1000d98d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000d930(int param_1)

{
  if (param_1 == 0) {
    (*DAT_1014e35c)(s__WARNING__FreeFace__NULL_Face__10038b88);
    return;
  }
  if (*(int *)(param_1 + 8) != 0) {
    FUN_1000c2e0(*(int *)(param_1 + 8));
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0x2c) != 0) {
    FUN_10014360(*(int *)(param_1 + 0x2c));
    *(undefined4 *)(param_1 + 0x2c) = 0;
    _DAT_1003fde8 = 0;
  }
  *(undefined4 *)(param_1 + 0x2c) = 0;
  FUN_10014360(param_1);
  _DAT_1003fde8 = 0;
  return;
}

