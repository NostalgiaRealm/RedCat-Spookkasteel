/*
 * FUN_004f80f0 at 004f80f0
 * undefined FUN_004f80f0(void)
 * Address ranges: 004f80f0-004f86aa
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x004f8344) */

undefined4 FUN_004f80f0(void)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  code *pcVar5;
  int *piVar6;
  uint uVar7;
  char *pcVar8;
  char *pcStack_e0;
  char *local_cc;
  char local_c5;
  char cStack_c4;
  char cStack_c3;
  char cStack_c2;
  char cStack_c1;
  char *local_c0;
  undefined1 local_b8 [4];
  char *pcStack_b4;
  undefined4 uStack_ac;
  undefined1 *puStack_a8;
  char acStack_a4 [16];
  char acStack_94 [16];
  char local_84 [16];
  char local_74 [16];
  char acStack_64 [16];
  char acStack_54 [16];
  char local_44 [16];
  char acStack_34 [16];
  undefined **local_24;
  DWORD local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00634f15;
  pvStack_c = ExceptionList;
  pcStack_e0 = (char *)0x4bd;
  ExceptionList = &pvStack_c;
  FUN_005ae5f0(s_D__Work_RCHorror_AdamSource_Adam_0069c628);
  pcVar8 = (char *)0x0;
  pcStack_e0 = (char *)0x0;
  local_4 = 0;
  local_74[0] = local_c5;
  FUN_004040a0();
  uVar7 = 0xffffffff;
  pcVar4 = s_CAdamSubLevel__PreloadDataBefore_0069cd00;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  pcStack_e0 = (char *)(~uVar7 - 1);
  FUN_004040f0(s_CAdamSubLevel__PreloadDataBefore_0069cd00);
  local_4._0_1_ = 1;
  pcStack_e0 = (char *)0x4f8173;
  FUN_005ab4a0();
  local_4._0_1_ = 2;
  pcStack_e0 = (char *)0x4f8182;
  local_10 = timeGetTime();
  pcStack_e0 = local_74;
  local_24 = &PTR_FUN_0064e854;
  FUN_00442bf0(DAT_006b9940);
  pcStack_e0 = (char *)0x4f81ae;
  FUN_0051c180();
  pcStack_e0 = (char *)0x4f81b3;
  FUN_00515ff0();
  pcStack_e0 = (char *)0x4f81ba;
  iVar2 = FUN_004337e0();
  if (iVar2 != 0) {
    pcStack_e0 = (char *)0x4f81c3;
    iVar2 = FUN_0049f950();
    pcStack_e0 = *(char **)(iVar2 + 4);
    if (pcStack_e0 == (char *)0x0) {
      pcStack_e0 = "";
    }
    uVar3 = FUN_005ae390(local_84,s_CAdamLoadUpdater_>>__s_00695190);
    local_4._0_1_ = 3;
    FUN_005aff00(uVar3);
    local_4._0_1_ = 2;
    pcStack_e0 = (char *)0x1;
    FUN_004040a0();
  }
  pcStack_e0 = (char *)0x1;
  local_4 = CONCAT31(local_4._1_3_,5);
  FUN_004040a0();
  pcStack_e0 = (char *)0x4f821a;
  FUN_00515ff0();
  pcStack_e0 = (char *)0x4f8221;
  iVar2 = FUN_004337e0();
  if (iVar2 != 0) {
    pcStack_e0 = s_Add_bitmaps_to_world____0069cce8;
    FUN_005afe30();
  }
  local_c0 = (char *)0x0;
  pcStack_e0 = (char *)0x4f823b;
  FUN_005a2980();
  pcStack_e0 = (char *)0x4f8242;
  iVar2 = FUN_005a3b60();
  if (0 < iVar2) {
    do {
      pcStack_e0 = pcVar8;
      FUN_005a2980();
      uVar3 = FUN_005a3b80();
      pcStack_e0 = (char *)0x0;
      pcVar4 = (char *)FUN_0060a6f2(uVar3,0,&CDaviFileName::RTTI_Type_Descriptor,
                                    &CAdam3DBitmapFileName::RTTI_Type_Descriptor);
      iVar2 = FUN_0060a6f2(uVar3,0,&CDaviFileName::RTTI_Type_Descriptor,
                           &CAdamAlphaBitmapFileName::RTTI_Type_Descriptor,0);
      if ((pcVar4 != (char *)0x0) && (iVar2 == 0)) {
        local_cc = (char *)0x0;
        local_4._0_1_ = 6;
        iVar2 = DAT_006c8de0;
        if (DAT_006c8de0 == 0) {
          pcStack_e0 = (char *)0x4f82bb;
          iVar2 = FUN_0055b280();
        }
        if (*(int *)(iVar2 + 0xd8) == 0) {
          pcStack_e0 = &local_c5;
          FUN_00409810(&DAT_006b3f70);
          pcStack_e0 = local_44;
          local_4._0_1_ = 7;
          pcVar5 = (code *)FUN_005a07f0(s_m_BitmapMgr_0068eb4c,s___AdamSource_AdamEngine_h_0068eb58,
                                        0x188);
          (*pcVar5)();
          local_4._0_1_ = 6;
          pcStack_e0 = (char *)0x1;
          FUN_004040a0();
        }
        pcStack_e0 = pcVar4;
        piVar6 = (int *)FUN_0050d730(local_b8);
        if (*piVar6 != 0) {
          local_4._0_1_ = 8;
          local_cc = (char *)*piVar6;
          pcStack_e0 = (char *)0x4f8358;
          FUN_005844b0();
        }
        local_4._0_1_ = 6;
        pcStack_e0 = (char *)0x4f8368;
        FUN_0057d310();
        if (local_cc == (char *)0x0) {
          pcStack_e0 = (char *)0x0;
          acStack_a4[0] = local_c5;
          FUN_004040a0();
          uVar7 = 0xffffffff;
          pcVar8 = &DAT_006b3f70;
          do {
            if (uVar7 == 0) break;
            uVar7 = uVar7 - 1;
            cVar1 = *pcVar8;
            pcVar8 = pcVar8 + 1;
          } while (cVar1 != '\0');
          pcStack_e0 = (char *)(~uVar7 - 1);
          FUN_004040f0(&DAT_006b3f70);
          pcStack_e0 = acStack_a4;
          local_4._0_1_ = 9;
          pcVar5 = (code *)FUN_005a07f0(s_bitmap_IsNotNull___0069ccd4,
                                        s_D__Work_RCHorror_AdamSource_Adam_0069c628,0x4d4);
          (*pcVar5)();
          local_4._0_1_ = 6;
          pcStack_e0 = (char *)0x1;
          FUN_004040a0();
        }
        if ((*(int *)(pcVar4 + 0x28) != 0) && (*(int *)(*(int *)(pcVar4 + 0x28) + 0x10) == 0)) {
          pcStack_e0 = &cStack_c2;
          FUN_00409810(&DAT_006b3f70);
          pcStack_e0 = acStack_64;
          local_4._0_1_ = 10;
          pcVar5 = (code *)FUN_005a07f0(s_m_AlphaBitmapFileName__0____m_Al_0069cc70,
                                        s___AdamSource_AdamFileSystem_h_0069ccb4,0x4e);
          (*pcVar5)();
          local_4._0_1_ = 6;
          pcStack_e0 = (char *)0x1;
          FUN_004040a0();
        }
        if (*(int *)(pcVar4 + 0x28) != 0) {
          if (*(int *)(*(int *)(pcVar4 + 0x28) + 0x10) == 0) {
            pcStack_e0 = &cStack_c1;
            FUN_00409810(&DAT_006b3f70);
            pcStack_e0 = acStack_34;
            local_4._0_1_ = 0xb;
            pcVar5 = (code *)FUN_005a07f0(s_m_AlphaBitmapFileName__0____m_Al_0069cc70,
                                          s___AdamSource_AdamFileSystem_h_0069ccb4,0x4e);
            (*pcVar5)();
            local_4._0_1_ = 6;
            pcStack_e0 = (char *)0x1;
            FUN_004040a0();
          }
          pcVar8 = *(char **)(pcVar4 + 0x28);
          if (local_cc == (char *)0x0) {
            pcStack_e0 = &cStack_c3;
            FUN_00409810(&DAT_006b3f70);
            pcStack_e0 = acStack_54;
            local_4._0_1_ = 0xc;
            pcVar5 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6
                                         );
            (*pcVar5)();
            local_4._0_1_ = 6;
            pcStack_e0 = (char *)0x1;
            FUN_004040a0();
          }
          pcStack_e0 = pcVar8;
          FUN_0050aca0();
        }
        if (pcVar4[0x2c] != '\0') {
          uVar3 = *(undefined4 *)(pcVar4 + 0x30);
          uStack_ac = CONCAT31(uStack_ac._1_3_,pcVar4[0x2c]);
          pcStack_b4 = (char *)CONCAT31(pcStack_b4._1_3_,pcVar4[0x34]);
          if (local_cc == (char *)0x0) {
            pcStack_e0 = &cStack_c4;
            FUN_00409810(&DAT_006b3f70);
            pcStack_e0 = local_84;
            local_4._0_1_ = 0xd;
            pcVar5 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6
                                         );
            (*pcVar5)();
            local_4._0_1_ = 6;
            pcStack_e0 = (char *)0x1;
            FUN_004040a0();
          }
          pcStack_e0 = pcStack_b4;
          FUN_0050b1e0(uStack_ac,uVar3);
        }
        puStack_a8 = (undefined1 *)&pcStack_e0;
        pcStack_e0 = local_cc;
        if (local_cc != (char *)0x0) {
          *(int *)(local_cc + 0x14) = *(int *)(local_cc + 0x14) + 1;
        }
        cVar1 = FUN_004fbca0();
        if (cVar1 == '\0') {
          puStack_a8 = (undefined1 *)&pcStack_e0;
          pcStack_e0 = local_cc;
          if (local_cc != (char *)0x0) {
            *(int *)(local_cc + 0x14) = *(int *)(local_cc + 0x14) + 1;
          }
          cVar1 = FUN_004fb310();
          if (cVar1 == '\0') {
            pcStack_e0 = (char *)0x0;
            acStack_94[0] = cStack_c4;
            FUN_004040a0();
            uVar7 = 0xffffffff;
            pcVar4 = &DAT_006b3f70;
            do {
              if (uVar7 == 0) break;
              uVar7 = uVar7 - 1;
              cVar1 = *pcVar4;
              pcVar4 = pcVar4 + 1;
            } while (cVar1 != '\0');
            pcStack_e0 = (char *)(~uVar7 - 1);
            FUN_004040f0(&DAT_006b3f70);
            pcStack_e0 = acStack_94;
            local_4._0_1_ = 0xe;
            pcVar5 = (code *)FUN_005a07f0(s_result_00691bc0,
                                          s_D__Work_RCHorror_AdamSource_Adam_0069c628,0x4e9);
            (*pcVar5)();
            local_4._0_1_ = 6;
            pcStack_e0 = (char *)0x1;
            FUN_004040a0();
          }
        }
        local_4 = CONCAT31(local_4._1_3_,5);
        if (local_cc != (char *)0x0) {
          pcStack_e0 = (char *)0x4f8643;
          FUN_004098d0();
        }
      }
      pcVar8 = local_c0 + 1;
      pcStack_e0 = (char *)0x4f8659;
      local_c0 = pcVar8;
      FUN_005a2980();
      pcStack_e0 = (char *)0x4f8660;
      iVar2 = FUN_005a3b60();
    } while ((int)pcVar8 < iVar2);
  }
  local_4 = local_4 & 0xffffff00;
  pcStack_e0 = (char *)0x4f867c;
  FUN_0049fa20();
  local_4 = 0xffffffff;
  pcStack_e0 = (char *)0x4f8690;
  FUN_005ae770();
  ExceptionList = pvStack_c;
  return 1;
}

