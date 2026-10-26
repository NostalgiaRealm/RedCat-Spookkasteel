/*
 * FUN_00567bac at 00567bac
 * undefined __register FUN_00567bac(void)
 * Address ranges: 00567bac-00567bd0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00567bac(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_10;
  _DAT_005748d8 = _DAT_005748d8 + 1;
  *in_FS_OFFSET = uVar1;
  return;
}

