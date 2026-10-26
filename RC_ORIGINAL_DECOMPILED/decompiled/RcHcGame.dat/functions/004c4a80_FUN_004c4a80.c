/*
 * FUN_004c4a80 at 004c4a80
 * undefined FUN_004c4a80(void)
 * Address ranges: 004c4a80-004c4d62
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_004c4a80(int param_1,undefined4 *param_2,uint param_3,undefined4 param_4)

{
  void *pvVar1;
  uint uVar2;
  int iVar3;
  void *pvVar4;
  undefined4 *puVar5;
  void *pvVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  
  puVar9 = *(undefined4 **)(param_1 + 8);
  if ((uint)(*(int *)(param_1 + 0xc) - (int)puVar9 >> 6) < param_3) {
    iVar8 = *(int *)(param_1 + 4);
    if ((iVar8 == 0) || (uVar2 = (int)puVar9 - iVar8 >> 6, uVar2 <= param_3)) {
      uVar2 = param_3;
    }
    if (iVar8 == 0) {
      iVar8 = 0;
    }
    else {
      iVar8 = (int)puVar9 - iVar8 >> 6;
    }
    iVar8 = uVar2 + iVar8;
    iVar3 = iVar8;
    if (iVar8 < 0) {
      iVar3 = 0;
    }
    pvVar4 = operator_new(iVar3 << 6);
    pvVar6 = pvVar4;
    for (puVar9 = *(undefined4 **)(param_1 + 4); uVar2 = param_3, pvVar1 = pvVar6, puVar9 != param_2
        ; puVar9 = puVar9 + 0x10) {
      FUN_004c4d70(pvVar6,puVar9);
      pvVar6 = (void *)((int)pvVar6 + 0x40);
    }
    for (; uVar2 != 0; uVar2 = uVar2 - 1) {
      FUN_004c4d70(pvVar1,param_4);
      pvVar1 = (void *)((int)pvVar1 + 0x40);
    }
    pvVar6 = (void *)(param_3 * 0x40 + (int)pvVar6);
    puVar9 = *(undefined4 **)(param_1 + 8);
    for (; param_2 != puVar9; param_2 = param_2 + 0x10) {
      FUN_004c4d70(pvVar6,param_2);
      pvVar6 = (void *)((int)pvVar6 + 0x40);
    }
    iVar3 = *(int *)(param_1 + 8);
    for (iVar10 = *(int *)(param_1 + 4); iVar10 != iVar3; iVar10 = iVar10 + 0x40) {
      FUN_004c29c0();
    }
    FUN_005fe5f0(*(undefined4 *)(param_1 + 4));
    iVar3 = *(int *)(param_1 + 4);
    *(void **)(param_1 + 0xc) = (void *)(iVar8 * 0x40 + (int)pvVar4);
    if (iVar3 == 0) {
      *(void **)(param_1 + 4) = pvVar4;
      *(void **)(param_1 + 8) = (void *)(param_3 * 0x40 + (int)pvVar4);
      return;
    }
    *(void **)(param_1 + 4) = pvVar4;
    *(void **)(param_1 + 8) =
         (void *)(((*(int *)(param_1 + 8) - iVar3 >> 6) + param_3) * 0x40 + (int)pvVar4);
    return;
  }
  if ((uint)((int)puVar9 - (int)param_2 >> 6) < param_3) {
    puVar5 = param_2 + param_3 * 0x10;
    for (puVar7 = param_2; puVar7 != puVar9; puVar7 = puVar7 + 0x10) {
      FUN_004c4d70(puVar5,puVar7);
      puVar5 = puVar5 + 0x10;
    }
    iVar8 = *(int *)(param_1 + 8);
    for (iVar3 = param_3 - (iVar8 - (int)param_2 >> 6); iVar3 != 0; iVar3 = iVar3 + -1) {
      FUN_004c4d70(iVar8,param_4);
      iVar8 = iVar8 + 0x40;
    }
    puVar9 = *(undefined4 **)(param_1 + 8);
    if (param_2 != puVar9) {
      do {
        FUN_004c4f40(param_4);
        param_2 = param_2 + 0x10;
      } while (param_2 != puVar9);
      *(uint *)(param_1 + 8) = *(int *)(param_1 + 8) + param_3 * 0x40;
      return;
    }
  }
  else {
    if (param_3 == 0) {
      return;
    }
    puVar5 = puVar9;
    for (puVar7 = puVar9 + param_3 * -0x10; puVar7 != puVar9; puVar7 = puVar7 + 0x10) {
      FUN_004c4d70(puVar5,puVar7);
      puVar5 = puVar5 + 0x10;
    }
    puVar9 = *(undefined4 **)(param_1 + 8);
    for (puVar5 = *(undefined4 **)(param_1 + 8) + param_3 * -0x10; param_2 != puVar5;
        puVar5 = puVar5 + -0x10) {
      puVar9[-0x10] = puVar5[-0x10];
      *(undefined1 *)(puVar9 + -0xf) = *(undefined1 *)(puVar5 + -0xf);
      puVar9[-0xe] = puVar5[-0xe];
      FUN_0040cc00(puVar5 + -0xd,0,0xffffffff);
      puVar9[-9] = puVar5[-9];
      *(undefined1 *)(puVar9 + -8) = *(undefined1 *)(puVar5 + -8);
      puVar9[-7] = puVar5[-7];
      puVar9[-6] = puVar5[-6];
      puVar9[-5] = puVar5[-5];
      puVar9[-4] = puVar5[-4];
      puVar9[-3] = puVar5[-3];
      puVar9[-2] = puVar5[-2];
      puVar9 = puVar9 + -0x10;
    }
    puVar9 = param_2 + param_3 * 0x10;
    for (; param_2 != puVar9; param_2 = param_2 + 0x10) {
      FUN_004c4f40(param_4);
    }
  }
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + param_3 * 0x40;
  return;
}

