/*
 * FUN_005e2120 at 005e2120
 * undefined FUN_005e2120(void)
 * Address ranges: 005e2120-005e2317
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_005e2120(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  void *pvVar7;
  
  iVar5 = *(int *)(param_1 + 8);
  iVar4 = *(int *)(param_1 + 0xc) - iVar5;
  iVar1 = *(int *)(param_1 + 4);
  iVar2 = iVar4 >> 0x1f;
  if (iVar4 / 0x18 + iVar2 != iVar2) {
    iVar2 = iVar5 - iVar1 >> 0x1f;
    if ((iVar5 - iVar1) / 0x18 + iVar2 != iVar2) {
      FUN_005e2680(iVar5 + -0x18,iVar5,iVar5);
      FUN_005e2720(iVar1,*(int *)(param_1 + 8) + -0x18,*(int *)(param_1 + 8));
      FUN_005e26f0(iVar1,iVar1 + 0x18,param_2);
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 0x18;
      return;
    }
    FUN_005e2680(iVar1,iVar5,iVar1 + 0x18);
    FUN_005e26c0(*(int *)(param_1 + 8),1 - (*(int *)(param_1 + 8) - iVar1) / 0x18,param_2);
    FUN_005e26f0(iVar1,*(undefined4 *)(param_1 + 8),param_2);
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 0x18;
    return;
  }
  if ((iVar1 == 0) || (uVar6 = (iVar5 - iVar1) / 0x18, uVar6 < 2)) {
    uVar6 = 1;
  }
  if (iVar1 == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = (iVar5 - iVar1) / 0x18;
  }
  iVar5 = iVar5 + uVar6;
  iVar2 = iVar5;
  if (iVar5 < 0) {
    iVar2 = 0;
  }
  pvVar3 = operator_new(iVar2 * 0x18);
  pvVar7 = pvVar3;
  for (iVar2 = *(int *)(param_1 + 4); iVar2 != iVar1; iVar2 = iVar2 + 0x18) {
    FUN_005e2760(pvVar7,iVar2);
    pvVar7 = (void *)((int)pvVar7 + 0x18);
  }
  FUN_005e26c0(pvVar7,1,param_2);
  FUN_005e2680(iVar1,*(undefined4 *)(param_1 + 8),(int)pvVar7 + 0x18);
  FUN_005e2650(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8));
  FUN_005fe5f0(*(undefined4 *)(param_1 + 4));
  *(void **)(param_1 + 0xc) = (void *)((int)pvVar3 + iVar5 * 0x18);
  iVar5 = *(int *)(param_1 + 4);
  if (iVar5 != 0) {
    *(void **)(param_1 + 4) = pvVar3;
    *(void **)(param_1 + 8) =
         (void *)((int)pvVar3 + (((*(int *)(param_1 + 8) - iVar5) / 0x18) * 3 + 3) * 8);
    return;
  }
  *(void **)(param_1 + 4) = pvVar3;
  *(int *)(param_1 + 8) = (int)pvVar3 + 0x18;
  return;
}

