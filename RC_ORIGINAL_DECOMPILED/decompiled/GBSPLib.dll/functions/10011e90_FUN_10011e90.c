/*
 * FUN_10011e90 at 10011e90
 * undefined FUN_10011e90(void)
 * Address ranges: 10011e90-10011eda
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10011e90(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  
  if ((DAT_10313058 != 0) && (iVar2 = 0, 0 < DAT_1031305c)) {
    do {
      iVar1 = FUN_100332c0(*(undefined4 *)(DAT_10313058 + iVar2 * 8),param_1);
      if (iVar1 == 0) {
        return DAT_10313058 + iVar2 * 8;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < DAT_1031305c);
  }
  return 0;
}

