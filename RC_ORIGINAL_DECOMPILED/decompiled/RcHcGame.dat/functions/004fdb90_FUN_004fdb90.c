/*
 * FUN_004fdb90 at 004fdb90
 * undefined FUN_004fdb90(void)
 * Address ranges: 004fdb90-004fdd16
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void * __thiscall FUN_004fdb90(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  uint uVar4;
  int iVar5;
  void *pvVar6;
  
  iVar1 = *(int *)(param_1 + 8);
  iVar2 = *(int *)(param_1 + 4);
  iVar5 = param_2 - iVar2 >> 2;
  if (*(int *)(param_1 + 0xc) - iVar1 >> 2 != 0) {
    if (iVar1 - param_2 >> 2 == 0) {
      FUN_004fe210(param_2,iVar1,param_2 + 4);
      FUN_005152d0(*(int *)(param_1 + 8),1 - (*(int *)(param_1 + 8) - param_2 >> 2),param_3);
      FUN_004a0420(param_2,*(undefined4 *)(param_1 + 8),param_3);
    }
    else {
      FUN_004fe210(iVar1 + -4,iVar1,iVar1);
      FUN_005653a0(param_2,*(int *)(param_1 + 8) + -4,*(int *)(param_1 + 8));
      FUN_004a0420(param_2,param_2 + 4,param_3);
    }
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 4;
    return (void *)(*(int *)(param_1 + 4) + iVar5 * 4);
  }
  if ((iVar2 == 0) || (uVar4 = iVar1 - iVar2 >> 2, uVar4 < 2)) {
    uVar4 = 1;
  }
  if (iVar2 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = iVar1 - iVar2 >> 2;
  }
  iVar1 = iVar1 + uVar4;
  iVar2 = iVar1;
  if (iVar1 < 0) {
    iVar2 = 0;
  }
  pvVar3 = operator_new(iVar2 * 4);
  pvVar6 = pvVar3;
  for (iVar2 = *(int *)(param_1 + 4); iVar2 != param_2; iVar2 = iVar2 + 4) {
    FUN_0044e5e0(pvVar6,iVar2);
    pvVar6 = (void *)((int)pvVar6 + 4);
  }
  FUN_0044e5e0(pvVar6,param_3);
  FUN_004fe210(param_2,*(undefined4 *)(param_1 + 8),(int)pvVar6 + 4);
  FUN_004fdd20(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8));
  FUN_005fe5f0(*(undefined4 *)(param_1 + 4));
  *(void **)(param_1 + 0xc) = (void *)((int)pvVar3 + iVar1 * 4);
  iVar1 = FUN_0044e4c0();
  *(void **)(param_1 + 4) = pvVar3;
  *(int *)(param_1 + 8) = (int)pvVar3 + iVar1 * 4 + 4;
  return (void *)((int)pvVar3 + iVar5 * 4);
}

