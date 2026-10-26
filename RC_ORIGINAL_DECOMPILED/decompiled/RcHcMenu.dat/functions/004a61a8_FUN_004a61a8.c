/*
 * FUN_004a61a8 at 004a61a8
 * undefined __register FUN_004a61a8(void)
 * Address ranges: 004a61a8-004a61e2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004a61a8(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_10;
  undefined1 *puStack_c;
  undefined1 *puStack_8;
  
  puStack_8 = &stack0xfffffffc;
  puStack_c = &LAB_004a61e3;
  uStack_10 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_10;
  _DAT_00574248 = _DAT_00574248 + 1;
  if (_DAT_00574248 == 0) {
    FUN_00403094(DAT_0057424c);
    FUN_00403094(DAT_00574250);
  }
  *in_FS_OFFSET = uStack_10;
  return;
}

