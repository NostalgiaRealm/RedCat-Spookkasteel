/*
 * FUN_005d5cb0 at 005d5cb0
 * undefined FUN_005d5cb0(void)
 * Address ranges: 005d5cb0-005d5d23
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_005d5cb0(void)

{
  if (DAT_006cf000 == 0) {
    _DAT_006ceff4 = FUN_005d9680(0xc,0x400,0x400);
    if (_DAT_006ceff4 == 0) {
      return 0;
    }
    _DAT_006ceff8 = FUN_005d9680(8,0x80,0x80);
    if (_DAT_006ceff8 == 0) {
      return 0;
    }
    DAT_006ceffc = FUN_005d9680(0x14,0x80,0x80);
    if (DAT_006ceffc == 0) {
      return 0;
    }
  }
  DAT_006cf000 = DAT_006cf000 + 1;
  return 1;
}

