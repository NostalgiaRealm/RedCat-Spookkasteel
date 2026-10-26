/*
 * FUN_004580b4 at 004580b4
 * undefined __register FUN_004580b4(void)
 * Address ranges: 004580b4-004580df
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004580b4(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_10;
  undefined1 *puStack_c;
  undefined1 *puStack_8;
  
  puStack_8 = &stack0xfffffffc;
  puStack_c = &LAB_004580e0;
  uStack_10 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_10;
  _DAT_0057386c = _DAT_0057386c + 1;
  if (_DAT_0057386c == 0) {
    FUN_004580a8();
  }
  *in_FS_OFFSET = uStack_10;
  return;
}

