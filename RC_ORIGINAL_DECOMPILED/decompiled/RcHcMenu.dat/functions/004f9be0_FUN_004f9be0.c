/*
 * FUN_004f9be0 at 004f9be0
 * undefined __register FUN_004f9be0(void)
 * Address ranges: 004f9be0-004f9c04
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004f9be0(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_10;
  _DAT_005746b0 = _DAT_005746b0 + 1;
  *in_FS_OFFSET = uVar1;
  return;
}

