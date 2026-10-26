/*
 * FUN_005f1a60 at 005f1a60
 * undefined FUN_005f1a60(void)
 * Address ranges: 005f1a60-005f1bd0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_005f1a60(int param_1,undefined4 param_2,undefined1 param_3)

{
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 local_34 [4];
  void *local_30;
  void *local_2c;
  void *local_28;
  undefined **local_24 [6];
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_00647aa7;
  pvStack_c = ExceptionList;
  local_34[0] = param_3;
  local_30 = (void *)0x0;
  local_2c = (void *)0x0;
  local_28 = (void *)0x0;
  local_4 = 1;
  ExceptionList = &pvStack_c;
  if ((*(int *)(param_1 + 0x30) != 0) &&
     (iVar4 = *(int *)(param_1 + 0x34) - *(int *)(param_1 + 0x30) >> 2, ExceptionList = &pvStack_c,
     iVar4 != 0)) {
    iVar1 = iVar4;
    if (iVar4 < 0) {
      iVar1 = 0;
    }
    ExceptionList = &pvStack_c;
    pvVar2 = operator_new(iVar1 * 0x18);
    FUN_005e2680(local_30,local_2c,pvVar2);
    FUN_005e2650(local_30,local_2c);
    FUN_005fe5f0(local_30);
    local_28 = (void *)((int)pvVar2 + iVar4 * 0x18);
    if (local_30 == (void *)0x0) {
      iVar4 = 0;
    }
    else {
      iVar4 = ((int)local_2c - (int)local_30) / 0x18;
    }
    local_2c = (void *)((int)pvVar2 + iVar4 * 0x18);
    local_30 = pvVar2;
  }
  iVar4 = *(int *)(param_1 + 0x34);
  if (iVar4 != *(int *)(param_1 + 0x30)) {
    do {
      uVar3 = FUN_005ec950(local_24,*(undefined4 *)(*(int *)(iVar4 + -4) + 0x20));
      local_4._0_1_ = 2;
      FUN_005e2120(uVar3);
      local_4 = CONCAT31(local_4._1_3_,1);
      local_24[0] = &PTR_FUN_00650ad4;
      FUN_005e2f00();
      iVar4 = iVar4 + -4;
    } while (iVar4 != *(int *)(param_1 + 0x30));
  }
  FUN_005e2370(local_34);
  local_4 = local_4 & 0xffffff00;
  FUN_005e2320();
  ExceptionList = pvStack_c;
  return param_2;
}

