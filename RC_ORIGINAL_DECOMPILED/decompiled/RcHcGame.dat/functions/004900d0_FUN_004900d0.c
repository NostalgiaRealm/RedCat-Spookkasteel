/*
 * FUN_004900d0 at 004900d0
 * undefined FUN_004900d0(void)
 * Address ranges: 004900d0-004915bf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_004900d0(int param_1,char param_2)

{
  bool bVar1;
  undefined1 uVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  code *pcVar6;
  int *piVar7;
  undefined1 *puVar8;
  int iVar9;
  int iVar10;
  DWORD DVar11;
  uint uVar12;
  char *pcVar13;
  float10 fVar14;
  undefined1 uStack_13e;
  undefined1 local_13d;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined1 auStack_12c [16];
  undefined4 local_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  int iStack_10c;
  float fStack_108;
  int local_104;
  float fStack_100;
  undefined1 auStack_fc [16];
  int *piStack_ec;
  undefined4 local_e8;
  undefined1 local_e4 [4];
  int iStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined1 local_d0 [4];
  int iStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined1 local_c0 [4];
  int iStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined1 local_b0 [4];
  int iStack_ac;
  undefined1 auStack_a0 [132];
  undefined1 auStack_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062b438;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  uVar4 = FUN_005a1d60(s__Debriefing_ini_00693780);
  FUN_0040cad0(local_b0,uVar4);
  local_4 = 0;
  FUN_00536050(local_e4);
  local_4._0_1_ = 1;
  FUN_00436f90(local_d0);
  local_4._0_1_ = 2;
  FUN_0043b0a0(local_c0);
  local_4._0_1_ = 3;
  iVar5 = DAT_006b915c;
  if (DAT_006b915c == 0) {
    iVar5 = FUN_004bc480();
  }
  if (*(int *)(iVar5 + 0x3a4) == 0) {
    FUN_00409810(&DAT_006b3f70,&local_13d);
    local_4._0_1_ = 4;
    pcVar6 = (code *)FUN_005a07f0(s_m_Game_0068e584,s___AdamSource_AdamApplication_h_0068e58c,0x130,
                                  &local_11c);
    (*pcVar6)();
    local_4._0_1_ = 3;
    FUN_004040a0(1);
  }
  local_e8 = *(undefined4 *)(iVar5 + 0x3a4);
  piVar7 = (int *)FUN_00453d20(&local_104);
  local_4._0_1_ = 5;
  uVar2 = (undefined1)local_4;
  local_4._0_1_ = 5;
  if (*piVar7 == 0) {
    FUN_00409810(&DAT_006b3f70,&local_13d);
    local_4._0_1_ = 6;
    pcVar6 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                  &local_11c);
    (*pcVar6)();
    local_4._0_1_ = 5;
    FUN_004040a0(1);
    uVar2 = (undefined1)local_4;
  }
  local_4._0_1_ = uVar2;
  iVar5 = FUN_0060a6f2(*(undefined4 *)(*piVar7 + 0x360),0,&CAdamPlayer::RTTI_Type_Descriptor,
                       &CRCPlayer::RTTI_Type_Descriptor,0);
  local_4._0_1_ = 3;
  FUN_0057d310();
  if (*(int *)(iVar5 + 0x1f0) == 0) {
    FUN_00409810(&DAT_006b3f70,&uStack_13e);
    local_4._0_1_ = 7;
    pcVar6 = (code *)FUN_005a07f0(s_m_GameProperties____0_0068f970,
                                  s___AdamSource_AdamPlayer_h_0068f988,0x15b,auStack_fc);
    (*pcVar6)();
    local_4._0_1_ = 3;
    FUN_004040a0(1);
  }
  FUN_0060a6f2(*(undefined4 *)(iVar5 + 0x1f0),0,&CAdamPlayerGameProperties::RTTI_Type_Descriptor,
               &CRcPlayerProperties::RTTI_Type_Descriptor,0);
  uStack_13c = CONCAT31(uStack_13c._1_3_,uStack_13e);
  FUN_004040a0(0);
  uVar12 = 0xffffffff;
  pcVar13 = s_General_00690810;
  do {
    if (uVar12 == 0) break;
    uVar12 = uVar12 - 1;
    cVar3 = *pcVar13;
    pcVar13 = pcVar13 + 1;
  } while (cVar3 != '\0');
  FUN_004040f0(s_General_00690810,~uVar12 - 1);
  local_4._0_1_ = 8;
  auStack_12c[0] = uStack_13e;
  FUN_004040a0(0);
  uVar12 = 0xffffffff;
  pcVar13 = &DAT_00690804;
  do {
    if (uVar12 == 0) break;
    uVar12 = uVar12 - 1;
    cVar3 = *pcVar13;
    pcVar13 = pcVar13 + 1;
  } while (cVar3 != '\0');
  FUN_004040f0(&DAT_00690804,~uVar12 - 1);
  local_4 = CONCAT31(local_4._1_3_,9);
  iVar5 = FUN_005ac9d0(auStack_12c,&uStack_13c,0,local_c0,0);
  local_104 = *(int *)(iVar5 + 100);
  if (local_104 == -0x80000000) {
    puVar8 = *(undefined1 **)(iVar5 + 0x18);
    if (puVar8 == (undefined1 *)0x0) {
      puVar8 = &DAT_0064a3b4;
    }
    local_104 = FUN_0060af10(puVar8);
    *(int *)(iVar5 + 100) = local_104;
  }
  FUN_005acca0();
  local_4._0_1_ = 8;
  FUN_004040a0(1);
  local_4 = CONCAT31(local_4._1_3_,3);
  FUN_004040a0(1);
  iVar5 = DAT_006b915c;
  if (DAT_006b915c == 0) {
    iVar5 = FUN_004bc480();
  }
  if (*(int *)(iVar5 + 0x3a8) == 0) {
    FUN_00409810(&DAT_006b3f70,&uStack_13e);
    local_4._0_1_ = 10;
    pcVar6 = (code *)FUN_005a07f0(s_m_Input____0_00693a28,s___AdamSource_AdamApplication_h_0068e58c,
                                  0x136,auStack_a0);
    (*pcVar6)();
    local_4 = CONCAT31(local_4._1_3_,3);
    FUN_004040a0(1);
  }
  piStack_ec = (int *)FUN_0060a6f2(*(undefined4 *)(iVar5 + 0x3a8),0,
                                   &CAdamInput::RTTI_Type_Descriptor,&CRcInput::RTTI_Type_Descriptor
                                   ,0);
  auStack_12c[0] = uStack_13e;
  FUN_004040a0(0);
  uVar12 = 0xffffffff;
  pcVar13 = s_General_00690810;
  do {
    if (uVar12 == 0) break;
    uVar12 = uVar12 - 1;
    cVar3 = *pcVar13;
    pcVar13 = pcVar13 + 1;
  } while (cVar3 != '\0');
  FUN_004040f0(s_General_00690810,~uVar12 - 1);
  local_4._0_1_ = 0xb;
  uStack_13c = CONCAT31(uStack_13c._1_3_,uStack_13e);
  FUN_004040a0(0);
  uVar12 = 0xffffffff;
  pcVar13 = s_ScoreMultiplier_00693a18;
  do {
    if (uVar12 == 0) break;
    uVar12 = uVar12 - 1;
    cVar3 = *pcVar13;
    pcVar13 = pcVar13 + 1;
  } while (cVar3 != '\0');
  FUN_004040f0(s_ScoreMultiplier_00693a18,~uVar12 - 1);
  local_4._0_1_ = 0xc;
  iVar5 = FUN_005ac9d0(&uStack_13c,auStack_12c,0xf,local_b0,0);
  local_4._0_1_ = 0xd;
  if (*(float *)(iVar5 + 0x60) == 0.0) {
    fVar14 = (float10)FUN_005ad390(iVar5 + 0x14,&local_13d);
    *(float *)(iVar5 + 0x60) = (float)fVar14;
    fStack_100 = (float)fVar14;
  }
  else {
    fStack_100 = *(float *)(iVar5 + 0x60);
  }
  local_4._0_1_ = 0xc;
  FUN_005acca0();
  local_4._0_1_ = 0xb;
  FUN_004040a0(1);
  local_4._0_1_ = 3;
  FUN_004040a0(1);
  auStack_12c[0] = uStack_13e;
  FUN_004040a0(0);
  uVar12 = 0xffffffff;
  pcVar13 = &DAT_00693a14;
  do {
    if (uVar12 == 0) break;
    uVar12 = uVar12 - 1;
    cVar3 = *pcVar13;
    pcVar13 = pcVar13 + 1;
  } while (cVar3 != '\0');
  FUN_004040f0(&DAT_00693a14,~uVar12 - 1);
  local_4._0_1_ = 0xe;
  uStack_13c = CONCAT31(uStack_13c._1_3_,uStack_13e);
  FUN_004040a0(0);
  uVar12 = 0xffffffff;
  pcVar13 = s_StartLevelNumber_00693a00;
  do {
    if (uVar12 == 0) break;
    uVar12 = uVar12 - 1;
    cVar3 = *pcVar13;
    pcVar13 = pcVar13 + 1;
  } while (cVar3 != '\0');
  FUN_004040f0(s_StartLevelNumber_00693a00,~uVar12 - 1);
  local_4 = CONCAT31(local_4._1_3_,0xf);
  iVar5 = FUN_005ac9d0(&uStack_13c,auStack_12c,1,local_d0,0);
  fStack_108 = *(float *)(iVar5 + 100);
  if (fStack_108 == -0.0) {
    puVar8 = *(undefined1 **)(iVar5 + 0x18);
    if (puVar8 == (undefined1 *)0x0) {
      puVar8 = &DAT_0064a3b4;
    }
    fStack_108 = (float)FUN_0060af10(puVar8);
    *(float *)(iVar5 + 100) = fStack_108;
  }
  FUN_005acca0();
  local_4._0_1_ = 0xe;
  FUN_004040a0(1);
  local_4._0_1_ = 3;
  FUN_004040a0(1);
  auStack_12c[0] = uStack_13e;
  FUN_004040a0(0);
  uVar12 = 0xffffffff;
  pcVar13 = &DAT_00693a14;
  do {
    if (uVar12 == 0) break;
    uVar12 = uVar12 - 1;
    cVar3 = *pcVar13;
    pcVar13 = pcVar13 + 1;
  } while (cVar3 != '\0');
  FUN_004040f0(&DAT_00693a14,~uVar12 - 1);
  uStack_13c = CONCAT31(uStack_13c._1_3_,uStack_13e);
  local_4._0_1_ = 0x10;
  FUN_004040a0(0);
  uVar12 = 0xffffffff;
  pcVar13 = s_StartSubLevelNumber_006939ec;
  do {
    if (uVar12 == 0) break;
    uVar12 = uVar12 - 1;
    cVar3 = *pcVar13;
    pcVar13 = pcVar13 + 1;
  } while (cVar3 != '\0');
  FUN_004040f0(s_StartSubLevelNumber_006939ec,~uVar12 - 1);
  local_4 = CONCAT31(local_4._1_3_,0x11);
  iVar9 = FUN_005ac9d0(&uStack_13c,auStack_12c,1,local_d0,0);
  iVar5 = *(int *)(iVar9 + 100);
  if (iVar5 == -0x80000000) {
    puVar8 = *(undefined1 **)(iVar9 + 0x18);
    if (puVar8 == (undefined1 *)0x0) {
      puVar8 = &DAT_0064a3b4;
    }
    iVar5 = FUN_0060af10(puVar8);
    *(int *)(iVar9 + 100) = iVar5;
  }
  FUN_005acca0();
  local_4._0_1_ = 0x10;
  FUN_004040a0(1);
  local_4._0_1_ = 3;
  FUN_004040a0(1);
  auStack_12c[0] = uStack_13e;
  FUN_004040a0(0);
  uVar12 = 0xffffffff;
  pcVar13 = &DAT_00693a14;
  do {
    if (uVar12 == 0) break;
    uVar12 = uVar12 - 1;
    cVar3 = *pcVar13;
    pcVar13 = pcVar13 + 1;
  } while (cVar3 != '\0');
  FUN_004040f0(&DAT_00693a14,~uVar12 - 1);
  local_4._0_1_ = 0x12;
  uStack_13c = CONCAT31(uStack_13c._1_3_,uStack_13e);
  FUN_004040a0(0);
  uVar12 = 0xffffffff;
  pcVar13 = s_StartSubSubLevelNumber_006939d4;
  do {
    if (uVar12 == 0) break;
    uVar12 = uVar12 - 1;
    cVar3 = *pcVar13;
    pcVar13 = pcVar13 + 1;
  } while (cVar3 != '\0');
  FUN_004040f0(s_StartSubSubLevelNumber_006939d4,~uVar12 - 1);
  local_4 = CONCAT31(local_4._1_3_,0x13);
  iVar10 = FUN_005ac9d0(&uStack_13c,auStack_12c,1,local_d0,0);
  iVar9 = *(int *)(iVar10 + 100);
  if (iVar9 == -0x80000000) {
    puVar8 = *(undefined1 **)(iVar10 + 0x18);
    if (puVar8 == (undefined1 *)0x0) {
      puVar8 = &DAT_0064a3b4;
    }
    iVar9 = FUN_0060af10(puVar8);
    *(int *)(iVar10 + 100) = iVar9;
  }
  FUN_005acca0();
  local_4._0_1_ = 0x12;
  FUN_004040a0(1);
  local_4._0_1_ = 3;
  FUN_004040a0(1);
  FUN_0052a800(auStack_1c,fStack_108,iVar5,iVar9);
  local_4._0_1_ = 0x14;
  auStack_12c[0] = uStack_13e;
  FUN_004040a0(0);
  uVar12 = 0xffffffff;
  pcVar13 = s_General_00690810;
  do {
    if (uVar12 == 0) break;
    uVar12 = uVar12 - 1;
    cVar3 = *pcVar13;
    pcVar13 = pcVar13 + 1;
  } while (cVar3 != '\0');
  FUN_004040f0(s_General_00690810,~uVar12 - 1);
  uStack_13c = CONCAT31(uStack_13c._1_3_,uStack_13e);
  local_4._0_1_ = 0x15;
  FUN_004040a0(0);
  uVar12 = 0xffffffff;
  pcVar13 = s_StartDelay_006939c8;
  do {
    if (uVar12 == 0) break;
    uVar12 = uVar12 - 1;
    cVar3 = *pcVar13;
    pcVar13 = pcVar13 + 1;
  } while (cVar3 != '\0');
  FUN_004040f0(s_StartDelay_006939c8,~uVar12 - 1);
  local_4._0_1_ = 0x16;
  iVar5 = FUN_005a3d10(&uStack_13c,auStack_12c,0x3f800000,0,0x41200000,local_b0);
  local_4._0_1_ = 0x17;
  if (*(float *)(iVar5 + 0x60) == 0.0) {
    fVar14 = (float10)FUN_005ad390(iVar5 + 0x14,&local_13d);
    *(float *)(iVar5 + 0x60) = (float)fVar14;
    fStack_108 = (float)fVar14;
  }
  else {
    fStack_108 = *(float *)(iVar5 + 0x60);
  }
  local_4._0_1_ = 0x16;
  FUN_005a3ce0();
  local_4._0_1_ = 0x15;
  FUN_004040a0(1);
  local_4._0_1_ = 0x14;
  FUN_004040a0(1);
  uStack_d4 = 0;
  if (*(int *)(param_1 + 0xa8) == 0) {
    piVar7 = (int *)FUN_00453d20(&iStack_10c);
    local_4._0_1_ = 0x18;
    uVar2 = (undefined1)local_4;
    local_4._0_1_ = 0x18;
    if (*piVar7 == 0) {
      FUN_00409810(&DAT_006b3f70,&local_13d);
      local_4._0_1_ = 0x19;
      pcVar6 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                    &local_11c);
      (*pcVar6)();
      local_4._0_1_ = 0x18;
      FUN_004040a0(1);
      uVar2 = (undefined1)local_4;
    }
    local_4._0_1_ = uVar2;
    uVar4 = FUN_004f3d80(0,&CAdamSubLevelSettings::RTTI_Type_Descriptor,
                         &CRcSubLevelSettings::RTTI_Type_Descriptor,0);
    uVar4 = FUN_0060a6f2(uVar4);
    *(undefined4 *)(param_1 + 0xa8) = uVar4;
    local_4._0_1_ = 0x14;
    FUN_0057d310();
  }
  if ((fStack_108 <= 0.0) || (60.0 <= fStack_108)) {
    fStack_108 = 1.0;
  }
  if (*(int *)(param_1 + 0xa8) == 0) {
    uStack_13c = CONCAT31(uStack_13c._1_3_,uStack_13e);
    FUN_004040a0(0);
    uVar12 = 0xffffffff;
    pcVar13 = s_Settings_could_not_be_loaded_006939a8;
    do {
      if (uVar12 == 0) break;
      uVar12 = uVar12 - 1;
      cVar3 = *pcVar13;
      pcVar13 = pcVar13 + 1;
    } while (cVar3 != '\0');
    FUN_004040f0(s_Settings_could_not_be_loaded_006939a8,~uVar12 - 1);
    local_4._0_1_ = 0x1a;
    pcVar6 = (code *)FUN_005a07f0(s_m_Settings____NULL_00693964,
                                  s_D__Work_RCHorror_RCSource_RcGSta_00693978,0x20e,&uStack_13c);
    (*pcVar6)();
    local_4._0_1_ = 0x14;
    FUN_004040a0(1);
  }
  if (param_2 != '\0') {
    *(undefined4 *)(param_1 + 0xac) = 0;
    uVar4 = __ftol();
    FUN_004041b0(uVar4);
    *(undefined4 *)(param_1 + 0xb0) = uStack_13c;
    *(undefined4 *)(param_1 + 0xb4) = uStack_138;
    *(undefined4 *)(param_1 + 0xb8) = uStack_134;
    *(undefined4 *)(param_1 + 0xbc) = uStack_130;
    FUN_004040a0(0);
    uVar12 = 0xffffffff;
    pcVar13 = s_General_00690810;
    do {
      if (uVar12 == 0) break;
      uVar12 = uVar12 - 1;
      cVar3 = *pcVar13;
      pcVar13 = pcVar13 + 1;
    } while (cVar3 != '\0');
    FUN_004040f0(s_General_00690810,~uVar12 - 1);
    local_4._0_1_ = 0x1b;
    auStack_fc[0] = uStack_13e;
    FUN_004040a0(0);
    uVar12 = 0xffffffff;
    pcVar13 = s_PotionTXT_00693958;
    do {
      if (uVar12 == 0) break;
      uVar12 = uVar12 - 1;
      cVar3 = *pcVar13;
      pcVar13 = pcVar13 + 1;
    } while (cVar3 != '\0');
    FUN_004040f0(s_PotionTXT_00693958,~uVar12 - 1);
    local_4._0_1_ = 0x1c;
    iVar5 = FUN_005acaf0(auStack_fc,&local_11c,s_<No_Value>_0069358c,local_e4,0);
    local_4._0_1_ = 0x1d;
    auStack_12c[0] = *(undefined1 *)(iVar5 + 0x14);
    FUN_004040a0(0);
    FUN_0040cc00((undefined1 *)(iVar5 + 0x14),0,0xffffffff);
    local_4._0_1_ = 0x1e;
    uStack_13c._0_1_ = auStack_12c[0];
    FUN_004040a0(0);
    FUN_0040cc00(auStack_12c,0,0xffffffff);
    local_4._0_1_ = 0x1f;
    FUN_0040cc00(&uStack_13c,0,0xffffffff);
    local_4._0_1_ = 0x1e;
    FUN_004040a0(1);
    local_4._0_1_ = 0x1d;
    FUN_004040a0(1);
    local_4._0_1_ = 0x1c;
    FUN_005acca0();
    local_4._0_1_ = 0x1b;
    FUN_004040a0(1);
    local_4._0_1_ = 0x14;
    FUN_004040a0(1);
    FUN_004040a0(0);
    uVar12 = 0xffffffff;
    pcVar13 = s_General_00690810;
    do {
      if (uVar12 == 0) break;
      uVar12 = uVar12 - 1;
      cVar3 = *pcVar13;
      pcVar13 = pcVar13 + 1;
    } while (cVar3 != '\0');
    FUN_004040f0(s_General_00690810,~uVar12 - 1);
    local_4._0_1_ = 0x20;
    auStack_fc[0] = uStack_13e;
    FUN_004040a0(0);
    uVar12 = 0xffffffff;
    pcVar13 = s_MoneyTXT_0069394c;
    do {
      if (uVar12 == 0) break;
      uVar12 = uVar12 - 1;
      cVar3 = *pcVar13;
      pcVar13 = pcVar13 + 1;
    } while (cVar3 != '\0');
    FUN_004040f0(s_MoneyTXT_0069394c,~uVar12 - 1);
    local_4._0_1_ = 0x21;
    iVar5 = FUN_005acaf0(auStack_fc,&uStack_13c,s_<No_Value>_0069358c,local_e4,0);
    local_4._0_1_ = 0x22;
    auStack_12c[0] = *(undefined1 *)(iVar5 + 0x14);
    FUN_004040a0(0);
    FUN_0040cc00((undefined1 *)(iVar5 + 0x14),0,0xffffffff);
    local_4._0_1_ = 0x23;
    local_11c._0_1_ = auStack_12c[0];
    FUN_004040a0(0);
    FUN_0040cc00(auStack_12c,0,0xffffffff);
    local_4._0_1_ = 0x24;
    FUN_0040cc00(&local_11c,0,0xffffffff);
    local_4._0_1_ = 0x23;
    FUN_004040a0(1);
    local_4._0_1_ = 0x22;
    FUN_004040a0(1);
    local_4._0_1_ = 0x21;
    FUN_005acca0();
    local_4._0_1_ = 0x20;
    FUN_004040a0(1);
    local_4._0_1_ = 0x14;
    FUN_004040a0(1);
    FUN_004040a0(0);
    uVar12 = 0xffffffff;
    pcVar13 = s_General_00690810;
    do {
      if (uVar12 == 0) break;
      uVar12 = uVar12 - 1;
      cVar3 = *pcVar13;
      pcVar13 = pcVar13 + 1;
    } while (cVar3 != '\0');
    FUN_004040f0(s_General_00690810,~uVar12 - 1);
    local_4._0_1_ = 0x25;
    auStack_fc[0] = uStack_13e;
    FUN_004040a0(0);
    uVar12 = 0xffffffff;
    pcVar13 = &DAT_00693940;
    do {
      if (uVar12 == 0) break;
      uVar12 = uVar12 - 1;
      cVar3 = *pcVar13;
      pcVar13 = pcVar13 + 1;
    } while (cVar3 != '\0');
    FUN_004040f0(&DAT_00693940,~uVar12 - 1);
    local_4._0_1_ = 0x26;
    iVar5 = FUN_005acaf0(auStack_fc,&uStack_13c,s_<No_Value>_0069358c,local_e4,0);
    local_4._0_1_ = 0x27;
    auStack_12c[0] = *(undefined1 *)(iVar5 + 0x14);
    FUN_004040a0(0);
    FUN_0040cc00((undefined1 *)(iVar5 + 0x14),0,0xffffffff);
    local_4._0_1_ = 0x28;
    local_11c._0_1_ = auStack_12c[0];
    FUN_004040a0(0);
    FUN_0040cc00(auStack_12c,0,0xffffffff);
    local_4._0_1_ = 0x29;
    FUN_0040cc00(&local_11c,0,0xffffffff);
    local_4._0_1_ = 0x28;
    FUN_004040a0(1);
    local_4._0_1_ = 0x27;
    FUN_004040a0(1);
    local_4._0_1_ = 0x26;
    FUN_005acca0();
    local_4._0_1_ = 0x25;
    FUN_004040a0(1);
    local_4._0_1_ = 0x14;
    FUN_004040a0(1);
    uStack_13c = CONCAT31(uStack_13c._1_3_,uStack_13e);
    FUN_004040a0(0);
    uVar12 = 0xffffffff;
    pcVar13 = s_General_00690810;
    do {
      if (uVar12 == 0) break;
      uVar12 = uVar12 - 1;
      cVar3 = *pcVar13;
      pcVar13 = pcVar13 + 1;
    } while (cVar3 != '\0');
    FUN_004040f0(s_General_00690810,~uVar12 - 1);
    local_4._0_1_ = 0x2a;
    auStack_fc[0] = uStack_13e;
    FUN_004040a0(0);
    uVar12 = 0xffffffff;
    pcVar13 = s_SecretTXT_00693934;
    do {
      if (uVar12 == 0) break;
      uVar12 = uVar12 - 1;
      cVar3 = *pcVar13;
      pcVar13 = pcVar13 + 1;
    } while (cVar3 != '\0');
    FUN_004040f0(s_SecretTXT_00693934,~uVar12 - 1);
    local_4._0_1_ = 0x2b;
    iVar5 = FUN_005acaf0(auStack_fc,&uStack_13c,s_<No_Value>_0069358c,local_e4,0);
    local_4._0_1_ = 0x2c;
    auStack_12c[0] = *(undefined1 *)(iVar5 + 0x14);
    FUN_004040a0(0);
    FUN_0040cc00((undefined1 *)(iVar5 + 0x14),0,0xffffffff);
    local_4._0_1_ = 0x2d;
    local_11c = CONCAT31(local_11c._1_3_,auStack_12c[0]);
    FUN_004040a0(0);
    FUN_0040cc00(auStack_12c,0,0xffffffff);
    local_4._0_1_ = 0x2e;
    FUN_0040cc00(&local_11c,0,0xffffffff);
    local_4._0_1_ = 0x2d;
    FUN_004040a0(1);
    local_4._0_1_ = 0x2c;
    FUN_004040a0(1);
    local_4._0_1_ = 0x2b;
    FUN_005acca0();
    local_4._0_1_ = 0x2a;
    FUN_004040a0(1);
    local_4._0_1_ = 0x14;
    FUN_004040a0(1);
    uVar4 = FUN_00439e20();
    *(undefined4 *)(param_1 + 0x208) = uVar4;
    uVar4 = FUN_00598570();
    *(undefined4 *)(param_1 + 0x248) = uVar4;
    uVar4 = FUN_00439df0();
    *(undefined4 *)(param_1 + 0x288) = uVar4;
    uVar4 = FUN_00439d60();
    *(undefined4 *)(param_1 + 0x2d4) = uVar4;
    uVar4 = FUN_005ac530();
    *(undefined4 *)(param_1 + 0x2e4) = uVar4;
    piVar7 = (int *)FUN_00453d20(&iStack_10c);
    local_4._0_1_ = 0x2f;
    uVar2 = (undefined1)local_4;
    local_4._0_1_ = 0x2f;
    if (*piVar7 == 0) {
      local_11c = CONCAT31(local_11c._1_3_,uStack_13e);
      FUN_004040a0(0);
      uVar12 = 0xffffffff;
      pcVar13 = &DAT_006b3f70;
      do {
        if (uVar12 == 0) break;
        uVar12 = uVar12 - 1;
        cVar3 = *pcVar13;
        pcVar13 = pcVar13 + 1;
      } while (cVar3 != '\0');
      FUN_004040f0(&DAT_006b3f70,~uVar12 - 1);
      local_4._0_1_ = 0x30;
      pcVar6 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                    &local_11c);
      (*pcVar6)();
      local_4._0_1_ = 0x2f;
      FUN_004040a0(1);
      uVar2 = (undefined1)local_4;
    }
    local_4._0_1_ = uVar2;
    FUN_004fb0a0(&uStack_d4,param_1 + 0x2c8);
    local_4._0_1_ = 0x14;
    if (iStack_10c != 0) {
      FUN_004098d0();
    }
    uVar4 = FUN_0049b020();
    *(undefined4 *)(param_1 + 0x20c) = uVar4;
    uVar4 = FUN_0049ac90();
    *(undefined4 *)(param_1 + 0x28c) = uVar4;
    uVar4 = FUN_0049ab60();
    *(undefined4 *)(param_1 + 0x2cc) = uVar4;
    uVar4 = FUN_0049adc0();
    *(undefined4 *)(param_1 + 0x24c) = uVar4;
  }
  piVar7 = piStack_ec;
  switch(*(undefined4 *)(param_1 + 0xac)) {
  case 0:
    DVar11 = timeGetTime();
    local_104 = *(int *)(param_1 + 0xb0);
    bVar1 = true;
    if (local_104 != -1) {
      iVar5 = *(int *)(param_1 + 0xb4);
      if (iVar5 == -1) {
        *(undefined4 *)(param_1 + 0xb8) = 0x3f800000;
        *(DWORD *)(param_1 + 0xb4) = local_104 + DVar11;
      }
      else if (iVar5 < (int)DVar11) {
        *(undefined4 *)(param_1 + 0xb8) = 0;
        bVar1 = false;
      }
      else if (local_104 < 1) {
        *(undefined4 *)(param_1 + 0xb8) = 0;
      }
      else {
        iStack_10c = iVar5 - DVar11;
        *(float *)(param_1 + 0xb8) = (float)iStack_10c / (float)local_104;
      }
    }
    *(bool *)(param_1 + 0xbc) = bVar1;
    if (!bVar1) {
      FUN_004041b0(90000);
      *(undefined4 *)(param_1 + 0xb0) = local_11c;
      *(undefined4 *)(param_1 + 0xb4) = uStack_118;
      *(undefined4 *)(param_1 + 0xb8) = uStack_114;
      *(undefined4 *)(param_1 + 0xbc) = uStack_110;
      *(undefined4 *)(param_1 + 0xac) = 2;
    }
    break;
  case 1:
    uStack_114 = 0x3f800000;
    *(undefined4 *)(param_1 + 0xb0) = 90000;
    uStack_110 = CONCAT31(uStack_110._1_3_,1);
    *(undefined4 *)(param_1 + 0xac) = 3;
    *(undefined4 *)(param_1 + 0xb4) = 0xffffffff;
    *(undefined4 *)(param_1 + 0xb8) = 0x3f800000;
    *(undefined4 *)(param_1 + 0xbc) = uStack_110;
    iVar5 = __ftol();
    *(int *)(param_1 + 0x210) = iVar5;
    iVar9 = __ftol();
    *(int *)(param_1 + 0x250) = iVar9;
    iStack_10c = __ftol();
    *(int *)(param_1 + 0x290) = iStack_10c;
    iVar10 = __ftol();
    *(int *)(param_1 + 0x2d0) = iVar10;
    iVar5 = iVar5 + iVar10 + iStack_10c + iVar9;
    iVar9 = *(int *)(param_1 + 0x2e4) + iVar5;
    *(int *)(param_1 + 0x2e0) = iVar5;
    *(int *)(param_1 + 0x2dc) = *(int *)(param_1 + 0x2d4) + iVar9;
    if (local_104 == 0) {
      FUN_00439d70(iVar9);
    }
    break;
  case 2:
    *(undefined4 *)(param_1 + 0xac) = 1;
    *(undefined4 *)(param_1 + 0x210) = 0;
    *(undefined4 *)(param_1 + 0x250) = 0;
    *(undefined4 *)(param_1 + 0x290) = 0;
    *(undefined4 *)(param_1 + 0x2d0) = 0;
    *(undefined4 *)(param_1 + 0x2d8) = 0;
    *(undefined4 *)(param_1 + 0x2dc) = 0;
    *(undefined4 *)(param_1 + 0x2e0) = 0;
    uStack_114 = 0x3f800000;
    *(undefined4 *)(param_1 + 0xb0) = 90000;
    uStack_110 = CONCAT31(uStack_110._1_3_,1);
    *(undefined4 *)(param_1 + 0xb4) = 0xffffffff;
    *(undefined4 *)(param_1 + 0xb8) = 0x3f800000;
    *(undefined4 *)(param_1 + 0xbc) = uStack_110;
    break;
  case 3:
    if (piStack_ec != (int *)0x0) {
      DVar11 = timeGetTime();
      iStack_10c = *(int *)(param_1 + 0xb0);
      bVar1 = true;
      if (iStack_10c != -1) {
        iVar5 = *(int *)(param_1 + 0xb4);
        if (iVar5 == -1) {
          *(undefined4 *)(param_1 + 0xb8) = 0x3f800000;
          *(DWORD *)(param_1 + 0xb4) = iStack_10c + DVar11;
        }
        else if (iVar5 < (int)DVar11) {
          *(undefined4 *)(param_1 + 0xb8) = 0;
          bVar1 = false;
        }
        else if (iStack_10c < 1) {
          *(undefined4 *)(param_1 + 0xb8) = 0;
        }
        else {
          piStack_ec = (int *)(iVar5 - DVar11);
          *(float *)(param_1 + 0xb8) = (float)(int)piStack_ec / (float)iStack_10c;
        }
      }
      *(bool *)(param_1 + 0xbc) = bVar1;
      if (((bVar1) && (cVar3 = (**(code **)(*piVar7 + 0xc))(), cVar3 == '\0')) &&
         (cVar3 = (**(code **)(*piVar7 + 0x10))(), cVar3 == '\0')) break;
    }
    *(undefined4 *)(param_1 + 0xac) = 4;
  }
  local_4 = CONCAT31(local_4._1_3_,3);
  FUN_004040a0(1);
  if (iStack_bc != 0) {
    cVar3 = *(char *)(iStack_bc + -1);
    if ((cVar3 == '\0') || (cVar3 == -1)) {
      FUN_005fe5f0(iStack_bc + -1);
    }
    else {
      *(char *)(iStack_bc + -1) = cVar3 + -1;
    }
  }
  iStack_bc = 0;
  uStack_b8 = 0;
  uStack_b4 = 0;
  if (iStack_cc != 0) {
    cVar3 = *(char *)(iStack_cc + -1);
    if ((cVar3 == '\0') || (cVar3 == -1)) {
      FUN_005fe5f0(iStack_cc + -1);
    }
    else {
      *(char *)(iStack_cc + -1) = cVar3 + -1;
    }
  }
  iStack_cc = 0;
  uStack_c8 = 0;
  uStack_c4 = 0;
  if (iStack_e0 != 0) {
    cVar3 = *(char *)(iStack_e0 + -1);
    if ((cVar3 == '\0') || (cVar3 == -1)) {
      FUN_005fe5f0(iStack_e0 + -1);
    }
    else {
      *(char *)(iStack_e0 + -1) = cVar3 + -1;
    }
  }
  iStack_e0 = 0;
  uStack_dc = 0;
  uStack_d8 = 0;
  if (iStack_ac != 0) {
    cVar3 = *(char *)(iStack_ac + -1);
    if ((cVar3 != '\0') && (cVar3 != -1)) {
      *(char *)(iStack_ac + -1) = cVar3 + -1;
      ExceptionList = pvStack_c;
      return;
    }
    FUN_005fe5f0(iStack_ac + -1);
  }
  ExceptionList = pvStack_c;
  return;
}

