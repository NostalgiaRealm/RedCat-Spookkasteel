/*
 * FUN_004600b4 at 004600b4
 * undefined __register FUN_004600b4(void)
 * Address ranges: 004600b4-004600d8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004600b4(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_10;
  _DAT_005738fc = _DAT_005738fc + 1;
  *in_FS_OFFSET = uVar1;
  return;
}

