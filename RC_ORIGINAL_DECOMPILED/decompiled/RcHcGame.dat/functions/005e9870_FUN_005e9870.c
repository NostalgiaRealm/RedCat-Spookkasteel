/*
 * FUN_005e9870 at 005e9870
 * undefined FUN_005e9870(void)
 * Address ranges: 005e9870-005e9a65
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool __thiscall FUN_005e9870(int param_1,undefined4 param_2,int *param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  char *pcVar6;
  undefined1 local_54 [4];
  char *local_50;
  undefined1 local_44 [4];
  undefined4 *local_40;
  undefined1 local_34 [4];
  undefined4 *local_30;
  undefined **ppuStack_2c;
  undefined1 auStack_24 [16];
  void *pvStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00646cc8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (param_3 == (int *)0x0) {
    local_34[0] = 0;
    ExceptionList = &pvStack_c;
    FUN_004040a0(0);
    uVar3 = 0xffffffff;
    pcVar6 = &DAT_006b3f70;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3 - 1;
    cVar1 = FUN_00401940(uVar3,1);
    if (cVar1 != '\0') {
      puVar5 = (undefined4 *)&DAT_006b3f70;
      for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *local_30 = *puVar5;
        puVar5 = puVar5 + 1;
        local_30 = local_30 + 1;
      }
      for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined1 *)local_30 = *(undefined1 *)puVar5;
        puVar5 = (undefined4 *)((int)puVar5 + 1);
        local_30 = (undefined4 *)((int)local_30 + 1);
      }
      FUN_00404190(uVar3);
    }
    local_4 = 0;
    local_44[0] = 0;
    FUN_004040a0(0);
    uVar3 = 0xffffffff;
    pcVar6 = &DAT_006b3f70;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3 - 1;
    cVar1 = FUN_00401940(uVar3,1);
    if (cVar1 != '\0') {
      puVar5 = (undefined4 *)&DAT_006b3f70;
      for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *local_40 = *puVar5;
        puVar5 = puVar5 + 1;
        local_40 = local_40 + 1;
      }
      for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined1 *)local_40 = *(undefined1 *)puVar5;
        puVar5 = (undefined4 *)((int)puVar5 + 1);
        local_40 = (undefined4 *)((int)local_40 + 1);
      }
      FUN_00404190(uVar3);
    }
    local_4 = CONCAT31(local_4._1_3_,1);
    local_54[0] = 0;
    FUN_004040a0(0);
    uVar3 = 0xffffffff;
    pcVar6 = s_Call_to_NULL_event_handler_006b1060;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3 - 1;
    cVar1 = FUN_00401940(uVar3,1);
    if (cVar1 != '\0') {
      pcVar6 = s_Call_to_NULL_event_handler_006b1060;
      for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined4 *)local_50 = *(undefined4 *)pcVar6;
        pcVar6 = pcVar6 + 4;
        local_50 = local_50 + 4;
      }
      for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *local_50 = *pcVar6;
        pcVar6 = pcVar6 + 1;
        local_50 = local_50 + 1;
      }
      FUN_00404190(uVar3);
    }
    local_4._0_1_ = 2;
    FUN_005ea160(0xbc3,local_54,local_44,local_34);
    local_4._0_1_ = 1;
    FUN_004040a0(1);
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_004040a0(1);
    local_4 = 0xffffffff;
    FUN_004040a0(1);
  }
  FUN_005eded0(param_4);
  FUN_005eccd0(param_4);
  FUN_005ec3a0(param_2);
  iVar2 = (**(code **)(*param_3 + 0x3c))(auStack_24,param_1 + 0xbc);
  iVar2 = *(int *)(iVar2 + 0x10);
  ppuStack_2c = &PTR_FUN_00650ad4;
  FUN_005e2f00();
  ExceptionList = pvStack_14;
  return iVar2 != 0;
}

