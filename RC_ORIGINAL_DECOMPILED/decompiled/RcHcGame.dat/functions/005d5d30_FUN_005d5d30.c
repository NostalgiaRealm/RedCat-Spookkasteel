/*
 * FUN_005d5d30 at 005d5d30
 * undefined FUN_005d5d30(void)
 * Address ranges: 005d5d30-005d5d81
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_005d5d30(void)

{
  DAT_006cf000 = DAT_006cf000 + -1;
  if (DAT_006cf000 == 0) {
    FUN_005d9720(&DAT_006ceff4);
    _DAT_006ceff4 = 0;
    FUN_005d9720(&DAT_006ceff8);
    _DAT_006ceff8 = 0;
    FUN_005d9720(&DAT_006ceffc);
    DAT_006ceffc = 0;
  }
  return 1;
}

