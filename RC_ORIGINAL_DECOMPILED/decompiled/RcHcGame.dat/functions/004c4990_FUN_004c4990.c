/*
 * FUN_004c4990 at 004c4990
 * undefined FUN_004c4990(void)
 * Address ranges: 004c4990-004c4a53
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_004c4990(int param_1,uint param_2)

{
  int iVar1;
  void *pvVar2;
  uint uVar3;
  void *pvVar4;
  int iVar5;
  
  if (*(int *)(param_1 + 4) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(int *)(param_1 + 0xc) - *(int *)(param_1 + 4) >> 6;
  }
  if (uVar3 < param_2) {
    uVar3 = param_2;
    if ((int)param_2 < 0) {
      uVar3 = 0;
    }
    pvVar2 = operator_new(uVar3 << 6);
    iVar1 = *(int *)(param_1 + 8);
    pvVar4 = pvVar2;
    for (iVar5 = *(int *)(param_1 + 4); iVar5 != iVar1; iVar5 = iVar5 + 0x40) {
      FUN_004c4d70(pvVar4,iVar5);
      pvVar4 = (void *)((int)pvVar4 + 0x40);
    }
    iVar1 = *(int *)(param_1 + 8);
    for (iVar5 = *(int *)(param_1 + 4); iVar5 != iVar1; iVar5 = iVar5 + 0x40) {
      FUN_004c29c0();
    }
    FUN_005fe5f0(*(undefined4 *)(param_1 + 4));
    iVar1 = *(int *)(param_1 + 4);
    *(void **)(param_1 + 0xc) = (void *)(param_2 * 0x40 + (int)pvVar2);
    if (iVar1 == 0) {
      *(void **)(param_1 + 4) = pvVar2;
      *(void **)(param_1 + 8) = pvVar2;
      return;
    }
    *(void **)(param_1 + 4) = pvVar2;
    *(void **)(param_1 + 8) = (void *)((*(int *)(param_1 + 8) - iVar1 >> 6) * 0x40 + (int)pvVar2);
  }
  return;
}

