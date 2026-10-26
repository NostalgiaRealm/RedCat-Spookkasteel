/*
 * FUN_0054bc30 at 0054bc30
 * undefined FUN_0054bc30(void)
 * Address ranges: 0054bc30-0054bd76
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0054bc30(undefined1 *param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  int iVar3;
  void *pvVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0063d595;
  local_c = ExceptionList;
  local_4 = 0;
  if (param_1 != (undefined1 *)0x0) {
    uVar1 = *param_2;
    ExceptionList = &local_c;
    *(undefined4 *)(param_1 + 4) = 0;
    *param_1 = uVar1;
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_0040cc00(param_2,0,0xffffffff);
    local_4 = CONCAT31(local_4._1_3_,1);
    param_1[0x10] = param_2[0x10];
    if (*(int *)(param_2 + 0x14) == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(param_2 + 0x18) - *(int *)(param_2 + 0x14) >> 4;
    }
    if (iVar3 < 0) {
      iVar3 = 0;
    }
    pvVar4 = operator_new(iVar3 << 4);
    *(void **)(param_1 + 0x14) = pvVar4;
    iVar3 = *(int *)(param_2 + 0x18);
    for (iVar7 = *(int *)(param_2 + 0x14); local_4._1_3_ = (undefined3)((uint)local_4 >> 8),
        iVar7 != iVar3; iVar7 = iVar7 + 0x10) {
      local_4 = CONCAT31(local_4._1_3_,2);
      if (pvVar4 != (void *)0x0) {
        FUN_00548a70(iVar7);
      }
      pvVar4 = (void *)((int)pvVar4 + 0x10);
    }
    *(void **)(param_1 + 0x18) = pvVar4;
    *(void **)(param_1 + 0x1c) = pvVar4;
    local_4 = CONCAT31(local_4._1_3_,3);
    param_1[0x20] = param_2[0x20];
    if (*(int *)(param_2 + 0x24) == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(param_2 + 0x28) - *(int *)(param_2 + 0x24) >> 3;
    }
    if (iVar3 < 0) {
      iVar3 = 0;
    }
    puVar5 = operator_new(iVar3 * 8);
    *(undefined4 **)(param_1 + 0x24) = puVar5;
    puVar2 = *(undefined4 **)(param_2 + 0x28);
    for (puVar6 = *(undefined4 **)(param_2 + 0x24); puVar6 != puVar2; puVar6 = puVar6 + 2) {
      if (puVar5 != (undefined4 *)0x0) {
        *puVar5 = *puVar6;
        puVar5[1] = puVar6[1];
      }
      puVar5 = puVar5 + 2;
    }
    *(undefined4 **)(param_1 + 0x28) = puVar5;
    *(undefined4 **)(param_1 + 0x2c) = puVar5;
    *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
    *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_2 + 0x34);
  }
  ExceptionList = local_c;
  return;
}

