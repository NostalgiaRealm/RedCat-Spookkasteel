/*
 * FUN_10029c72 at 10029c72
 * undefined FUN_10029c72(void)
 * Address ranges: 10029c72-10029cce
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10029c72(uint param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  if ((param_1 < DAT_1052aac0) &&
     ((*(byte *)((&DAT_1052a9c0)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    FUN_1003132f(param_1);
    uVar1 = FUN_10029ccf(param_1);
    FUN_1003138e(param_1);
    return uVar1;
  }
  puVar2 = (undefined4 *)FUN_1002b3dc();
  *puVar2 = 9;
  puVar2 = (undefined4 *)FUN_1002b3e5();
  *puVar2 = 0;
  return 0xffffffff;
}

