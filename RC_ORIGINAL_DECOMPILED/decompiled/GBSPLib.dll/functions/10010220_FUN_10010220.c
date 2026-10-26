/*
 * FUN_10010220 at 10010220
 * undefined FUN_10010220(void)
 * Address ranges: 10010220-10010269
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10010220(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  DAT_10313028 = 0;
  if (0 < DAT_10313034) {
    do {
      iVar1 = *(int *)(DAT_10313038 + iVar2 * 4);
      if (*(short *)(iVar1 + 0x30) != 0) {
        FUN_10014360(*(undefined4 *)(iVar1 + 0x34));
        *(undefined4 *)(iVar1 + 0x34) = 0;
        _DAT_1003fde8 = 0;
      }
      *(undefined4 *)(iVar1 + 0x34) = 0;
      iVar2 = iVar2 + 1;
    } while (iVar2 < DAT_10313034);
  }
  return;
}

