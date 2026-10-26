/*
 * FUN_00444d70 at 00444d70
 * undefined FUN_00444d70(void)
 * Address ranges: 00444d70-00445021
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_00444d70(int param_1,int param_2,uint param_3,undefined4 param_4)

{
  void *pvVar1;
  uint uVar2;
  int iVar3;
  void *pvVar4;
  void *pvVar5;
  int iVar6;
  int iVar7;
  
  iVar6 = *(int *)(param_1 + 8);
  if ((uint)(*(int *)(param_1 + 0xc) - iVar6 >> 4) < param_3) {
    iVar3 = *(int *)(param_1 + 4);
    if ((iVar3 == 0) || (uVar2 = iVar6 - iVar3 >> 4, uVar2 <= param_3)) {
      uVar2 = param_3;
    }
    if (iVar3 == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = iVar6 - iVar3 >> 4;
    }
    iVar6 = uVar2 + iVar6;
    iVar3 = iVar6;
    if (iVar6 < 0) {
      iVar3 = 0;
    }
    pvVar4 = operator_new(iVar3 << 4);
    pvVar5 = pvVar4;
    for (iVar3 = *(int *)(param_1 + 4); uVar2 = param_3, pvVar1 = pvVar5, iVar3 != param_2;
        iVar3 = iVar3 + 0x10) {
      FUN_00443140(pvVar5,iVar3);
      pvVar5 = (void *)((int)pvVar5 + 0x10);
    }
    for (; uVar2 != 0; uVar2 = uVar2 - 1) {
      FUN_00443140(pvVar1,param_4);
      pvVar1 = (void *)((int)pvVar1 + 0x10);
    }
    pvVar5 = (void *)(param_3 * 0x10 + (int)pvVar5);
    iVar3 = *(int *)(param_1 + 8);
    for (; param_2 != iVar3; param_2 = param_2 + 0x10) {
      FUN_00443140(pvVar5,param_2);
      pvVar5 = (void *)((int)pvVar5 + 0x10);
    }
    iVar3 = *(int *)(param_1 + 8);
    for (iVar7 = *(int *)(param_1 + 4); iVar7 != iVar3; iVar7 = iVar7 + 0x10) {
      FUN_004040a0(1);
    }
    FUN_005fe5f0(*(undefined4 *)(param_1 + 4));
    iVar3 = *(int *)(param_1 + 4);
    *(void **)(param_1 + 0xc) = (void *)(iVar6 * 0x10 + (int)pvVar4);
    if (iVar3 == 0) {
      *(void **)(param_1 + 4) = pvVar4;
      *(void **)(param_1 + 8) = (void *)(param_3 * 0x10 + (int)pvVar4);
      return;
    }
    *(void **)(param_1 + 4) = pvVar4;
    *(void **)(param_1 + 8) =
         (void *)(((*(int *)(param_1 + 8) - iVar3 >> 4) + param_3) * 0x10 + (int)pvVar4);
    return;
  }
  if ((uint)(iVar6 - param_2 >> 4) < param_3) {
    iVar3 = param_3 * 0x10 + param_2;
    for (iVar7 = param_2; iVar7 != iVar6; iVar7 = iVar7 + 0x10) {
      FUN_00443140(iVar3,iVar7);
      iVar3 = iVar3 + 0x10;
    }
    iVar6 = *(int *)(param_1 + 8);
    for (iVar3 = param_3 - (iVar6 - param_2 >> 4); iVar3 != 0; iVar3 = iVar3 + -1) {
      FUN_00443140(iVar6,param_4);
      iVar6 = iVar6 + 0x10;
    }
    iVar6 = *(int *)(param_1 + 8);
    if (param_2 != iVar6) {
      do {
        FUN_0040cc00(param_4,0,0xffffffff);
        param_2 = param_2 + 0x10;
      } while (param_2 != iVar6);
      *(uint *)(param_1 + 8) = *(int *)(param_1 + 8) + param_3 * 0x10;
      return;
    }
  }
  else {
    if (param_3 == 0) {
      return;
    }
    iVar3 = iVar6;
    for (iVar7 = iVar6 + param_3 * -0x10; iVar7 != iVar6; iVar7 = iVar7 + 0x10) {
      FUN_00443140(iVar3,iVar7);
      iVar3 = iVar3 + 0x10;
    }
    iVar6 = *(int *)(param_1 + 8) + param_3 * -0x10;
    while (param_2 != iVar6) {
      iVar6 = iVar6 + -0x10;
      FUN_0040cc00(iVar6,0,0xffffffff);
    }
    iVar6 = param_3 * 0x10 + param_2;
    for (; param_2 != iVar6; param_2 = param_2 + 0x10) {
      FUN_0040cc00(param_4,0,0xffffffff);
    }
  }
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + param_3 * 0x10;
  return;
}

