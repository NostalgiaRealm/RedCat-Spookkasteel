/*
 * FUN_004a94a8 at 004a94a8
 * undefined __register FUN_004a94a8(void)
 * Address ranges: 004a94a8-004a94cc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004a94a8(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_10;
  _DAT_00574270 = _DAT_00574270 + 1;
  *in_FS_OFFSET = uVar1;
  return;
}

