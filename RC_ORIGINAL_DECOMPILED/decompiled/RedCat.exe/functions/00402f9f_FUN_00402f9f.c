/*
 * FUN_00402f9f at 00402f9f
 * byte __cdecl FUN_00402f9f(uint param_1)
 * Address ranges: 00402f9f-00402fc4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

byte __cdecl FUN_00402f9f(uint param_1)

{
  if (DAT_00409480 <= param_1) {
    return 0;
  }
  return *(byte *)((&DAT_00409380)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 8) & 0x40;
}

