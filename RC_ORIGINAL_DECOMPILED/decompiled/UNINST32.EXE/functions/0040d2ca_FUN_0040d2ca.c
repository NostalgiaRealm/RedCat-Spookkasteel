/*
 * FUN_0040d2ca at 0040d2ca
 * undefined4 __cdecl FUN_0040d2ca(uint param_1)
 * Address ranges: 0040d2ca-0040d306
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_0040d2ca(uint param_1)

{
  if ((param_1 < DAT_00413f00) &&
     ((*(byte *)((&DAT_00413e00)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 8) & 1) != 0)) {
    return *(undefined4 *)((&DAT_00413e00)[(int)param_1 >> 5] + (param_1 & 0x1f) * 8);
  }
  DAT_004134e8 = 0;
  _DAT_004134e4 = 9;
  return 0xffffffff;
}

