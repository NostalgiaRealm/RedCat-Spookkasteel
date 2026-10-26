/*
 * FUN_0056bba0 at 0056bba0
 * undefined __register FUN_0056bba0(void)
 * Address ranges: 0056bba0-0056bbc4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0056bba0(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_10;
  _DAT_005748ec = _DAT_005748ec + 1;
  *in_FS_OFFSET = uVar1;
  return;
}

