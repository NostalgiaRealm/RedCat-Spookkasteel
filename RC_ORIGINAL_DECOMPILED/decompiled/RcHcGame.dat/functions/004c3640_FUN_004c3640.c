/*
 * FUN_004c3640 at 004c3640
 * undefined FUN_004c3640(void)
 * Address ranges: 004c3640-004c40ba
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004c3640(void)

{
  float fVar1;
  char cVar2;
  undefined4 uVar3;
  code *pcVar4;
  int iVar5;
  undefined4 uVar6;
  code *pcVar7;
  int *piVar8;
  DWORD DVar9;
  int iVar10;
  char *pcVar11;
  undefined1 *puVar12;
  float10 fVar13;
  undefined1 local_a0 [32];
  undefined1 local_80;
  undefined1 local_70 [12];
  undefined **local_64;
  DWORD local_50;
  undefined1 local_4c;
  int local_3c;
  undefined1 local_38 [20];
  float local_24;
  undefined1 local_1d;
  int local_1c;
  undefined1 local_15;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006303dd;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff28;
  ExceptionList = &local_10;
  FUN_005ae5f0(s_D__Work_RCHorror_AdamSource_Adam_006975f0);
  local_8 = 0;
  FUN_004040a0();
  iVar10 = -1;
  pcVar11 = s_CAdamApplication__InitializeMult_00698704;
  do {
    if (iVar10 == 0) break;
    iVar10 = iVar10 + -1;
    cVar2 = *pcVar11;
    pcVar11 = pcVar11 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_CAdamApplication__InitializeMult_00698704);
  local_8._0_1_ = 1;
  FUN_005ab4a0();
  pcVar7 = timeGetTime_exref;
  local_8._0_1_ = 2;
  timeGetTime();
  FUN_00442bf0(DAT_006b9940);
  FUN_0051c180();
  FUN_00515ff0();
  iVar10 = FUN_004337e0();
  if (iVar10 != 0) {
    FUN_0049f950();
    uVar3 = FUN_005ae390(local_38,s_CAdamLoadUpdater_>>__s_00695190);
    local_8._0_1_ = 3;
    FUN_005aff00(uVar3);
    local_8._0_1_ = 2;
    FUN_004040a0();
  }
  local_8._0_1_ = 5;
  FUN_004040a0();
  local_80 = local_15;
  FUN_004040a0();
  local_3c = 0;
  local_8 = CONCAT31(local_8._1_3_,7);
  cVar2 = FUN_00553640();
  if (cVar2 != '\0') {
    iVar10 = DAT_006c8de0;
    if (DAT_006c8de0 == 0) {
      iVar10 = FUN_0055b280();
    }
    if (*(int *)(iVar10 + 0xfc) == 0) {
      FUN_00409810(&DAT_006b3f70);
      local_8._0_1_ = 8;
      pcVar4 = (code *)FUN_005a07f0();
      (*pcVar4)(s_m_SoundSystem_0068f8ec,s___AdamSource_AdamEngine_h_0068eb58,399);
      local_8 = CONCAT31(local_8._1_3_,7);
      FUN_004040a0();
    }
    if (*(char *)(*(int *)(iVar10 + 0xfc) + 0x8c) != '\0') {
      local_4c = local_15;
      FUN_004040a0();
      iVar10 = -1;
      pcVar11 = s_Initialize_sound_files_006986ec;
      do {
        if (iVar10 == 0) break;
        iVar10 = iVar10 + -1;
        cVar2 = *pcVar11;
        pcVar11 = pcVar11 + 1;
      } while (cVar2 != '\0');
      FUN_004040f0(s_Initialize_sound_files_006986ec);
      local_8._0_1_ = 9;
      FUN_005ab4a0();
      local_8._0_1_ = 10;
      local_50 = timeGetTime();
      local_64 = &PTR_FUN_0064e854;
      FUN_00442bf0(DAT_006b9940);
      FUN_0051c180();
      FUN_00515ff0();
      iVar10 = FUN_004337e0();
      if (iVar10 != 0) {
        FUN_0049f950();
        FUN_005ae390(local_38,s_CAdamLoadUpdater_>>__s_00695190);
        local_8._0_1_ = 0xb;
        FUN_005aff00();
        local_8._0_1_ = 10;
        FUN_004040a0();
      }
      local_8 = CONCAT31(local_8._1_3_,0xd);
      FUN_004040a0();
      iVar10 = 0;
      while( true ) {
        FUN_005a2980();
        iVar5 = FUN_005a3b60();
        if (iVar5 <= iVar10) break;
        FUN_005a2980();
        uVar3 = FUN_005a3b80();
        uVar6 = FUN_005a1d60();
        FUN_0040cc00(uVar6,0);
        cVar2 = FUN_00553640();
        if (cVar2 != '\0') {
          iVar5 = DAT_006c8de0;
          if (DAT_006c8de0 == 0) {
            iVar5 = FUN_0055b280();
          }
          if (*(int *)(iVar5 + 0xfc) == 0) {
            FUN_00409810(&DAT_006b3f70);
            local_8._0_1_ = 0xe;
            pcVar7 = (code *)FUN_005a07f0();
            (*pcVar7)(s_m_SoundSystem_0068f8ec,s___AdamSource_AdamEngine_h_0068eb58,399);
            local_8 = CONCAT31(local_8._1_3_,0xd);
            FUN_004040a0();
          }
          if ((*(char *)(*(int *)(iVar5 + 0xfc) + 0x8c) != '\0') &&
             (iVar5 = FUN_0060a6f2(uVar3,0,&CDaviFileName::RTTI_Type_Descriptor,
                                   &CAdamSoundFileName::RTTI_Type_Descriptor), iVar5 != 0)) {
            local_1c = 0;
            FUN_005844b0();
            local_8._0_1_ = 0xf;
            iVar5 = DAT_006c8de0;
            if (DAT_006c8de0 == 0) {
              iVar5 = FUN_0055b280();
            }
            if (*(int *)(iVar5 + 0xfc) == 0) {
              FUN_00409810(&DAT_006b3f70);
              local_8._0_1_ = 0x10;
              pcVar7 = (code *)FUN_005a07f0();
              (*pcVar7)(s_m_SoundSystem_0068f8ec,s___AdamSource_AdamEngine_h_0068eb58,399);
              local_8._0_1_ = 0xf;
              FUN_004040a0();
            }
            if (*(char *)(*(int *)(iVar5 + 0xfc) + 0x8c) == '\0') {
              FUN_00409810(&DAT_006b3f70);
              local_8._0_1_ = 0x11;
              pcVar7 = (code *)FUN_005a07f0();
              (*pcVar7)(s_m_Initialized_00691bb0,s___AdamSource_AdamSound_h_00692cdc,0x14b);
              local_8._0_1_ = 0xf;
              FUN_004040a0();
            }
            piVar8 = (int *)FUN_00551bd0(&local_24);
            local_8._0_1_ = 0x12;
            if (local_1c != *piVar8) {
              if (local_1c != 0) {
                FUN_004098d0();
              }
              local_1c = *piVar8;
              FUN_005844b0();
            }
            local_8._0_1_ = 0xf;
            FUN_0057d310();
            if (local_1c == 0) {
              local_3c = local_3c + 1;
            }
            local_8 = CONCAT31(local_8._1_3_,0xd);
            FUN_0057d310();
          }
        }
        iVar10 = iVar10 + 1;
        pcVar7 = timeGetTime_exref;
      }
      local_64 = &PTR_FUN_0064e854;
      local_8._0_1_ = 0x13;
      FUN_00515ff0();
      iVar10 = FUN_004337e0();
      if (iVar10 != 0) {
        uVar3 = (*pcVar7)();
        iVar10 = FUN_0049f950();
        puVar12 = &DAT_0064a3b4;
        if (*(undefined1 **)(iVar10 + 4) != (undefined1 *)0x0) {
          puVar12 = *(undefined1 **)(iVar10 + 4);
        }
        FUN_00484d70(uVar3);
        fVar13 = (float10)FUN_00409e30();
        local_24 = (float)fVar13;
        FUN_005ae390(local_38,s_CAdamLoadUpdater____s__took__f_s_006951fc,puVar12,(double)fVar13);
        local_8._0_1_ = 0x14;
        FUN_005aff00();
        local_8._0_1_ = 0x13;
        FUN_004040a0();
      }
      FUN_004c4540();
      FUN_0051c180();
      FUN_00515ff0();
      iVar10 = FUN_004337e0();
      if (iVar10 != 0) {
        FUN_0049f950();
        FUN_005ae390(local_38,s_CAdamLoadUpdater_<<__s_006951e4);
        local_8._0_1_ = 0x15;
        FUN_005aff00();
        local_8._0_1_ = 0x13;
        FUN_004040a0();
      }
      goto LAB_004c3d4e;
    }
  }
  local_4c = local_1d;
  FUN_004040a0();
  iVar10 = -1;
  pcVar11 = s_Skip_sound_files_006986d8;
  do {
    if (iVar10 == 0) break;
    iVar10 = iVar10 + -1;
    cVar2 = *pcVar11;
    pcVar11 = pcVar11 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_Skip_sound_files_006986d8);
  local_8._0_1_ = 0x16;
  FUN_005ab4a0();
  local_8._0_1_ = 0x17;
  local_50 = timeGetTime();
  local_64 = &PTR_FUN_0064e854;
  FUN_00442bf0(DAT_006b9940);
  FUN_0051c180();
  FUN_00515ff0();
  iVar10 = FUN_004337e0();
  if (iVar10 != 0) {
    FUN_0049f950();
    FUN_005ae390(local_38,s_CAdamLoadUpdater_>>__s_00695190);
    local_8._0_1_ = 0x18;
    FUN_005aff00();
    local_8._0_1_ = 0x17;
    FUN_004040a0();
  }
  local_8._0_1_ = 0x1a;
  FUN_004040a0();
  local_64 = &PTR_FUN_0064e854;
  local_8._0_1_ = 0x1b;
  FUN_00515ff0();
  iVar10 = FUN_004337e0();
  if (iVar10 != 0) {
    DVar9 = timeGetTime();
    iVar10 = FUN_0049f950();
    puVar12 = &DAT_0064a3b4;
    if (*(undefined1 **)(iVar10 + 4) != (undefined1 *)0x0) {
      puVar12 = *(undefined1 **)(iVar10 + 4);
    }
    FUN_00484d70(DVar9);
    fVar13 = (float10)FUN_00409e30();
    local_24 = (float)fVar13;
    FUN_005ae390(local_38,s_CAdamLoadUpdater____s__took__f_s_006951fc,puVar12,(double)fVar13);
    local_8._0_1_ = 0x1c;
    FUN_005aff00();
    local_8._0_1_ = 0x1b;
    FUN_004040a0();
  }
  FUN_004c4540();
  FUN_0051c180();
  FUN_00515ff0();
  iVar10 = FUN_004337e0();
  if (iVar10 != 0) {
    FUN_0049f950();
    FUN_005ae390(local_38,s_CAdamLoadUpdater_<<__s_006951e4);
    local_8._0_1_ = 0x1d;
    FUN_005aff00();
    local_8._0_1_ = 0x1b;
    FUN_004040a0();
  }
LAB_004c3d4e:
  local_8._0_1_ = 7;
  FUN_005ab4d0();
  local_4c = local_1d;
  FUN_004040a0();
  iVar10 = -1;
  pcVar11 = s_Initialize_sound_files_006986ec;
  do {
    if (iVar10 == 0) break;
    iVar10 = iVar10 + -1;
    cVar2 = *pcVar11;
    pcVar11 = pcVar11 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_Initialize_sound_files_006986ec);
  local_8._0_1_ = 0x1e;
  FUN_005ab4a0();
  local_8._0_1_ = 0x1f;
  local_50 = (*pcVar7)();
  local_64 = &PTR_FUN_0064e854;
  FUN_00442bf0(DAT_006b9940);
  FUN_0051c180();
  FUN_00515ff0();
  iVar10 = FUN_004337e0();
  if (iVar10 != 0) {
    FUN_0049f950();
    FUN_005ae390(local_38,s_CAdamLoadUpdater_>>__s_00695190);
    local_8._0_1_ = 0x20;
    FUN_005aff00();
    local_8._0_1_ = 0x1f;
    FUN_004040a0();
  }
  local_8 = CONCAT31(local_8._1_3_,0x22);
  FUN_004040a0();
  local_24 = 0.0;
  while( true ) {
    fVar1 = local_24;
    FUN_005a2980();
    iVar10 = FUN_005a3b60();
    if (iVar10 <= (int)fVar1) break;
    FUN_005a2980();
    uVar3 = FUN_005a3b80();
    uVar6 = FUN_005a1d60();
    FUN_0040cc00(uVar6,0);
    iVar10 = FUN_0060a6f2(uVar3,0,&CDaviFileName::RTTI_Type_Descriptor,
                          &CAdamBitmapFileName::RTTI_Type_Descriptor);
    if (iVar10 != 0) {
      local_1c = 0;
      FUN_005844b0();
      local_8._0_1_ = 0x23;
      iVar10 = DAT_006c8de0;
      if (DAT_006c8de0 == 0) {
        iVar10 = FUN_0055b280();
      }
      if (*(int *)(iVar10 + 0xd8) == 0) {
        FUN_00409810(&DAT_006b3f70);
        local_8._0_1_ = 0x24;
        pcVar7 = (code *)FUN_005a07f0();
        (*pcVar7)(s_m_BitmapMgr_0068eb4c,s___AdamSource_AdamEngine_h_0068eb58,0x188);
        local_8._0_1_ = 0x23;
        FUN_004040a0();
      }
      piVar8 = (int *)FUN_0050d730(local_70);
      local_8._0_1_ = 0x25;
      if (local_1c != *piVar8) {
        if (local_1c != 0) {
          FUN_004098d0();
        }
        local_1c = *piVar8;
        FUN_005844b0();
      }
      local_8._0_1_ = 0x23;
      FUN_0057d310();
      if (local_1c == 0) {
        FUN_005a2cf0();
        FUN_005ae390(local_a0,s_Error_loading_bitmapfile__s_006986bc);
        local_8._0_1_ = 0x26;
        FUN_005aff20(s_D__Work_RCHorror_AdamSource_Adam_006975f0,0x685);
        local_8._0_1_ = 0x23;
        FUN_004040a0();
        local_3c = local_3c + 1;
      }
      else {
        iVar10 = FUN_0060a6f2(uVar3,0,&CDaviFileName::RTTI_Type_Descriptor,
                              &CAdam2DBitmapFileName::RTTI_Type_Descriptor);
        if (iVar10 != 0) {
          if (local_1c == 0) {
            FUN_00409810(&DAT_006b3f70);
            local_8._0_1_ = 0x27;
            pcVar7 = (code *)FUN_005a07f0();
            (*pcVar7)(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6);
            local_8._0_1_ = 0x23;
            FUN_004040a0();
          }
          cVar2 = FUN_0050b2d0();
          if (cVar2 == '\0') {
            FUN_00449760(&local_1c);
            FUN_00560630();
          }
        }
      }
      local_8 = CONCAT31(local_8._1_3_,0x22);
      FUN_0057d310();
    }
    local_24 = (float)((int)local_24 + 1);
  }
  local_8 = CONCAT31(local_8._1_3_,7);
  FUN_0049fa20();
  local_8 = 6;
  if (local_3c != 0) {
    FUN_005ae390(local_38,s_CAdamApplication__InitializeMult_0069864c);
    local_8._0_1_ = 0x2a;
    pcVar7 = (code *)FUN_005a07f0(s_errors__0_00698640,s_D__Work_RCHorror_AdamSource_Adam_006975f0,
                                  0x6b5);
    (*pcVar7)();
    local_8 = CONCAT31(local_8._1_3_,6);
    FUN_004040a0();
  }
  local_8._0_1_ = 5;
  FUN_004040a0();
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_0049fa20();
  local_8 = 0xffffffff;
  FUN_005ae770();
  ExceptionList = local_10;
  return;
}

