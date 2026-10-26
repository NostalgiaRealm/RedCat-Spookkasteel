/*
 * FUN_004b0bf8 at 004b0bf8
 * undefined __register FUN_004b0bf8(void)
 * Address ranges: 004b0bf8-004b0c1c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004b0bf8(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_10;
  _DAT_00574424 = _DAT_00574424 + 1;
  *in_FS_OFFSET = uVar1;
  return;
}

