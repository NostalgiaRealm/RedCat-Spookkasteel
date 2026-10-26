/*
 * FUN_00515080 at 00515080
 * undefined FUN_00515080(void)
 * Address ranges: 00515080-00515256
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall FUN_00515080(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  void *pvVar7;
  
  iVar1 = *(int *)(param_1 + 4);
  iVar5 = *(int *)(param_1 + 8);
  iVar4 = *(int *)(param_1 + 0xc) - iVar5;
  iVar2 = iVar4 >> 0x1f;
  if (iVar4 / 0x24 + iVar2 == iVar2) {
    if ((iVar1 == 0) || (uVar6 = (iVar5 - iVar1) / 0x24, uVar6 < 2)) {
      uVar6 = 1;
    }
    if (iVar1 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = (iVar5 - iVar1) / 0x24;
    }
    iVar5 = iVar5 + uVar6;
    iVar2 = iVar5;
    if (iVar5 < 0) {
      iVar2 = 0;
    }
    pvVar3 = operator_new(iVar2 * 0x24);
    pvVar7 = pvVar3;
    for (iVar2 = *(int *)(param_1 + 4); iVar2 != param_2; iVar2 = iVar2 + 0x24) {
      FUN_005158a0(pvVar7,iVar2);
      pvVar7 = (void *)((int)pvVar7 + 0x24);
    }
    FUN_005158a0(pvVar7,param_3);
    FUN_00515290(param_2,*(undefined4 *)(param_1 + 8),(int)pvVar7 + 0x24);
    FUN_00515260(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8));
    FUN_005fe5f0(*(undefined4 *)(param_1 + 4));
    *(void **)(param_1 + 0xc) = (void *)((int)pvVar3 + iVar5 * 0x24);
    iVar5 = FUN_00515010();
    *(void **)(param_1 + 4) = pvVar3;
    *(void **)(param_1 + 8) = (void *)((int)pvVar3 + (iVar5 + 1) * 0x24);
  }
  else {
    iVar2 = iVar5 - param_2 >> 0x1f;
    if ((iVar5 - param_2) / 0x24 + iVar2 == iVar2) {
      FUN_00515290(param_2,iVar5,param_2 + 0x24);
      FUN_00515300(*(int *)(param_1 + 8),1 - (*(int *)(param_1 + 8) - param_2) / 0x24,param_3);
      FUN_00515770(param_2,*(undefined4 *)(param_1 + 8),param_3);
    }
    else {
      FUN_00515290(iVar5 + -0x24,iVar5,iVar5);
      FUN_00515800(param_2,*(int *)(param_1 + 8) + -0x24,*(int *)(param_1 + 8));
      FUN_00515770(param_2,param_2 + 0x24,param_3);
    }
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 0x24;
  }
  return *(int *)(param_1 + 4) + ((param_2 - iVar1) / 0x24) * 0x24;
}

