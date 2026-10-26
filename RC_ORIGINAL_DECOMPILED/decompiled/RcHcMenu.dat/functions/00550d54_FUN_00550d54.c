/*
 * FUN_00550d54 at 00550d54
 * undefined __register FUN_00550d54(void)
 * Address ranges: 00550d54-00550d78
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00550d54(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_10;
  _DAT_00574838 = _DAT_00574838 + 1;
  *in_FS_OFFSET = uVar1;
  return;
}

