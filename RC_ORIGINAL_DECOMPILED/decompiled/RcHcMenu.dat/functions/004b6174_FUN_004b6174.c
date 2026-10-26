/*
 * FUN_004b6174 at 004b6174
 * undefined __register FUN_004b6174(void)
 * Address ranges: 004b6174-004b6198
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004b6174(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_10;
  _DAT_005744a0 = _DAT_005744a0 + 1;
  *in_FS_OFFSET = uVar1;
  return;
}

