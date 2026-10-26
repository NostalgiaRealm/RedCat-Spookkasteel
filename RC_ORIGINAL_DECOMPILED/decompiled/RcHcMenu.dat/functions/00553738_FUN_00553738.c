/*
 * FUN_00553738 at 00553738
 * undefined __register FUN_00553738(void)
 * Address ranges: 00553738-00553771
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00553738(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_10;
  undefined1 *puStack_c;
  undefined1 *puStack_8;
  
  puStack_8 = &stack0xfffffffc;
  puStack_c = &LAB_00553772;
  uStack_10 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_10;
  _DAT_00574850 = _DAT_00574850 + 1;
  if ((_DAT_00574850 == 0) && (DAT_00574854 != (int *)0x0)) {
    FUN_00403094(DAT_00574854);
  }
  *in_FS_OFFSET = uStack_10;
  return;
}

