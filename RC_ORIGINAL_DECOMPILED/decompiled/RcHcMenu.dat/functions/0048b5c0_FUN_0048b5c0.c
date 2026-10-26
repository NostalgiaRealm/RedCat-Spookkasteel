/*
 * FUN_0048b5c0 at 0048b5c0
 * undefined __register FUN_0048b5c0(void)
 * Address ranges: 0048b5c0-0048b5e4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0048b5c0(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_10;
  _DAT_005739b4 = _DAT_005739b4 + 1;
  *in_FS_OFFSET = uVar1;
  return;
}

