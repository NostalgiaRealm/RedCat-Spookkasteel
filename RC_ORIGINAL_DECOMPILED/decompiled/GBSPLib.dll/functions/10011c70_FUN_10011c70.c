/*
 * FUN_10011c70 at 10011c70
 * undefined FUN_10011c70(void)
 * Address ranges: 10011c70-10011ce5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10011c70(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (DAT_10313058 != 0) {
    iVar3 = 0;
    iVar2 = DAT_10313058;
    if (0 < DAT_1031305c) {
      do {
        iVar1 = *(int *)(iVar2 + iVar3 * 8);
        if (iVar1 != 0) {
          FUN_100284b6(iVar1);
          iVar2 = DAT_10313058;
        }
        if (*(int *)(iVar2 + 4 + iVar3 * 8) != 0) {
          FUN_100161f0();
          iVar2 = DAT_10313058;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < DAT_1031305c);
    }
    FUN_10014360(iVar2);
    _DAT_1003fde8 = 0;
    DAT_10313058 = 0;
    DAT_1031305c = 0;
    return;
  }
  DAT_1031305c = 0;
  return;
}

