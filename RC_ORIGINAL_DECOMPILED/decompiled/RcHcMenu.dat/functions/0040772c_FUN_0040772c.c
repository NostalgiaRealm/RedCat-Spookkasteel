/*
 * FUN_0040772c at 0040772c
 * undefined __register FUN_0040772c(void)
 * Address ranges: 0040772c-00407789
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040772c(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_10;
  undefined1 *puStack_c;
  undefined1 *puStack_8;
  
  puStack_8 = &stack0xfffffffc;
  puStack_c = &LAB_0040778a;
  uStack_10 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_10;
  _DAT_0057342c = _DAT_0057342c + 1;
  if (_DAT_0057342c == 0) {
    FUN_00406e64(&DAT_00573050);
    FUN_00406e64(&DAT_0057321c);
    FUN_00401c18();
    FUN_00405bcc((VARIANTARG *)&DAT_00573414);
    FUN_00405bcc((VARIANTARG *)&DAT_00573404);
    FUN_00405bcc((VARIANTARG *)&DAT_005733f4);
  }
  *in_FS_OFFSET = uStack_10;
  return;
}

