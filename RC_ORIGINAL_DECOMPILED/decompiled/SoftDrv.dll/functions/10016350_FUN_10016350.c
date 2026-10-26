/*
 * FUN_10016350 at 10016350
 * undefined FUN_10016350(void)
 * Address ranges: 10016350-10016379
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10016350(void)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < DAT_10025c7c) {
    do {
      iVar1 = iVar1 + 1;
      *(undefined4 *)(DAT_10025c78 + -4 + iVar1 * 4) = 0;
    } while (iVar1 < DAT_10025c7c);
  }
  _DAT_10025c80 = 0;
  return;
}

