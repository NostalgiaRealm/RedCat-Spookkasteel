/*
 * FUN_00408700 at 00408700
 * undefined __register FUN_00408700(void)
 * Address ranges: 00408700-00408724
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00408700(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_10;
  _DAT_005734ec = _DAT_005734ec + 1;
  *in_FS_OFFSET = uVar1;
  return;
}

