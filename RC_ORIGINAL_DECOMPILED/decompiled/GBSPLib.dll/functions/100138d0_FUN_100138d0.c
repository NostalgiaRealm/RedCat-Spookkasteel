/*
 * FUN_100138d0 at 100138d0
 * undefined FUN_100138d0(void)
 * Address ranges: 100138d0-1001391e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100138d0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = 0;
  if (0 < DAT_104e98c8) {
    iVar2 = 0;
    do {
      iVar3 = DAT_104e98b4 + iVar2;
      iVar2 = iVar2 + 0x44;
      *(int *)(DAT_104e98b8 + iVar1 * 4) = iVar3;
      iVar1 = iVar1 + 1;
    } while (iVar1 < DAT_104e98c8);
  }
  if (DAT_104e98e4 == 0) {
    FUN_100285d8(DAT_104e98b8,DAT_104e98c8,4,&LAB_100138a0);
  }
  return;
}

