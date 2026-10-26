/*
 * FUN_0054a090 at 0054a090
 * undefined FUN_0054a090(void)
 * Address ranges: 0054a090-0054a23f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void * __thiscall FUN_0054a090(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  void *pvVar8;
  
  iVar2 = *(int *)(param_1 + 8);
  iVar3 = *(int *)(param_1 + 4);
  iVar7 = (int)param_2 - iVar3 >> 3;
  if (*(int *)(param_1 + 0xc) - iVar2 >> 3 != 0) {
    if (iVar2 - (int)param_2 >> 3 == 0) {
      FUN_0054a240(param_2,iVar2,param_2 + 2);
      FUN_0054aeb0(*(int *)(param_1 + 8),1 - (*(int *)(param_1 + 8) - (int)param_2 >> 3),param_3);
      puVar6 = *(undefined4 **)(param_1 + 8);
      for (; param_2 != puVar6; param_2 = param_2 + 2) {
        *param_2 = *param_3;
        param_2[1] = param_3[1];
      }
    }
    else {
      FUN_0054a240(iVar2 + -8,iVar2,iVar2);
      puVar6 = *(undefined4 **)(param_1 + 8);
      puVar1 = *(undefined4 **)(param_1 + 8);
      while (param_2 != puVar1 + -2) {
        puVar6[-2] = puVar1[-4];
        puVar6[-1] = puVar1[-3];
        puVar6 = puVar6 + -2;
        puVar1 = puVar1 + -2;
      }
      puVar6 = param_2 + 2;
      for (; param_2 != puVar6; param_2 = param_2 + 2) {
        *param_2 = *param_3;
        param_2[1] = param_3[1];
      }
    }
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 8;
    return (void *)(*(int *)(param_1 + 4) + iVar7 * 8);
  }
  if ((iVar3 == 0) || (uVar5 = iVar2 - iVar3 >> 3, uVar5 < 2)) {
    uVar5 = 1;
  }
  if (iVar3 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = iVar2 - iVar3 >> 3;
  }
  iVar2 = iVar2 + uVar5;
  iVar3 = iVar2;
  if (iVar2 < 0) {
    iVar3 = 0;
  }
  pvVar4 = operator_new(iVar3 * 8);
  pvVar8 = pvVar4;
  for (puVar6 = *(undefined4 **)(param_1 + 4); puVar6 != param_2; puVar6 = puVar6 + 2) {
    FUN_0042dc30(pvVar8,puVar6);
    pvVar8 = (void *)((int)pvVar8 + 8);
  }
  FUN_0042dc30(pvVar8,param_3);
  FUN_0054a240(param_2,*(undefined4 *)(param_1 + 8),(int)pvVar8 + 8);
  FUN_00587d50(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8));
  FUN_005fe5f0(*(undefined4 *)(param_1 + 4));
  *(void **)(param_1 + 0xc) = (void *)((int)pvVar4 + iVar2 * 8);
  iVar2 = FUN_00548d10();
  *(void **)(param_1 + 4) = pvVar4;
  *(int *)(param_1 + 8) = (int)pvVar4 + iVar2 * 8 + 8;
  return (void *)((int)pvVar4 + iVar7 * 8);
}

