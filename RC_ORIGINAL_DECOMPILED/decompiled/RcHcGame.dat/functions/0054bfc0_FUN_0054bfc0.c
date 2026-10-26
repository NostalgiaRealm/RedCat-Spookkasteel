/*
 * FUN_0054bfc0 at 0054bfc0
 * undefined FUN_0054bfc0(void)
 * Address ranges: 0054bfc0-0054c193
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall FUN_0054bfc0(int param_1,int param_2)

{
  uint uVar1;
  void *pvVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  if (param_1 == param_2) {
    return param_1;
  }
  iVar5 = *(int *)(param_2 + 4);
  if (iVar5 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(int *)(param_2 + 8) - iVar5 >> 4;
  }
  iVar6 = *(int *)(param_1 + 4);
  if (iVar6 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(int *)(param_1 + 8) - iVar6 >> 4;
  }
  if (uVar1 < uVar3) {
    if (iVar5 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(int *)(param_2 + 8) - iVar5 >> 4;
    }
    if (iVar6 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(int *)(param_1 + 0xc) - iVar6 >> 4;
    }
    if (uVar1 < uVar3) {
      iVar5 = *(int *)(param_1 + 8);
      for (; iVar6 != iVar5; iVar6 = iVar6 + 0x10) {
        FUN_00514430();
      }
      FUN_005fe5f0(*(undefined4 *)(param_1 + 4));
      if (*(int *)(param_2 + 4) == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(param_2 + 8) - *(int *)(param_2 + 4) >> 4;
      }
      if (iVar5 < 0) {
        iVar5 = 0;
      }
      pvVar2 = operator_new(iVar5 << 4);
      *(void **)(param_1 + 4) = pvVar2;
      iVar5 = *(int *)(param_2 + 8);
      for (iVar6 = *(int *)(param_2 + 4); iVar6 != iVar5; iVar6 = iVar6 + 0x10) {
        FUN_00549730(pvVar2,iVar6);
        pvVar2 = (void *)((int)pvVar2 + 0x10);
      }
      *(void **)(param_1 + 8) = pvVar2;
      *(void **)(param_1 + 0xc) = pvVar2;
      return param_1;
    }
    if (iVar6 == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)(param_1 + 8) - iVar6 >> 4;
    }
    iVar6 = iVar6 * 0x10 + iVar5;
    for (; iVar5 != iVar6; iVar5 = iVar5 + 0x10) {
      FUN_004f12a0(iVar5);
    }
    iVar5 = *(int *)(param_2 + 8);
    iVar4 = *(int *)(param_1 + 8);
    for (; iVar6 != iVar5; iVar6 = iVar6 + 0x10) {
      FUN_00549730(iVar4,iVar6);
      iVar4 = iVar4 + 0x10;
    }
    iVar5 = *(int *)(param_2 + 4);
    if (iVar5 == 0) {
      iVar5 = 0;
      goto LAB_0054c063;
    }
    iVar6 = *(int *)(param_2 + 8);
  }
  else {
    iVar4 = *(int *)(param_2 + 8);
    for (; iVar5 != iVar4; iVar5 = iVar5 + 0x10) {
      FUN_004f12a0(iVar5);
      iVar6 = iVar6 + 0x10;
    }
    iVar5 = *(int *)(param_1 + 8);
    for (; iVar6 != iVar5; iVar6 = iVar6 + 0x10) {
      FUN_005497f0(0);
    }
    iVar5 = *(int *)(param_2 + 4);
    if (iVar5 == 0) {
      *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 4);
      return param_1;
    }
    iVar6 = *(int *)(param_2 + 8);
  }
  iVar5 = iVar6 - iVar5 >> 4;
LAB_0054c063:
  *(int *)(param_1 + 8) = iVar5 * 0x10 + *(int *)(param_1 + 4);
  return param_1;
}

