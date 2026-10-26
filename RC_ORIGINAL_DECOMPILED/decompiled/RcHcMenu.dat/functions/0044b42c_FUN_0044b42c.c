/*
 * FUN_0044b42c at 0044b42c
 * int __register FUN_0044b42c(int * param_1)
 * Address ranges: 0044b42c-0044b512
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_0044b42c(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  
  iVar1 = FUN_00438988(param_1);
  iVar2 = (**(code **)PTR_DAT_005722f4)();
  iVar3 = FUN_0044f110(DAT_005737d8);
  if (-1 < iVar3 + -1) {
    iVar6 = 0;
    do {
      iVar4 = FUN_0044f0fc(DAT_005737d8,iVar6);
      if (iVar2 == *(int *)(iVar4 + 4)) {
        iVar1 = FUN_0044f0fc(DAT_005737d8,iVar6);
        return iVar1;
      }
      iVar6 = iVar6 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  iVar3 = FUN_0044f110(DAT_005737d8);
  if (-1 < iVar3 + -1) {
    iVar6 = 0;
    do {
      piVar5 = (int *)FUN_00412384(*(undefined4 **)(DAT_005737d8 + 0x4c),iVar6);
      FUN_00403094(piVar5);
      iVar6 = iVar6 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  (**(code **)(**(int **)(DAT_005737d8 + 0x4c) + 8))();
  (**(code **)PTR_DAT_00572350)();
  iVar3 = FUN_0044f110(DAT_005737d8);
  if (-1 < iVar3 + -1) {
    iVar6 = 0;
    do {
      iVar4 = FUN_0044f0fc(DAT_005737d8,iVar6);
      if (iVar2 == *(int *)(iVar4 + 4)) {
        iVar1 = FUN_0044f0fc(DAT_005737d8,iVar6);
        return iVar1;
      }
      iVar6 = iVar6 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return iVar1;
}

