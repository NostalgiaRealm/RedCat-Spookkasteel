/*
 * FUN_004fdf50 at 004fdf50
 * undefined FUN_004fdf50(void)
 * Address ranges: 004fdf50-004fe201
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_004fdf50(int param_1,int *param_2,uint param_3,int *param_4)

{
  int *piVar1;
  void *pvVar2;
  uint uVar3;
  int iVar4;
  void *pvVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  void *pvVar10;
  int *piVar11;
  
  piVar8 = *(int **)(param_1 + 8);
  if (param_3 <= (uint)(*(int *)(param_1 + 0xc) - (int)piVar8 >> 2)) {
    if (param_3 <= (uint)((int)piVar8 - (int)param_2 >> 2)) {
      if (param_3 != 0) {
        piVar6 = piVar8;
        for (piVar11 = piVar8 + -param_3; piVar11 != piVar8; piVar11 = piVar11 + 1) {
          FUN_0044e5e0(piVar6,piVar11);
          piVar6 = piVar6 + 1;
        }
        piVar8 = *(int **)(param_1 + 8);
        piVar6 = piVar8 + -param_3;
        while (param_2 != piVar6) {
          piVar11 = piVar8 + -1;
          piVar1 = piVar6 + -1;
          piVar6 = piVar6 + -1;
          piVar8 = piVar8 + -1;
          if (*piVar11 != *piVar1) {
            if (*piVar11 != 0) {
              FUN_004098d0();
            }
            *piVar8 = *piVar6;
            FUN_005844b0();
          }
        }
        piVar8 = param_2 + param_3;
        for (; param_2 != piVar8; param_2 = param_2 + 1) {
          FUN_00537300(param_4);
        }
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + param_3 * 4;
      }
      return;
    }
    piVar6 = param_2 + param_3;
    for (piVar11 = param_2; piVar11 != piVar8; piVar11 = piVar11 + 1) {
      FUN_0044e5e0(piVar6,piVar11);
      piVar6 = piVar6 + 1;
    }
    iVar7 = *(int *)(param_1 + 8);
    for (iVar4 = param_3 - (iVar7 - (int)param_2 >> 2); iVar4 != 0; iVar4 = iVar4 + -1) {
      FUN_0044e5e0(iVar7,param_4);
      iVar7 = iVar7 + 4;
    }
    piVar8 = *(int **)(param_1 + 8);
    for (; param_2 != piVar8; param_2 = param_2 + 1) {
      if (*param_2 != *param_4) {
        if (*param_2 != 0) {
          FUN_004098d0();
        }
        *param_2 = *param_4;
        FUN_005844b0();
      }
    }
    *(uint *)(param_1 + 8) = *(int *)(param_1 + 8) + param_3 * 4;
    return;
  }
  iVar7 = *(int *)(param_1 + 4);
  if ((iVar7 == 0) || (uVar3 = (int)piVar8 - iVar7 >> 2, uVar3 <= param_3)) {
    uVar3 = param_3;
  }
  if (iVar7 == 0) {
    iVar7 = 0;
  }
  else {
    iVar7 = (int)piVar8 - iVar7 >> 2;
  }
  iVar7 = uVar3 + iVar7;
  iVar4 = iVar7;
  if (iVar7 < 0) {
    iVar4 = 0;
  }
  pvVar5 = operator_new(iVar4 * 4);
  pvVar10 = pvVar5;
  for (piVar8 = *(int **)(param_1 + 4); uVar3 = param_3, pvVar2 = pvVar10, piVar8 != param_2;
      piVar8 = piVar8 + 1) {
    FUN_0044e5e0(pvVar10,piVar8);
    pvVar10 = (void *)((int)pvVar10 + 4);
  }
  for (; uVar3 != 0; uVar3 = uVar3 - 1) {
    FUN_0044e5e0(pvVar2,param_4);
    pvVar2 = (void *)((int)pvVar2 + 4);
  }
  pvVar10 = (void *)((int)pvVar10 + param_3 * 4);
  piVar8 = *(int **)(param_1 + 8);
  for (; param_2 != piVar8; param_2 = param_2 + 1) {
    FUN_0044e5e0(pvVar10,param_2);
    pvVar10 = (void *)((int)pvVar10 + 4);
  }
  iVar4 = *(int *)(param_1 + 8);
  for (iVar9 = *(int *)(param_1 + 4); iVar9 != iVar4; iVar9 = iVar9 + 4) {
    FUN_0057d310();
  }
  FUN_005fe5f0(*(undefined4 *)(param_1 + 4));
  *(void **)(param_1 + 0xc) = (void *)((int)pvVar5 + iVar7 * 4);
  iVar7 = *(int *)(param_1 + 4);
  if (iVar7 != 0) {
    *(void **)(param_1 + 4) = pvVar5;
    *(void **)(param_1 + 8) =
         (void *)((int)pvVar5 + ((*(int *)(param_1 + 8) - iVar7 >> 2) + param_3) * 4);
    return;
  }
  *(void **)(param_1 + 4) = pvVar5;
  *(void **)(param_1 + 8) = (void *)((int)pvVar5 + param_3 * 4);
  return;
}

