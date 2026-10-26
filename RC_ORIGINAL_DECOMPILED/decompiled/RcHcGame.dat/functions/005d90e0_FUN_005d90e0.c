/*
 * FUN_005d90e0 at 005d90e0
 * undefined FUN_005d90e0(void)
 * Address ranges: 005d90e0-005d91bc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_005d90e0(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  
  iVar1 = param_2;
  iVar3 = param_1;
  iVar2 = ((param_1 + 8U & 0xfffffff) >> 4) * 0x100 + (param_2 + 8U & 0xfffffff0) +
          (param_3 + 8 >> 4);
  if (0x1000 < iVar2) {
    iVar2 = 0x1000;
  }
  piVar5 = *(int **)(param_4 + 8 + iVar2 * 4);
  if (piVar5 != (int *)0x0) {
    param_2 = piVar5[4];
    param_1 = 99999999;
    do {
      iVar2 = iVar3 - piVar5[1];
      iVar4 = iVar1 - piVar5[2];
      iVar2 = (param_3 - piVar5[3]) * (param_3 - piVar5[3]) + iVar4 * iVar4 + iVar2 * iVar2;
      if (iVar2 < param_1) {
        param_2 = piVar5[4];
        param_1 = iVar2;
      }
      piVar5 = (int *)*piVar5;
    } while (piVar5 != (int *)0x0);
    FUN_005d9590(*(undefined4 *)(param_4 + 4),iVar3,iVar1,param_3,param_2);
    return param_2;
  }
  iVar3 = FUN_005d94e0(param_1,param_2,param_3,param_4);
  FUN_005d9590(*(undefined4 *)(param_4 + 4),param_1,param_2,param_3,iVar3);
  return iVar3;
}

