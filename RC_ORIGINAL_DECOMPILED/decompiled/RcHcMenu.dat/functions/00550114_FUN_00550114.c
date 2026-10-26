/*
 * FUN_00550114 at 00550114
 * undefined __register FUN_00550114(void)
 * Address ranges: 00550114-00550138
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00550114(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_10;
  _DAT_0057482c = _DAT_0057482c + 1;
  *in_FS_OFFSET = uVar1;
  return;
}

