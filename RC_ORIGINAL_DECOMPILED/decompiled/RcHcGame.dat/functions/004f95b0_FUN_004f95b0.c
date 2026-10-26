/*
 * FUN_004f95b0 at 004f95b0
 * undefined FUN_004f95b0(void)
 * Address ranges: 004f95b0-004f9cf8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_004f95b0(void)

{
  int *piVar1;
  undefined1 uVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  code *pcVar7;
  uint uVar8;
  int iVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcStack_cc;
  int **ppiStack_c8;
  int **ppiStack_c4;
  char local_ad;
  char *local_ac;
  int *piStack_a8;
  int *local_a4;
  int *piStack_a0;
  char local_9c [4];
  undefined1 *puStack_98;
  int iStack_94;
  int *piStack_8c;
  int **ppiStack_88;
  char *pcStack_84;
  undefined4 uStack_80;
  int *piStack_7c;
  char *pcStack_78;
  char *pcStack_74;
  undefined4 uStack_70;
  int local_6c;
  char acStack_68 [20];
  char local_54 [16];
  char local_44 [16];
  undefined **local_34;
  DWORD local_20;
  char acStack_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063514a;
  pvStack_c = ExceptionList;
  ppiStack_c4 = (int **)0x5c3;
  ppiStack_c8 = (int **)s_D__Work_RCHorror_AdamSource_Adam_0069c628;
  pcStack_cc = (char *)0x4f95e8;
  ExceptionList = &pvStack_c;
  FUN_005ae5f0();
  ppiStack_c4 = (int **)0x0;
  local_4 = 0;
  local_54[0] = local_ad;
  ppiStack_c8 = (int **)0x4f9603;
  FUN_004040a0();
  uVar8 = 0xffffffff;
  pcVar11 = s_CAdamSubLevel__CreateObjectsFrom_0069d068;
  do {
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    cVar3 = *pcVar11;
    pcVar11 = pcVar11 + 1;
  } while (cVar3 != '\0');
  ppiStack_c4 = (int **)(~uVar8 - 1);
  ppiStack_c8 = (int **)s_CAdamSubLevel__CreateObjectsFrom_0069d068;
  pcStack_cc = (char *)0x4f9621;
  FUN_004040f0();
  local_4._0_1_ = 1;
  ppiStack_c4 = (int **)0x4f9635;
  FUN_005ab4a0();
  local_4._0_1_ = 2;
  ppiStack_c4 = (int **)0x4f9644;
  local_20 = timeGetTime();
  ppiStack_c4 = (int **)local_54;
  local_34 = &PTR_FUN_0064e854;
  ppiStack_c8 = DAT_006b9940;
  pcStack_cc = (char *)0x4f966b;
  FUN_00442bf0();
  ppiStack_c4 = (int **)0x4f9670;
  FUN_0051c180();
  ppiStack_c4 = (int **)0x4f9675;
  FUN_00515ff0();
  ppiStack_c4 = (int **)0x4f967c;
  iVar4 = FUN_004337e0();
  if (iVar4 != 0) {
    ppiStack_c4 = (int **)0x4f9685;
    iVar4 = FUN_0049f950();
    ppiStack_c4 = *(int ***)(iVar4 + 4);
    if (ppiStack_c4 == (int **)0x0) {
      ppiStack_c4 = (int **)&DAT_0064a3b4;
    }
    pcStack_cc = local_44;
    ppiStack_c8 = (int **)s_CAdamLoadUpdater_>>__s_00695190;
    uVar5 = FUN_005ae390();
    local_4._0_1_ = 3;
    FUN_005aff00(uVar5);
    local_4._0_1_ = 2;
    ppiStack_c4 = (int **)0x1;
    ppiStack_c8 = (int **)0x4f96c7;
    FUN_004040a0();
  }
  ppiStack_c4 = (int **)0x1;
  local_4 = CONCAT31(local_4._1_3_,5);
  ppiStack_c8 = (int **)0x4f96da;
  FUN_004040a0();
  ppiStack_c8 = (int **)0x4f96e0;
  ppiStack_c4 = (int **)FUN_004dbb10();
  if (ppiStack_c4 != (int **)0x0) {
    ppiStack_c8 = (int **)0x4f96ef;
    FUN_004f41c0();
  }
  iVar4 = 0;
  while( true ) {
    pcVar11 = local_ac;
    ppiStack_c4 = (int **)&DAT_006ba5a0;
    local_a4 = (int *)&ppiStack_c8;
    pcStack_cc = local_ac;
    FUN_00457240();
    pcStack_cc = (char *)0x4f970c;
    iVar6 = FUN_0041e8e0();
    if (iVar6 <= iVar4) break;
    ppiStack_c8 = (int **)&DAT_006ba5a0;
    local_a4 = (int *)&pcStack_cc;
    ppiStack_c4 = (int **)iVar4;
    FUN_00457240(pcVar11);
    iVar6 = FUN_004fe360();
    *(int *)(iVar6 + 0x34) = iVar4;
    iVar4 = iVar4 + 1;
  }
  ppiStack_c4 = (int **)0x4f9739;
  FUN_00515ff0();
  ppiStack_c4 = (int **)0x4f9740;
  iVar4 = FUN_004337e0();
  if (iVar4 != 0) {
    ppiStack_c4 = (int **)s_Processing_path_entities____0069d04c;
    ppiStack_c8 = (int **)0x4f974e;
    FUN_005afe30();
  }
  ppiStack_c4 = (int **)pcVar11;
  ppiStack_c8 = (int **)0x4f9759;
  FUN_004f3fd0();
  ppiStack_c8 = (int **)0x4f9760;
  FUN_0059f1e0();
  ppiStack_c4 = (int **)0x4f9765;
  FUN_00515ff0();
  ppiStack_c4 = (int **)0x4f976c;
  iVar4 = FUN_004337e0();
  if (iVar4 != 0) {
    ppiStack_c4 = (int **)s_Processing_entities____0069d034;
    ppiStack_c8 = (int **)0x4f977a;
    FUN_005afe30();
  }
  iVar4 = DAT_006b915c;
  if (DAT_006b915c == 0) {
    ppiStack_c4 = (int **)0x4f978c;
    iVar4 = FUN_004bc480();
  }
  if (*(int *)(iVar4 + 0x3a4) == 0) {
    ppiStack_c4 = (int **)0x0;
    local_9c[0] = local_ad;
    ppiStack_c8 = (int **)0x4f97a8;
    FUN_004040a0();
    uVar8 = 0xffffffff;
    pcVar11 = &DAT_006b3f70;
    do {
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      cVar3 = *pcVar11;
      pcVar11 = pcVar11 + 1;
    } while (cVar3 != '\0');
    ppiStack_c4 = (int **)(~uVar8 - 1);
    ppiStack_c8 = (int **)&DAT_006b3f70;
    pcStack_cc = (char *)0x4f97c6;
    FUN_004040f0();
    ppiStack_c4 = (int **)local_9c;
    local_4._0_1_ = 6;
    ppiStack_c8 = (int **)0x130;
    pcStack_cc = s___AdamSource_AdamApplication_h_0068e58c;
    pcVar7 = (code *)FUN_005a07f0(s_m_Game_0068e584);
    (*pcVar7)();
    local_4 = CONCAT31(local_4._1_3_,5);
    ppiStack_c4 = (int **)0x1;
    ppiStack_c8 = (int **)0x4f97ff;
    FUN_004040a0();
  }
  local_a4 = *(int **)(iVar4 + 0x3a4);
  iVar4 = 0;
  local_6c = 0;
  ppiStack_c4 = (int **)0x4f9816;
  iVar6 = FUN_00535c40();
  if (0 < iVar6) {
    do {
      ppiStack_c8 = &piStack_a8;
      pcStack_cc = (char *)0x4f9837;
      ppiStack_c4 = (int **)iVar4;
      FUN_00535c60();
      local_4._0_1_ = 7;
      ppiStack_c4 = (int **)0x4f9846;
      FUN_004f3d70();
      if (piStack_a8 == (int *)0x0) {
        ppiStack_c4 = (int **)&local_ad;
        ppiStack_c8 = (int **)&DAT_006b3f70;
        pcStack_cc = (char *)0x4f9863;
        FUN_00409810();
        ppiStack_c4 = (int **)acStack_68;
        local_4._0_1_ = 8;
        ppiStack_c8 = (int **)0xb6;
        pcStack_cc = s___AdamSource_DaviRC_h_0068d638;
        pcVar7 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c);
        (*pcVar7)();
        local_4._0_1_ = 7;
        ppiStack_c4 = (int **)0x1;
        ppiStack_c8 = (int **)0x4f989c;
        FUN_004040a0();
      }
      ppiStack_c4 = (int **)(piStack_a8 + 7);
      ppiStack_c8 = (int **)0x4f98ab;
      FUN_00567010();
      iVar9 = 0;
      ppiStack_c4 = (int **)0x4f98b6;
      iVar6 = FUN_00566b60();
      if (0 < iVar6) {
        do {
          if (piStack_a8 == (int *)0x0) {
            ppiStack_c4 = (int **)0x0;
            local_9c[0] = local_ad;
            ppiStack_c8 = (int **)0x4f98d9;
            FUN_004040a0();
            uVar8 = 0xffffffff;
            pcVar11 = &DAT_006b3f70;
            do {
              if (uVar8 == 0) break;
              uVar8 = uVar8 - 1;
              cVar3 = *pcVar11;
              pcVar11 = pcVar11 + 1;
            } while (cVar3 != '\0');
            ppiStack_c4 = (int **)(~uVar8 - 1);
            ppiStack_c8 = (int **)&DAT_006b3f70;
            pcStack_cc = (char *)0x4f98f7;
            FUN_004040f0();
            ppiStack_c4 = (int **)local_9c;
            local_4._0_1_ = 9;
            ppiStack_c8 = (int **)0xb6;
            pcStack_cc = s___AdamSource_DaviRC_h_0068d638;
            pcVar7 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c);
            (*pcVar7)();
            local_4._0_1_ = 7;
            ppiStack_c4 = (int **)0x1;
            ppiStack_c8 = (int **)0x4f9930;
            FUN_004040a0();
          }
          iVar4 = *piStack_a8;
          ppiStack_c8 = (int **)0x4f9940;
          ppiStack_c4 = (int **)iVar9;
          ppiStack_c4 = (int **)FUN_00566b50();
          ppiStack_c8 = (int **)0x4f994a;
          ppiStack_c8 = (int **)FUN_004f3fd0();
          pcStack_cc = (char *)0x4f9950;
          ppiStack_c4 = (int **)(**(code **)(iVar4 + 4))();
          if (ppiStack_c4 != (int **)0x0) {
            ppiStack_c8 = (int **)0x4f995e;
            FUN_004f41c0();
          }
          iVar9 = iVar9 + 1;
          ppiStack_c4 = (int **)0x4f9966;
          iVar6 = FUN_00566b60();
          iVar4 = local_6c;
        } while (iVar9 < iVar6);
      }
      local_4 = CONCAT31(local_4._1_3_,5);
      if (piStack_a8 != (int *)0x0) {
        ppiStack_c4 = (int **)0x4f9987;
        FUN_004098d0();
        piStack_a8 = (int *)0x0;
      }
      iVar4 = iVar4 + 1;
      ppiStack_c4 = (int **)0x4f999d;
      local_6c = iVar4;
      iVar6 = FUN_00535c40();
    } while (iVar4 < iVar6);
  }
  ppiStack_c4 = &local_a4;
  ppiStack_c8 = (int **)0x4f99b7;
  FUN_004f4940();
  local_4._0_1_ = 10;
  if (local_a4 == (int *)0x0) {
    ppiStack_c4 = (int **)&local_ad;
    ppiStack_c8 = (int **)&DAT_006b3f70;
    pcStack_cc = (char *)0x4f99da;
    FUN_00409810();
    ppiStack_c4 = (int **)acStack_68;
    local_4._0_1_ = 0xb;
    ppiStack_c8 = (int **)0x51;
    pcStack_cc = s___AdamSource_DaviLinkedList_h_00699ef4;
    pcVar7 = (code *)FUN_005a07f0(s_m_List_00699eec);
    (*pcVar7)();
    local_4._0_1_ = 10;
    ppiStack_c4 = (int **)0x1;
    ppiStack_c8 = (int **)0x4f9a10;
    FUN_004040a0();
  }
  piStack_a0 = (int *)*local_a4;
  if (piStack_a0 == (int *)0x0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *piStack_a0;
  }
  ppiStack_88 = (int **)0x0;
  pcStack_84 = (char *)0x0;
  uStack_80 = 0;
  pcStack_78 = (char *)0x0;
  pcStack_74 = (char *)0x0;
  uStack_70 = 0;
  local_4._0_1_ = 0xd;
  pcVar11 = pcStack_74;
  do {
    pcStack_74 = pcVar11;
    if (iVar4 == 0) {
      local_4._0_1_ = 0xc;
      for (pcVar10 = pcStack_78; pcVar10 != pcVar11; pcVar10 = pcVar10 + 0x10) {
        ppiStack_c4 = (int **)0x0;
        ppiStack_c8 = (int **)0x4f9c4b;
        FUN_004fe5c0();
      }
      ppiStack_c8 = (int **)0x4f9c5c;
      ppiStack_c4 = (int **)pcStack_78;
      FUN_005fe5f0();
      pcStack_78 = (char *)0x0;
      pcStack_74 = (char *)0x0;
      uStack_70 = 0;
      ppiStack_c4 = (int **)pcStack_84;
      ppiStack_c8 = ppiStack_88;
      local_4._0_1_ = 10;
      pcStack_cc = (char *)0x4f9c86;
      FUN_00442da0();
      ppiStack_c4 = ppiStack_88;
      ppiStack_c8 = (int **)0x4f9c90;
      FUN_005fe5f0();
      ppiStack_88 = (int **)0x0;
      pcStack_84 = (char *)0x0;
      uStack_80 = 0;
      local_4._0_1_ = 5;
      ppiStack_c8 = (int **)0x4f9caf;
      FUN_004f3fd0();
      ppiStack_c8 = (int **)0x4f9cb6;
      FUN_005a0290();
      local_4 = (uint)local_4._1_3_ << 8;
      ppiStack_c4 = (int **)0x4f9cca;
      FUN_0049fa20();
      local_4 = 0xffffffff;
      ppiStack_c4 = (int **)0x4f9cde;
      FUN_005ae770();
      ExceptionList = pvStack_c;
      return 1;
    }
    local_9c[0] = *(char *)(iVar4 + 0x6c);
    ppiStack_c4 = (int **)0x0;
    ppiStack_c8 = (int **)0x4f9a77;
    FUN_004040a0();
    ppiStack_c4 = (int **)0xffffffff;
    ppiStack_c8 = (int **)0x0;
    pcStack_cc = (char *)(iVar4 + 0x6c);
    FUN_0040cc00();
    local_4._0_1_ = 0xe;
    uVar2 = (undefined1)local_4;
    local_4._0_1_ = 0xe;
    if (iStack_94 != 0) {
      ppiStack_c4 = (int **)local_9c;
      ppiStack_c8 = &piStack_8c;
      pcStack_cc = (char *)0x4f9aab;
      cVar3 = FUN_004f9d00();
      if (cVar3 == '\0') {
        pcStack_cc = pcStack_84;
      }
      else {
        ppiStack_c4 = (int **)local_9c;
        ppiStack_c8 = &piStack_7c;
        pcStack_cc = (char *)0x4f9ac1;
        cVar3 = FUN_004f9d00();
        uVar2 = (undefined1)local_4;
        if (cVar3 != '\0') goto LAB_004f9b37;
        ppiStack_c4 = (int **)puStack_98;
        if (puStack_98 == (undefined1 *)0x0) {
          ppiStack_c4 = (int **)&DAT_0064a3b4;
        }
        pcStack_cc = acStack_1c;
        ppiStack_c8 = (int **)s_DaviName___s__is_NOT_unique_0069d018;
        ppiStack_c4 = (int **)FUN_005ae390();
        local_4._0_1_ = 0xf;
        ppiStack_c8 = (int **)0x4f9afb;
        FUN_005036d0();
        ppiStack_c4 = (int **)0x1;
        local_4._0_1_ = 0xe;
        ppiStack_c8 = (int **)0x4f9b10;
        FUN_004040a0();
        pcStack_cc = pcStack_74;
      }
      ppiStack_c4 = (int **)local_9c;
      ppiStack_c8 = (int **)0x1;
      FUN_00444d70();
      uVar2 = (undefined1)local_4;
    }
LAB_004f9b37:
    local_4._0_1_ = uVar2;
    if (local_a4 == (int *)0x0) {
      ppiStack_c4 = (int **)0x0;
      acStack_68[0] = local_ad;
      ppiStack_c8 = (int **)0x4f9b52;
      FUN_004040a0();
      uVar8 = 0xffffffff;
      pcVar11 = &DAT_006b3f70;
      do {
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        cVar3 = *pcVar11;
        pcVar11 = pcVar11 + 1;
      } while (cVar3 != '\0');
      ppiStack_c4 = (int **)(~uVar8 - 1);
      ppiStack_c8 = (int **)&DAT_006b3f70;
      pcStack_cc = (char *)0x4f9b70;
      FUN_004040f0();
      ppiStack_c4 = (int **)acStack_68;
      local_4._0_1_ = 0x10;
      ppiStack_c8 = (int **)0x5f;
      pcStack_cc = s___AdamSource_DaviLinkedList_h_00699ef4;
      pcVar7 = (code *)FUN_005a07f0(s_m_List_00699eec);
      (*pcVar7)();
      local_4._0_1_ = 0xe;
      ppiStack_c4 = (int **)0x1;
      ppiStack_c8 = (int **)0x4f9ba5;
      FUN_004040a0();
    }
    if (piStack_a0 == (int *)0x0) {
      ppiStack_c4 = (int **)&local_ad;
      ppiStack_c8 = (int **)&DAT_006b3f70;
      pcStack_cc = (char *)0x4f9bc0;
      FUN_00409810();
      ppiStack_c4 = (int **)local_44;
      local_4._0_1_ = 0x11;
      ppiStack_c8 = (int **)0x60;
      pcStack_cc = s___AdamSource_DaviLinkedList_h_00699ef4;
      pcVar7 = (code *)FUN_005a07f0(s_m_Node_00699ec4);
      (*pcVar7)();
      local_4._0_1_ = 0xe;
      ppiStack_c4 = (int **)0x1;
      ppiStack_c8 = (int **)0x4f9bf5;
      FUN_004040a0();
    }
    piVar1 = (int *)piStack_a0[1];
    if (piVar1 == (int *)0x0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *piVar1;
      piStack_a0 = piVar1;
    }
    ppiStack_c4 = (int **)0x1;
    local_4._0_1_ = 0xd;
    ppiStack_c8 = (int **)0x4f9c1d;
    FUN_004040a0();
    pcVar11 = pcStack_74;
  } while( true );
}

