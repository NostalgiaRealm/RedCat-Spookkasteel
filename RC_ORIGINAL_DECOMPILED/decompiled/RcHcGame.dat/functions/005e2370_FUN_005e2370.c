/*
 * FUN_005e2370 at 005e2370
 * undefined FUN_005e2370(void)
 * Address ranges: 005e2370-005e25fd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x005e25a6) */

undefined1 * __thiscall FUN_005e2370(undefined1 *param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  void *pvVar7;
  int iVar8;
  undefined4 *puVar9;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006463f8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = (undefined1)param_2;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  local_4 = 0;
  if ((*(int *)(param_2 + 4) != 0) &&
     (iVar4 = (*(int *)(param_2 + 8) - *(int *)(param_2 + 4)) / 0x18, iVar4 != 0)) {
    iVar2 = iVar4;
    if (iVar4 < 0) {
      iVar2 = 0;
    }
    pvVar3 = operator_new(iVar2 * 0x18);
    iVar2 = *(int *)(param_1 + 8);
    pvVar7 = pvVar3;
    for (iVar8 = *(int *)(param_1 + 4); iVar8 != iVar2; iVar8 = iVar8 + 0x18) {
      FUN_005e2760(pvVar7,iVar8);
      pvVar7 = (void *)((int)pvVar7 + 0x18);
    }
    puVar1 = *(undefined4 **)(param_1 + 8);
    for (puVar9 = *(undefined4 **)(param_1 + 4); puVar9 != puVar1; puVar9 = puVar9 + 6) {
      (**(code **)*puVar9)(0);
    }
    FUN_005fe5f0(*(undefined4 *)(param_1 + 4));
    *(void **)(param_1 + 0xc) = (void *)((int)pvVar3 + iVar4 * 0x18);
    iVar4 = FUN_00509a00();
    *(void **)(param_1 + 4) = pvVar3;
    *(void **)(param_1 + 8) = (void *)((int)pvVar3 + iVar4 * 0x18);
  }
  iVar4 = *(int *)(param_2 + 4);
  if (iVar4 != *(int *)(param_2 + 8)) {
    do {
      iVar2 = *(int *)(param_1 + 8);
      iVar8 = *(int *)(param_1 + 0xc) - iVar2 >> 0x1f;
      if ((*(int *)(param_1 + 0xc) - iVar2) / 0x18 + iVar8 == iVar8) {
        uVar5 = FUN_00509a00();
        if (uVar5 < 2) {
          iVar8 = 1;
        }
        else {
          iVar8 = FUN_00509a00();
        }
        iVar6 = FUN_00509a00();
        iVar6 = iVar6 + iVar8;
        iVar8 = iVar6;
        if (iVar6 < 0) {
          iVar8 = 0;
        }
        pvVar7 = operator_new(iVar8 * 0x18);
        iVar8 = FUN_005e2680(*(undefined4 *)(param_1 + 4),iVar2,pvVar7);
        FUN_005e26c0(iVar8,1,iVar4);
        FUN_005e2680(iVar2,*(undefined4 *)(param_1 + 8),iVar8 + 0x18);
        FUN_005e2650(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8));
        FUN_005fe5f0(*(undefined4 *)(param_1 + 4));
        *(void **)(param_1 + 0xc) = (void *)((int)pvVar7 + iVar6 * 0x18);
        iVar2 = FUN_00509a00();
        *(void **)(param_1 + 4) = pvVar7;
        *(void **)(param_1 + 8) = (void *)((int)pvVar7 + (iVar2 + 1) * 0x18);
      }
      else {
        FUN_005e2680(iVar2,iVar2,iVar2 + 0x18);
        FUN_005e26c0(*(int *)(param_1 + 8),1 - (*(int *)(param_1 + 8) - iVar2) / 0x18,iVar4);
        FUN_005e26f0(iVar2,*(undefined4 *)(param_1 + 8),iVar4);
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 0x18;
      }
      iVar4 = iVar4 + 0x18;
    } while (iVar4 != *(int *)(param_2 + 8));
  }
  ExceptionList = pvStack_c;
  return param_1;
}

