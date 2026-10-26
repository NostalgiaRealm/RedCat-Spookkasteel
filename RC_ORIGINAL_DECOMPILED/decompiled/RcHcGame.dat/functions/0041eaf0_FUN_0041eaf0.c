/*
 * FUN_0041eaf0 at 0041eaf0
 * undefined FUN_0041eaf0(void)
 * Address ranges: 0041eaf0-0041ed04
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall FUN_0041eaf0(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  void *pvVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  uint uVar9;
  void *pvVar10;
  
  iVar7 = *(int *)(param_1 + 4);
  iVar5 = (int)param_2 - iVar7;
  iVar3 = *(int *)(param_1 + 8);
  iVar6 = *(int *)(param_1 + 0xc) - iVar3;
  iVar1 = iVar6 >> 0x1f;
  if (iVar6 / 0xc + iVar1 == iVar1) {
    if ((iVar7 == 0) || (uVar9 = (iVar3 - iVar7) / 0xc, uVar9 < 2)) {
      uVar9 = 1;
    }
    if (iVar7 == 0) {
      iVar7 = 0;
    }
    else {
      iVar7 = (iVar3 - iVar7) / 0xc;
    }
    iVar7 = iVar7 + uVar9;
    iVar3 = iVar7;
    if (iVar7 < 0) {
      iVar3 = 0;
    }
    pvVar4 = operator_new(iVar3 * 0xc);
    pvVar10 = pvVar4;
    for (puVar8 = *(undefined4 **)(param_1 + 4); puVar8 != param_2; puVar8 = puVar8 + 3) {
      FUN_0041f360(pvVar10,puVar8);
      pvVar10 = (void *)((int)pvVar10 + 0xc);
    }
    FUN_0041f360(pvVar10,param_3);
    FUN_0041ed60(param_2,*(undefined4 *)(param_1 + 8),(int)pvVar10 + 0xc);
    FUN_00587d50(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8));
    FUN_005fe5f0(*(undefined4 *)(param_1 + 4));
    *(void **)(param_1 + 0xc) = (void *)((int)pvVar4 + iVar7 * 0xc);
    iVar7 = FUN_0041ead0();
    *(void **)(param_1 + 4) = pvVar4;
    *(void **)(param_1 + 8) = (void *)((int)pvVar4 + (iVar7 + 1) * 0xc);
  }
  else {
    iVar7 = iVar3 - (int)param_2 >> 0x1f;
    if ((iVar3 - (int)param_2) / 0xc + iVar7 == iVar7) {
      FUN_0041ed60(param_2,iVar3,param_2 + 3);
      FUN_0041f0e0(*(int *)(param_1 + 8),1 - (*(int *)(param_1 + 8) - (int)param_2) / 0xc,param_3);
      puVar8 = *(undefined4 **)(param_1 + 8);
      for (; param_2 != puVar8; param_2 = param_2 + 3) {
        *param_2 = *param_3;
        param_2[1] = param_3[1];
        param_2[2] = param_3[2];
      }
    }
    else {
      FUN_0041ed60(iVar3 + -0xc,iVar3,iVar3);
      puVar8 = *(undefined4 **)(param_1 + 8);
      puVar2 = *(undefined4 **)(param_1 + 8) + -3;
      while (param_2 != puVar2) {
        puVar8[-3] = puVar2[-3];
        puVar8[-2] = puVar2[-2];
        puVar8[-1] = puVar2[-1];
        puVar8 = puVar8 + -3;
        puVar2 = puVar2 + -3;
      }
      puVar8 = param_2 + 3;
      for (; param_2 != puVar8; param_2 = param_2 + 3) {
        *param_2 = *param_3;
        param_2[1] = param_3[1];
        param_2[2] = param_3[2];
      }
    }
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 0xc;
  }
  return *(int *)(param_1 + 4) + (iVar5 / 0xc) * 0xc;
}

