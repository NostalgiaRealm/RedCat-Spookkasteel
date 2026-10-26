/*
 * FUN_10007851 at 10007851
 * undefined4 __fastcall FUN_10007851(undefined4 param_1, undefined4 param_2)
 * Address ranges: 10007851-1000788f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_10007851(undefined4 param_1,undefined4 param_2)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  pbVar1 = &DAT_10028b90;
  iVar4 = 25000;
  do {
    iVar2 = 0;
    if ((byte)param_2 < *pbVar1) {
      iVar3 = 0;
      do {
        iVar2 = iVar2 + 1;
        *(undefined4 *)(iVar3 + 8 + *(int *)(pbVar1 + 4)) = param_2;
        iVar3 = iVar3 + 0x10;
      } while (iVar2 < (int)(uint)*pbVar1);
    }
    pbVar1 = pbVar1 + 0x20;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  DAT_10028af8 = param_2;
  return 1;
}

