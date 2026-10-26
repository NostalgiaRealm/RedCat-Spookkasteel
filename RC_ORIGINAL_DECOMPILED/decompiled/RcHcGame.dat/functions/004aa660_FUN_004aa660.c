/*
 * FUN_004aa660 at 004aa660
 * undefined FUN_004aa660(void)
 * Address ranges: 004aa660-004aa83c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall FUN_004aa660(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  void *pvVar7;
  
  iVar1 = *(int *)(param_1 + 4);
  iVar5 = *(int *)(param_1 + 8);
  iVar4 = *(int *)(param_1 + 0xc) - iVar5;
  iVar2 = iVar4 >> 0x1f;
  if (iVar4 / 0x30 + iVar2 == iVar2) {
    if ((iVar1 == 0) || (uVar6 = (iVar5 - iVar1) / 0x30, uVar6 < 2)) {
      uVar6 = 1;
    }
    if (iVar1 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = (iVar5 - iVar1) / 0x30;
    }
    iVar5 = iVar5 + uVar6;
    iVar2 = iVar5;
    if (iVar5 < 0) {
      iVar2 = 0;
    }
    pvVar3 = operator_new(iVar2 * 0x30);
    pvVar7 = pvVar3;
    for (iVar2 = *(int *)(param_1 + 4); iVar2 != param_2; iVar2 = iVar2 + 0x30) {
      FUN_004aadf0(pvVar7,iVar2);
      pvVar7 = (void *)((int)pvVar7 + 0x30);
    }
    FUN_004aadf0(pvVar7,param_3);
    FUN_004aa870(param_2,*(undefined4 *)(param_1 + 8),(int)pvVar7 + 0x30);
    FUN_004aa840(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8));
    FUN_005fe5f0(*(undefined4 *)(param_1 + 4));
    *(void **)(param_1 + 0xc) = (void *)(iVar5 * 0x30 + (int)pvVar3);
    iVar5 = FUN_004aa630();
    *(void **)(param_1 + 4) = pvVar3;
    *(void **)(param_1 + 8) = (void *)((iVar5 + 1) * 0x30 + (int)pvVar3);
  }
  else {
    iVar2 = iVar5 - param_2 >> 0x1f;
    if ((iVar5 - param_2) / 0x30 + iVar2 == iVar2) {
      FUN_004aa870(param_2,iVar5,param_2 + 0x30);
      FUN_004aa8b0(*(int *)(param_1 + 8),1 - (*(int *)(param_1 + 8) - param_2) / 0x30,param_3);
      FUN_004aa8e0(param_2,*(undefined4 *)(param_1 + 8),param_3);
    }
    else {
      FUN_004aa870(iVar5 + -0x30,iVar5,iVar5);
      FUN_004aab60(param_2,*(int *)(param_1 + 8) + -0x30,*(int *)(param_1 + 8));
      FUN_004aa8e0(param_2,param_2 + 0x30,param_3);
    }
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 0x30;
  }
  return ((param_2 - iVar1) / 0x30) * 0x30 + *(int *)(param_1 + 4);
}

