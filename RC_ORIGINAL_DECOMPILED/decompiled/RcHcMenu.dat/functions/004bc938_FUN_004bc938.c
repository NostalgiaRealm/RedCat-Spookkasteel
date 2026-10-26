/*
 * FUN_004bc938 at 004bc938
 * undefined __register FUN_004bc938(void)
 * Address ranges: 004bc938-004bc96d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004bc938(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_10;
  undefined1 *puStack_c;
  undefined1 *puStack_8;
  
  puStack_8 = &stack0xfffffffc;
  puStack_c = &LAB_004bc96e;
  uStack_10 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_10;
  _DAT_005744c4 = _DAT_005744c4 + 1;
  if (_DAT_005744c4 == 0) {
    FUN_004bc928();
    FUN_00405bcc((VARIANTARG *)&DAT_005744b4);
  }
  *in_FS_OFFSET = uStack_10;
  return;
}

