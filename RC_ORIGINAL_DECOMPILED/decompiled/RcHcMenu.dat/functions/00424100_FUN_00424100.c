/*
 * FUN_00424100 at 00424100
 * undefined __register FUN_00424100(void)
 * Address ranges: 00424100-00424124
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00424100(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_10;
  _DAT_005736f4 = _DAT_005736f4 + 1;
  *in_FS_OFFSET = uVar1;
  return;
}

