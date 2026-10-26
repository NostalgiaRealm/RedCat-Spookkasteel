/*
 * FUN_005f95a0 at 005f95a0
 * undefined FUN_005f95a0(void)
 * Address ranges: 005f95a0-005f9863
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_005f95a0(int param_1,undefined4 *param_2,uint param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  void *pvVar2;
  uint uVar3;
  int iVar4;
  void *pvVar5;
  undefined4 *puVar6;
  void *pvVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int iVar10;
  
  puVar9 = *(undefined4 **)(param_1 + 8);
  if (param_3 <= (uint)(*(int *)(param_1 + 0xc) - (int)puVar9 >> 4)) {
    if ((uint)((int)puVar9 - (int)param_2 >> 4) < param_3) {
      puVar6 = param_2 + param_3 * 4;
      for (puVar8 = param_2; puVar8 != puVar9; puVar8 = puVar8 + 4) {
        FUN_005f9870(puVar6,puVar8);
        puVar6 = puVar6 + 4;
      }
      iVar10 = *(int *)(param_1 + 8);
      for (iVar4 = param_3 - (iVar10 - (int)param_2 >> 4); iVar4 != 0; iVar4 = iVar4 + -1) {
        FUN_005f9870(iVar10,param_4);
        iVar10 = iVar10 + 0x10;
      }
      puVar9 = *(undefined4 **)(param_1 + 8);
      if (param_2 != puVar9) {
        puVar6 = param_2 + 1;
        do {
          if (puVar6 + -1 != param_4) {
            *(undefined1 *)(puVar6 + 2) = *(undefined1 *)(param_4 + 3);
            *puVar6 = param_4[1];
            puVar6[1] = param_4[2];
          }
          puVar8 = puVar6 + 3;
          puVar6 = puVar6 + 4;
        } while (puVar8 != puVar9);
        *(uint *)(param_1 + 8) = *(int *)(param_1 + 8) + param_3 * 0x10;
        return;
      }
    }
    else {
      if (param_3 == 0) {
        return;
      }
      puVar6 = puVar9;
      for (puVar8 = puVar9 + param_3 * -4; puVar8 != puVar9; puVar8 = puVar8 + 4) {
        FUN_005f9870(puVar6,puVar8);
        puVar6 = puVar6 + 4;
      }
      puVar9 = *(undefined4 **)(param_1 + 8);
      puVar6 = *(undefined4 **)(param_1 + 8) + param_3 * -4;
      while (puVar1 = puVar6, puVar8 = puVar9, param_2 != puVar1) {
        puVar6 = puVar1 + -4;
        puVar9 = puVar8 + -4;
        if (puVar9 != puVar6) {
          *(undefined1 *)(puVar8 + -1) = *(undefined1 *)(puVar1 + -1);
          puVar8[-3] = puVar1[-3];
          puVar8[-2] = puVar1[-2];
        }
      }
      if (param_2 != param_2 + param_3 * 4) {
        puVar9 = param_2 + 1;
        do {
          if (puVar9 + -1 != param_4) {
            *(undefined1 *)(puVar9 + 2) = *(undefined1 *)(param_4 + 3);
            *puVar9 = param_4[1];
            puVar9[1] = param_4[2];
          }
          puVar6 = puVar9 + 3;
          puVar9 = puVar9 + 4;
        } while (puVar6 != param_2 + param_3 * 4);
      }
    }
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + param_3 * 0x10;
    return;
  }
  iVar10 = *(int *)(param_1 + 4);
  if ((iVar10 == 0) || (uVar3 = (int)puVar9 - iVar10 >> 4, uVar3 <= param_3)) {
    uVar3 = param_3;
  }
  if (iVar10 == 0) {
    iVar10 = 0;
  }
  else {
    iVar10 = (int)puVar9 - iVar10 >> 4;
  }
  iVar10 = uVar3 + iVar10;
  iVar4 = iVar10;
  if (iVar10 < 0) {
    iVar4 = 0;
  }
  pvVar5 = operator_new(iVar4 << 4);
  pvVar7 = pvVar5;
  for (puVar9 = *(undefined4 **)(param_1 + 4); uVar3 = param_3, pvVar2 = pvVar7, puVar9 != param_2;
      puVar9 = puVar9 + 4) {
    FUN_005f9870(pvVar7,puVar9);
    pvVar7 = (void *)((int)pvVar7 + 0x10);
  }
  for (; uVar3 != 0; uVar3 = uVar3 - 1) {
    FUN_005f9870(pvVar2,param_4);
    pvVar2 = (void *)((int)pvVar2 + 0x10);
  }
  pvVar7 = (void *)(param_3 * 0x10 + (int)pvVar7);
  puVar9 = *(undefined4 **)(param_1 + 8);
  for (; param_2 != puVar9; param_2 = param_2 + 4) {
    FUN_005f9870(pvVar7,param_2);
    pvVar7 = (void *)((int)pvVar7 + 0x10);
  }
  puVar9 = *(undefined4 **)(param_1 + 8);
  for (puVar6 = *(undefined4 **)(param_1 + 4); puVar6 != puVar9; puVar6 = puVar6 + 4) {
    (**(code **)*puVar6)(0);
  }
  FUN_005fe5f0(*(undefined4 *)(param_1 + 4));
  iVar4 = *(int *)(param_1 + 4);
  *(void **)(param_1 + 0xc) = (void *)(iVar10 * 0x10 + (int)pvVar5);
  if (iVar4 != 0) {
    *(void **)(param_1 + 4) = pvVar5;
    *(void **)(param_1 + 8) =
         (void *)(((*(int *)(param_1 + 8) - iVar4 >> 4) + param_3) * 0x10 + (int)pvVar5);
    return;
  }
  *(void **)(param_1 + 4) = pvVar5;
  *(void **)(param_1 + 8) = (void *)(param_3 * 0x10 + (int)pvVar5);
  return;
}

