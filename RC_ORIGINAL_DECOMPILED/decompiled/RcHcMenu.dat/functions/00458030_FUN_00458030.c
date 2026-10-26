/*
 * FUN_00458030 at 00458030
 * undefined __register FUN_00458030(void)
 * Address ranges: 00458030-0045805b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00458030(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_10;
  undefined1 *puStack_c;
  undefined1 *puStack_8;
  
  puStack_8 = &stack0xfffffffc;
  puStack_c = &LAB_0045805c;
  uStack_10 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_10;
  _DAT_00573864 = _DAT_00573864 + 1;
  if (_DAT_00573864 == 0) {
    FUN_00458024();
  }
  *in_FS_OFFSET = uStack_10;
  return;
}

