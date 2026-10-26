/*
 * FUN_0055416c at 0055416c
 * undefined __register FUN_0055416c(void)
 * Address ranges: 0055416c-00554190
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0055416c(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_10;
  _DAT_0057485c = _DAT_0057485c + 1;
  *in_FS_OFFSET = uVar1;
  return;
}

