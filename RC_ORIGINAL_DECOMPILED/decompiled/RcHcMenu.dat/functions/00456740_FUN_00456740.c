/*
 * FUN_00456740 at 00456740
 * undefined __register FUN_00456740(void)
 * Address ranges: 00456740-00456764
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00456740(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_10;
  _DAT_00573810 = _DAT_00573810 + 1;
  *in_FS_OFFSET = uVar1;
  return;
}

