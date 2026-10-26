/*
 * FUN_10002d90 at 10002d90
 * undefined FUN_10002d90(void)
 * Address ranges: 10002d90-10002e38
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10002d90(int *param_1)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar2 = *param_1;
  while (iVar2 != -1) {
    FUN_10002d90(param_1[4]);
    param_1 = (int *)param_1[5];
    iVar2 = *param_1;
  }
  if (param_1[2] != 0) {
    for (iVar2 = param_1[0xd]; iVar2 != 0; iVar2 = *(int *)(iVar2 + 0xc + uVar4 * 4)) {
      uVar4 = (uint)(*(int **)(iVar2 + 8) == param_1);
      if (*(int *)(iVar2 + 0x18) != 0) {
        if (*(char *)(iVar2 + 0x28) == '\0') {
          FUN_10002c50(iVar2,uVar4);
        }
        if (*(int *)(iVar2 + 0x24) != 0) {
          pbVar1 = (byte *)(*(int *)(iVar2 + 0x24) + 0x10);
          *pbVar1 = *pbVar1 | 4;
        }
        iVar3 = *(int *)(iVar2 + 0x24);
        if ((((iVar3 != 0) &&
             ((*(byte *)(*(int *)(iVar2 + 4 + (uint)(uVar4 == 0) * 4) + 8) & 1) == 0)) &&
            ((*(uint *)(*(int *)(iVar2 + 4 + uVar4 * 4) + 8) & 0x400) != 0)) &&
           ((*(byte *)(iVar3 + 0x10) & 2) == 0)) {
          *(byte *)(iVar3 + 0x10) = *(byte *)(iVar3 + 0x10) & 0xfb;
          *(undefined4 *)(iVar2 + 0x24) = 0;
          *(undefined1 *)(iVar2 + 0x28) = 1;
        }
      }
    }
  }
  return;
}

