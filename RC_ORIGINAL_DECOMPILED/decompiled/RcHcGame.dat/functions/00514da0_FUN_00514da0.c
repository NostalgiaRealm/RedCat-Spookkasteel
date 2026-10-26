/*
 * FUN_00514da0 at 00514da0
 * undefined FUN_00514da0(void)
 * Address ranges: 00514da0-00514e74
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_00514da0(int param_1,uint param_2)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  void *pvVar4;
  void *pvVar5;
  int iVar6;
  int *piVar7;
  
  if (*(int *)(param_1 + 4) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(int *)(param_1 + 0xc) - *(int *)(param_1 + 4) >> 2;
  }
  if (uVar3 < param_2) {
    uVar3 = param_2;
    if ((int)param_2 < 0) {
      uVar3 = 0;
    }
    pvVar4 = operator_new(uVar3 << 2);
    iVar1 = *(int *)(param_1 + 8);
    pvVar5 = pvVar4;
    for (iVar6 = *(int *)(param_1 + 4); iVar6 != iVar1; iVar6 = iVar6 + 4) {
      FUN_0044e5e0(pvVar5,iVar6);
      pvVar5 = (void *)((int)pvVar5 + 4);
    }
    piVar2 = *(int **)(param_1 + 8);
    for (piVar7 = *(int **)(param_1 + 4); piVar7 != piVar2; piVar7 = piVar7 + 1) {
      iVar1 = *piVar7;
      if (iVar1 != 0) {
        iVar6 = *(int *)(iVar1 + 0x14) + -1;
        *(int *)(iVar1 + 0x14) = iVar6;
        if (iVar6 == 0) {
          FUN_005abfc0(0);
        }
        *piVar7 = 0;
      }
    }
    FUN_005fe5f0(*(undefined4 *)(param_1 + 4));
    *(void **)(param_1 + 0xc) = (void *)((int)pvVar4 + param_2 * 4);
    iVar1 = *(int *)(param_1 + 4);
    if (iVar1 == 0) {
      *(void **)(param_1 + 4) = pvVar4;
      *(void **)(param_1 + 8) = pvVar4;
      return;
    }
    *(void **)(param_1 + 4) = pvVar4;
    *(void **)(param_1 + 8) = (void *)((int)pvVar4 + (*(int *)(param_1 + 8) - iVar1 >> 2) * 4);
  }
  return;
}

