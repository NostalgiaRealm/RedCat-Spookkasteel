/*
 * FUN_00543224 at 00543224
 * undefined __register FUN_00543224(void)
 * Address ranges: 00543224-00543248
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00543224(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_10;
  _DAT_00574790 = _DAT_00574790 + 1;
  *in_FS_OFFSET = uVar1;
  return;
}

