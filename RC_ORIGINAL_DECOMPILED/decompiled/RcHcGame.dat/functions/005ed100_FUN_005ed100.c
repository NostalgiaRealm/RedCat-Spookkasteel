/*
 * FUN_005ed100 at 005ed100
 * undefined FUN_005ed100(void)
 * Address ranges: 005ed100-005ed24e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_005ed100(undefined4 *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  void *pvVar3;
  undefined2 uVar4;
  uint uVar5;
  void *pvVar6;
  int iVar7;
  undefined4 *puVar8;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0064718b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined1 *)(param_1 + 1) = (undefined1)param_2;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *param_1 = &PTR_FUN_00650af0;
  local_4 = 0;
  if ((*(int *)(param_2 + 8) == 0) ||
     (uVar5 = *(int *)(param_2 + 0xc) - *(int *)(param_2 + 8) >> 2, (int)uVar5 < 5)) {
    uVar5 = 5;
  }
  if (param_1[2] == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (int)(param_1[4] - param_1[2]) >> 2;
  }
  if (uVar2 < uVar5) {
    uVar2 = uVar5;
    if ((int)uVar5 < 0) {
      uVar2 = 0;
    }
    pvVar3 = operator_new(uVar2 * 4);
    iVar1 = param_1[3];
    pvVar6 = pvVar3;
    for (iVar7 = param_1[2]; iVar7 != iVar1; iVar7 = iVar7 + 4) {
      FUN_005f0760(pvVar6,iVar7);
      pvVar6 = (void *)((int)pvVar6 + 4);
    }
    FUN_005fe5f0(param_1[2]);
    param_1[4] = (void *)((int)pvVar3 + uVar5 * 4);
    iVar7 = FUN_0044e4c0();
    param_1[2] = pvVar3;
    param_1[3] = (void *)((int)pvVar3 + iVar7 * 4);
  }
  iVar7 = param_2;
  puVar8 = *(undefined4 **)(param_2 + 8);
  if (puVar8 != *(undefined4 **)(param_2 + 0xc)) {
    do {
      param_2 = (**(code **)(*(int *)*puVar8 + 4))();
      if (param_1[2] == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = (undefined2)((int)(param_1[3] - param_1[2]) >> 2);
      }
      *(undefined2 *)(param_2 + 0x24) = uVar4;
      FUN_0053cff0(param_1[3],1,&param_2);
      puVar8 = puVar8 + 1;
    } while (puVar8 != *(undefined4 **)(iVar7 + 0xc));
  }
  ExceptionList = local_c;
  return param_1;
}

