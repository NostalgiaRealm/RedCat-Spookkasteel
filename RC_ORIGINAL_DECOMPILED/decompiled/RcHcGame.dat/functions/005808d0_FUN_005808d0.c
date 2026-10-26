/*
 * FUN_005808d0 at 005808d0
 * undefined FUN_005808d0(void)
 * Address ranges: 005808d0-00580a56
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void * __thiscall FUN_005808d0(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  uint uVar4;
  int iVar5;
  void *pvVar6;
  
  iVar1 = *(int *)(param_1 + 8);
  iVar2 = *(int *)(param_1 + 4);
  iVar5 = param_2 - iVar2 >> 3;
  if (*(int *)(param_1 + 0xc) - iVar1 >> 3 != 0) {
    if (iVar1 - param_2 >> 3 == 0) {
      FUN_00580a90(param_2,iVar1,param_2 + 8);
      FUN_00580ad0(*(int *)(param_1 + 8),1 - (*(int *)(param_1 + 8) - param_2 >> 3),param_3);
      FUN_00580b00(param_2,*(undefined4 *)(param_1 + 8),param_3);
    }
    else {
      FUN_00580a90(iVar1 + -8,iVar1,iVar1);
      FUN_00580b50(param_2,*(int *)(param_1 + 8) + -8,*(int *)(param_1 + 8));
      FUN_00580b00(param_2,param_2 + 8,param_3);
    }
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 8;
    return (void *)(*(int *)(param_1 + 4) + iVar5 * 8);
  }
  if ((iVar2 == 0) || (uVar4 = iVar1 - iVar2 >> 3, uVar4 < 2)) {
    uVar4 = 1;
  }
  if (iVar2 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = iVar1 - iVar2 >> 3;
  }
  iVar1 = iVar1 + uVar4;
  iVar2 = iVar1;
  if (iVar1 < 0) {
    iVar2 = 0;
  }
  pvVar3 = operator_new(iVar2 * 8);
  pvVar6 = pvVar3;
  for (iVar2 = *(int *)(param_1 + 4); iVar2 != param_2; iVar2 = iVar2 + 8) {
    FUN_00580bb0(pvVar6,iVar2);
    pvVar6 = (void *)((int)pvVar6 + 8);
  }
  FUN_00580bb0(pvVar6,param_3);
  FUN_00580a90(param_2,*(undefined4 *)(param_1 + 8),(int)pvVar6 + 8);
  FUN_00580a60(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8));
  FUN_005fe5f0(*(undefined4 *)(param_1 + 4));
  *(void **)(param_1 + 0xc) = (void *)((int)pvVar3 + iVar1 * 8);
  iVar1 = FUN_00548d10();
  *(void **)(param_1 + 4) = pvVar3;
  *(int *)(param_1 + 8) = (int)pvVar3 + iVar1 * 8 + 8;
  return (void *)((int)pvVar3 + iVar5 * 8);
}

