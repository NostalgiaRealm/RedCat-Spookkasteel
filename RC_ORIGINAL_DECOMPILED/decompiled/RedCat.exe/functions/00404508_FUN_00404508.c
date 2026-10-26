/*
 * FUN_00404508 at 00404508
 * undefined4 __cdecl FUN_00404508(uint param_1)
 * Address ranges: 00404508-00404544
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_00404508(uint param_1)

{
  if ((param_1 < DAT_00409480) &&
     ((*(byte *)((&DAT_00409380)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 8) & 1) != 0)) {
    return *(undefined4 *)((&DAT_00409380)[(int)param_1 >> 5] + (param_1 & 0x1f) * 8);
  }
  _DAT_00407f68 = 0;
  DAT_00407f64 = 9;
  return 0xffffffff;
}

