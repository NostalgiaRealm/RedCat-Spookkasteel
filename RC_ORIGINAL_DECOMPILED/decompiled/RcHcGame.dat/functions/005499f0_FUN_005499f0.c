/*
 * FUN_005499f0 at 005499f0
 * undefined FUN_005499f0(void)
 * Address ranges: 005499f0-00549adc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_005499f0(int param_1,uint param_2)

{
  void *pvVar1;
  uint uVar2;
  int iVar3;
  void *pvVar4;
  int iVar5;
  
  if (*(int *)(param_1 + 4) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (*(int *)(param_1 + 0xc) - *(int *)(param_1 + 4)) / 0x38;
  }
  if (uVar2 < param_2) {
    uVar2 = param_2;
    if ((int)param_2 < 0) {
      uVar2 = 0;
    }
    pvVar1 = operator_new(uVar2 * 0x38);
    iVar3 = *(int *)(param_1 + 8);
    pvVar4 = pvVar1;
    for (iVar5 = *(int *)(param_1 + 4); iVar5 != iVar3; iVar5 = iVar5 + 0x38) {
      FUN_0054bc30(pvVar4,iVar5);
      pvVar4 = (void *)((int)pvVar4 + 0x38);
    }
    iVar3 = *(int *)(param_1 + 8);
    for (iVar5 = *(int *)(param_1 + 4); iVar5 != iVar3; iVar5 = iVar5 + 0x38) {
      FUN_0053ea60();
    }
    FUN_005fe5f0(*(undefined4 *)(param_1 + 4));
    *(void **)(param_1 + 0xc) = (void *)((int)pvVar1 + param_2 * 0x38);
    if (*(int *)(param_1 + 4) == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x38;
    }
    *(void **)(param_1 + 4) = pvVar1;
    *(void **)(param_1 + 8) = (void *)((int)pvVar1 + iVar3 * 0x38);
  }
  return;
}

