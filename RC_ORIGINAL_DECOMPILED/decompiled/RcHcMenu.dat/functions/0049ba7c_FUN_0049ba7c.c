/*
 * FUN_0049ba7c at 0049ba7c
 * undefined __register FUN_0049ba7c(void)
 * Address ranges: 0049ba7c-0049bac6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0049ba7c(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_10;
  undefined1 *puStack_c;
  undefined1 *puStack_8;
  
  puStack_8 = &stack0xfffffffc;
  puStack_c = &LAB_0049bac7;
  uStack_10 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_10;
  _DAT_005739e8 = _DAT_005739e8 + 1;
  if (_DAT_005739e8 == 0) {
    FUN_0041f170(&PTR_FUN_0041aa00,(int)&LAB_0049893c);
    FUN_00403094(DAT_005739f0);
    FUN_00403094(DAT_005739ec);
  }
  *in_FS_OFFSET = uStack_10;
  return;
}

