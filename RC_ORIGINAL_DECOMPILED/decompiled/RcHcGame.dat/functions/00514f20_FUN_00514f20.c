/*
 * FUN_00514f20 at 00514f20
 * undefined FUN_00514f20(void)
 * Address ranges: 00514f20-00515008
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_00514f20(int param_1,uint param_2)

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
    uVar3 = (*(int *)(param_1 + 0xc) - *(int *)(param_1 + 4)) / 0x24;
  }
  if (uVar3 < param_2) {
    uVar3 = param_2;
    if ((int)param_2 < 0) {
      uVar3 = 0;
    }
    pvVar2 = operator_new(uVar3 * 0x24);
    iVar1 = *(int *)(param_1 + 8);
    pvVar4 = pvVar2;
    for (iVar5 = *(int *)(param_1 + 4); iVar5 != iVar1; iVar5 = iVar5 + 0x24) {
      FUN_005158a0(pvVar4,iVar5);
      pvVar4 = (void *)((int)pvVar4 + 0x24);
    }
    iVar1 = *(int *)(param_1 + 8);
    for (iVar5 = *(int *)(param_1 + 4); iVar5 != iVar1; iVar5 = iVar5 + 0x24) {
      FUN_0057d310();
    }
    FUN_005fe5f0(*(undefined4 *)(param_1 + 4));
    iVar1 = *(int *)(param_1 + 4);
    *(void **)(param_1 + 0xc) = (void *)((int)pvVar2 + param_2 * 0x24);
    if (iVar1 == 0) {
      *(void **)(param_1 + 4) = pvVar2;
      *(void **)(param_1 + 8) = pvVar2;
      return;
    }
    *(void **)(param_1 + 4) = pvVar2;
    *(void **)(param_1 + 8) =
         (void *)((int)pvVar2 + ((*(int *)(param_1 + 8) - iVar1) / 0x24) * 0x24);
  }
  return;
}

