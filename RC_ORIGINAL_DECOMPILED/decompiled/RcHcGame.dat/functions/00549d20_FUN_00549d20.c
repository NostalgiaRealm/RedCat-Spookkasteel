/*
 * FUN_00549d20 at 00549d20
 * undefined FUN_00549d20(void)
 * Address ranges: 00549d20-00549eae
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void * __thiscall FUN_00549d20(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  uint uVar4;
  int iVar5;
  void *pvVar6;
  
  iVar1 = *(int *)(param_1 + 8);
  iVar2 = *(int *)(param_1 + 4);
  iVar5 = param_2 - iVar2 >> 4;
  if (*(int *)(param_1 + 0xc) - iVar1 >> 4 != 0) {
    if (iVar1 - param_2 >> 4 == 0) {
      FUN_00548cd0(param_2,iVar1,param_2 + 0x10);
      FUN_0054ae80(*(int *)(param_1 + 8),1 - (*(int *)(param_1 + 8) - param_2 >> 4),param_3);
      FUN_0054b3e0(param_2,*(undefined4 *)(param_1 + 8),param_3);
    }
    else {
      FUN_00548cd0(iVar1 + -0x10,iVar1,iVar1);
      FUN_0054b560(param_2,*(int *)(param_1 + 8) + -0x10,*(int *)(param_1 + 8));
      FUN_0054b3e0(param_2,param_2 + 0x10,param_3);
    }
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 0x10;
    return (void *)(iVar5 * 0x10 + *(int *)(param_1 + 4));
  }
  if ((iVar2 == 0) || (uVar4 = iVar1 - iVar2 >> 4, uVar4 < 2)) {
    uVar4 = 1;
  }
  if (iVar2 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = iVar1 - iVar2 >> 4;
  }
  iVar1 = iVar1 + uVar4;
  iVar2 = iVar1;
  if (iVar1 < 0) {
    iVar2 = 0;
  }
  pvVar3 = operator_new(iVar2 << 4);
  pvVar6 = pvVar3;
  for (iVar2 = *(int *)(param_1 + 4); iVar2 != param_2; iVar2 = iVar2 + 0x10) {
    FUN_00549730(pvVar6,iVar2);
    pvVar6 = (void *)((int)pvVar6 + 0x10);
  }
  FUN_00549730(pvVar6,param_3);
  FUN_00548cd0(param_2,*(undefined4 *)(param_1 + 8),(int)pvVar6 + 0x10);
  FUN_00548ca0(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8));
  FUN_005fe5f0(*(undefined4 *)(param_1 + 4));
  *(void **)(param_1 + 0xc) = (void *)(iVar1 * 0x10 + (int)pvVar3);
  iVar1 = FUN_00442d80();
  *(void **)(param_1 + 4) = pvVar3;
  *(void **)(param_1 + 8) = (void *)((iVar1 + 1) * 0x10 + (int)pvVar3);
  return (void *)(iVar5 * 0x10 + (int)pvVar3);
}

