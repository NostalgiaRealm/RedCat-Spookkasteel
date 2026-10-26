/*
 * FUN_1000c93b at 1000c93b
 * byte __cdecl FUN_1000c93b(uint param_1)
 * Address ranges: 1000c93b-1000c963
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

byte __cdecl FUN_1000c93b(uint param_1)

{
  if (DAT_101c3dc0 <= param_1) {
    return 0;
  }
  return *(byte *)((&DAT_101c3cc0)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 0x40;
}

