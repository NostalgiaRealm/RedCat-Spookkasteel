/*
 * FUN_005610c0 at 005610c0
 * undefined FUN_005610c0(void)
 * Address ranges: 005610c0-005614d0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool __thiscall
FUN_005610c0(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  char cVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  char *pcVar9;
  undefined1 uStack_35;
  int local_34;
  undefined1 local_2c [4];
  undefined4 *local_28;
  undefined1 auStack_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_0063fb68;
  pvStack_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  local_34 = param_1;
  if (param_2 == 0) {
    local_2c[0] = (undefined1)param_2;
    ExceptionList = &pvStack_c;
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
      puVar7 = (undefined4 *)&DAT_006b3f70;
      puVar8 = local_28;
      for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *puVar8 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar8 = puVar8 + 1;
      }
      for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined1 *)puVar8 = *(undefined1 *)puVar7;
        puVar7 = (undefined4 *)((int)puVar7 + 1);
        puVar8 = (undefined4 *)((int)puVar8 + 1);
      }
      FUN_00404190(uVar5);
      param_1 = local_34;
    }
    local_4._0_1_ = 1;
    pcVar2 = (code *)FUN_005a07f0(s_a_Bitmap_IsNotNull___006a3710,
                                  s_D__Work_RCHorror_AdamSource_Adam_006a26f8,0x584,local_2c);
    (*pcVar2)();
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_004040a0(1);
  }
  FUN_005ae5f0(s_D__Work_RCHorror_AdamSource_Adam_006a26f8,0x585);
  local_4 = CONCAT31(local_4._1_3_,2);
  if (*(char *)(param_1 + 0x125) == '\0') {
    local_2c[0] = (undefined1)param_2;
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
      puVar7 = (undefined4 *)&DAT_006b3f70;
      puVar8 = local_28;
      for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *puVar8 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar8 = puVar8 + 1;
      }
      for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined1 *)puVar8 = *(undefined1 *)puVar7;
        puVar7 = (undefined4 *)((int)puVar7 + 1);
        puVar8 = (undefined4 *)((int)puVar8 + 1);
      }
      FUN_00404190(uVar5);
      param_1 = local_34;
    }
    local_4._0_1_ = 3;
    pcVar2 = (code *)FUN_005a07f0(s_m_Initialized_00691bb0,
                                  s_D__Work_RCHorror_AdamSource_Adam_006a26f8,0x586,local_2c);
    (*pcVar2)();
    local_4 = CONCAT31(local_4._1_3_,2);
    FUN_004040a0(1);
  }
  if (*(char *)(param_1 + 0x194) == '\0') {
    local_2c[0] = (undefined1)param_2;
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
      puVar7 = (undefined4 *)&DAT_006b3f70;
      for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *local_28 = *puVar7;
        puVar7 = puVar7 + 1;
        local_28 = local_28 + 1;
      }
      for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined1 *)local_28 = *(undefined1 *)puVar7;
        puVar7 = (undefined4 *)((int)puVar7 + 1);
        local_28 = (undefined4 *)((int)local_28 + 1);
      }
      FUN_00404190(uVar5);
      param_1 = local_34;
    }
    local_4._0_1_ = 4;
    pcVar2 = (code *)FUN_005a07f0(s_m_InFrame_006a3704,s_D__Work_RCHorror_AdamSource_Adam_006a26f8,
                                  0x587,local_2c);
    (*pcVar2)();
    local_4 = CONCAT31(local_4._1_3_,2);
    FUN_004040a0(1);
  }
  if (param_2 == 0) {
    local_2c[0] = (undefined1)param_2;
    FUN_004040a0(0);
    uVar5 = 0xffffffff;
    pcVar9 = &DAT_006b3f70;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar5 - 1);
    local_4._0_1_ = 5;
    pcVar2 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                  local_2c);
    (*pcVar2)();
    local_4 = CONCAT31(local_4._1_3_,2);
    FUN_004040a0(1);
  }
  cVar1 = FUN_0050b2d0();
  if (cVar1 == '\0') {
    auStack_1c[0] = (undefined1)param_2;
    FUN_004040a0(0);
    uVar5 = 0xffffffff;
    pcVar9 = &DAT_006b3f70;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar5 - 1);
    local_4._0_1_ = 6;
    pcVar2 = (code *)FUN_005a07f0(s_a_Bitmap_>GetIsAddedToEngine___006a36e4,
                                  s_D__Work_RCHorror_AdamSource_Adam_006a26f8,0x588,auStack_1c);
    (*pcVar2)();
    local_4 = CONCAT31(local_4._1_3_,2);
    FUN_004040a0(1);
  }
  if (param_2 == 0) {
    auStack_1c[0] = (undefined1)param_2;
    FUN_004040a0(0);
    uVar5 = 0xffffffff;
    pcVar9 = &DAT_006b3f70;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar5 - 1);
    local_4._0_1_ = 7;
    pcVar2 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                  auStack_1c);
    (*pcVar2)();
    local_4 = CONCAT31(local_4._1_3_,2);
    FUN_004040a0(1);
  }
  if (*(int *)(param_1 + 0x100) == 0) {
    FUN_00409810(&DAT_006b3f70,&uStack_35);
    local_4._0_1_ = 8;
    pcVar2 = (code *)FUN_005a07f0(s_m_Engine_006934e0,s___AdamSource_AdamEngine_h_0068eb58,0x1ad,
                                  local_2c);
    (*pcVar2)();
    local_4 = CONCAT31(local_4._1_3_,2);
    FUN_004040a0(1);
  }
  FUN_0050aa70(param_5,param_3,param_4);
  iVar3 = FUN_005bbab0(param_5,param_3,param_4);
  local_4 = local_4 & 0xffffff00;
  FUN_005ae770();
  local_4 = 0xffffffff;
  if (param_2 != 0) {
    iVar4 = *(int *)(param_2 + 0x14) + -1;
    *(int *)(param_2 + 0x14) = iVar4;
    if (iVar4 == 0) {
      FUN_005abfc0(0);
    }
  }
  ExceptionList = pvStack_c;
  return iVar3 != 0;
}

