/*
 * FUN_004574e0 at 004574e0
 * undefined FUN_004574e0(void)
 * Address ranges: 004574e0-0045783b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_004574e0(int param_1,int param_2,uint param_3,undefined4 param_4)

{
  void *pvVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  uint uVar5;
  void *pvVar6;
  int iVar7;
  
  iVar4 = *(int *)(param_1 + 8);
  if ((uint)((*(int *)(param_1 + 0xc) - iVar4) / 0x50) < param_3) {
    iVar2 = *(int *)(param_1 + 4);
    if ((iVar2 == 0) || (uVar5 = (iVar4 - iVar2) / 0x50, uVar5 <= param_3)) {
      uVar5 = param_3;
    }
    if (iVar2 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = (iVar4 - iVar2) / 0x50;
    }
    iVar4 = iVar4 + uVar5;
    iVar2 = iVar4;
    if (iVar4 < 0) {
      iVar2 = 0;
    }
    pvVar3 = operator_new(iVar2 * 0x50);
    pvVar6 = pvVar3;
    for (iVar2 = *(int *)(param_1 + 4); uVar5 = param_3, pvVar1 = pvVar6, iVar2 != param_2;
        iVar2 = iVar2 + 0x50) {
      FUN_00457840(pvVar6,iVar2);
      pvVar6 = (void *)((int)pvVar6 + 0x50);
    }
    for (; uVar5 != 0; uVar5 = uVar5 - 1) {
      FUN_00457840(pvVar1,param_4);
      pvVar1 = (void *)((int)pvVar1 + 0x50);
    }
    pvVar6 = (void *)(param_3 * 0x50 + (int)pvVar6);
    iVar2 = *(int *)(param_1 + 8);
    for (; param_2 != iVar2; param_2 = param_2 + 0x50) {
      FUN_00457840(pvVar6,param_2);
      pvVar6 = (void *)((int)pvVar6 + 0x50);
    }
    iVar2 = *(int *)(param_1 + 8);
    for (iVar7 = *(int *)(param_1 + 4); iVar7 != iVar2; iVar7 = iVar7 + 0x50) {
      FUN_00455c00();
    }
    FUN_005fe5f0(*(undefined4 *)(param_1 + 4));
    *(void **)(param_1 + 0xc) = (void *)(iVar4 * 0x50 + (int)pvVar3);
    if (*(int *)(param_1 + 4) == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x50;
    }
    *(void **)(param_1 + 4) = pvVar3;
    *(void **)(param_1 + 8) = (void *)((param_3 + iVar4) * 0x50 + (int)pvVar3);
    return;
  }
  if ((uint)((iVar4 - param_2) / 0x50) < param_3) {
    iVar2 = param_3 * 0x50 + param_2;
    for (iVar7 = param_2; iVar7 != iVar4; iVar7 = iVar7 + 0x50) {
      FUN_00457840(iVar2,iVar7);
      iVar2 = iVar2 + 0x50;
    }
    iVar4 = *(int *)(param_1 + 8);
    for (iVar2 = param_3 - (iVar4 - param_2) / 0x50; iVar2 != 0; iVar2 = iVar2 + -1) {
      FUN_00457840(iVar4,param_4);
      iVar4 = iVar4 + 0x50;
    }
    iVar4 = *(int *)(param_1 + 8);
    for (; param_2 != iVar4; param_2 = param_2 + 0x50) {
      FUN_00457960(param_4);
    }
    *(uint *)(param_1 + 8) = *(int *)(param_1 + 8) + param_3 * 0x50;
    return;
  }
  if (param_3 != 0) {
    iVar2 = iVar4;
    for (iVar7 = iVar4 + param_3 * -0x50; iVar7 != iVar4; iVar7 = iVar7 + 0x50) {
      FUN_00457840(iVar2,iVar7);
      iVar2 = iVar2 + 0x50;
    }
    iVar4 = *(int *)(param_1 + 8) + param_3 * -0x50;
    if (param_2 != iVar4) {
      iVar2 = iVar4 + 0x20;
      iVar7 = *(int *)(param_1 + 8) + 0x20;
      do {
        iVar4 = iVar4 + -0x50;
        FUN_0040cc00(iVar4,0,0xffffffff);
        FUN_0040cc00(iVar2 + -0x60,0,0xffffffff);
        FUN_0040cc00(iVar2 + -0x50,0,0xffffffff);
        FUN_00537300(iVar2 + -0x40);
        *(undefined4 *)(iVar7 + -0x3c) = *(undefined4 *)(iVar2 + -0x3c);
        *(undefined4 *)(iVar7 + -0x38) = *(undefined4 *)(iVar2 + -0x38);
        *(undefined4 *)(iVar7 + -0x34) = *(undefined4 *)(iVar2 + -0x34);
        *(undefined4 *)(iVar7 + -0x30) = *(undefined4 *)(iVar2 + -0x30);
        *(undefined4 *)(iVar7 + -0x2c) = *(undefined4 *)(iVar2 + -0x2c);
        *(undefined4 *)(iVar7 + -0x28) = *(undefined4 *)(iVar2 + -0x28);
        *(undefined4 *)(iVar7 + -0x24) = *(undefined4 *)(iVar2 + -0x24);
        iVar2 = iVar2 + -0x50;
        iVar7 = iVar7 + -0x50;
      } while (iVar4 != param_2);
    }
    iVar4 = param_3 * 0x50 + param_2;
    for (; param_2 != iVar4; param_2 = param_2 + 0x50) {
      FUN_00457960(param_4);
    }
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + param_3 * 0x50;
  }
  return;
}

