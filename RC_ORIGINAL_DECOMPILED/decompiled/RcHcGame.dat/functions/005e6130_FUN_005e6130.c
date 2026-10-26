/*
 * FUN_005e6130 at 005e6130
 * undefined FUN_005e6130(void)
 * Address ranges: 005e6130-005e643a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_005e6130(int param_1,int param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  void *pvVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  undefined1 *puVar7;
  undefined4 *puVar8;
  char *pcVar9;
  undefined4 *puVar10;
  undefined1 local_c0 [4];
  undefined4 *local_bc;
  uint local_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined1 local_ac [4];
  char *local_a8;
  undefined *local_9c;
  uint uStack_98;
  undefined1 local_94 [84];
  undefined **local_40;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0064687d;
  pvStack_c = ExceptionList;
  local_b0 = 0;
  ExceptionList = &pvStack_c;
  *(undefined4 *)(param_1 + 4) = 0;
  puVar7 = &DAT_0064a3b4;
  if (*(undefined1 **)(param_2 + 4) != (undefined1 *)0x0) {
    puVar7 = *(undefined1 **)(param_2 + 4);
  }
  local_9c = &DAT_00650a34;
  FUN_005e4430();
  local_40 = &PTR_FUN_00651634;
  local_b0 = 1;
  local_4 = 0;
  FUN_005e64a0(local_94,0,0);
  local_4 = 1;
  FUN_005e5430(0);
  local_4 = CONCAT31(local_4._1_3_,2);
  *(undefined ***)((int)&local_9c + *(int *)(local_9c + 4)) = &PTR_LAB_00650a30;
  iVar2 = FUN_005e55c0(puVar7,0x21);
  if (iVar2 == 0) {
    FUN_005e5360(*(uint *)((int)&uStack_98 + *(int *)(local_9c + 4)) | 2,0);
  }
  local_4 = 3;
  if (*(int *)((int)&uStack_98 + *(int *)(local_9c + 4)) != 0) {
    FUN_004040a0(0);
    uVar5 = 0xffffffff;
    pcVar9 = &DAT_006b3f70;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5 - 1;
    cVar1 = FUN_00401940(uVar5,1);
    if (cVar1 != '\0') {
      puVar8 = (undefined4 *)&DAT_006b3f70;
      puVar10 = local_bc;
      for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *puVar10 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar10 = puVar10 + 1;
      }
      for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined1 *)puVar10 = *(undefined1 *)puVar8;
        puVar8 = (undefined4 *)((int)puVar8 + 1);
        puVar10 = (undefined4 *)((int)puVar10 + 1);
      }
      *(undefined1 *)((int)local_bc + uVar5) = 0;
      local_b8 = uVar5;
    }
    local_4 = CONCAT31(local_4._1_3_,4);
    FUN_004040a0(0);
    uVar5 = 0xffffffff;
    pcVar9 = s_Cannot_open_objectfile_006b0f28;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5 - 1;
    cVar1 = FUN_00401940(uVar5,1);
    if (cVar1 != '\0') {
      pcVar9 = s_Cannot_open_objectfile_006b0f28;
      for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)local_a8 = *(undefined4 *)pcVar9;
        pcVar9 = pcVar9 + 4;
        local_a8 = local_a8 + 4;
      }
      for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *local_a8 = *pcVar9;
        pcVar9 = pcVar9 + 1;
        local_a8 = local_a8 + 1;
      }
      FUN_00404190(uVar5);
    }
    local_4._0_1_ = 5;
    FUN_005ea160(0xbbe,local_ac,param_2,local_c0);
    local_4._0_1_ = 4;
    FUN_004040a0(1);
    local_4 = CONCAT31(local_4._1_3_,3);
    if (local_bc != (undefined4 *)0x0) {
      cVar1 = *(char *)((int)local_bc + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_005fe5f0((char *)((int)local_bc + -1));
      }
      else {
        *(char *)((int)local_bc + -1) = cVar1 + -1;
      }
    }
    local_bc = (undefined4 *)0x0;
    local_b8 = 0;
    uStack_b4 = 0;
  }
  pvVar3 = operator_new(0xcc);
  local_4._0_1_ = 6;
  if (pvVar3 == (void *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_005e9400(&local_9c,param_3);
  }
  *(undefined4 *)(param_1 + 4) = uVar4;
  local_4 = CONCAT31(local_4._1_3_,3);
  if (DAT_0070fae8 != 0) {
    FUN_005e9d90(DAT_0070fae8,uVar4);
  }
  FUN_005e9720(s__init_006b0f20);
  FUN_005e9720(s_OnLoad_006b0f18);
  *(undefined ***)((int)&local_9c + *(int *)(local_9c + 4)) = &PTR_LAB_00650a30;
  local_4 = 7;
  FUN_005e4570();
  local_4 = 0xffffffff;
  *(undefined ***)((int)&local_9c + *(int *)(local_9c + 4)) = &PTR_FUN_006515f4;
  local_40 = &PTR_FUN_00651634;
  FUN_005fea52();
  ExceptionList = pvStack_c;
  return;
}

