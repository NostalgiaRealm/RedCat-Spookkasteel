/*
 * FUN_1001f4f0 at 1001f4f0
 * undefined FUN_1001f4f0(void)
 * Address ranges: 1001f4f0-1001f579
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1001f4f0(int param_1,int param_2,int param_3,int param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  
  iVar4 = 7;
  do {
    bVar3 = (byte)iVar4;
    iVar1 = (param_4 >> (bVar3 & 0x1f) & 1U) +
            ((param_3 >> (bVar3 & 0x1f) & 1U) + (param_2 >> (bVar3 & 0x1f) & 1U) * 2) * 2;
    if (*(int *)(param_1 + iVar1 * 4) == 0) {
      *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
      iVar2 = FUN_1001e5a0(DAT_104e9940);
      *(int *)(param_1 + iVar1 * 4) = iVar2;
      *(int *)(iVar2 + 0x20) = param_1;
    }
    iVar4 = iVar4 + -1;
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
    param_1 = *(int *)(param_1 + iVar1 * 4);
  } while (-1 < iVar4);
  if (*(int *)(param_1 + 0x24) == 0) {
    *param_5 = *param_5 + 1;
  }
  *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
  *(int *)(param_1 + 0x2c) = param_2;
  *(int *)(param_1 + 0x30) = param_3;
  *(int *)(param_1 + 0x34) = param_4;
  return;
}

