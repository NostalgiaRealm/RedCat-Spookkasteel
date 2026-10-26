/*
 * FUN_004ed478 at 004ed478
 * undefined __register FUN_004ed478(void)
 * Address ranges: 004ed478-004ed49c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004ed478(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_10;
  _DAT_00574678 = _DAT_00574678 + 1;
  *in_FS_OFFSET = uVar1;
  return;
}

