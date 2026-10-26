/*
 * FUN_1001e0cd at 1001e0cd
 * undefined FUN_1001e0cd(void)
 * Address ranges: 1001e0cd-1001e10e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1001e0cd(uint param_1)

{
  undefined4 *puVar1;
  
  if ((param_1 < DAT_1020fd40) &&
     ((*(byte *)((&DAT_1020fc40)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    return *(undefined4 *)((&DAT_1020fc40)[(int)param_1 >> 5] + (param_1 & 0x1f) * 0x24);
  }
  puVar1 = (undefined4 *)FUN_1001df01();
  *puVar1 = 9;
  puVar1 = (undefined4 *)FUN_1001df0a();
  *puVar1 = 0;
  return 0xffffffff;
}

