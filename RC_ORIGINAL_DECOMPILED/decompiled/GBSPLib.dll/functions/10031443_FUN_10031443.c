/*
 * FUN_10031443 at 10031443
 * undefined FUN_10031443(void)
 * Address ranges: 10031443-1003146b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

byte FUN_10031443(uint param_1)

{
  if (DAT_1052aac0 <= param_1) {
    return 0;
  }
  return *(byte *)((&DAT_1052a9c0)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 0x40;
}

