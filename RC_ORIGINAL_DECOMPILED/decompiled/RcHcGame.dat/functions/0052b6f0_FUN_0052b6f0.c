/*
 * FUN_0052b6f0 at 0052b6f0
 * undefined FUN_0052b6f0(void)
 * Address ranges: 0052b6f0-0052bb35
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0052b6f0(int *param_1,int *param_2)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  void *pvVar4;
  code *pcVar5;
  int *piVar6;
  int iVar7;
  char *pcVar8;
  int local_50;
  char local_4c [4];
  char local_48 [4];
  char local_44 [4];
  char local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined *local_30;
  undefined1 local_2c;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  piVar6 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00639edc;
  pvStack_c = ExceptionList;
  local_4c = (char  [4])s_ad_hoc_level_006a04b0._0_4_;
  local_48 = (char  [4])s_ad_hoc_level_006a04b0._4_4_;
  local_44 = (char  [4])s_ad_hoc_level_006a04b0._8_4_;
  local_3c = DAT_006a04a0;
  local_40 = s_ad_hoc_level_006a04b0[0xc];
  local_38 = DAT_006a04a4;
  local_30 = PTR_DAT_006a04ac;
  bVar2 = false;
  local_34 = DAT_006a04a8;
  local_2c = param_1._0_1_;
  ExceptionList = &pvStack_c;
  FUN_004040a0();
  iVar7 = -1;
  pcVar8 = local_4c;
  do {
    if (iVar7 == 0) break;
    iVar7 = iVar7 + -1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(local_4c);
  local_4 = 0;
  piVar3 = (int *)FUN_005293f0(&local_50);
  local_4._0_1_ = 1;
  if (*param_1 != *piVar3) {
    if (*param_1 != 0) {
      FUN_004098d0();
    }
    *param_1 = *piVar3;
    FUN_005844b0();
  }
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_0057d310();
  local_4 = 0xffffffff;
  FUN_004040a0();
  if (*param_1 == 0) {
    pvVar4 = operator_new(0x1e0);
    local_4 = 2;
    if (pvVar4 == (void *)0x0) {
      local_50 = 0;
    }
    else {
      param_1._0_1_ = SUB41(pvVar4,0);
      local_2c = param_1._0_1_;
      FUN_004040a0();
      iVar7 = -1;
      pcVar8 = local_4c;
      do {
        if (iVar7 == 0) break;
        iVar7 = iVar7 + -1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 != '\0');
      FUN_004040f0(local_4c);
      bVar2 = true;
      local_4 = CONCAT31(local_4._1_3_,3);
      local_50 = FUN_004f1800();
    }
    local_4 = 4;
    FUN_005844b0();
    local_4 = 5;
    if (*piVar6 != local_50) {
      if (*piVar6 != 0) {
        FUN_004098d0();
      }
      *piVar6 = local_50;
      FUN_005844b0();
    }
    local_4 = CONCAT31(local_4._1_3_,4);
    FUN_0057d310();
    local_4 = 0xffffffff;
    if (bVar2) {
      FUN_004040a0();
    }
    param_1 = (int *)&stack0xffffff98;
    if (*piVar6 != 0) {
      piVar3 = (int *)(*piVar6 + 0x14);
      *piVar3 = *piVar3 + 1;
    }
    FUN_00529040();
  }
  bVar2 = false;
  local_2c = param_1._0_1_;
  FUN_004040a0();
  iVar7 = -1;
  pcVar8 = (char *)&local_3c;
  do {
    if (iVar7 == 0) break;
    iVar7 = iVar7 + -1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(&local_3c);
  local_4 = 6;
  if (*piVar6 == 0) {
    FUN_00409810(&DAT_006b3f70);
    local_4._0_1_ = 7;
    pcVar5 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6);
    (*pcVar5)();
    local_4 = CONCAT31(local_4._1_3_,6);
    FUN_004040a0();
  }
  piVar6 = (int *)FUN_004f20b0(&local_50);
  local_4._0_1_ = 8;
  if (*param_2 != *piVar6) {
    if (*param_2 != 0) {
      FUN_004098d0();
    }
    *param_2 = *piVar6;
    FUN_005844b0();
  }
  local_4 = CONCAT31(local_4._1_3_,6);
  FUN_0057d310();
  local_4 = 0xffffffff;
  FUN_004040a0();
  if (*param_2 == 0) {
    pvVar4 = operator_new(0x454);
    local_4 = 9;
    if (pvVar4 == (void *)0x0) {
      iVar7 = 0;
    }
    else {
      param_1._0_1_ = SUB41(pvVar4,0);
      local_2c = param_1._0_1_;
      FUN_004040a0();
      iVar7 = -1;
      pcVar8 = (char *)&local_3c;
      do {
        if (iVar7 == 0) break;
        iVar7 = iVar7 + -1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 != '\0');
      FUN_004040f0(&local_3c);
      bVar2 = true;
      local_4 = CONCAT31(local_4._1_3_,10);
      iVar7 = FUN_004f3530();
    }
    local_4 = 0xb;
    FUN_005844b0();
    local_4 = 0xc;
    if (*param_2 != iVar7) {
      if (*param_2 != 0) {
        FUN_004098d0();
      }
      *param_2 = iVar7;
      FUN_005844b0();
    }
    local_4 = CONCAT31(local_4._1_3_,0xb);
    FUN_0057d310();
    local_4 = 0xffffffff;
    if (bVar2) {
      FUN_004040a0();
    }
    if (*param_2 != 0) {
      piVar6 = (int *)(*param_2 + 0x14);
      *piVar6 = *piVar6 + 1;
    }
    local_4 = 0xffffffff;
    FUN_004c4780();
    FUN_004f1bf0();
    if (*param_2 == 0) {
      FUN_00409810(&DAT_006b3f70);
      local_4 = 0xe;
      pcVar5 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6);
      (*pcVar5)();
      local_4 = 0xffffffff;
      FUN_004040a0();
    }
  }
  FUN_004f3e90();
  ExceptionList = pvStack_c;
  return;
}

