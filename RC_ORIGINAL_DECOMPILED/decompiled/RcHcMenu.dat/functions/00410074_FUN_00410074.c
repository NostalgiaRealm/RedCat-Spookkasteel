/*
 * FUN_00410074 at 00410074
 * undefined __register FUN_00410074(void)
 * Address ranges: 00410074-004100b9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00410074(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_10;
  undefined1 *puStack_c;
  undefined1 *puStack_8;
  
  puStack_8 = &stack0xfffffffc;
  puStack_c = &LAB_004100ba;
  uStack_10 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_10;
  _DAT_00573614 = _DAT_00573614 + 1;
  if (_DAT_00573614 == 0) {
    FUN_00403db0((int *)&PTR_DAT_0056f380);
    FUN_00404878((VARIANTARG *)&PTR_s_False_0056f378,&DAT_004010ec,2);
  }
  *in_FS_OFFSET = uStack_10;
  return;
}

