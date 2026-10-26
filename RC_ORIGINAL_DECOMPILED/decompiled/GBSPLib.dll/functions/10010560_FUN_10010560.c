/*
 * FUN_10010560 at 10010560
 * undefined FUN_10010560(void)
 * Address ranges: 10010560-100105bb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10010560(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < DAT_1014e280) {
    do {
      puVar2 = *(undefined4 **)(DAT_10313030 + iVar3 * 4);
      while (puVar2 != (undefined4 *)0x0) {
        puVar1 = (undefined4 *)*puVar2;
        FUN_10014360(puVar2);
        _DAT_1003fde8 = 0;
        puVar2 = puVar1;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < DAT_1014e280);
  }
  FUN_10014360(DAT_10313030);
  DAT_10313030 = 0;
  _DAT_1003fde8 = 0;
  return;
}

