/*
 * FUN_004e3088 at 004e3088
 * undefined __register FUN_004e3088(void)
 * Address ranges: 004e3088-004e30ac
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004e3088(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_10;
  _DAT_00574624 = _DAT_00574624 + 1;
  *in_FS_OFFSET = uVar1;
  return;
}

