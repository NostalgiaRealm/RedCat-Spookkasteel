/*
 * FUN_00552a44 at 00552a44
 * undefined __register FUN_00552a44(void)
 * Address ranges: 00552a44-00552a68
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00552a44(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_10;
  _DAT_0057484c = _DAT_0057484c + 1;
  *in_FS_OFFSET = uVar1;
  return;
}

