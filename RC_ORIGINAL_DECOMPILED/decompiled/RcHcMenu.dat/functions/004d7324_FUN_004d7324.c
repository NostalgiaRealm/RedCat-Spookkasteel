/*
 * FUN_004d7324 at 004d7324
 * undefined __register FUN_004d7324(void)
 * Address ranges: 004d7324-004d7348
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004d7324(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_10;
  _DAT_00574600 = _DAT_00574600 + 1;
  *in_FS_OFFSET = uVar1;
  return;
}

