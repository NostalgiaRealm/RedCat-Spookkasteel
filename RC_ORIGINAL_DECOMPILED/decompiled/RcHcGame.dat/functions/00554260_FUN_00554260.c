/*
 * FUN_00554260 at 00554260
 * undefined FUN_00554260(void)
 * Address ranges: 00554260-00554274
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_00554260(void)

{
  int iVar1;
  
  iVar1 = DAT_006ba77c + 1;
  DAT_006ba77c = iVar1 % 3;
  return iVar1 / 3;
}

