/*
 * FUN_005faad0 at 005faad0
 * undefined FUN_005faad0(void)
 * Address ranges: 005faad0-005fae5f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_005faad0(int param_1,int param_2,uint param_3,int param_4)

{
  void *pvVar1;
  int iVar2;
  void *pvVar3;
  uint uVar4;
  int iVar5;
  void *pvVar6;
  int iVar7;
  
  iVar5 = *(int *)(param_1 + 8);
  if ((uint)((*(int *)(param_1 + 0xc) - iVar5) / 0x78) < param_3) {
    iVar2 = *(int *)(param_1 + 4);
    if ((iVar2 == 0) || (uVar4 = (iVar5 - iVar2) / 0x78, uVar4 <= param_3)) {
      uVar4 = param_3;
    }
    if (iVar2 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = (iVar5 - iVar2) / 0x78;
    }
    iVar5 = iVar5 + uVar4;
    iVar2 = iVar5;
    if (iVar5 < 0) {
      iVar2 = 0;
    }
    pvVar3 = operator_new(iVar2 * 0x78);
    pvVar6 = pvVar3;
    for (iVar2 = *(int *)(param_1 + 4); uVar4 = param_3, pvVar1 = pvVar6, iVar2 != param_2;
        iVar2 = iVar2 + 0x78) {
      FUN_005fae60(pvVar6,iVar2);
      pvVar6 = (void *)((int)pvVar6 + 0x78);
    }
    for (; uVar4 != 0; uVar4 = uVar4 - 1) {
      FUN_005fae60(pvVar1,param_4);
      pvVar1 = (void *)((int)pvVar1 + 0x78);
    }
    pvVar6 = (void *)((int)pvVar6 + param_3 * 0x78);
    iVar2 = *(int *)(param_1 + 8);
    for (; param_2 != iVar2; param_2 = param_2 + 0x78) {
      FUN_005fae60(pvVar6,param_2);
      pvVar6 = (void *)((int)pvVar6 + 0x78);
    }
    iVar2 = *(int *)(param_1 + 8);
    for (iVar7 = *(int *)(param_1 + 4); iVar7 != iVar2; iVar7 = iVar7 + 0x78) {
      FUN_005fa2d0();
    }
    FUN_005fe5f0(*(undefined4 *)(param_1 + 4));
    *(void **)(param_1 + 0xc) = (void *)((int)pvVar3 + iVar5 * 0x78);
    if (*(int *)(param_1 + 4) == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x78;
    }
    *(void **)(param_1 + 4) = pvVar3;
    *(void **)(param_1 + 8) = (void *)((int)pvVar3 + (param_3 + iVar5) * 0x78);
    return;
  }
  if (param_3 <= (uint)((iVar5 - param_2) / 0x78)) {
    if (param_3 != 0) {
      iVar2 = iVar5;
      for (iVar7 = iVar5 + param_3 * -0x78; iVar7 != iVar5; iVar7 = iVar7 + 0x78) {
        FUN_005fae60(iVar2,iVar7);
        iVar2 = iVar2 + 0x78;
      }
      iVar5 = *(int *)(param_1 + 8) + param_3 * -0x78;
      while (param_2 != iVar5) {
        iVar5 = iVar5 + -0x78;
        FUN_005fa7f0(iVar5);
      }
      iVar5 = param_3 * 0x78 + param_2;
      if (param_2 != iVar5) {
        iVar2 = param_2 + 0x24;
        do {
          if (iVar2 + -0x24 != param_4) {
            FUN_0040cc00(param_4 + 0x68,0,0xffffffff);
            FUN_0040cc00(param_4 + 0x24,0,0xffffffff);
            *(undefined4 *)(iVar2 + 0x40) = *(undefined4 *)(param_4 + 100);
            FUN_0040cc00(param_4,0,0xffffffff);
            FUN_0040cc00(param_4 + 0x34,0,0xffffffff);
            FUN_0040cc00(param_4 + 0x54,0,0xffffffff);
            FUN_0040cc00(param_4 + 0x44,0,0xffffffff);
            FUN_0040cc00(param_4 + 0x14,0,0xffffffff);
            *(undefined4 *)(iVar2 + -0x14) = *(undefined4 *)(param_4 + 0x10);
          }
          iVar7 = iVar2 + 0x54;
          iVar2 = iVar2 + 0x78;
        } while (iVar7 != iVar5);
      }
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + param_3 * 0x78;
    }
    return;
  }
  iVar2 = param_3 * 0x78 + param_2;
  for (iVar7 = param_2; iVar7 != iVar5; iVar7 = iVar7 + 0x78) {
    FUN_005fae60(iVar2,iVar7);
    iVar2 = iVar2 + 0x78;
  }
  iVar5 = *(int *)(param_1 + 8);
  for (iVar2 = param_3 - (iVar5 - param_2) / 0x78; iVar2 != 0; iVar2 = iVar2 + -1) {
    FUN_005fae60(iVar5,param_4);
    iVar5 = iVar5 + 0x78;
  }
  iVar5 = *(int *)(param_1 + 8);
  for (; param_2 != iVar5; param_2 = param_2 + 0x78) {
    FUN_005fa7f0(param_4);
  }
  *(uint *)(param_1 + 8) = *(int *)(param_1 + 8) + param_3 * 0x78;
  return;
}

