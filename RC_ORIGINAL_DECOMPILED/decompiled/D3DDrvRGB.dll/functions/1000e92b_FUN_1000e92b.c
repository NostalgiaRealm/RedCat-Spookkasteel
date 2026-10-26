/*
 * FUN_1000e92b at 1000e92b
 * byte __cdecl FUN_1000e92b(uint param_1)
 * Address ranges: 1000e92b-1000e953
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

byte __cdecl FUN_1000e92b(uint param_1)

{
  if (DAT_100ec800 <= param_1) {
    return 0;
  }
  return *(byte *)((&DAT_100ec700)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 0x40;
}

