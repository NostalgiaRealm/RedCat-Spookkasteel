/*
 * FUN_0049811c at 0049811c
 * undefined __register FUN_0049811c(void)
 * Address ranges: 0049811c-00498140
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0049811c(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_10;
  _DAT_005739d4 = _DAT_005739d4 + 1;
  *in_FS_OFFSET = uVar1;
  return;
}

