/*
 * FUN_0056cea0 at 0056cea0
 * undefined FUN_0056cea0(void)
 * Address ranges: 0056cea0-0056d254
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0056cea0(undefined4 *param_1,int param_2)

{
  char cVar1;
  code *pcVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined1 *puVar8;
  char *pcVar9;
  undefined4 uVar10;
  undefined1 local_a7;
  undefined1 uStack_a6;
  undefined1 uStack_a5;
  undefined1 *local_a4;
  undefined1 uStack_9d;
  undefined1 local_9c [16];
  undefined1 auStack_8c [16];
  undefined1 auStack_7c [16];
  undefined1 auStack_6c [16];
  undefined1 auStack_5c [16];
  undefined1 auStack_4c [16];
  undefined1 auStack_3c [16];
  undefined1 auStack_2c [16];
  undefined1 auStack_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00640b79;
  pvStack_c = ExceptionList;
  iVar3 = *(int *)(param_2 + 4);
  local_a4 = (undefined1 *)0x0;
  if ((((iVar3 == 0) || ((*(int *)(param_2 + 8) - iVar3) / 0x18 != 4)) || (*(int *)(iVar3 + 8) != 2)
      ) || (((*(int *)(iVar3 + 0x20) != 3 || (*(int *)(iVar3 + 0x38) != 3)) ||
            (ExceptionList = &pvStack_c, *(int *)(iVar3 + 0x50) != 2)))) {
    ExceptionList = &pvStack_c;
    FUN_004040a0(0);
    uVar7 = 0xffffffff;
    pcVar9 = &DAT_006b3f70;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar7 - 1);
    local_4 = 0;
    pcVar2 = (code *)FUN_005a07f0(s__args_size______4______args_0__I_006a4520,
                                  s_D__Work_RCHorror_AdamSource_Adam_006a4280,0x223,local_9c);
    (*pcVar2)();
    local_4 = 0xffffffff;
    FUN_004040a0(1);
  }
  FUN_00515db0();
  iVar3 = FUN_004337e0();
  if (iVar3 != 0) {
    iVar3 = *(int *)(param_2 + 4);
    if (*(int *)(iVar3 + 0x50) != 2) {
      FUN_00409810(&DAT_006b3f70,&local_a7);
      local_4 = 1;
      pcVar2 = (code *)FUN_005a07f0(s_IsInt___0069e134,s___Libs_daviscript_Include_Davi_S_00692284,
                                    0x42,local_9c);
      (*pcVar2)();
      local_4 = 0xffffffff;
      FUN_004040a0(1);
    }
    uVar4 = *(undefined4 *)(iVar3 + 0x58);
    iVar3 = FUN_0045da10(auStack_4c);
    local_4 = 2;
    local_a4 = &DAT_0064a3b4;
    if (*(undefined1 **)(iVar3 + 4) != (undefined1 *)0x0) {
      local_a4 = *(undefined1 **)(iVar3 + 4);
    }
    iVar3 = FUN_0045da10(auStack_5c);
    local_4._0_1_ = 3;
    puVar8 = &DAT_0064a3b4;
    if (*(undefined1 **)(iVar3 + 4) != (undefined1 *)0x0) {
      puVar8 = *(undefined1 **)(iVar3 + 4);
    }
    iVar3 = *(int *)(param_2 + 4);
    if (*(int *)(iVar3 + 8) != 2) {
      FUN_00409810(&DAT_006b3f70,&uStack_9d);
      local_4._0_1_ = 4;
      pcVar2 = (code *)FUN_005a07f0(s_IsInt___0069e134,s___Libs_daviscript_Include_Davi_S_00692284,
                                    0x42,auStack_8c);
      (*pcVar2)();
      local_4._0_1_ = 3;
      FUN_004040a0(1);
    }
    uVar4 = FUN_005ae390(auStack_2c,s_______AddMission___d___s___s___d_006a44fc,
                         *(undefined4 *)(iVar3 + 0x10),puVar8,local_a4,uVar4);
    local_4._0_1_ = 5;
    FUN_005aff00(uVar4);
    local_4._0_1_ = 3;
    FUN_004040a0(1);
    local_4 = CONCAT31(local_4._1_3_,2);
    FUN_004040a0(1);
    local_4 = 0xffffffff;
    FUN_004040a0(1);
  }
  iVar3 = *(int *)(param_2 + 4);
  if (*(int *)(iVar3 + 0x50) != 2) {
    FUN_00409810(&DAT_006b3f70,&uStack_a6);
    local_4 = 6;
    pcVar2 = (code *)FUN_005a07f0(s_IsInt___0069e134,s___Libs_daviscript_Include_Davi_S_00692284,
                                  0x42,auStack_7c);
    (*pcVar2)();
    local_4 = 0xffffffff;
    FUN_004040a0(1);
  }
  uVar4 = *(undefined4 *)(iVar3 + 0x58);
  uVar5 = FUN_0045da10(auStack_1c);
  local_4 = 7;
  uVar6 = FUN_0045da10(auStack_3c);
  iVar3 = *(int *)(param_2 + 4);
  local_4._0_1_ = 8;
  if (*(int *)(iVar3 + 8) != 2) {
    FUN_00409810(&DAT_006b3f70,&uStack_a5);
    local_4._0_1_ = 9;
    pcVar2 = (code *)FUN_005a07f0(s_IsInt___0069e134,s___Libs_daviscript_Include_Davi_S_00692284,
                                  0x42,auStack_6c);
    (*pcVar2)();
    local_4._0_1_ = 8;
    FUN_004040a0(1);
  }
  uVar10 = *(undefined4 *)(iVar3 + 0x10);
  FUN_0053cbf0(uVar10,uVar6,uVar5,uVar4);
  FUN_0053c870(uVar10,uVar6,uVar5,uVar4);
  local_4 = CONCAT31(local_4._1_3_,7);
  FUN_004040a0(1);
  local_4 = 0xffffffff;
  FUN_004040a0(1);
  *param_1 = &PTR_FUN_0064f00c;
  param_1[2] = 0;
  ExceptionList = pvStack_c;
  return;
}

