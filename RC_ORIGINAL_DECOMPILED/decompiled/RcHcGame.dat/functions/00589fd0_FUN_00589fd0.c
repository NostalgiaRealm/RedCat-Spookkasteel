/*
 * FUN_00589fd0 at 00589fd0
 * undefined FUN_00589fd0(void)
 * Address ranges: 00589fd0-0058a9a1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_00589fd0(undefined4 *param_1)

{
  char cVar1;
  undefined4 uVar2;
  code *pcVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  char *pcVar7;
  bool bVar8;
  char *pcVar9;
  int local_fc;
  int local_f8;
  int local_f4;
  void *local_f0;
  int local_ec;
  undefined1 local_e8 [24];
  int iStack_d0;
  char local_b8;
  undefined3 uStack_b7;
  undefined1 *puStack_b4;
  undefined1 local_b0 [20];
  undefined1 local_9c [16];
  undefined1 local_8c [16];
  undefined1 local_7c [32];
  undefined1 local_5c [16];
  undefined1 local_4c [16];
  undefined1 local_3c [16];
  undefined1 local_2c [16];
  undefined1 local_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00643134;
  pvStack_c = ExceptionList;
  local_ec = 0;
  ExceptionList = &pvStack_c;
  local_f0 = operator_new(0x2308);
  bVar8 = local_f0 == (void *)0x0;
  local_4 = 0;
  if (bVar8) {
    local_f4 = 0;
  }
  else {
    uVar2 = FUN_005033f0(local_5c,*param_1);
    local_ec = 1;
    local_4 = CONCAT31(local_4._1_3_,1);
    local_f4 = FUN_00588710(uVar2);
  }
  local_4 = 0xffffffff;
  if (!bVar8) {
    FUN_004040a0();
  }
  local_fc = 0;
  FUN_005844b0();
  local_4 = 3;
  local_f8 = 0;
  FUN_005844b0();
  local_4._0_1_ = 4;
  FUN_004040a0();
  local_4._0_1_ = 5;
  FUN_004040a0();
  local_4._0_1_ = 6;
  local_ec = 0;
  piVar5 = (int *)(local_f4 + 0xfc);
  do {
    _local_b8 = CONCAT31(uStack_b7,(char)local_ec + '1');
    FUN_004040a0();
    iVar6 = -1;
    pcVar9 = &DAT_00693610;
    do {
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(&DAT_00693610);
    local_4._0_1_ = 7;
    FUN_004040a0();
    iVar6 = -1;
    pcVar9 = s_Raindrop_006a61dc;
    do {
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(s_Raindrop_006a61dc);
    local_4._0_1_ = 8;
    uVar2 = FUN_0058a9b0(local_4c,local_9c);
    local_4._0_1_ = 9;
    uVar2 = FUN_0044e370(local_2c,uVar2,local_8c);
    local_4._0_1_ = 10;
    FUN_0040cc00(uVar2,0);
    local_4._0_1_ = 9;
    FUN_004040a0();
    local_4._0_1_ = 8;
    FUN_004040a0();
    local_4._0_1_ = 7;
    FUN_004040a0();
    local_4._0_1_ = 6;
    FUN_004040a0();
    FUN_004040a0();
    iVar6 = -1;
    pcVar9 = &DAT_006a61d4;
    do {
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(&DAT_006a61d4);
    local_4._0_1_ = 0xb;
    FUN_004040a0();
    iVar6 = -1;
    pcVar9 = s_Raindrop_006a61dc;
    do {
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(s_Raindrop_006a61dc);
    local_4._0_1_ = 0xc;
    uVar2 = FUN_0058a9b0(local_1c,local_7c);
    local_4._0_1_ = 0xd;
    uVar2 = FUN_0044e370(local_3c,uVar2,local_e8);
    local_4._0_1_ = 0xe;
    FUN_0040cc00(uVar2,0);
    local_4._0_1_ = 0xd;
    FUN_004040a0();
    local_4._0_1_ = 0xc;
    FUN_004040a0();
    local_4._0_1_ = 0xb;
    FUN_004040a0();
    local_4 = CONCAT31(local_4._1_3_,6);
    FUN_004040a0();
    iVar6 = DAT_006c8de0;
    if (DAT_006c8de0 == 0) {
      iVar6 = FUN_0055b280();
    }
    if (*(int *)(iVar6 + 0xd8) == 0) {
      FUN_00409810(&DAT_006b3f70);
      local_4._0_1_ = 0xf;
      pcVar3 = (code *)FUN_005a07f0(s_m_BitmapMgr_0068eb4c,s___AdamSource_AdamEngine_h_0068eb58,
                                    0x188);
      (*pcVar3)();
      local_4 = CONCAT31(local_4._1_3_,6);
      FUN_004040a0();
    }
    piVar4 = (int *)FUN_0050d980(local_b0);
    local_4._0_1_ = 0x10;
    if (local_fc != *piVar4) {
      if (local_fc != 0) {
        FUN_004098d0();
      }
      local_fc = *piVar4;
      FUN_005844b0();
    }
    local_4._0_1_ = 6;
    FUN_0057d310();
    if (iStack_d0 != 0) {
      iVar6 = DAT_006c8de0;
      if (DAT_006c8de0 == 0) {
        iVar6 = FUN_0055b280();
      }
      if (*(int *)(iVar6 + 0xd8) == 0) {
        FUN_00409810(&DAT_006b3f70);
        local_4._0_1_ = 0x11;
        pcVar3 = (code *)FUN_005a07f0(s_m_BitmapMgr_0068eb4c,s___AdamSource_AdamEngine_h_0068eb58,
                                      0x188);
        (*pcVar3)();
        local_4._0_1_ = 6;
        FUN_004040a0();
      }
      piVar4 = (int *)FUN_0050d980(&local_f0);
      local_4._0_1_ = 0x12;
      if (local_f8 != *piVar4) {
        if (local_f8 != 0) {
          FUN_004098d0();
        }
        local_f8 = *piVar4;
        FUN_005844b0();
      }
      local_4._0_1_ = 6;
      FUN_0057d310();
    }
    if ((local_fc != 0) && (local_f8 != 0)) {
      puStack_b4 = &stack0xfffffeec;
      FUN_005844b0();
      local_4._0_1_ = 6;
      FUN_00412de0();
      FUN_0050aea0();
    }
    if (*piVar5 != local_fc) {
      if (*piVar5 != 0) {
        FUN_004098d0();
      }
      *piVar5 = local_fc;
      FUN_005844b0();
    }
    piVar5 = piVar5 + 1;
    local_ec = local_ec + 1;
  } while (local_ec < 5);
  iVar6 = -1;
  pcVar9 = s_Lightning_bmp_006a60f0;
  do {
    if (iVar6 == 0) break;
    iVar6 = iVar6 + -1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_Lightning_bmp_006a60f0);
  iVar6 = -1;
  pcVar9 = s_Lightning_a_bmp_006a60e0;
  do {
    if (iVar6 == 0) break;
    iVar6 = iVar6 + -1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_Lightning_a_bmp_006a60e0);
  iVar6 = DAT_006c8de0;
  if (DAT_006c8de0 == 0) {
    iVar6 = FUN_0055b280();
  }
  if (*(int *)(iVar6 + 0xd8) == 0) {
    FUN_00409810(&DAT_006b3f70);
    local_4._0_1_ = 0x14;
    pcVar3 = (code *)FUN_005a07f0(s_m_BitmapMgr_0068eb4c,s___AdamSource_AdamEngine_h_0068eb58,0x188)
    ;
    (*pcVar3)();
    local_4._0_1_ = 6;
    FUN_004040a0();
  }
  piVar5 = (int *)FUN_0050d980(&local_f0);
  local_4._0_1_ = 0x15;
  if (local_fc != *piVar5) {
    if (local_fc != 0) {
      FUN_004098d0();
    }
    local_fc = *piVar5;
    FUN_005844b0();
  }
  local_4 = CONCAT31(local_4._1_3_,6);
  FUN_0057d310();
  if (iStack_d0 != 0) {
    iVar6 = DAT_006c8de0;
    if (DAT_006c8de0 == 0) {
      iVar6 = FUN_0055b280();
    }
    if (*(int *)(iVar6 + 0xd8) == 0) {
      FUN_00409810(&DAT_006b3f70);
      local_4._0_1_ = 0x16;
      pcVar3 = (code *)FUN_005a07f0(s_m_BitmapMgr_0068eb4c,s___AdamSource_AdamEngine_h_0068eb58,
                                    0x188);
      (*pcVar3)();
      local_4 = CONCAT31(local_4._1_3_,6);
      FUN_004040a0();
    }
    piVar5 = (int *)FUN_0050d980(&local_f0);
    local_4._0_1_ = 0x17;
    if (local_f8 != *piVar5) {
      if (local_f8 != 0) {
        FUN_004098d0();
      }
      local_f8 = *piVar5;
      FUN_005844b0();
    }
    local_4 = CONCAT31(local_4._1_3_,6);
    FUN_0057d310();
  }
  if ((local_fc != 0) && (local_f8 != 0)) {
    puStack_b4 = &stack0xfffffeec;
    if (local_f8 != 0) {
      *(int *)(local_f8 + 0x14) = *(int *)(local_f8 + 0x14) + 1;
    }
    local_4 = CONCAT31(local_4._1_3_,6);
    FUN_00412de0();
    FUN_0050aea0();
  }
  if (*(int *)(local_f4 + 0x110) != local_fc) {
    if (*(int *)(local_f4 + 0x110) != 0) {
      FUN_004098d0();
    }
    *(int *)(local_f4 + 0x110) = local_fc;
    FUN_005844b0();
  }
  pcVar9 = (char *)*param_1;
  FUN_0044e4a0();
  local_4._0_1_ = 0x19;
  if (pcVar9 == (char *)0x0) {
    iVar6 = -1;
    pcVar9 = &DAT_006b3f70;
    do {
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar1 != '\0');
    pcVar9 = &DAT_006b3f70;
  }
  else {
    iVar6 = -1;
    pcVar7 = pcVar9;
    do {
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
  }
  FUN_004040f0(pcVar9);
  FUN_00503ae0();
  local_4._0_1_ = 6;
  FUN_004040a0();
  pcVar9 = (char *)param_1[1];
  FUN_0044e4a0();
  local_4._0_1_ = 0x1a;
  if (pcVar9 != (char *)0x0) {
    iVar6 = -1;
    pcVar7 = pcVar9;
    do {
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(pcVar9);
  }
  FUN_0040cc00(local_e8,0);
  local_4._0_1_ = 6;
  FUN_004040a0();
  FUN_00502350();
  if (((float)param_1[9] < (float)param_1[8]) || ((float)param_1[8] < 0.0)) {
    FUN_004040a0();
    iVar6 = -1;
    pcVar9 = s_CAdamEffectWeather__CreateFromEn_006a6184;
    do {
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(s_CAdamEffectWeather__CreateFromEn_006a6184);
    local_4._0_1_ = 0x1b;
    FUN_005035a0();
    local_4._0_1_ = 6;
    FUN_004040a0();
    param_1[8] = 0x40a00000;
    param_1[9] = 0x41200000;
  }
  if (param_1[7] != 1) {
    FUN_004040a0();
    iVar6 = -1;
    pcVar9 = s_CAdamEffectWeather__CreateFromEn_006a6148;
    do {
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(s_CAdamEffectWeather__CreateFromEn_006a6148);
    local_4._0_1_ = 0x1c;
    FUN_005035a0();
    local_4._0_1_ = 6;
    FUN_004040a0();
    param_1[7] = 1;
  }
  local_4._0_1_ = 5;
  FUN_004040a0();
  local_4._0_1_ = 4;
  FUN_004040a0();
  local_4 = CONCAT31(local_4._1_3_,3);
  if (local_f8 != 0) {
    FUN_004098d0();
  }
  local_4 = 0xffffffff;
  if ((local_fc != 0) &&
     (iVar6 = *(int *)(local_fc + 0x14) + -1, *(int *)(local_fc + 0x14) = iVar6, iVar6 == 0)) {
    FUN_005abfc0();
  }
  ExceptionList = pvStack_c;
  return local_f4;
}

