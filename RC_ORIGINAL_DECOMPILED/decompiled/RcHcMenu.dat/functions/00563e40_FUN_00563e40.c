/*
 * FUN_00563e40 at 00563e40
 * undefined __register FUN_00563e40(void)
 * Address ranges: 00563e40-00563e64
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00563e40(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_10;
  _DAT_005748c4 = _DAT_005748c4 + 1;
  *in_FS_OFFSET = uVar1;
  return;
}

