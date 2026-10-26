/*
 * FUN_005e1f20 at 005e1f20
 * undefined FUN_005e1f20(void)
 * Address ranges: 005e1f20-005e2119
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x005e20da) */

void __thiscall FUN_005e1f20(int param_1,undefined4 param_2)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  void *pvVar5;
  uint uVar6;
  
  iVar1 = *(int *)(param_1 + 8);
  iVar3 = *(int *)(param_1 + 0xc) - iVar1;
  iVar4 = iVar3 >> 0x1f;
  if (iVar3 / 0x18 + iVar4 != iVar4) {
    FUN_005e2680(iVar1,iVar1,iVar1 + 0x18);
    FUN_005e26c0(*(int *)(param_1 + 8),1 - (*(int *)(param_1 + 8) - iVar1) / 0x18,param_2);
    FUN_005e26f0(iVar1,*(undefined4 *)(param_1 + 8),param_2);
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 0x18;
    return;
  }
  iVar4 = *(int *)(param_1 + 4);
  if ((iVar4 == 0) || (uVar6 = (iVar1 - iVar4) / 0x18, uVar6 < 2)) {
    uVar6 = 1;
  }
  if (iVar4 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = (iVar1 - iVar4) / 0x18;
  }
  iVar4 = iVar4 + uVar6;
  iVar3 = iVar4;
  if (iVar4 < 0) {
    iVar3 = 0;
  }
  pvVar2 = operator_new(iVar3 * 0x18);
  pvVar5 = pvVar2;
  for (iVar3 = *(int *)(param_1 + 4); iVar3 != iVar1; iVar3 = iVar3 + 0x18) {
    FUN_005e2760(pvVar5,iVar3);
    pvVar5 = (void *)((int)pvVar5 + 0x18);
  }
  FUN_005e26c0(pvVar5,1,param_2);
  FUN_005e2680(iVar1,*(undefined4 *)(param_1 + 8),(int)pvVar5 + 0x18);
  FUN_005e2650(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8));
  FUN_005fe5f0(*(undefined4 *)(param_1 + 4));
  *(void **)(param_1 + 0xc) = (void *)((int)pvVar2 + iVar4 * 0x18);
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 == 0) {
    *(void **)(param_1 + 4) = pvVar2;
    *(int *)(param_1 + 8) = (int)pvVar2 + 0x18;
    return;
  }
  *(void **)(param_1 + 4) = pvVar2;
  *(void **)(param_1 + 8) =
       (void *)((int)pvVar2 + (((*(int *)(param_1 + 8) - iVar1) / 0x18) * 3 + 3) * 8);
  return;
}

