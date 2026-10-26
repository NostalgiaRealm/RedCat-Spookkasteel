/*
 * FUN_00536fa0 at 00536fa0
 * undefined FUN_00536fa0(void)
 * Address ranges: 00536fa0-005372ee
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_00536fa0(int param_1,undefined4 *param_2,uint param_3,int param_4)

{
  void *pvVar1;
  int iVar2;
  void *pvVar3;
  uint uVar4;
  int iVar5;
  void *pvVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  
  puVar9 = *(undefined4 **)(param_1 + 8);
  if ((uint)((*(int *)(param_1 + 0xc) - (int)puVar9) / 0x2c) < param_3) {
    iVar5 = *(int *)(param_1 + 4);
    if ((iVar5 == 0) || (uVar4 = ((int)puVar9 - iVar5) / 0x2c, uVar4 <= param_3)) {
      uVar4 = param_3;
    }
    if (iVar5 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = ((int)puVar9 - iVar5) / 0x2c;
    }
    iVar5 = iVar5 + uVar4;
    iVar2 = iVar5;
    if (iVar5 < 0) {
      iVar2 = 0;
    }
    pvVar3 = operator_new(iVar2 * 0x2c);
    pvVar6 = pvVar3;
    for (puVar9 = *(undefined4 **)(param_1 + 4); uVar4 = param_3, pvVar1 = pvVar6, puVar9 != param_2
        ; puVar9 = puVar9 + 0xb) {
      FUN_00537440(pvVar6,puVar9);
      pvVar6 = (void *)((int)pvVar6 + 0x2c);
    }
    for (; uVar4 != 0; uVar4 = uVar4 - 1) {
      FUN_00537440(pvVar1,param_4);
      pvVar1 = (void *)((int)pvVar1 + 0x2c);
    }
    pvVar6 = (void *)((int)pvVar6 + param_3 * 0x2c);
    puVar9 = *(undefined4 **)(param_1 + 8);
    for (; param_2 != puVar9; param_2 = param_2 + 0xb) {
      FUN_00537440(pvVar6,param_2);
      pvVar6 = (void *)((int)pvVar6 + 0x2c);
    }
    puVar9 = *(undefined4 **)(param_1 + 8);
    for (puVar8 = *(undefined4 **)(param_1 + 4); puVar8 != puVar9; puVar8 = puVar8 + 0xb) {
      (**(code **)*puVar8)(0);
    }
    FUN_005fe5f0(*(undefined4 *)(param_1 + 4));
    *(void **)(param_1 + 0xc) = (void *)((int)pvVar3 + iVar5 * 0x2c);
    if (*(int *)(param_1 + 4) == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x2c;
    }
    *(void **)(param_1 + 4) = pvVar3;
    *(void **)(param_1 + 8) = (void *)((int)pvVar3 + (param_3 + iVar5) * 0x2c);
    return;
  }
  if ((uint)(((int)puVar9 - (int)param_2) / 0x2c) < param_3) {
    puVar8 = param_2 + param_3 * 0xb;
    for (puVar7 = param_2; puVar7 != puVar9; puVar7 = puVar7 + 0xb) {
      FUN_00537440(puVar8,puVar7);
      puVar8 = puVar8 + 0xb;
    }
    iVar5 = *(int *)(param_1 + 8);
    for (iVar2 = param_3 - (iVar5 - (int)param_2) / 0x2c; iVar2 != 0; iVar2 = iVar2 + -1) {
      FUN_00537440(iVar5,param_4);
      iVar5 = iVar5 + 0x2c;
    }
    puVar9 = *(undefined4 **)(param_1 + 8);
    if (param_2 != puVar9) {
      puVar8 = param_2 + 9;
      do {
        FUN_005ab760(param_4);
        FUN_0040cc00(param_4 + 0x14,0,0xffffffff);
        *puVar8 = *(undefined4 *)(param_4 + 0x24);
        *(undefined1 *)(puVar8 + 1) = *(undefined1 *)(param_4 + 0x28);
        puVar7 = puVar8 + 2;
        puVar8 = puVar8 + 0xb;
      } while (puVar7 != puVar9);
    }
  }
  else {
    if (param_3 == 0) {
      return;
    }
    puVar8 = puVar9;
    for (puVar7 = puVar9 + param_3 * -0xb; puVar7 != puVar9; puVar7 = puVar7 + 0xb) {
      FUN_00537440(puVar8,puVar7);
      puVar8 = puVar8 + 0xb;
    }
    iVar5 = *(int *)(param_1 + 8);
    puVar9 = (undefined4 *)(*(int *)(param_1 + 8) + param_3 * -0x2c);
    while (param_2 != puVar9) {
      FUN_005ab760(puVar9 + -0xb);
      FUN_0040cc00(puVar9 + -6,0,0xffffffff);
      *(undefined4 *)(iVar5 + -8) = puVar9[-2];
      *(undefined1 *)(iVar5 + -4) = *(undefined1 *)(puVar9 + -1);
      iVar5 = iVar5 + -0x2c;
      puVar9 = puVar9 + -0xb;
    }
    if (param_2 != param_2 + param_3 * 0xb) {
      puVar9 = param_2 + 9;
      do {
        FUN_005ab760(param_4);
        FUN_0040cc00(param_4 + 0x14,0,0xffffffff);
        *puVar9 = *(undefined4 *)(param_4 + 0x24);
        *(undefined1 *)(puVar9 + 1) = *(undefined1 *)(param_4 + 0x28);
        puVar8 = puVar9 + 2;
        puVar9 = puVar9 + 0xb;
      } while (puVar8 != param_2 + param_3 * 0xb);
    }
  }
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + param_3 * 0x2c;
  return;
}

