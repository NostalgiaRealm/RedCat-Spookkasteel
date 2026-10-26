/*
 * FUN_00564418 at 00564418
 * undefined __register FUN_00564418(void)
 * Address ranges: 00564418-0056443c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00564418(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_10;
  _DAT_005748c8 = _DAT_005748c8 + 1;
  *in_FS_OFFSET = uVar1;
  return;
}

