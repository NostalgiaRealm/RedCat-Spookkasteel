/*
 * FUN_0053b940 at 0053b940
 * undefined FUN_0053b940(void)
 * Address ranges: 0053b940-0053bc63
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_0053b940(int param_1,int param_2,uint param_3,int param_4)

{
  undefined4 *puVar1;
  void *pvVar2;
  int iVar3;
  void *pvVar4;
  uint uVar5;
  int iVar6;
  void *pvVar7;
  int iVar8;
  undefined4 *puVar9;
  
  iVar6 = *(int *)(param_1 + 8);
  if ((uint)((*(int *)(param_1 + 0xc) - iVar6) / 0x1c) < param_3) {
    iVar3 = *(int *)(param_1 + 4);
    if ((iVar3 == 0) || (uVar5 = (iVar6 - iVar3) / 0x1c, uVar5 <= param_3)) {
      uVar5 = param_3;
    }
    if (iVar3 == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = (iVar6 - iVar3) / 0x1c;
    }
    iVar6 = iVar6 + uVar5;
    iVar3 = iVar6;
    if (iVar6 < 0) {
      iVar3 = 0;
    }
    pvVar4 = operator_new(iVar3 * 0x1c);
    pvVar7 = pvVar4;
    for (iVar3 = *(int *)(param_1 + 4); uVar5 = param_3, pvVar2 = pvVar7, iVar3 != param_2;
        iVar3 = iVar3 + 0x1c) {
      FUN_0053bc70(pvVar7,iVar3);
      pvVar7 = (void *)((int)pvVar7 + 0x1c);
    }
    for (; uVar5 != 0; uVar5 = uVar5 - 1) {
      FUN_0053bc70(pvVar2,param_4);
      pvVar2 = (void *)((int)pvVar2 + 0x1c);
    }
    pvVar7 = (void *)((int)pvVar7 + param_3 * 0x1c);
    iVar3 = *(int *)(param_1 + 8);
    for (; param_2 != iVar3; param_2 = param_2 + 0x1c) {
      FUN_0053bc70(pvVar7,param_2);
      pvVar7 = (void *)((int)pvVar7 + 0x1c);
    }
    puVar1 = *(undefined4 **)(param_1 + 8);
    for (puVar9 = *(undefined4 **)(param_1 + 4); puVar9 != puVar1; puVar9 = puVar9 + 7) {
      (**(code **)*puVar9)(0);
    }
    FUN_005fe5f0(*(undefined4 *)(param_1 + 4));
    *(void **)(param_1 + 0xc) = (void *)((int)pvVar4 + iVar6 * 0x1c);
    if (*(int *)(param_1 + 4) == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x1c;
    }
    *(void **)(param_1 + 4) = pvVar4;
    *(void **)(param_1 + 8) = (void *)((int)pvVar4 + (param_3 + iVar6) * 0x1c);
    return;
  }
  if ((uint)((iVar6 - param_2) / 0x1c) < param_3) {
    iVar3 = param_3 * 0x1c + param_2;
    for (iVar8 = param_2; iVar8 != iVar6; iVar8 = iVar8 + 0x1c) {
      FUN_0053bc70(iVar3,iVar8);
      iVar3 = iVar3 + 0x1c;
    }
    iVar6 = *(int *)(param_1 + 8);
    for (iVar3 = param_3 - (iVar6 - param_2) / 0x1c; iVar3 != 0; iVar3 = iVar3 + -1) {
      FUN_0053bc70(iVar6,param_4);
      iVar6 = iVar6 + 0x1c;
    }
    iVar6 = *(int *)(param_1 + 8);
    for (; param_2 != iVar6; param_2 = param_2 + 0x1c) {
      FUN_005ab760(param_4);
      *(undefined4 *)(param_2 + 0x14) = *(undefined4 *)(param_4 + 0x14);
      *(undefined4 *)(param_2 + 0x18) = *(undefined4 *)(param_4 + 0x18);
    }
    *(uint *)(param_1 + 8) = *(int *)(param_1 + 8) + param_3 * 0x1c;
    return;
  }
  if (param_3 != 0) {
    iVar3 = iVar6;
    for (iVar8 = iVar6 + param_3 * -0x1c; iVar8 != iVar6; iVar8 = iVar8 + 0x1c) {
      FUN_0053bc70(iVar3,iVar8);
      iVar3 = iVar3 + 0x1c;
    }
    iVar6 = *(int *)(param_1 + 8);
    iVar3 = *(int *)(param_1 + 8) + param_3 * -0x1c;
    while (param_2 != iVar3) {
      FUN_005ab760(iVar3 + -0x1c);
      *(undefined4 *)(iVar6 + -8) = *(undefined4 *)(iVar3 + -8);
      *(undefined4 *)(iVar6 + -4) = *(undefined4 *)(iVar3 + -4);
      iVar6 = iVar6 + -0x1c;
      iVar3 = iVar3 + -0x1c;
    }
    iVar6 = param_2 + param_3 * 0x1c;
    for (; param_2 != iVar6; param_2 = param_2 + 0x1c) {
      FUN_005ab760(param_4);
      *(undefined4 *)(param_2 + 0x14) = *(undefined4 *)(param_4 + 0x14);
      *(undefined4 *)(param_2 + 0x18) = *(undefined4 *)(param_4 + 0x18);
    }
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + param_3 * 0x1c;
  }
  return;
}

