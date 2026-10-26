/*
 * FUN_004a0c10 at 004a0c10
 * undefined __register FUN_004a0c10(void)
 * Address ranges: 004a0c10-004a0c46
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004a0c10(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_10;
  undefined1 *puStack_c;
  undefined1 *puStack_8;
  
  puStack_8 = &stack0xfffffffc;
  puStack_c = &LAB_004a0c47;
  uStack_10 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_10;
  _DAT_00573a08 = _DAT_00573a08 + 1;
  if (_DAT_00573a08 == 0) {
    FUN_0041f170(&PTR_FUN_0041aa00,(int)&PTR_FUN_0049f730);
  }
  *in_FS_OFFSET = uStack_10;
  return;
}

