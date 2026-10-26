/*
 * FUN_005df5a0 at 005df5a0
 * undefined FUN_005df5a0(void)
 * Address ranges: 005df5a0-005df5cc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_005df5a0(undefined4 *param_1)

{
  if ((HANDLE)param_1[1] != (HANDLE)0xffffffff) {
    FindClose((HANDLE)param_1[1]);
  }
  *param_1 = 0;
  FUN_005cf400(param_1);
  _DAT_007203c0 = 0;
  return;
}

