/*
 * FUN_005f9100 at 005f9100
 * undefined FUN_005f9100(void)
 * Address ranges: 005f9100-005f92a1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_005f9100(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  void *pvVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  uint local_38;
  uint local_34;
  void *local_30;
  undefined **local_2c;
  undefined4 local_28;
  undefined4 local_24;
  char local_20 [4];
  undefined **local_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  char cStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00648820;
  pvStack_c = ExceptionList;
  local_28 = 0;
  local_24 = 0;
  local_20[0] = '\x01';
  local_2c = &PTR_LAB_00651388;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  FUN_005e6ff0(param_2,&local_38);
  local_34 = local_38;
  if (*(int *)(param_1 + 8) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(int *)(param_1 + 0x10) - *(int *)(param_1 + 8) >> 4;
  }
  if (uVar4 < local_38) {
    uVar4 = local_38;
    if ((int)local_38 < 0) {
      uVar4 = 0;
    }
    pvVar2 = operator_new(uVar4 << 4);
    iVar3 = *(int *)(param_1 + 0xc);
    local_30 = pvVar2;
    for (iVar5 = *(int *)(param_1 + 8); iVar5 != iVar3; iVar5 = iVar5 + 0x10) {
      FUN_005f9870(pvVar2,iVar5);
      pvVar2 = (void *)((int)pvVar2 + 0x10);
    }
    puVar1 = *(undefined4 **)(param_1 + 0xc);
    for (puVar6 = *(undefined4 **)(param_1 + 8); puVar6 != puVar1; puVar6 = puVar6 + 4) {
      (**(code **)*puVar6)(0);
    }
    FUN_005fe5f0(*(undefined4 *)(param_1 + 8));
    *(void **)(param_1 + 0x10) = (void *)(local_34 * 0x10 + (int)local_30);
    if (*(int *)(param_1 + 8) == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(param_1 + 0xc) - *(int *)(param_1 + 8) >> 4;
    }
    *(void **)(param_1 + 8) = local_30;
    *(void **)(param_1 + 0xc) = (void *)(iVar3 * 0x10 + (int)local_30);
  }
  while (local_38 != 0) {
    local_38 = local_38 - 1;
    local_1c = &PTR_LAB_00651388;
    FUN_005e6f70(param_2,local_20);
    if (local_20[0] == '\0') {
      FUN_005e6ff0(param_2,&local_28);
      FUN_005e6ff0(param_2,&local_24);
    }
    uStack_18 = local_28;
    uStack_14 = local_24;
    cStack_10 = local_20[0];
    local_4._0_1_ = 1;
    FUN_005f95a0(*(undefined4 *)(param_1 + 0xc),1,&local_1c);
    local_4 = (uint)local_4._1_3_ << 8;
  }
  ExceptionList = pvStack_c;
  return;
}

