/*
 * FUN_004592bc at 004592bc
 * undefined __register FUN_004592bc(void)
 * Address ranges: 004592bc-004592f7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004592bc(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_10;
  undefined1 *puStack_c;
  undefined1 *puStack_8;
  
  puStack_8 = &stack0xfffffffc;
  puStack_c = &LAB_004592f8;
  uStack_10 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_10;
  _DAT_0057387c = _DAT_0057387c + 1;
  if (_DAT_0057387c == 0) {
    FUN_00404878((VARIANTARG *)&PTR_DAT_0056fbe4,&DAT_004010ec,0x40);
  }
  *in_FS_OFFSET = uStack_10;
  return;
}

