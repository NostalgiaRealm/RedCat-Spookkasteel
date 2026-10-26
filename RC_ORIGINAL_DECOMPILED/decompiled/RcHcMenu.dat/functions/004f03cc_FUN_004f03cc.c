/*
 * FUN_004f03cc at 004f03cc
 * undefined __register FUN_004f03cc(void)
 * Address ranges: 004f03cc-004f03f0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004f03cc(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_10;
  _DAT_00574688 = _DAT_00574688 + 1;
  *in_FS_OFFSET = uVar1;
  return;
}

