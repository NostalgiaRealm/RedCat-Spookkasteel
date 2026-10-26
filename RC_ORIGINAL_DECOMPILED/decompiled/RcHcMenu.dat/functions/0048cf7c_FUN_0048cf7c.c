/*
 * FUN_0048cf7c at 0048cf7c
 * undefined __register FUN_0048cf7c(void)
 * Address ranges: 0048cf7c-0048cfa0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0048cf7c(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_10;
  _DAT_005739c0 = _DAT_005739c0 + 1;
  *in_FS_OFFSET = uVar1;
  return;
}

