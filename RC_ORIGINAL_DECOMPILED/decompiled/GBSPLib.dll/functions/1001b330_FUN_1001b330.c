/*
 * FUN_1001b330 at 1001b330
 * undefined FUN_1001b330(void)
 * Address ranges: 1001b330-1001b35c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_1001b330(undefined4 *param_1)

{
  if ((HANDLE)param_1[1] != (HANDLE)0xffffffff) {
    FindClose((HANDLE)param_1[1]);
  }
  *param_1 = 0;
  FUN_10014360(param_1);
  _DAT_1003fde8 = 0;
  return;
}

