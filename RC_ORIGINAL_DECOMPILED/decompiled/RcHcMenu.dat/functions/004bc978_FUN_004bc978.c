/*
 * FUN_004bc978 at 004bc978
 * undefined __register FUN_004bc978(void)
 * Address ranges: 004bc978-004bc9a4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004bc978(void)

{
  undefined4 *in_FS_OFFSET;
  bool bVar1;
  undefined4 uStack_10;
  undefined1 *puStack_c;
  undefined1 *puStack_8;
  
  puStack_8 = &stack0xfffffffc;
  puStack_c = &LAB_004bc9a5;
  uStack_10 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_10;
  bVar1 = _DAT_005744c4 == 0;
  _DAT_005744c4 = _DAT_005744c4 + -1;
  if (bVar1) {
    FUN_004bc88c();
  }
  *in_FS_OFFSET = uStack_10;
  return;
}

