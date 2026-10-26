/*
 * FUN_004a780c at 004a780c
 * undefined __register FUN_004a780c(void)
 * Address ranges: 004a780c-004a7830
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004a780c(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_10;
  _DAT_0057425c = _DAT_0057425c + 1;
  *in_FS_OFFSET = uVar1;
  return;
}

