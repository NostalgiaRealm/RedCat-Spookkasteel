/*
 * FUN_1001ca94 at 1001ca94
 * undefined FUN_1001ca94(void)
 * Address ranges: 1001ca94-1001cabc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

byte FUN_1001ca94(uint param_1)

{
  if (DAT_1020fd40 <= param_1) {
    return 0;
  }
  return *(byte *)((&DAT_1020fc40)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 0x40;
}

