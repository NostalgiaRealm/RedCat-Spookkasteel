/*
 * FUN_00543f3c at 00543f3c
 * undefined __register FUN_00543f3c(void)
 * Address ranges: 00543f3c-00543f60
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00543f3c(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_10;
  _DAT_00574794 = _DAT_00574794 + 1;
  *in_FS_OFFSET = uVar1;
  return;
}

