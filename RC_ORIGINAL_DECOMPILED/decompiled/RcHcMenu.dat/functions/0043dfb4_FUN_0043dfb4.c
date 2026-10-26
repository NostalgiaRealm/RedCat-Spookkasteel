/*
 * FUN_0043dfb4 at 0043dfb4
 * undefined __register FUN_0043dfb4(void)
 * Address ranges: 0043dfb4-0043dfd8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0043dfb4(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_10;
  _DAT_005737bc = _DAT_005737bc + 1;
  *in_FS_OFFSET = uVar1;
  return;
}

