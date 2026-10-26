/*
 * FUN_00536908 at 00536908
 * undefined __register FUN_00536908(void)
 * Address ranges: 00536908-0053692c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00536908(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_10;
  _DAT_0057477c = _DAT_0057477c + 1;
  *in_FS_OFFSET = uVar1;
  return;
}

