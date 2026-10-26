/*
 * FUN_100201f0 at 100201f0
 * undefined FUN_100201f0(void)
 * Address ranges: 100201f0-1002026c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100201f0(int param_1,uint param_2,uint param_3,uint param_4,int param_5)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  
  iVar4 = 7;
  do {
    bVar3 = (byte)iVar4;
    iVar1 = ((int)param_4 >> (bVar3 & 0x1f) & 1U) +
            (((int)param_3 >> (bVar3 & 0x1f) & 1U) + ((int)param_2 >> (bVar3 & 0x1f) & 1U) * 2) * 2;
    if (*(int *)(param_1 + iVar1 * 4) == 0) {
      iVar2 = FUN_1001e5a0(DAT_104e9948);
      *(int *)(param_1 + iVar1 * 4) = iVar2;
      *(int *)(iVar2 + 0x20) = param_1;
    }
    param_1 = *(int *)(param_1 + iVar1 * 4);
    iVar4 = iVar4 + -1;
  } while (0 < iVar4);
  *(int *)(param_1 + ((param_4 & 1) + ((param_3 & 1) + (param_2 & 1) * 2) * 2) * 4) = param_5 + 1;
  return;
}

