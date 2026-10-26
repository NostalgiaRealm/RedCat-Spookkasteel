/*
 * FUN_0042d7dc at 0042d7dc
 * undefined __register FUN_0042d7dc(void)
 * Address ranges: 0042d7dc-0042d80c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0042d7dc(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_10;
  undefined1 *puStack_c;
  undefined1 *puStack_8;
  
  puStack_8 = &stack0xfffffffc;
  puStack_c = &LAB_0042d80d;
  uStack_10 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_10;
  _DAT_00573740 = _DAT_00573740 + 1;
  if (_DAT_00573740 == 0) {
    FUN_00403094(DAT_00573744);
  }
  *in_FS_OFFSET = uStack_10;
  return;
}

