/*
 * FUN_004aa3d8 at 004aa3d8
 * undefined __register FUN_004aa3d8(void)
 * Address ranges: 004aa3d8-004aa3fc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004aa3d8(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_10;
  _DAT_00574274 = _DAT_00574274 + 1;
  *in_FS_OFFSET = uVar1;
  return;
}

