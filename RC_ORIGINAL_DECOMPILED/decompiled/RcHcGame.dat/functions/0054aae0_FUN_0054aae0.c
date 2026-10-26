/*
 * FUN_0054aae0 at 0054aae0
 * undefined FUN_0054aae0(void)
 * Address ranges: 0054aae0-0054ae47
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_0054aae0(int param_1,int param_2,uint param_3,int param_4)

{
  void *pvVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  uint uVar5;
  void *pvVar6;
  int iVar7;
  
  iVar4 = *(int *)(param_1 + 8);
  if ((uint)((*(int *)(param_1 + 0xc) - iVar4) / 0x38) < param_3) {
    iVar2 = *(int *)(param_1 + 4);
    if ((iVar2 == 0) || (uVar5 = (iVar4 - iVar2) / 0x38, uVar5 <= param_3)) {
      uVar5 = param_3;
    }
    if (iVar2 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = (iVar4 - iVar2) / 0x38;
    }
    iVar4 = iVar4 + uVar5;
    iVar2 = iVar4;
    if (iVar4 < 0) {
      iVar2 = 0;
    }
    pvVar3 = operator_new(iVar2 * 0x38);
    pvVar6 = pvVar3;
    for (iVar2 = *(int *)(param_1 + 4); uVar5 = param_3, pvVar1 = pvVar6, iVar2 != param_2;
        iVar2 = iVar2 + 0x38) {
      FUN_0054bc30(pvVar6,iVar2);
      pvVar6 = (void *)((int)pvVar6 + 0x38);
    }
    for (; uVar5 != 0; uVar5 = uVar5 - 1) {
      FUN_0054bc30(pvVar1,param_4);
      pvVar1 = (void *)((int)pvVar1 + 0x38);
    }
    pvVar6 = (void *)((int)pvVar6 + param_3 * 0x38);
    iVar2 = *(int *)(param_1 + 8);
    for (; param_2 != iVar2; param_2 = param_2 + 0x38) {
      FUN_0054bc30(pvVar6,param_2);
      pvVar6 = (void *)((int)pvVar6 + 0x38);
    }
    iVar2 = *(int *)(param_1 + 8);
    for (iVar7 = *(int *)(param_1 + 4); iVar7 != iVar2; iVar7 = iVar7 + 0x38) {
      FUN_0053ea60();
    }
    FUN_005fe5f0(*(undefined4 *)(param_1 + 4));
    *(void **)(param_1 + 0xc) = (void *)((int)pvVar3 + iVar4 * 0x38);
    if (*(int *)(param_1 + 4) == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x38;
    }
    *(void **)(param_1 + 4) = pvVar3;
    *(void **)(param_1 + 8) = (void *)((int)pvVar3 + (param_3 + iVar4) * 0x38);
    return;
  }
  if ((uint)((iVar4 - param_2) / 0x38) < param_3) {
    iVar2 = param_3 * 0x38 + param_2;
    for (iVar7 = param_2; iVar7 != iVar4; iVar7 = iVar7 + 0x38) {
      FUN_0054bc30(iVar2,iVar7);
      iVar2 = iVar2 + 0x38;
    }
    iVar4 = *(int *)(param_1 + 8);
    for (iVar2 = param_3 - (iVar4 - param_2) / 0x38; iVar2 != 0; iVar2 = iVar2 + -1) {
      FUN_0054bc30(iVar4,param_4);
      iVar4 = iVar4 + 0x38;
    }
    iVar4 = *(int *)(param_1 + 8);
    if (param_2 != iVar4) {
      iVar2 = param_2 + 0x20;
      do {
        FUN_0040cc00(param_4,0,0xffffffff);
        FUN_0054bfc0(param_4 + 0x10);
        FUN_0054c1a0(param_4 + 0x20);
        *(undefined4 *)(iVar2 + 0x10) = *(undefined4 *)(param_4 + 0x30);
        *(undefined4 *)(iVar2 + 0x14) = *(undefined4 *)(param_4 + 0x34);
        iVar7 = iVar2 + 0x18;
        iVar2 = iVar2 + 0x38;
      } while (iVar7 != iVar4);
    }
  }
  else {
    if (param_3 == 0) {
      return;
    }
    iVar2 = iVar4;
    for (iVar7 = iVar4 + param_3 * -0x38; iVar7 != iVar4; iVar7 = iVar7 + 0x38) {
      FUN_0054bc30(iVar2,iVar7);
      iVar2 = iVar2 + 0x38;
    }
    iVar4 = *(int *)(param_1 + 8) + param_3 * -0x38;
    if (param_2 != iVar4) {
      iVar2 = iVar4 + 0x20;
      iVar7 = *(int *)(param_1 + 8) + 0x20;
      do {
        iVar4 = iVar4 + -0x38;
        FUN_0040cc00(iVar4,0,0xffffffff);
        FUN_0054bfc0(iVar2 + -0x48);
        FUN_0054c1a0(iVar2 + -0x38);
        *(undefined4 *)(iVar7 + -0x28) = *(undefined4 *)(iVar2 + -0x28);
        *(undefined4 *)(iVar7 + -0x24) = *(undefined4 *)(iVar2 + -0x24);
        iVar2 = iVar2 + -0x38;
        iVar7 = iVar7 + -0x38;
      } while (iVar4 != param_2);
    }
    iVar4 = param_3 * 0x38 + param_2;
    for (; param_2 != iVar4; param_2 = param_2 + 0x38) {
      FUN_0054bdb0(param_4);
    }
  }
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + param_3 * 0x38;
  return;
}

