/*
 * FUN_00457a24 at 00457a24
 * undefined __register FUN_00457a24(void)
 * Address ranges: 00457a24-00457a48
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00457a24(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_10;
  _DAT_00573854 = _DAT_00573854 + 1;
  *in_FS_OFFSET = uVar1;
  return;
}

