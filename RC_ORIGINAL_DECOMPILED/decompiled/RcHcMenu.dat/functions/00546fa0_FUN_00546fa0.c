/*
 * FUN_00546fa0 at 00546fa0
 * undefined __register FUN_00546fa0(void)
 * Address ranges: 00546fa0-00546fc4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00546fa0(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_10;
  _DAT_0057479c = _DAT_0057479c + 1;
  *in_FS_OFFSET = uVar1;
  return;
}

