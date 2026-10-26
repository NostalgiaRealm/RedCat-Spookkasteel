/*
 * FUN_1001adb0 at 1001adb0
 * undefined FUN_1001adb0(void)
 * Address ranges: 1001adb0-1001adee
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_1001adb0(int param_1)

{
  if ((*(int *)(param_1 + 0x14) == 1) && (*(int *)(param_1 + 4) != 0)) {
    FUN_10014360(*(int *)(param_1 + 4));
    *(undefined4 *)(param_1 + 4) = 0;
    _DAT_1003fde8 = 0;
  }
  FUN_10014360(param_1);
  _DAT_1003fde8 = 0;
  return;
}

