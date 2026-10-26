/*
 * FUN_004f9d60 at 004f9d60
 * undefined FUN_004f9d60(void)
 * Address ranges: 004f9d60-004faaa9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_004f9d60(int param_1)

{
  char cVar1;
  int iVar2;
  code *pcVar3;
  char *pcVar4;
  undefined4 uVar5;
  int iVar6;
  undefined1 *puVar7;
  undefined *puVar8;
  DWORD DVar9;
  uint uVar10;
  undefined1 *puVar11;
  uint uVar12;
  undefined1 *puVar13;
  char *pcVar14;
  float10 fVar15;
  char local_8d;
  char local_8c [4];
  char *pcStack_88;
  uint uStack_84;
  undefined4 uStack_80;
  undefined1 auStack_7c [4];
  int iStack_78;
  char local_6c [4];
  undefined1 *puStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  int local_58;
  int iStack_54;
  int local_50;
  undefined **ppuStack_4c;
  DWORD DStack_38;
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00635276;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  local_58 = param_1;
  FUN_005ae5f0(s_D__Work_RCHorror_AdamSource_Adam_0069c628,0x632);
  local_4 = 0;
  FUN_005a3320();
  local_4._0_1_ = 1;
  local_6c[0] = local_8d;
  FUN_004040a0();
  uVar10 = 0xffffffff;
  pcVar4 = &DAT_006b3f70;
  do {
    if (uVar10 == 0) break;
    uVar10 = uVar10 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  iVar6 = param_1 + 0x3a4;
  local_4._0_1_ = 2;
  local_50 = iVar6;
  iVar2 = FUN_004251b0(0,*(undefined4 *)(param_1 + 0x3ac),&DAT_006b3f70,~uVar10 - 1);
  if (iVar2 == 0) {
    local_8c[0] = local_8d;
    FUN_004040a0();
    uVar10 = 0xffffffff;
    pcVar4 = &DAT_006b3f70;
    do {
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar10 - 1);
    local_4._0_1_ = 3;
    pcVar3 = (code *)FUN_005a07f0(s_m_WorldFileName_compare______0_0069d460,
                                  s_D__Work_RCHorror_AdamSource_Adam_0069c628,0x639);
    (*pcVar3)();
    local_4._0_1_ = 2;
    FUN_004040a0();
  }
  if (*(int *)(param_1 + 0x5c) != 0) {
    local_8c[0] = local_8d;
    FUN_004040a0();
    uVar10 = 0xffffffff;
    pcVar4 = &DAT_006b3f70;
    do {
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar10 - 1);
    local_4._0_1_ = 4;
    pcVar3 = (code *)FUN_005a07f0(s_m_GenesisWorld__0_0069c964,
                                  s_D__Work_RCHorror_AdamSource_Adam_0069c628,0x63a);
    (*pcVar3)();
    local_4._0_1_ = 2;
    FUN_004040a0();
  }
  pcVar4 = *(char **)(param_1 + 0x3a8);
  if (pcVar4 == (char *)0x0) {
    pcVar4 = "";
  }
  pcVar4 = _strchr(pcVar4,0x5c);
  if (pcVar4 != (char *)0x0) {
    FUN_0040cc00(iVar6,0,0xffffffff);
  }
  else {
    uVar5 = FUN_005a3150(local_8c,iVar6);
    local_4._0_1_ = 5;
    FUN_0040cc00(uVar5,0,0xffffffff);
    local_4._0_1_ = 2;
    FUN_004040a0();
  }
  local_8d = FUN_005a3400();
  if (local_8d == '\0') {
    if (pcVar4 == (char *)0x0) {
      iVar6 = FUN_00558ff0();
      local_8c[0] = *(char *)(iVar6 + 0x14);
      FUN_004040a0();
      FUN_0040cc00((char *)(iVar6 + 0x14),0,0xffffffff);
      local_4._0_1_ = 6;
      FUN_00515ff0();
      iVar6 = FUN_004337e0();
      if (iVar6 != 0) {
        puVar7 = puStack_68;
        if (puStack_68 == (undefined1 *)0x0) {
          puVar7 = &DAT_0064a3b4;
        }
        uVar5 = FUN_005ae390(auStack_7c,s_CAdamSubLevel__CreateWorldFromFi_0069d414,puVar7);
        local_4._0_1_ = 7;
        FUN_005aff00(uVar5);
        local_4._0_1_ = 6;
        FUN_004040a0();
      }
      FUN_00515ff0();
      iVar6 = FUN_004337e0();
      if (iVar6 != 0) {
        iVar6 = FUN_00558ff0();
        puVar7 = &DAT_0064a3b4;
        if (*(undefined1 **)(iVar6 + 0x54) != (undefined1 *)0x0) {
          puVar7 = *(undefined1 **)(iVar6 + 0x54);
        }
        iVar6 = FUN_00558ff0();
        puVar13 = &DAT_0064a3b4;
        if (*(undefined1 **)(iVar6 + 0x38) != (undefined1 *)0x0) {
          puVar13 = *(undefined1 **)(iVar6 + 0x38);
        }
        iVar6 = FUN_00558ff0();
        puVar11 = &DAT_0064a3b4;
        if (*(undefined1 **)(iVar6 + 0x28) != (undefined1 *)0x0) {
          puVar11 = *(undefined1 **)(iVar6 + 0x28);
        }
        pcVar4 = pcStack_88;
        if (pcStack_88 == (char *)0x0) {
          pcVar4 = "";
        }
        uVar5 = FUN_005ae390(auStack_7c,s_CAdamSubLevel__CreateWorldFromFi_0069d3a0,pcVar4,puVar11,
                             puVar13,puVar7);
        local_4._0_1_ = 8;
        FUN_005aff00(uVar5);
        local_4._0_1_ = 6;
        FUN_004040a0();
      }
      if (uStack_84 == 0) {
LAB_004fa257:
        iVar6 = FUN_00558ff0();
        puVar7 = &DAT_0064a3b4;
        if (*(undefined1 **)(iVar6 + 0x54) != (undefined1 *)0x0) {
          puVar7 = *(undefined1 **)(iVar6 + 0x54);
        }
        iVar6 = FUN_00558ff0();
        puVar13 = &DAT_0064a3b4;
        if (*(undefined1 **)(iVar6 + 0x38) != (undefined1 *)0x0) {
          puVar13 = *(undefined1 **)(iVar6 + 0x38);
        }
        iVar6 = FUN_00558ff0();
        puVar11 = &DAT_0064a3b4;
        if (*(undefined1 **)(iVar6 + 0x28) != (undefined1 *)0x0) {
          puVar11 = *(undefined1 **)(iVar6 + 0x28);
        }
        pcVar4 = pcStack_88;
        if (pcStack_88 == (char *)0x0) {
          pcVar4 = "";
        }
        uVar5 = FUN_005ae390(auStack_7c,s_CAdamSubLevel__CreateWorldFromFi_0069d23c,pcVar4,puVar11,
                             puVar13,puVar7);
        local_4._0_1_ = 0xd;
        FUN_005aff20(s_D__Work_RCHorror_AdamSource_Adam_0069c628,0x673,uVar5);
LAB_004fa2e2:
        local_4._0_1_ = 6;
        FUN_004040a0();
        cVar1 = local_8d;
      }
      else {
        if (pcStack_88 != (char *)0x0) {
          FUN_004c4700();
        }
        iVar6 = FUN_0060b28c();
        if (iVar6 == 0) goto LAB_004fa257;
        puVar7 = *(undefined1 **)(param_1 + 0x3a8);
        if (puVar7 == (undefined1 *)0x0) {
          puVar7 = &DAT_0064a3b4;
        }
        if (pcStack_88 == (char *)0x0) {
          pcVar4 = "";
        }
        else {
          FUN_004c4700();
          pcVar4 = pcStack_88;
        }
        uVar5 = FUN_005ae390(auStack_7c,s__c__Data_Levels__s_0069d38c,(int)*pcVar4,puVar7);
        local_4._0_1_ = 9;
        FUN_0040cc00(uVar5,0,0xffffffff);
        local_4._0_1_ = 6;
        FUN_004040a0();
        FUN_00515ff0();
        iVar6 = FUN_004337e0();
        if (iVar6 != 0) {
          puVar7 = puStack_68;
          if (puStack_68 == (undefined1 *)0x0) {
            puVar7 = &DAT_0064a3b4;
          }
          uVar5 = FUN_005ae390(auStack_7c,s_CAdamSubLevel__CreateWorldFromFi_0069d344,puVar7);
          local_4._0_1_ = 10;
          FUN_005aff00(uVar5);
          local_4._0_1_ = 6;
          FUN_004040a0();
        }
        puVar7 = puStack_68;
        if (puStack_68 == (undefined1 *)0x0) {
          puVar7 = &DAT_0064a3b4;
        }
        iVar6 = FUN_0061f646(puVar7,0);
        if (iVar6 == -1) {
          puVar7 = puStack_68;
          if (puStack_68 == (undefined1 *)0x0) {
            puVar7 = &DAT_0064a3b4;
          }
          uVar5 = FUN_005ae390(auStack_7c,s_CAdamSubLevel__CreateWorldFromFi_0069d2fc,puVar7);
          local_4._0_1_ = 0xb;
          FUN_005aff20(s_D__Work_RCHorror_AdamSource_Adam_0069c628,0x660,uVar5);
          goto LAB_004fa2e2;
        }
        cVar1 = FUN_005a3400();
        if (cVar1 == '\0') {
          puVar7 = puStack_68;
          if (puStack_68 == (undefined1 *)0x0) {
            puVar7 = &DAT_0064a3b4;
          }
          uVar5 = FUN_005ae390(auStack_7c,s_CAdamSubLevel__CreateWorldFromFi_0069d2b4,puVar7);
          local_4._0_1_ = 0xc;
          FUN_005aff20(s_D__Work_RCHorror_AdamSource_Adam_0069c628,0x667,uVar5);
          local_4._0_1_ = 6;
          FUN_004040a0();
        }
      }
      local_4._0_1_ = 2;
      FUN_004040a0();
      if (cVar1 != '\0') goto LAB_004fa390;
    }
    if (puStack_68 == (undefined1 *)0x0) {
      puStack_68 = &DAT_0064a3b4;
    }
    uVar5 = FUN_005ae390(auStack_7c,s_CAdamSubLevel__CreateWorldFromFi_0069d1fc,puStack_68);
    local_4._0_1_ = 0xe;
    FUN_005aff20(s_D__Work_RCHorror_AdamSource_Adam_0069c628,0x678,uVar5);
    local_4._0_1_ = 2;
    FUN_004040a0();
    local_4._0_1_ = 1;
    FUN_004040a0();
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_005a3370();
    local_4 = 0xffffffff;
    FUN_005ae770();
    uVar5 = 0;
  }
  else {
LAB_004fa390:
    puVar7 = puStack_68;
    if (puStack_68 == (undefined1 *)0x0) {
      puVar7 = &DAT_0064a3b4;
    }
    uVar5 = FUN_005ae390(auStack_7c,s_CAdamSubLevel__CreateWorldFromFi_0069d1d0,puVar7);
    local_4._0_1_ = 0xf;
    FUN_005aff00(uVar5);
    local_4._0_1_ = 2;
    FUN_004040a0();
    puVar7 = puStack_68;
    if (puStack_68 == (undefined1 *)0x0) {
      puVar7 = &DAT_0064a3b4;
    }
    uVar5 = FUN_005ae390(local_8c,s_CAdamSubLevel__CreateWorldFromFi_0069d1a4,puVar7);
    local_4._0_1_ = 0x10;
    FUN_005ab4a0();
    local_4 = CONCAT31(local_4._1_3_,0x11);
    DStack_38 = timeGetTime();
    ppuStack_4c = &PTR_FUN_0064e854;
    FUN_00442bf0(DAT_006b9940,uVar5);
    FUN_0051c180();
    FUN_00515ff0();
    iVar6 = FUN_004337e0();
    if (iVar6 != 0) {
      if ((DAT_00710380 & 1) == 0) {
        DAT_00710380 = DAT_00710380 | 1;
        FUN_00409810(s_No_Description_006951d4,&local_8d);
        FUN_0060a57b();
      }
      iVar2 = FUN_00442d80();
      iVar6 = DAT_006b993c;
      if (iVar2 == 0) {
        puVar8 = &DAT_00710390;
      }
      else {
        iVar2 = FUN_00442d80();
        puVar8 = (undefined *)(iVar2 * 0x10 + -0x10 + iVar6);
      }
      puVar7 = *(undefined1 **)(puVar8 + 4);
      if (puVar7 == (undefined1 *)0x0) {
        puVar7 = &DAT_0064a3b4;
      }
      uVar5 = FUN_005ae390(auStack_7c,s_CAdamLoadUpdater_>>__s_00695190,puVar7);
      local_4._0_1_ = 0x12;
      FUN_005aff00(uVar5);
      local_4 = CONCAT31(local_4._1_3_,0x11);
      FUN_004040a0();
    }
    local_4._0_1_ = 0x14;
    FUN_004040a0();
    FUN_005a36c0();
    iStack_54 = FUN_005b81a0();
    ppuStack_4c = &PTR_FUN_0064e854;
    local_4._0_1_ = 0x15;
    FUN_00515ff0();
    iVar6 = FUN_004337e0();
    if (iVar6 != 0) {
      DVar9 = timeGetTime();
      if (((DVar9 != 0xffffffff) && (DStack_38 != 0xffffffff)) && ((int)DVar9 < (int)DStack_38)) {
        FUN_00409810(&DAT_006b3f70,&local_8d);
        local_4._0_1_ = 0x16;
        pcVar3 = (code *)FUN_005a07f0(s_a_Now_>__a_Then_006934d0,s___AdamSource_AdamClock_h_0068e22c
                                      ,0x7d,local_8c);
        (*pcVar3)();
        local_4._0_1_ = 0x15;
        FUN_004040a0();
      }
      iVar6 = FUN_0049f950();
      puVar7 = *(undefined1 **)(iVar6 + 4);
      if (puVar7 == (undefined1 *)0x0) {
        puVar7 = &DAT_0064a3b4;
      }
      fVar15 = (float10)FUN_00409e30();
      uVar5 = FUN_005ae390(auStack_7c,s_CAdamLoadUpdater____s__took__f_s_006951fc,puVar7,
                           (double)fVar15);
      local_4._0_1_ = 0x17;
      FUN_005aff00(uVar5);
      local_4._0_1_ = 0x15;
      FUN_004040a0();
    }
    FUN_004c4540();
    FUN_0051c180();
    FUN_00515ff0();
    iVar6 = FUN_004337e0();
    if (iVar6 != 0) {
      iVar6 = FUN_0049f950();
      puVar7 = *(undefined1 **)(iVar6 + 4);
      if (puVar7 == (undefined1 *)0x0) {
        puVar7 = &DAT_0064a3b4;
      }
      uVar5 = FUN_005ae390(auStack_7c,s_CAdamLoadUpdater_<<__s_006951e4,puVar7);
      local_4._0_1_ = 0x18;
      FUN_005aff00(uVar5);
      local_4._0_1_ = 0x15;
      FUN_004040a0();
    }
    local_4._0_1_ = 2;
    FUN_005ab4d0();
    FUN_004f6300();
    FUN_005a3620();
    if (iStack_54 == 0) {
      puVar7 = *(undefined1 **)(local_50 + 4);
      if (puVar7 == (undefined1 *)0x0) {
        puVar7 = &DAT_0064a3b4;
      }
      uVar5 = FUN_005ae390(auStack_7c,s_Cannot_create_world_from_file__s_0069d180,puVar7);
      local_4._0_1_ = 0x19;
      FUN_005aff20(s_D__Work_RCHorror_AdamSource_Adam_0069c628,0x690,uVar5);
      local_4._0_1_ = 2;
      FUN_004040a0();
      local_8c[0] = local_8d;
      FUN_004040a0();
      uVar10 = 0xffffffff;
      pcVar4 = s_No_world_loaded_0069c658;
      do {
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      uVar10 = ~uVar10 - 1;
      cVar1 = FUN_00401940(uVar10,1);
      if (cVar1 != '\0') {
        pcVar4 = s_No_world_loaded_0069c658;
        pcVar14 = pcStack_88;
        for (uVar12 = uVar10 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar4;
          pcVar4 = pcVar4 + 4;
          pcVar14 = pcVar14 + 4;
        }
        for (uVar12 = uVar10 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar14 = *pcVar4;
          pcVar4 = pcVar4 + 1;
          pcVar14 = pcVar14 + 1;
        }
        pcStack_88[uVar10] = '\0';
        uStack_84 = uVar10;
      }
      local_4._0_1_ = 0x1a;
      FUN_00567990();
      local_4._0_1_ = 2;
      FUN_004040a0();
      local_8c[0] = local_8d;
      FUN_004040a0();
      uVar10 = 0xffffffff;
      pcVar4 = s_No_world_loaded_0069c658;
      do {
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      uVar10 = ~uVar10 - 1;
      cVar1 = FUN_00401940(uVar10,1);
      if (cVar1 != '\0') {
        pcVar4 = s_No_world_loaded_0069c658;
        pcVar14 = pcStack_88;
        for (uVar12 = uVar10 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar4;
          pcVar4 = pcVar4 + 4;
          pcVar14 = pcVar14 + 4;
        }
        for (uVar12 = uVar10 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar14 = *pcVar4;
          pcVar4 = pcVar4 + 1;
          pcVar14 = pcVar14 + 1;
        }
        pcStack_88[uVar10] = '\0';
        uStack_84 = uVar10;
      }
      local_4._0_1_ = 0x1b;
      FUN_00567990();
      local_4 = CONCAT31(local_4._1_3_,2);
      FUN_004040a0();
      if (puStack_68 != (undefined1 *)0x0) {
        cVar1 = puStack_68[-1];
        if ((cVar1 == '\0') || (cVar1 == -1)) {
          FUN_005fe5f0();
        }
        else {
          puStack_68[-1] = cVar1 + -1;
        }
      }
      puStack_68 = (undefined1 *)0x0;
      uStack_64 = 0;
      uStack_60 = 0;
      local_4 = local_4 & 0xffffff00;
      FUN_005a3370();
      local_4 = 0xffffffff;
      FUN_005ae770();
      uVar5 = 0;
    }
    else {
      FUN_0040cc00(local_6c,0,0xffffffff);
      puVar7 = puStack_68;
      if (puStack_68 == (undefined1 *)0x0) {
        puVar7 = &DAT_0064a3b4;
      }
      FUN_005ae390(auStack_7c,s_GenesisFrameRate_for__s_0069d168,puVar7);
      local_4._0_1_ = 0x1c;
      FUN_00567990();
      local_4._0_1_ = 2;
      if (iStack_78 != 0) {
        cVar1 = *(char *)(iStack_78 + -1);
        if ((cVar1 == '\0') || (cVar1 == -1)) {
          FUN_005fe5f0();
        }
        else {
          *(char *)(iStack_78 + -1) = cVar1 + -1;
        }
      }
      uVar10 = 0xffffffff;
      pcVar4 = s_This_framerates_includes_ONLY_th_0069d12c;
      do {
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      local_8c[0] = local_8d;
      pcStack_88 = (char *)0x0;
      uStack_84 = 0;
      uStack_80 = 0;
      FUN_004040f0(s_This_framerates_includes_ONLY_th_0069d12c,~uVar10 - 1);
      local_4._0_1_ = 0x1d;
      FUN_00567f40();
      local_4._0_1_ = 2;
      if (pcStack_88 != (char *)0x0) {
        cVar1 = *(char *)((int)pcStack_88 + -1);
        if ((cVar1 == '\0') || (cVar1 == -1)) {
          FUN_005fe5f0();
        }
        else {
          *(char *)((int)pcStack_88 + -1) = cVar1 + -1;
        }
      }
      puVar7 = puStack_68;
      if (puStack_68 == (undefined1 *)0x0) {
        puVar7 = &DAT_0064a3b4;
      }
      FUN_005ae390(auStack_7c,s_Game_FrameRate_for__s_0069d114,puVar7);
      local_4._0_1_ = 0x1e;
      FUN_00567990();
      local_4._0_1_ = 2;
      if (iStack_78 != 0) {
        cVar1 = *(char *)(iStack_78 + -1);
        if ((cVar1 == '\0') || (cVar1 == -1)) {
          FUN_005fe5f0();
        }
        else {
          *(char *)(iStack_78 + -1) = cVar1 + -1;
        }
      }
      uVar10 = 0xffffffff;
      pcVar4 = s_This_framerates_includes_BOTH_th_0069d094;
      do {
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      uVar10 = ~uVar10 - 1;
      local_8c[0] = local_8d;
      pcStack_88 = (char *)0x0;
      uStack_84 = 0;
      uStack_80 = 0;
      cVar1 = FUN_00401940(uVar10,1);
      if (cVar1 != '\0') {
        pcVar4 = s_This_framerates_includes_BOTH_th_0069d094;
        pcVar14 = pcStack_88;
        for (uVar12 = uVar10 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar4;
          pcVar4 = pcVar4 + 4;
          pcVar14 = pcVar14 + 4;
        }
        for (uVar12 = uVar10 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar14 = *pcVar4;
          pcVar4 = pcVar4 + 1;
          pcVar14 = pcVar14 + 1;
        }
        pcStack_88[uVar10] = '\0';
        uStack_84 = uVar10;
      }
      local_4 = CONCAT31(local_4._1_3_,0x1f);
      FUN_00567f40();
      if (pcStack_88 != (char *)0x0) {
        cVar1 = pcStack_88[-1];
        if ((cVar1 == '\0') || (cVar1 == -1)) {
          FUN_005fe5f0();
        }
        else {
          pcStack_88[-1] = cVar1 + -1;
        }
      }
      pcStack_88 = (char *)0x0;
      uStack_84 = 0;
      uStack_80 = 0;
      if (puStack_68 != (undefined1 *)0x0) {
        cVar1 = puStack_68[-1];
        if ((cVar1 == '\0') || (cVar1 == -1)) {
          FUN_005fe5f0();
        }
        else {
          puStack_68[-1] = cVar1 + -1;
        }
      }
      puStack_68 = (undefined1 *)0x0;
      uStack_64 = 0;
      uStack_60 = 0;
      local_4 = local_4 & 0xffffff00;
      FUN_005a3370();
      local_4 = 0xffffffff;
      FUN_005ae770();
      uVar5 = 1;
    }
  }
  ExceptionList = pvStack_c;
  return uVar5;
}

