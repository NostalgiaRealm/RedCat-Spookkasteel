/*
 * FUN_0054a2c0 at 0054a2c0
 * undefined FUN_0054a2c0(void)
 * Address ranges: 0054a2c0-0054a4ba
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall FUN_0054a2c0(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  void *pvVar7;
  
  iVar1 = *(int *)(param_1 + 4);
  iVar4 = *(int *)(param_1 + 8);
  iVar5 = *(int *)(param_1 + 0xc) - iVar4;
  iVar2 = iVar5 >> 0x1f;
  if (iVar5 / 0x38 + iVar2 == iVar2) {
    if ((iVar1 == 0) || (uVar6 = (iVar4 - iVar1) / 0x38, uVar6 < 2)) {
      uVar6 = 1;
    }
    if (iVar1 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = (iVar4 - iVar1) / 0x38;
    }
    iVar4 = iVar4 + uVar6;
    iVar2 = iVar4;
    if (iVar4 < 0) {
      iVar2 = 0;
    }
    pvVar3 = operator_new(iVar2 * 0x38);
    pvVar7 = pvVar3;
    for (iVar2 = *(int *)(param_1 + 4); iVar2 != param_2; iVar2 = iVar2 + 0x38) {
      FUN_0054bc30(pvVar7,iVar2);
      pvVar7 = (void *)((int)pvVar7 + 0x38);
    }
    FUN_0054bc30(pvVar7,param_3);
    FUN_0054a4f0(param_2,*(undefined4 *)(param_1 + 8),(int)pvVar7 + 0x38);
    FUN_0054a4c0(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8));
    FUN_005fe5f0(*(undefined4 *)(param_1 + 4));
    *(void **)(param_1 + 0xc) = (void *)((int)pvVar3 + iVar4 * 0x38);
    iVar4 = FUN_00549ae0();
    *(void **)(param_1 + 4) = pvVar3;
    *(void **)(param_1 + 8) = (void *)((int)pvVar3 + (iVar4 + 1) * 0x38);
  }
  else {
    iVar2 = iVar4 - param_2 >> 0x1f;
    if ((iVar4 - param_2) / 0x38 + iVar2 == iVar2) {
      FUN_0054a4f0(param_2,iVar4,param_2 + 0x38);
      FUN_0054aee0(*(int *)(param_1 + 8),1 - (*(int *)(param_1 + 8) - param_2) / 0x38,param_3);
      FUN_0054b6f0(param_2,*(undefined4 *)(param_1 + 8),param_3);
    }
    else {
      FUN_0054a4f0(iVar4 + -0x38,iVar4,iVar4);
      FUN_0054b9b0(param_2,*(int *)(param_1 + 8) + -0x38,*(int *)(param_1 + 8));
      FUN_0054b6f0(param_2,param_2 + 0x38,param_3);
    }
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 0x38;
  }
  return *(int *)(param_1 + 4) + ((param_2 - iVar1) / 0x38) * 0x38;
}

