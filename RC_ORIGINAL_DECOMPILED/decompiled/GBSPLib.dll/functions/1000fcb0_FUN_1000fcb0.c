/*
 * FUN_1000fcb0 at 1000fcb0
 * undefined FUN_1000fcb0(void)
 * Address ranges: 1000fcb0-1000fd37
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000fcb0(void)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < DAT_10313034) {
    do {
      FUN_10014360(*(undefined4 *)(DAT_10313038 + iVar1 * 4));
      *(undefined4 *)(DAT_10313038 + iVar1 * 4) = 0;
      _DAT_1003fde8 = *(undefined4 *)(DAT_10313038 + iVar1 * 4);
      iVar1 = iVar1 + 1;
    } while (iVar1 < DAT_10313034);
  }
  DAT_10313034 = 0;
  if (DAT_10313038 != 0) {
    FUN_10014360(DAT_10313038);
    DAT_10313038 = 0;
    _DAT_1003fde8 = 0;
  }
  if (DAT_1031303c != 0) {
    FUN_10014360(DAT_1031303c);
    _DAT_1003fde8 = 0;
  }
  DAT_10313038 = 0;
  DAT_1031303c = 0;
  return;
}

