/*
 * FUN_0055b7d0 at 0055b7d0
 * undefined FUN_0055b7d0(void)
 * Address ranges: 0055b7d0-0055cb55
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_0055b7d0(int param_1,undefined4 param_2,int param_3,char *param_4)

{
  undefined1 uVar1;
  char cVar2;
  code *pcVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  char *pcVar10;
  char *pcVar11;
  bool bVar12;
  undefined1 local_c9;
  undefined1 local_c8 [4];
  char *pcStack_c4;
  undefined1 local_b8 [4];
  char *pcStack_b4;
  uint uStack_b0;
  undefined1 *puStack_a8;
  undefined1 local_a4 [4];
  char *pcStack_a0;
  uint uStack_9c;
  undefined4 uStack_98;
  undefined1 local_91;
  char cStack_89;
  undefined1 auStack_88 [124];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063f65a;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_005ae5f0(s_D__Work_RCHorror_AdamSource_Adam_006a26f8);
  local_4 = 0;
  FUN_004040a0();
  iVar7 = -1;
  pcVar10 = &DAT_006b3f70;
  do {
    if (iVar7 == 0) break;
    iVar7 = iVar7 + -1;
    cVar2 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(&DAT_006b3f70);
  local_4._0_1_ = 1;
  FUN_004040a0();
  iVar7 = -1;
  pcVar10 = s_Engine_006a1858;
  do {
    if (iVar7 == 0) break;
    iVar7 = iVar7 + -1;
    cVar2 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_Engine_006a1858);
  local_4._0_1_ = 2;
  FUN_004040a0();
  iVar7 = -1;
  pcVar10 = s_ClipMouseCursorNonWindowedMode_006a2c10;
  do {
    if (iVar7 == 0) break;
    iVar7 = iVar7 + -1;
    cVar2 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_ClipMouseCursorNonWindowedMode_006a2c10);
  local_4._0_1_ = 3;
  FUN_005ac9d0(local_c8,local_b8,0,local_a4);
  local_4._0_1_ = 4;
  iVar7 = FUN_004337e0();
  local_91 = iVar7 != 0;
  local_4._0_1_ = 3;
  FUN_005acca0();
  local_4._0_1_ = 2;
  FUN_004040a0();
  local_4._0_1_ = 1;
  FUN_004040a0();
  local_4._0_1_ = 0;
  FUN_004040a0();
  local_a4[0] = local_c9;
  FUN_004040a0();
  iVar7 = -1;
  pcVar10 = &DAT_006b3f70;
  do {
    if (iVar7 == 0) break;
    iVar7 = iVar7 + -1;
    cVar2 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(&DAT_006b3f70);
  local_4._0_1_ = 5;
  FUN_004040a0();
  iVar7 = -1;
  pcVar10 = s_Engine_006a1858;
  do {
    if (iVar7 == 0) break;
    iVar7 = iVar7 + -1;
    cVar2 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_Engine_006a1858);
  local_4._0_1_ = 6;
  local_c8[0] = local_c9;
  FUN_004040a0();
  iVar7 = -1;
  pcVar10 = s_ClipMouseCursorWindowedMode_006a2bf4;
  do {
    if (iVar7 == 0) break;
    iVar7 = iVar7 + -1;
    cVar2 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_ClipMouseCursorWindowedMode_006a2bf4);
  local_4._0_1_ = 7;
  FUN_005ac9d0(local_c8,local_b8,1,local_a4);
  local_4._0_1_ = 8;
  iVar7 = FUN_004337e0();
  bVar12 = iVar7 != 0;
  local_4._0_1_ = 7;
  FUN_005acca0();
  local_4._0_1_ = 6;
  FUN_004040a0();
  local_4._0_1_ = 5;
  FUN_004040a0();
  local_4._0_1_ = 0;
  FUN_004040a0();
  *param_4 = '\0';
  if (*(char *)(param_1 + 0x125) != '\0') {
    local_c8[0] = bVar12;
    FUN_004040a0();
    iVar7 = -1;
    pcVar10 = &DAT_006b3f70;
    do {
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      cVar2 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar2 != '\0');
    FUN_004040f0(&DAT_006b3f70);
    local_4._0_1_ = 9;
    pcVar3 = (code *)FUN_005a07f0(s___m_Initialized_00694cac,
                                  s_D__Work_RCHorror_AdamSource_Adam_006a26f8,0xf0);
    (*pcVar3)();
    local_4._0_1_ = 0;
    FUN_004040a0();
  }
  uVar5 = *(undefined4 *)(param_3 + 0x54);
  *(undefined4 *)(param_1 + 0x1b0) = param_2;
  *(undefined4 *)(param_1 + 0x1ac) = uVar5;
  FUN_00557b80();
  iVar7 = FUN_004337e0();
  if ((iVar7 == 0) || (DAT_006a2400 == '\0')) {
    FUN_00517430();
    iVar7 = FUN_004337e0();
    if (iVar7 != 0) {
      FUN_005afe30();
    }
  }
  else {
    FUN_00517430();
    iVar7 = FUN_004337e0();
    if (iVar7 != 0) {
      FUN_005afe30();
    }
    FUN_00556e90();
    iVar7 = FUN_004337e0();
    if (iVar7 != 0) {
      FUN_00517430();
      iVar7 = FUN_004337e0();
      if (iVar7 != 0) {
        FUN_005afe30();
      }
      FUN_005c9530(0);
      FUN_005c9530(2,0);
      FUN_005c9530(3,0);
    }
    iVar7 = FUN_005c9560();
    if ((iVar7 != 0) && (iVar7 = FUN_005c9560(), iVar7 != 0)) {
      iVar4 = FUN_00557760();
      iVar7 = *(int *)(iVar4 + 100);
      if (iVar7 == -0x80000000) {
        iVar7 = FUN_0060af10();
        *(int *)(iVar4 + 100) = iVar7;
      }
      if (iVar7 < 0) {
LAB_0055bc00:
        local_c8[0] = bVar12;
        FUN_004040a0();
        iVar7 = -1;
        pcVar10 = &DAT_006b3f70;
        do {
          if (iVar7 == 0) break;
          iVar7 = iVar7 + -1;
          cVar2 = *pcVar10;
          pcVar10 = pcVar10 + 1;
        } while (cVar2 != '\0');
        FUN_004040f0(&DAT_006b3f70);
        local_4._0_1_ = 10;
        pcVar3 = (code *)FUN_005a07f0(s__int__GET_GLOBAL_SETTING_Display_006a2b1c,
                                      s_D__Work_RCHorror_AdamSource_Adam_006a26f8,0x107);
        (*pcVar3)();
        local_4._0_1_ = 0;
        FUN_004040a0();
      }
      else {
        iVar4 = FUN_00557760();
        iVar7 = *(int *)(iVar4 + 100);
        if (iVar7 == -0x80000000) {
          iVar7 = FUN_0060af10();
          *(int *)(iVar4 + 100) = iVar7;
        }
        if (3 < iVar7) goto LAB_0055bc00;
      }
      iVar4 = FUN_00557760();
      iVar7 = *(int *)(iVar4 + 100);
      if (iVar7 == -0x80000000) {
        iVar7 = FUN_0060af10();
        *(int *)(iVar4 + 100) = iVar7;
      }
      if (iVar7 < 1) {
        FUN_00517430();
        iVar7 = FUN_004337e0();
        if (iVar7 != 0) {
          iVar7 = FUN_00557760();
          if (*(int *)(iVar7 + 100) == -0x80000000) {
            uVar5 = FUN_0060af10();
            *(undefined4 *)(iVar7 + 100) = uVar5;
          }
          uVar5 = FUN_005ae390(auStack_88,s_CAdamEngine__Init____automatic_s_006a2ac8);
          local_4._0_1_ = 0xb;
          FUN_005aff00(uVar5);
          local_4._0_1_ = 0;
          FUN_004040a0();
        }
        FUN_005c9530(2);
      }
      else {
        FUN_00517430();
        iVar7 = FUN_004337e0();
        if (iVar7 != 0) {
          iVar7 = FUN_00557760();
          if (*(int *)(iVar7 + 100) == -0x80000000) {
            uVar5 = FUN_0060af10();
            *(undefined4 *)(iVar7 + 100) = uVar5;
          }
          uVar5 = FUN_005ae390(auStack_88,s_CAdamEngine__Init____automatic_s_006a2a74);
          local_4._0_1_ = 0xc;
          FUN_005aff00(uVar5);
          local_4._0_1_ = 0;
          FUN_004040a0();
        }
        FUN_005c9530(3);
      }
    }
  }
  FUN_00517430();
  iVar7 = FUN_004337e0();
  if (iVar7 != 0) {
    FUN_005afe30();
  }
  iVar7 = 0;
  do {
    FUN_00517430();
    iVar4 = FUN_004337e0();
    if (iVar4 != 0) {
      FUN_005c9560();
      uVar5 = FUN_005ae390(auStack_88,s_Genesis_Driver___d______s_006a29d4,iVar7);
      local_4._0_1_ = 0xd;
      FUN_005aff00(uVar5);
      local_4._0_1_ = 0;
      FUN_004040a0();
    }
    iVar7 = iVar7 + 1;
  } while (iVar7 < 4);
  FUN_005c9520();
  iVar7 = FUN_005b7c90(*(undefined4 *)(param_1 + 0x1ac),s_Redcat_Spookkasteel_006a29c0,&DAT_0069fafc
                       ,0x10003);
  *(int *)(param_1 + 0x100) = iVar7;
  local_b8[0] = bVar12;
  if (iVar7 == 0) {
    FUN_004040a0();
    uVar8 = 0xffffffff;
    pcVar10 = s_geEngine_Create___fails_006a29a8;
    do {
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      cVar2 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar2 != '\0');
    uVar8 = ~uVar8 - 1;
    cVar2 = FUN_00401940(uVar8);
    if (cVar2 != '\0') {
      pcVar10 = s_geEngine_Create___fails_006a29a8;
      for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined4 *)pcStack_b4 = *(undefined4 *)pcVar10;
        pcVar10 = pcVar10 + 4;
        pcStack_b4 = pcStack_b4 + 4;
      }
      for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *pcStack_b4 = *pcVar10;
        pcVar10 = pcVar10 + 1;
        pcStack_b4 = pcStack_b4 + 1;
      }
      FUN_00404190();
    }
    local_4._0_1_ = 0xe;
    FUN_005aff20(s_D__Work_RCHorror_AdamSource_Adam_006a26f8,0x136);
    local_4 = (uint)local_4._1_3_ << 8;
  }
  else {
    cVar2 = FUN_0055dcc0();
    if (cVar2 == '\0') {
      if (*param_4 == '\0') {
        FUN_005646e0(auStack_88);
        local_4._0_1_ = 0xf;
        FUN_005570a0();
        FUN_005acdb0();
        local_4 = (uint)local_4._1_3_ << 8;
        FUN_004040a0();
        FUN_004040a0();
        uVar8 = 0xffffffff;
        pcVar10 = s_SelectDevice___fails_006a2990;
        do {
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          cVar2 = *pcVar10;
          pcVar10 = pcVar10 + 1;
        } while (cVar2 != '\0');
        uVar8 = ~uVar8 - 1;
        cVar2 = FUN_00401940(uVar8);
        if (cVar2 != '\0') {
          pcVar10 = s_SelectDevice___fails_006a2990;
          for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
            *(undefined4 *)pcStack_b4 = *(undefined4 *)pcVar10;
            pcVar10 = pcVar10 + 4;
            pcStack_b4 = pcStack_b4 + 4;
          }
          for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
            *pcStack_b4 = *pcVar10;
            pcVar10 = pcVar10 + 1;
            pcStack_b4 = pcStack_b4 + 1;
          }
          FUN_00404190();
        }
        local_4._0_1_ = 0x10;
        FUN_005aff20(s_D__Work_RCHorror_AdamSource_Adam_006a26f8,0x143);
        local_4 = (uint)local_4._1_3_ << 8;
      }
      else {
        FUN_004040a0();
        uVar8 = 0xffffffff;
        pcVar10 = s_SelectDevice___fails__User_Abort_006a296c;
        do {
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          cVar2 = *pcVar10;
          pcVar10 = pcVar10 + 1;
        } while (cVar2 != '\0');
        uVar8 = ~uVar8 - 1;
        cVar2 = FUN_00401940(uVar8);
        if (cVar2 != '\0') {
          pcVar10 = s_SelectDevice___fails__User_Abort_006a296c;
          for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
            *(undefined4 *)pcStack_b4 = *(undefined4 *)pcVar10;
            pcVar10 = pcVar10 + 4;
            pcStack_b4 = pcStack_b4 + 4;
          }
          for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
            *pcStack_b4 = *pcVar10;
            pcVar10 = pcVar10 + 1;
            pcStack_b4 = pcStack_b4 + 1;
          }
          FUN_00404190();
        }
        local_4._0_1_ = 0x11;
        FUN_005aff20(s_D__Work_RCHorror_AdamSource_Adam_006a26f8,0x147);
        local_4 = (uint)local_4._1_3_ << 8;
      }
    }
    else {
      if (*(char *)(param_1 + 0x122) != '\0') {
        FUN_005b7e50();
      }
      FUN_0055b5c0();
      FUN_00564fd0(1,*(undefined4 *)(param_1 + 0x11c),99);
      if (*(int *)(param_1 + 0x100) == 0) {
        local_c8[0] = bVar12;
        FUN_004040a0();
        iVar7 = -1;
        pcVar10 = &DAT_006b3f70;
        do {
          if (iVar7 == 0) break;
          iVar7 = iVar7 + -1;
          cVar2 = *pcVar10;
          pcVar10 = pcVar10 + 1;
        } while (cVar2 != '\0');
        FUN_004040f0(&DAT_006b3f70);
        local_4._0_1_ = 0x12;
        pcVar3 = (code *)FUN_005a07f0(s_m_Engine_006934e0,s___AdamSource_AdamEngine_h_0068eb58,0x1ad
                                     );
        (*pcVar3)();
        local_4._0_1_ = 0;
        FUN_004040a0();
      }
      iVar7 = FUN_005bb950(*(undefined4 *)(param_1 + 0x100),*(undefined4 *)(param_1 + 0x114));
      cStack_89 = iVar7 != 0;
      local_c8[0] = bVar12;
      FUN_004040a0();
      uVar8 = 0xffffffff;
      pcVar10 = &DAT_006b3f70;
      do {
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        cVar2 = *pcVar10;
        pcVar10 = pcVar10 + 1;
      } while (cVar2 != '\0');
      uVar8 = ~uVar8 - 1;
      cVar2 = FUN_00401940(uVar8);
      if (cVar2 != '\0') {
        pcVar10 = &DAT_006b3f70;
        pcVar11 = pcStack_c4;
        for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
          *(undefined4 *)pcVar11 = *(undefined4 *)pcVar10;
          pcVar10 = pcVar10 + 4;
          pcVar11 = pcVar11 + 4;
        }
        for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *pcVar11 = *pcVar10;
          pcVar10 = pcVar10 + 1;
          pcVar11 = pcVar11 + 1;
        }
        FUN_00404190();
      }
      local_4 = CONCAT31(local_4._1_3_,0x13);
      local_a4[0] = bVar12;
      FUN_004040a0();
      uVar8 = 0xffffffff;
      pcVar10 = s_Debug_006901ec;
      do {
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        cVar2 = *pcVar10;
        pcVar10 = pcVar10 + 1;
      } while (cVar2 != '\0');
      uVar8 = ~uVar8 - 1;
      cVar2 = FUN_00401940(uVar8);
      if (cVar2 != '\0') {
        pcVar10 = s_Debug_006901ec;
        pcVar11 = pcStack_a0;
        for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
          *(undefined4 *)pcVar11 = *(undefined4 *)pcVar10;
          pcVar10 = pcVar10 + 4;
          pcVar11 = pcVar11 + 4;
        }
        for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *pcVar11 = *pcVar10;
          pcVar10 = pcVar10 + 1;
          pcVar11 = pcVar11 + 1;
        }
        FUN_00404190();
      }
      local_4 = CONCAT31(local_4._1_3_,0x14);
      FUN_004040a0();
      uVar8 = 0xffffffff;
      pcVar10 = s_DebugFakeDriverCrash_006a2938;
      do {
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        cVar2 = *pcVar10;
        pcVar10 = pcVar10 + 1;
      } while (cVar2 != '\0');
      uVar8 = ~uVar8 - 1;
      cVar2 = FUN_00401940(uVar8);
      if (cVar2 != '\0') {
        pcVar10 = s_DebugFakeDriverCrash_006a2938;
        pcVar11 = pcStack_b4;
        for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
          *(undefined4 *)pcVar11 = *(undefined4 *)pcVar10;
          pcVar10 = pcVar10 + 4;
          pcVar11 = pcVar11 + 4;
        }
        for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *pcVar11 = *pcVar10;
          pcVar10 = pcVar10 + 1;
          pcVar11 = pcVar11 + 1;
        }
        FUN_00404190();
      }
      local_4 = CONCAT31(local_4._1_3_,0x15);
      iVar4 = FUN_005ac9d0(local_b8,local_a4,0,local_c8);
      iVar7 = *(int *)(iVar4 + 100);
      if (iVar7 == -0x80000000) {
        iVar7 = FUN_0060af10();
        *(int *)(iVar4 + 100) = iVar7;
      }
      FUN_005acca0();
      local_4._0_1_ = 0x14;
      FUN_004040a0();
      local_4._0_1_ = 0x13;
      FUN_004040a0();
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_004040a0();
      if (iVar7 != 0) {
        iVar4 = FUN_005a0830();
        iVar7 = *(int *)(iVar4 + 100);
        if (iVar7 == -0x80000000) {
          iVar7 = FUN_0060af10();
          *(int *)(iVar4 + 100) = iVar7;
        }
        if (iVar7 != 0) {
          FUN_005afe30();
        }
        goto LAB_0055c8ae;
      }
      FUN_00564fd0(0,*(undefined4 *)(param_1 + 0x11c),cStack_89 != '\0');
      FUN_0055b5f0();
      local_c8[0] = bVar12;
      FUN_004040a0();
      uVar8 = 0xffffffff;
      pcVar10 = s_LevelCamera_006a290c;
      do {
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        cVar2 = *pcVar10;
        pcVar10 = pcVar10 + 1;
      } while (cVar2 != '\0');
      uVar8 = ~uVar8 - 1;
      cVar2 = FUN_00401940(uVar8);
      if (cVar2 != '\0') {
        pcVar10 = s_LevelCamera_006a290c;
        pcVar11 = pcStack_c4;
        for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
          *(undefined4 *)pcVar11 = *(undefined4 *)pcVar10;
          pcVar10 = pcVar10 + 4;
          pcVar11 = pcVar11 + 4;
        }
        for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *pcVar11 = *pcVar10;
          pcVar10 = pcVar10 + 1;
          pcVar11 = pcVar11 + 1;
        }
        FUN_00404190();
      }
      local_4._0_1_ = 0x16;
      piVar6 = (int *)FUN_00563e50(&puStack_a8,local_c8,*(undefined4 *)(param_1 + 0x40));
      iVar7 = *(int *)(param_1 + 0xe0);
      local_4._0_1_ = 0x17;
      if (iVar7 != *piVar6) {
        if ((iVar7 != 0) &&
           (iVar4 = *(int *)(iVar7 + 0x14) + -1, *(int *)(iVar7 + 0x14) = iVar4, iVar4 == 0)) {
          FUN_005abfc0();
        }
        iVar7 = *piVar6;
        *(int *)(param_1 + 0xe0) = iVar7;
        if (iVar7 != 0) {
          *(int *)(iVar7 + 0x14) = *(int *)(iVar7 + 0x14) + 1;
        }
      }
      local_4._0_1_ = 0x16;
      if (puStack_a8 != (undefined1 *)0x0) {
        FUN_004098d0();
        puStack_a8 = (undefined1 *)0x0;
      }
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_004040a0();
      local_c8[0] = bVar12;
      FUN_004040a0();
      uVar8 = 0xffffffff;
      pcVar10 = s_PlayerCamera_006a28fc;
      do {
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        cVar2 = *pcVar10;
        pcVar10 = pcVar10 + 1;
      } while (cVar2 != '\0');
      uVar8 = ~uVar8 - 1;
      cVar2 = FUN_00401940(uVar8);
      if (cVar2 != '\0') {
        pcVar10 = s_PlayerCamera_006a28fc;
        pcVar11 = pcStack_c4;
        for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
          *(undefined4 *)pcVar11 = *(undefined4 *)pcVar10;
          pcVar10 = pcVar10 + 4;
          pcVar11 = pcVar11 + 4;
        }
        for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *pcVar11 = *pcVar10;
          pcVar10 = pcVar10 + 1;
          pcVar11 = pcVar11 + 1;
        }
        FUN_00404190();
      }
      local_4._0_1_ = 0x18;
      piVar6 = (int *)FUN_00563e50(&puStack_a8,local_c8,*(undefined4 *)(param_1 + 0x40));
      iVar7 = *(int *)(param_1 + 0xe4);
      local_4._0_1_ = 0x19;
      if (iVar7 != *piVar6) {
        if ((iVar7 != 0) &&
           (iVar4 = *(int *)(iVar7 + 0x14) + -1, *(int *)(iVar7 + 0x14) = iVar4, iVar4 == 0)) {
          FUN_005abfc0();
        }
        iVar7 = *piVar6;
        *(int *)(param_1 + 0xe4) = iVar7;
        if (iVar7 != 0) {
          *(int *)(iVar7 + 0x14) = *(int *)(iVar7 + 0x14) + 1;
        }
      }
      local_4._0_1_ = 0x18;
      if (puStack_a8 != (undefined1 *)0x0) {
        FUN_004098d0();
        puStack_a8 = (undefined1 *)0x0;
      }
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_004040a0();
      iVar7 = *(int *)(param_1 + 0xdc);
      if (iVar7 != *(int *)(param_1 + 0xe0)) {
        if ((iVar7 != 0) &&
           (iVar4 = *(int *)(iVar7 + 0x14) + -1, *(int *)(iVar7 + 0x14) = iVar4, iVar4 == 0)) {
          FUN_005abfc0();
        }
        iVar7 = *(int *)(param_1 + 0xe0);
        *(int *)(param_1 + 0xdc) = iVar7;
        if (iVar7 != 0) {
          *(int *)(iVar7 + 0x14) = *(int *)(iVar7 + 0x14) + 1;
        }
      }
      if (*(char *)(param_1 + 0x120) == '\0') {
        *(undefined1 *)(param_3 + 0x76) = local_91;
        iVar7 = *(int *)(param_1 + 0x44);
        iVar4 = *(int *)(param_1 + 0x40);
        *(undefined1 *)(param_3 + 0x88) = 0;
        *(undefined4 *)(param_3 + 0x7c) = 0;
        *(int *)(param_3 + 0x78) = iVar4 + -1;
        *(undefined4 *)(param_3 + 0x84) = 0;
        *(int *)(param_3 + 0x80) = iVar7 + -1;
        FUN_005aa270(*(int *)(param_1 + 0x40) / 2);
      }
      else {
        *(bool *)(param_3 + 0x76) = bVar12;
        *(undefined1 *)(param_3 + 0x88) = 1;
        FUN_005aa360();
      }
      puStack_a8 = operator_new(0x260);
      local_4._0_1_ = 0x1a;
      if (puStack_a8 == (undefined1 *)0x0) {
        iVar7 = 0;
      }
      else {
        iVar7 = FUN_0054c500();
      }
      local_4._0_1_ = 0;
      *(int *)(param_1 + 0xfc) = iVar7;
      if (iVar7 == 0) {
        local_c8[0] = bVar12;
        FUN_004040a0();
        uVar8 = 0xffffffff;
        pcVar10 = s_cannot_create_m_SoundSystem_006a28e0;
        do {
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          cVar2 = *pcVar10;
          pcVar10 = pcVar10 + 1;
        } while (cVar2 != '\0');
        uVar8 = ~uVar8 - 1;
        cVar2 = FUN_00401940(uVar8);
        if (cVar2 != '\0') {
          pcVar10 = s_cannot_create_m_SoundSystem_006a28e0;
          for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
            *(undefined4 *)pcStack_c4 = *(undefined4 *)pcVar10;
            pcVar10 = pcVar10 + 4;
            pcStack_c4 = pcStack_c4 + 4;
          }
          for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
            *pcStack_c4 = *pcVar10;
            pcVar10 = pcVar10 + 1;
            pcStack_c4 = pcStack_c4 + 1;
          }
          FUN_00404190();
        }
        local_4._0_1_ = 0x1b;
        FUN_005aff20(s_D__Work_RCHorror_AdamSource_Adam_006a26f8,0x17e);
        local_4 = (uint)local_4._1_3_ << 8;
      }
      else {
        cVar2 = FUN_0054d230();
        if (cVar2 == '\0') {
          local_a4[0] = bVar12;
          FUN_004040a0();
          uVar8 = 0xffffffff;
          pcVar10 = s_cannot_init_m_SoundSystem_006a28c4;
          do {
            if (uVar8 == 0) break;
            uVar8 = uVar8 - 1;
            cVar2 = *pcVar10;
            pcVar10 = pcVar10 + 1;
          } while (cVar2 != '\0');
          uVar8 = ~uVar8 - 1;
          cVar2 = FUN_00401940(uVar8);
          if (cVar2 != '\0') {
            pcVar10 = s_cannot_init_m_SoundSystem_006a28c4;
            pcVar11 = pcStack_a0;
            for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
              *(undefined4 *)pcVar11 = *(undefined4 *)pcVar10;
              pcVar10 = pcVar10 + 4;
              pcVar11 = pcVar11 + 4;
            }
            for (uVar9 = uVar8 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
              *pcVar11 = *pcVar10;
              pcVar10 = pcVar10 + 1;
              pcVar11 = pcVar11 + 1;
            }
            pcStack_a0[uVar8] = '\0';
            uStack_9c = uVar8;
          }
          local_4._0_1_ = 0x1c;
          FUN_005aff20(s_D__Work_RCHorror_AdamSource_Adam_006a26f8,0x184);
          local_4._0_1_ = 0;
          FUN_004040a0();
        }
        puStack_a8 = operator_new(0x30);
        local_4._0_1_ = 0x1d;
        if (puStack_a8 == (undefined1 *)0x0) {
          iVar7 = 0;
        }
        else {
          iVar7 = FUN_0049f3b0();
        }
        local_4._0_1_ = 0;
        uVar1 = (undefined1)local_4;
        local_4._0_1_ = 0;
        *(int *)(param_1 + 0xf8) = iVar7;
        if (iVar7 == 0) {
          local_b8[0] = bVar12;
          FUN_004040a0();
          uVar8 = 0xffffffff;
          pcVar10 = s_cannot_create_m_ActorDefMgr_006a28a8;
          do {
            if (uVar8 == 0) break;
            uVar8 = uVar8 - 1;
            cVar2 = *pcVar10;
            pcVar10 = pcVar10 + 1;
          } while (cVar2 != '\0');
          uVar8 = ~uVar8 - 1;
          cVar2 = FUN_00401940(uVar8);
          if (cVar2 != '\0') {
            pcVar10 = s_cannot_create_m_ActorDefMgr_006a28a8;
            pcVar11 = pcStack_b4;
            for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
              *(undefined4 *)pcVar11 = *(undefined4 *)pcVar10;
              pcVar10 = pcVar10 + 4;
              pcVar11 = pcVar11 + 4;
            }
            for (uVar9 = uVar8 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
              *pcVar11 = *pcVar10;
              pcVar10 = pcVar10 + 1;
              pcVar11 = pcVar11 + 1;
            }
            pcStack_b4[uVar8] = '\0';
            uStack_b0 = uVar8;
          }
          local_4._0_1_ = 0x1e;
          FUN_005aff20(s_D__Work_RCHorror_AdamSource_Adam_006a26f8,0x18a);
          local_4 = (uint)local_4._1_3_ << 8;
        }
        else {
          local_4._0_1_ = uVar1;
          puStack_a8 = operator_new(0x34);
          local_4._0_1_ = 0x1f;
          if (puStack_a8 == (undefined1 *)0x0) {
            iVar7 = 0;
          }
          else {
            iVar7 = FUN_0050c7b0();
          }
          local_4._0_1_ = 0;
          uVar1 = (undefined1)local_4;
          local_4._0_1_ = 0;
          *(int *)(param_1 + 0xd8) = iVar7;
          if (iVar7 != 0) {
            *(undefined1 *)(param_1 + 0x125) = 1;
            local_4._0_1_ = uVar1;
            FUN_005603d0();
            if (*(int *)(param_1 + 0xd8) == 0) {
              local_c8[0] = bVar12;
              FUN_004040a0();
              iVar7 = -1;
              pcVar10 = &DAT_006b3f70;
              do {
                if (iVar7 == 0) break;
                iVar7 = iVar7 + -1;
                cVar2 = *pcVar10;
                pcVar10 = pcVar10 + 1;
              } while (cVar2 != '\0');
              FUN_004040f0(&DAT_006b3f70);
              local_4._0_1_ = 0x21;
              pcVar3 = (code *)FUN_005a07f0(s_m_BitmapMgr_0068eb4c,
                                            s___AdamSource_AdamEngine_h_0068eb58,0x188);
              (*pcVar3)();
              local_4._0_1_ = 0;
              FUN_004040a0();
            }
            piVar6 = (int *)FUN_0050d730(&puStack_a8);
            iVar7 = *(int *)(param_1 + 0x1a8);
            local_4._0_1_ = 0x22;
            if (iVar7 != *piVar6) {
              if ((iVar7 != 0) &&
                 (iVar4 = *(int *)(iVar7 + 0x14) + -1, *(int *)(iVar7 + 0x14) = iVar4, iVar4 == 0))
              {
                FUN_005abfc0();
              }
              iVar7 = *piVar6;
              *(int *)(param_1 + 0x1a8) = iVar7;
              if (iVar7 != 0) {
                *(int *)(iVar7 + 0x14) = *(int *)(iVar7 + 0x14) + 1;
              }
            }
            local_4._0_1_ = 0;
            if ((puStack_a8 != (undefined1 *)0x0) &&
               (iVar7 = *(int *)(puStack_a8 + 0x14), *(int *)(puStack_a8 + 0x14) = iVar7 + -1,
               iVar7 + -1 == 0)) {
              FUN_005abfc0();
            }
            if (*(int *)(param_1 + 0x1a8) == 0) {
              auStack_88[0] = bVar12;
              FUN_004040a0();
              iVar7 = -1;
              pcVar10 = &DAT_006b3f70;
              do {
                if (iVar7 == 0) break;
                iVar7 = iVar7 + -1;
                cVar2 = *pcVar10;
                pcVar10 = pcVar10 + 1;
              } while (cVar2 != '\0');
              FUN_004040f0(&DAT_006b3f70);
              local_4._0_1_ = 0x23;
              pcVar3 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,
                                            0xb6);
              (*pcVar3)();
              local_4._0_1_ = 0;
              FUN_004040a0();
            }
            cVar2 = FUN_0050b2d0();
            if (cVar2 != '\0') {
              local_a4[0] = bVar12;
              FUN_004040a0();
              uVar8 = 0xffffffff;
              pcVar10 = &DAT_006b3f70;
              do {
                if (uVar8 == 0) break;
                uVar8 = uVar8 - 1;
                cVar2 = *pcVar10;
                pcVar10 = pcVar10 + 1;
              } while (cVar2 != '\0');
              uVar8 = ~uVar8 - 1;
              cVar2 = FUN_00401940(uVar8);
              if (cVar2 != '\0') {
                pcVar10 = &DAT_006b3f70;
                pcVar11 = pcStack_a0;
                for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
                  *(undefined4 *)pcVar11 = *(undefined4 *)pcVar10;
                  pcVar10 = pcVar10 + 4;
                  pcVar11 = pcVar11 + 4;
                }
                for (uVar9 = uVar8 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
                  *pcVar11 = *pcVar10;
                  pcVar10 = pcVar10 + 1;
                  pcVar11 = pcVar11 + 1;
                }
                pcStack_a0[uVar8] = '\0';
                uStack_9c = uVar8;
              }
              local_4._0_1_ = 0x24;
              pcVar3 = (code *)FUN_005a07f0(s___m_HideFogBitmapHandle_>GetIsAd_006a285c,
                                            s_D__Work_RCHorror_AdamSource_Adam_006a26f8,0x1aa);
              (*pcVar3)();
              local_4._0_1_ = 0;
              if (pcStack_a0 != (char *)0x0) {
                cVar2 = pcStack_a0[-1];
                if ((cVar2 == '\0') || (cVar2 == -1)) {
                  FUN_005fe5f0();
                }
                else {
                  pcStack_a0[-1] = cVar2 + -1;
                }
              }
              pcStack_a0 = (char *)0x0;
              uStack_9c = 0;
              uStack_98 = 0;
            }
            puStack_a8 = &stack0xffffff20;
            if (*(int *)(param_1 + 0x1a8) != 0) {
              piVar6 = (int *)(*(int *)(param_1 + 0x1a8) + 0x14);
              *piVar6 = *piVar6 + 1;
            }
            FUN_00560630();
            local_4 = 0xffffffff;
            FUN_005ae770();
            ExceptionList = pvStack_c;
            return 1;
          }
          local_b8[0] = bVar12;
          FUN_004040a0();
          uVar8 = 0xffffffff;
          pcVar10 = s_cannot_create_m_BitmapMgr_006a288c;
          do {
            if (uVar8 == 0) break;
            uVar8 = uVar8 - 1;
            cVar2 = *pcVar10;
            pcVar10 = pcVar10 + 1;
          } while (cVar2 != '\0');
          uVar8 = ~uVar8 - 1;
          cVar2 = FUN_00401940(uVar8);
          if (cVar2 != '\0') {
            pcVar10 = s_cannot_create_m_BitmapMgr_006a288c;
            pcVar11 = pcStack_b4;
            for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
              *(undefined4 *)pcVar11 = *(undefined4 *)pcVar10;
              pcVar10 = pcVar10 + 4;
              pcVar11 = pcVar11 + 4;
            }
            for (uVar9 = uVar8 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
              *pcVar11 = *pcVar10;
              pcVar10 = pcVar10 + 1;
              pcVar11 = pcVar11 + 1;
            }
            pcStack_b4[uVar8] = '\0';
            uStack_b0 = uVar8;
          }
          local_4._0_1_ = 0x20;
          FUN_005aff20(s_D__Work_RCHorror_AdamSource_Adam_006a26f8,0x191);
          local_4 = (uint)local_4._1_3_ << 8;
        }
      }
    }
  }
  FUN_004040a0();
LAB_0055c8ae:
  local_4 = 0xffffffff;
  FUN_005ae770();
  ExceptionList = pvStack_c;
  return 0;
}

