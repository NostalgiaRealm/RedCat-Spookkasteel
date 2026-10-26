/*
 * FUN_004e6ff0 at 004e6ff0
 * undefined __register FUN_004e6ff0(void)
 * Address ranges: 004e6ff0-004e7014
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004e6ff0(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_10;
  _DAT_0057464c = _DAT_0057464c + 1;
  *in_FS_OFFSET = uVar1;
  return;
}

