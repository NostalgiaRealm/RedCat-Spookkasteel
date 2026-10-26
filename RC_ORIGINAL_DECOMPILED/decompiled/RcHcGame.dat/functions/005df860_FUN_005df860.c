/*
 * FUN_005df860 at 005df860
 * undefined FUN_005df860(void)
 * Address ranges: 005df860-005df8a8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_005df860(undefined4 *param_1)

{
  if (param_1[4] == 0) {
    CloseHandle((HANDLE)param_1[1]);
  }
  *param_1 = 0;
  FUN_005cf400(param_1[2]);
  param_1[2] = 0;
  _DAT_007203c0 = 0;
  FUN_005cf400(param_1);
  _DAT_007203c0 = 0;
  return;
}

