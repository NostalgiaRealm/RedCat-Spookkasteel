/*
 * FUN_004b17ec at 004b17ec
 * undefined __register FUN_004b17ec(void)
 * Address ranges: 004b17ec-004b1810
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004b17ec(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 auStack_10 [12];
  
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_10;
  _DAT_0057442c = _DAT_0057442c + 1;
  *in_FS_OFFSET = uVar1;
  return;
}

