/*
 * FUN_005413b0 at 005413b0
 * undefined FUN_005413b0(void)
 * Address ranges: 005413b0-005414eb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 * __thiscall FUN_005413b0(undefined1 *param_1,undefined1 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  void *pvVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063c764;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  FUN_0040cc00(param_2,0,0xffffffff);
  local_4 = 0;
  param_1[0x10] = param_2[0x10];
  if (*(int *)(param_2 + 0x14) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(param_2 + 0x18) - *(int *)(param_2 + 0x14) >> 4;
  }
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  pvVar3 = operator_new(iVar2 << 4);
  *(void **)(param_1 + 0x14) = pvVar3;
  iVar2 = *(int *)(param_2 + 0x18);
  for (iVar6 = *(int *)(param_2 + 0x14); local_4._1_3_ = (undefined3)((uint)local_4 >> 8),
      iVar6 != iVar2; iVar6 = iVar6 + 0x10) {
    local_4 = CONCAT31(local_4._1_3_,1);
    if (pvVar3 != (void *)0x0) {
      FUN_00548a70(iVar6);
    }
    pvVar3 = (void *)((int)pvVar3 + 0x10);
  }
  *(void **)(param_1 + 0x18) = pvVar3;
  *(void **)(param_1 + 0x1c) = pvVar3;
  local_4 = CONCAT31(local_4._1_3_,2);
  param_1[0x20] = param_2[0x20];
  if (*(int *)(param_2 + 0x24) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(param_2 + 0x28) - *(int *)(param_2 + 0x24) >> 3;
  }
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  puVar4 = operator_new(iVar2 * 8);
  *(undefined4 **)(param_1 + 0x24) = puVar4;
  puVar1 = *(undefined4 **)(param_2 + 0x28);
  for (puVar5 = *(undefined4 **)(param_2 + 0x24); puVar5 != puVar1; puVar5 = puVar5 + 2) {
    if (puVar4 != (undefined4 *)0x0) {
      *puVar4 = *puVar5;
      puVar4[1] = puVar5[1];
    }
    puVar4 = puVar4 + 2;
  }
  *(undefined4 **)(param_1 + 0x28) = puVar4;
  *(undefined4 **)(param_1 + 0x2c) = puVar4;
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_2 + 0x34);
  ExceptionList = local_c;
  return param_1;
}

