/*
 * FUN_1001b5e0 at 1001b5e0
 * undefined FUN_1001b5e0(void)
 * Address ranges: 1001b5e0-1001b628
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_1001b5e0(undefined4 *param_1)

{
  if (param_1[4] == 0) {
    CloseHandle((HANDLE)param_1[1]);
  }
  *param_1 = 0;
  FUN_10014360(param_1[2]);
  param_1[2] = 0;
  _DAT_1003fde8 = 0;
  FUN_10014360(param_1);
  _DAT_1003fde8 = 0;
  return;
}

