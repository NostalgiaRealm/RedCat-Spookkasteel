/*
 * FUN_00509970 at 00509970
 * undefined __register FUN_00509970(void)
 * Address ranges: 00509970-00509994
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00509970(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_10;
  _DAT_005746fc = _DAT_005746fc + 1;
  *in_FS_OFFSET = uVar1;
  return;
}

