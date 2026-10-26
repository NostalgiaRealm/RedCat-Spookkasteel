/*
 * FUN_00497308 at 00497308
 * undefined __register FUN_00497308(void)
 * Address ranges: 00497308-0049732c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00497308(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_10;
  _DAT_005739c8 = _DAT_005739c8 + 1;
  *in_FS_OFFSET = uVar1;
  return;
}

