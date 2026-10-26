/*
 * FUN_0061dead at 0061dead
 * undefined FUN_0061dead(void)
 * Address ranges: 0061dead-0061dee9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_0061dead(uint param_1)

{
  if ((param_1 < DAT_00747c60) &&
     ((*(byte *)((&DAT_00747b60)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 8) & 1) != 0)) {
    return *(undefined4 *)((&DAT_00747b60)[(int)param_1 >> 5] + (param_1 & 0x1f) * 8);
  }
  DAT_0070ff9c = 0;
  DAT_0070ff98 = 9;
  return 0xffffffff;
}

