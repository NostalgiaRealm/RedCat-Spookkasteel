/*
 * FUN_0047402c at 0047402c
 * undefined __register FUN_0047402c(void)
 * Address ranges: 0047402c-00474067
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0047402c(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_10;
  undefined1 *puStack_c;
  undefined1 *puStack_8;
  
  puStack_8 = &stack0xfffffffc;
  puStack_c = &LAB_00474068;
  uStack_10 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_10;
  _DAT_00573910 = _DAT_00573910 + 1;
  if (_DAT_00573910 == 0) {
    FUN_00404878((VARIANTARG *)&PTR_s_Unknown_00570698,&DAT_004010ec,0x24);
  }
  *in_FS_OFFSET = uStack_10;
  return;
}

