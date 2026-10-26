/*
 * FUN_10007840 at 10007840
 * undefined4 __stdcall FUN_10007840(void)
 * Address ranges: 10007840-10007850
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10007840(void)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (DAT_10028af8 == 0) {
    return 1;
  }
  pbVar1 = &DAT_10028b90;
  iVar4 = 25000;
  do {
    iVar2 = 0;
    if (*pbVar1 != 0) {
      iVar3 = 0;
      do {
        iVar2 = iVar2 + 1;
        *(undefined4 *)(iVar3 + 8 + *(int *)(pbVar1 + 4)) = 0;
        iVar3 = iVar3 + 0x10;
      } while (iVar2 < (int)(uint)*pbVar1);
    }
    pbVar1 = pbVar1 + 0x20;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  DAT_10028af8 = 0;
  return 1;
}

