/*
 * FUN_1000828a at 1000828a
 * byte __cdecl FUN_1000828a(uint param_1)
 * Address ranges: 1000828a-100082b2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

byte __cdecl FUN_1000828a(uint param_1)

{
  if (DAT_101f5a80 <= param_1) {
    return 0;
  }
  return *(byte *)((&DAT_101f5980)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 0x40;
}

