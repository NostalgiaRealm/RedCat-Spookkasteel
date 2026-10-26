/*
 * FUN_004242ac at 004242ac
 * undefined __register FUN_004242ac(void)
 * Address ranges: 004242ac-004242d0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004242ac(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_10;
  _DAT_005736f8 = _DAT_005736f8 + 1;
  *in_FS_OFFSET = uVar1;
  return;
}

