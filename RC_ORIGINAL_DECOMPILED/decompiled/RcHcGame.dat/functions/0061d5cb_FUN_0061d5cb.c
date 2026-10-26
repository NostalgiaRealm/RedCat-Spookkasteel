/*
 * FUN_0061d5cb at 0061d5cb
 * undefined FUN_0061d5cb(void)
 * Address ranges: 0061d5cb-0061d5f0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

byte FUN_0061d5cb(uint param_1)

{
  if (DAT_00747c60 <= param_1) {
    return 0;
  }
  return *(byte *)((&DAT_00747b60)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 8) & 0x40;
}

