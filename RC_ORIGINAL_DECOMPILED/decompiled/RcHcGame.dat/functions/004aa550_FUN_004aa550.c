/*
 * FUN_004aa550 at 004aa550
 * undefined FUN_004aa550(void)
 * Address ranges: 004aa550-004aa62a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall FUN_004aa550(int param_1,uint param_2)

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
    uVar2 = (*(int *)(param_1 + 0xc) - *(int *)(param_1 + 4)) / 0x30;
  }
  if (uVar2 < param_2) {
    uVar2 = param_2;
    if ((int)param_2 < 0) {
      uVar2 = 0;
    }
    pvVar1 = operator_new(uVar2 * 0x30);
    iVar3 = *(int *)(param_1 + 8);
    pvVar4 = pvVar1;
    for (iVar5 = *(int *)(param_1 + 4); iVar5 != iVar3; iVar5 = iVar5 + 0x30) {
      FUN_004aadf0(pvVar4,iVar5);
      pvVar4 = (void *)((int)pvVar4 + 0x30);
    }
    iVar3 = *(int *)(param_1 + 8);
    for (iVar5 = *(int *)(param_1 + 4); iVar5 != iVar3; iVar5 = iVar5 + 0x30) {
      FUN_00505360();
    }
    FUN_005fe5f0(*(undefined4 *)(param_1 + 4));
    *(void **)(param_1 + 0xc) = (void *)(param_2 * 0x30 + (int)pvVar1);
    if (*(int *)(param_1 + 4) == 0) {
      iVar3 = 0;
      param_2 = 0;
    }
    else {
      iVar3 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4);
      param_2 = iVar3 * 0x2aaaaaab;
      iVar3 = iVar3 / 0x30;
    }
    *(void **)(param_1 + 4) = pvVar1;
    *(void **)(param_1 + 8) = (void *)(iVar3 * 0x30 + (int)pvVar1);
  }
  return param_2;
}

