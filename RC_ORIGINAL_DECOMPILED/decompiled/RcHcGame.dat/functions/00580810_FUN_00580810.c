/*
 * FUN_00580810 at 00580810
 * undefined FUN_00580810(void)
 * Address ranges: 00580810-005808cf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_00580810(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  void *pvVar3;
  void *pvVar4;
  int iVar5;
  
  if (*(int *)(param_1 + 4) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(int *)(param_1 + 0xc) - *(int *)(param_1 + 4) >> 3;
  }
  if (uVar2 < param_2) {
    uVar2 = param_2;
    if ((int)param_2 < 0) {
      uVar2 = 0;
    }
    pvVar3 = operator_new(uVar2 << 3);
    iVar1 = *(int *)(param_1 + 8);
    pvVar4 = pvVar3;
    for (iVar5 = *(int *)(param_1 + 4); iVar5 != iVar1; iVar5 = iVar5 + 8) {
      FUN_00580bb0(pvVar4,iVar5);
      pvVar4 = (void *)((int)pvVar4 + 8);
    }
    iVar1 = *(int *)(param_1 + 8);
    for (iVar5 = *(int *)(param_1 + 4); iVar5 != iVar1; iVar5 = iVar5 + 8) {
      FUN_0057f170();
    }
    FUN_005fe5f0(*(undefined4 *)(param_1 + 4));
    *(void **)(param_1 + 0xc) = (void *)((int)pvVar3 + param_2 * 8);
    iVar1 = *(int *)(param_1 + 4);
    if (iVar1 == 0) {
      *(void **)(param_1 + 4) = pvVar3;
      *(void **)(param_1 + 8) = pvVar3;
      return;
    }
    *(void **)(param_1 + 4) = pvVar3;
    *(void **)(param_1 + 8) = (void *)((int)pvVar3 + (*(int *)(param_1 + 8) - iVar1 >> 3) * 8);
  }
  return;
}

