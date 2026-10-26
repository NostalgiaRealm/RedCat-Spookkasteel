/*
 * FUN_004a4d24 at 004a4d24
 * undefined __register FUN_004a4d24(void)
 * Address ranges: 004a4d24-004a4d5c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004a4d24(void)

{
  undefined4 *in_FS_OFFSET;
  bool bVar1;
  undefined4 uStack_10;
  undefined1 *puStack_c;
  undefined1 *puStack_8;
  
  puStack_8 = &stack0xfffffffc;
  puStack_c = &LAB_004a4d5d;
  uStack_10 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_10;
  bVar1 = _DAT_00573a2c == 0;
  _DAT_00573a2c = _DAT_00573a2c + -1;
  if (bVar1) {
    FUN_00403db0(&DAT_00573a28);
    DAT_00573a30 = 0;
  }
  *in_FS_OFFSET = uStack_10;
  return;
}

