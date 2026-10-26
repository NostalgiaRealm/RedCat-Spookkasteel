/*
 * FUN_005e05c0 at 005e05c0
 * undefined FUN_005e05c0(void)
 * Address ranges: 005e05c0-005e05fd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_005e05c0(int param_1)

{
  _DAT_0070f8cc = param_1;
  if (param_1 != 0) {
    DAT_0070f8d0 = FUN_00453600();
    _DAT_0070f8d4 = &LAB_005e0670;
    return 1;
  }
  DAT_0070f8d0 = 0;
  _DAT_0070f8d4 = &LAB_005e0690;
  return 1;
}

