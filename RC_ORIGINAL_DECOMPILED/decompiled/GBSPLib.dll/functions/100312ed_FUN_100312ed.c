/*
 * FUN_100312ed at 100312ed
 * undefined FUN_100312ed(void)
 * Address ranges: 100312ed-1003132e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100312ed(uint param_1)

{
  undefined4 *puVar1;
  
  if ((param_1 < DAT_1052aac0) &&
     ((*(byte *)((&DAT_1052a9c0)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    return *(undefined4 *)((&DAT_1052a9c0)[(int)param_1 >> 5] + (param_1 & 0x1f) * 0x24);
  }
  puVar1 = (undefined4 *)FUN_1002b3dc();
  *puVar1 = 9;
  puVar1 = (undefined4 *)FUN_1002b3e5();
  *puVar1 = 0;
  return 0xffffffff;
}

