/*
 * FUN_00527c20 at 00527c20
 * undefined FUN_00527c20(void)
 * Address ranges: 00527c20-0052903c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_00527c20(int *param_1)

{
  undefined4 *puVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  code *pcVar5;
  int *piVar6;
  int iVar7;
  undefined1 *puVar8;
  uint uVar9;
  uint uVar10;
  char *pcVar11;
  char *pcVar12;
  float10 fVar13;
  char local_18d;
  char local_18c [16];
  float local_17c;
  char acStack_178 [4];
  char *pcStack_174;
  char cStack_165;
  undefined4 uStack_164;
  undefined4 uStack_160;
  char acStack_15c [16];
  char local_14c [16];
  char acStack_13c [4];
  char *pcStack_138;
  char acStack_12c [4];
  undefined1 *puStack_128;
  char acStack_11c [16];
  undefined1 auStack_10c [16];
  undefined1 auStack_fc [240];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00639af8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_004040a0(0);
  uVar9 = 0xffffffff;
  pcVar11 = s_GS_NONE_0069fff8;
  do {
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    cVar2 = *pcVar11;
    pcVar11 = pcVar11 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_GS_NONE_0069fff8,~uVar9 - 1);
  puVar1 = (undefined4 *)param_1[0x23];
  local_4 = 0;
  uVar3 = FUN_00535f40(0,local_18c);
  *puVar1 = uVar3;
  local_4 = 0xffffffff;
  FUN_004040a0(1);
  local_18c[0] = local_18d;
  FUN_004040a0(0);
  uVar9 = 0xffffffff;
  pcVar11 = s_GS_GAME_0069fff0;
  do {
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    cVar2 = *pcVar11;
    pcVar11 = pcVar11 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_GS_GAME_0069fff0,~uVar9 - 1);
  iVar4 = param_1[0x23];
  local_4 = 1;
  uVar3 = FUN_00535f40(3,local_18c);
  *(undefined4 *)(iVar4 + 0xc) = uVar3;
  local_4 = 0xffffffff;
  FUN_004040a0(1);
  local_18c[0] = local_18d;
  FUN_004040a0(0);
  uVar9 = 0xffffffff;
  pcVar11 = s_GS_LOADING_0069ffe4;
  do {
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    cVar2 = *pcVar11;
    pcVar11 = pcVar11 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_GS_LOADING_0069ffe4,~uVar9 - 1);
  iVar4 = param_1[0x23];
  local_4 = 2;
  uVar3 = FUN_00535f40(1,local_18c);
  *(undefined4 *)(iVar4 + 4) = uVar3;
  local_4 = 0xffffffff;
  FUN_004040a0(1);
  local_18c[0] = local_18d;
  FUN_004040a0(0);
  uVar9 = 0xffffffff;
  pcVar11 = s_GS_INTRO_0069ffd8;
  do {
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    cVar2 = *pcVar11;
    pcVar11 = pcVar11 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_GS_INTRO_0069ffd8,~uVar9 - 1);
  iVar4 = param_1[0x23];
  local_4 = 3;
  uVar3 = FUN_00535f40(2,local_18c);
  *(undefined4 *)(iVar4 + 8) = uVar3;
  local_4 = 0xffffffff;
  FUN_004040a0(1);
  local_18c[0] = local_18d;
  FUN_004040a0(0);
  uVar9 = 0xffffffff;
  pcVar11 = s_GS_RESULTS_0069ffcc;
  do {
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    cVar2 = *pcVar11;
    pcVar11 = pcVar11 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_GS_RESULTS_0069ffcc,~uVar9 - 1);
  iVar4 = param_1[0x23];
  local_4 = 4;
  uVar3 = FUN_00535f40(4,local_18c);
  *(undefined4 *)(iVar4 + 0x10) = uVar3;
  local_4 = 0xffffffff;
  FUN_004040a0(1);
  local_18c[0] = local_18d;
  FUN_004040a0(0);
  uVar9 = 0xffffffff;
  pcVar11 = s_GS_PAUSE_0069ffc0;
  do {
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    cVar2 = *pcVar11;
    pcVar11 = pcVar11 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_GS_PAUSE_0069ffc0,~uVar9 - 1);
  iVar4 = param_1[0x23];
  local_4 = 5;
  uVar3 = FUN_00535f40(6,local_18c);
  *(undefined4 *)(iVar4 + 0x18) = uVar3;
  local_4 = 0xffffffff;
  FUN_004040a0(1);
  local_18c[0] = local_18d;
  FUN_004040a0(0);
  uVar9 = 0xffffffff;
  pcVar11 = s_GS_RESTART_0069ffb4;
  do {
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    cVar2 = *pcVar11;
    pcVar11 = pcVar11 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_GS_RESTART_0069ffb4,~uVar9 - 1);
  iVar4 = param_1[0x23];
  local_4 = 6;
  uVar3 = FUN_00535f40(7,local_18c);
  *(undefined4 *)(iVar4 + 0x1c) = uVar3;
  local_4 = 0xffffffff;
  FUN_004040a0(1);
  local_18c[0] = local_18d;
  FUN_004040a0(0);
  uVar9 = 0xffffffff;
  pcVar11 = s_GS_MENU_0069ffac;
  do {
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    cVar2 = *pcVar11;
    pcVar11 = pcVar11 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_GS_MENU_0069ffac,~uVar9 - 1);
  iVar4 = param_1[0x23];
  local_4 = 7;
  uVar3 = FUN_00535f40(5,local_18c);
  *(undefined4 *)(iVar4 + 0x14) = uVar3;
  local_4 = 0xffffffff;
  FUN_004040a0(1);
  iVar4 = DAT_006c8de0;
  if (DAT_006c8de0 == 0) {
    iVar4 = FUN_0055b280();
  }
  if (*(int *)(iVar4 + 0xd8) == 0) {
    FUN_00409810(&DAT_006b3f70,&local_18d);
    local_4 = 8;
    pcVar5 = (code *)FUN_005a07f0(s_m_BitmapMgr_0068eb4c,s___AdamSource_AdamEngine_h_0068eb58,0x188,
                                  local_14c);
    (*pcVar5)();
    local_4 = 0xffffffff;
    FUN_004040a0(1);
  }
  piVar6 = (int *)FUN_0050d730(&local_17c,&DAT_006ba038);
  local_4 = 9;
  if (param_1[0x37] != *piVar6) {
    if (param_1[0x37] != 0) {
      FUN_004098d0();
    }
    param_1[0x37] = *piVar6;
    FUN_005844b0();
  }
  local_4 = 0xffffffff;
  FUN_0057d310();
  if (param_1[0x37] == 0) {
    local_18c[0] = local_18d;
    FUN_004040a0(0);
    uVar9 = 0xffffffff;
    pcVar11 = &DAT_006b3f70;
    do {
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      cVar2 = *pcVar11;
      pcVar11 = pcVar11 + 1;
    } while (cVar2 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar9 - 1);
    local_4 = 10;
    pcVar5 = (code *)FUN_005a07f0(s_m_BlackBitmapHandle_IsNotNull____0069ff88,
                                  s_D__Work_RCHorror_AdamSource_Adam_0069fb00,0x1cc,local_18c);
    (*pcVar5)();
    local_4 = 0xffffffff;
    FUN_004040a0(1);
  }
  FUN_00519ef0();
  iVar4 = FUN_004337e0();
  if (iVar4 == 0) {
    if (param_1[0x2a] == 0) {
      local_17c = 1.0;
      iVar4 = DAT_006c8de0;
      if (DAT_006c8de0 == 0) {
        iVar4 = FUN_0055b280();
      }
      if (*(char *)(iVar4 + 0x125) == '\0') {
        FUN_00409810(&DAT_006b3f70,&local_18d);
        local_4 = 0xb;
        pcVar5 = (code *)FUN_005a07f0(s_m_Initialized_00691bb0,s___AdamSource_AdamEngine_h_0068eb58,
                                      0x127,local_14c);
        (*pcVar5)();
        local_4 = 0xffffffff;
        FUN_004040a0(1);
      }
      if (*(int *)(iVar4 + 0x40) < 0x141) {
        local_17c = 2.0;
      }
      else {
        iVar4 = DAT_006c8de0;
        if (DAT_006c8de0 == 0) {
          iVar4 = FUN_0055b280();
        }
        if (*(char *)(iVar4 + 0x125) == '\0') {
          FUN_00409810(&DAT_006b3f70,&local_18d);
          local_4 = 0xc;
          pcVar5 = (code *)FUN_005a07f0(s_m_Initialized_00691bb0,
                                        s___AdamSource_AdamEngine_h_0068eb58,0x127,local_14c);
          (*pcVar5)();
          local_4 = 0xffffffff;
          FUN_004040a0(1);
        }
        if (*(int *)(iVar4 + 0x40) < 0x191) {
          local_17c = 1.5;
        }
      }
      pcVar11 = DAT_006b996c;
      if (DAT_006b996c == (char *)0x0) {
        pcVar11 = "";
      }
      local_18c[0] = local_18d;
      FUN_004040a0(0);
      uVar9 = 0xffffffff;
      pcVar12 = pcVar11;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        cVar2 = *pcVar12;
        pcVar12 = pcVar12 + 1;
      } while (cVar2 != '\0');
      FUN_004040f0(pcVar11,~uVar9 - 1);
      local_4 = 0xd;
      iVar4 = DAT_006c8de0;
      if (DAT_006c8de0 == 0) {
        iVar4 = FUN_0055b280();
      }
      if (*(char *)(iVar4 + 0x125) == '\0') {
        FUN_00409810(&DAT_006b3f70,&local_18d);
        local_4._0_1_ = 0xe;
        pcVar5 = (code *)FUN_005a07f0(s_m_Initialized_00691bb0,s___AdamSource_AdamEngine_h_0068eb58,
                                      0x12d,acStack_15c);
        (*pcVar5)();
        local_4 = CONCAT31(local_4._1_3_,0xd);
        FUN_004040a0(1);
      }
      uStack_160 = *(undefined4 *)(iVar4 + 0x44);
      uVar3 = __ftol(0,1);
      piVar6 = (int *)FUN_004b09f0(&uStack_164,local_18c,uVar3);
      local_4._0_1_ = 0xf;
      if (param_1[0x2a] != *piVar6) {
        if (param_1[0x2a] != 0) {
          FUN_004098d0();
        }
        param_1[0x2a] = *piVar6;
        FUN_005844b0();
      }
      local_4 = CONCAT31(local_4._1_3_,0xd);
      FUN_0057d310();
      local_4 = 0xffffffff;
      FUN_004040a0(1);
    }
    if (param_1[0x203] == 0) {
      pcVar11 = DAT_006b996c;
      if (DAT_006b996c == (char *)0x0) {
        pcVar11 = "";
      }
      local_18c[0] = local_18d;
      FUN_004040a0(0);
      uVar9 = 0xffffffff;
      pcVar12 = pcVar11;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        cVar2 = *pcVar12;
        pcVar12 = pcVar12 + 1;
      } while (cVar2 != '\0');
      FUN_004040f0(pcVar11,~uVar9 - 1);
      local_4 = 0x10;
      iVar4 = DAT_006c8de0;
      if (DAT_006c8de0 == 0) {
        iVar4 = FUN_0055b280();
      }
      if (*(char *)(iVar4 + 0x125) == '\0') {
        FUN_00409810(&DAT_006b3f70,&local_18d);
        local_4._0_1_ = 0x11;
        pcVar5 = (code *)FUN_005a07f0(s_m_Initialized_00691bb0,s___AdamSource_AdamEngine_h_0068eb58,
                                      0x12d,acStack_15c);
        (*pcVar5)();
        local_4 = CONCAT31(local_4._1_3_,0x10);
        FUN_004040a0(1);
      }
      uStack_164 = *(undefined4 *)(iVar4 + 0x44);
      uVar3 = __ftol(0,1);
      piVar6 = (int *)FUN_004b09f0(&uStack_160,local_18c,uVar3);
      local_4._0_1_ = 0x12;
      if (param_1[0x203] != *piVar6) {
        if (param_1[0x203] != 0) {
          FUN_004098d0();
        }
        param_1[0x203] = *piVar6;
        FUN_005844b0();
      }
      local_4 = CONCAT31(local_4._1_3_,0x10);
      FUN_0057d310();
      local_4 = 0xffffffff;
      FUN_004040a0(1);
    }
    if (param_1[0x204] == 0) {
      pcVar11 = DAT_006b996c;
      if (DAT_006b996c == (char *)0x0) {
        pcVar11 = "";
      }
      local_18c[0] = local_18d;
      FUN_004040a0(0);
      uVar9 = 0xffffffff;
      pcVar12 = pcVar11;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        cVar2 = *pcVar12;
        pcVar12 = pcVar12 + 1;
      } while (cVar2 != '\0');
      FUN_004040f0(pcVar11,~uVar9 - 1);
      local_4 = 0x13;
      iVar4 = DAT_006c8de0;
      if (DAT_006c8de0 == 0) {
        iVar4 = FUN_0055b280();
      }
      if (*(char *)(iVar4 + 0x125) == '\0') {
        FUN_00409810(&DAT_006b3f70,&local_18d);
        local_4._0_1_ = 0x14;
        pcVar5 = (code *)FUN_005a07f0(s_m_Initialized_00691bb0,s___AdamSource_AdamEngine_h_0068eb58,
                                      0x12d,acStack_15c);
        (*pcVar5)();
        local_4 = CONCAT31(local_4._1_3_,0x13);
        FUN_004040a0(1);
      }
      uStack_164 = *(undefined4 *)(iVar4 + 0x44);
      uVar3 = __ftol(0,1);
      piVar6 = (int *)FUN_004b09f0(&uStack_160,local_18c,uVar3);
      local_4._0_1_ = 0x15;
      if (param_1[0x204] != *piVar6) {
        if (param_1[0x204] != 0) {
          FUN_004098d0();
        }
        param_1[0x204] = *piVar6;
        FUN_005844b0();
      }
      local_4 = CONCAT31(local_4._1_3_,0x13);
      FUN_0057d310();
      local_4 = 0xffffffff;
      FUN_004040a0(1);
    }
    if (param_1[0x205] == 0) {
      pcVar11 = DAT_006b997c;
      if (DAT_006b997c == (char *)0x0) {
        pcVar11 = "";
      }
      local_18c[0] = local_18d;
      FUN_004040a0(0);
      uVar9 = 0xffffffff;
      pcVar12 = pcVar11;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        cVar2 = *pcVar12;
        pcVar12 = pcVar12 + 1;
      } while (cVar2 != '\0');
      FUN_004040f0(pcVar11,~uVar9 - 1);
      local_4 = 0x16;
      iVar4 = DAT_006c8de0;
      if (DAT_006c8de0 == 0) {
        iVar4 = FUN_0055b280();
      }
      if (*(char *)(iVar4 + 0x125) == '\0') {
        FUN_00409810(&DAT_006b3f70,&local_18d);
        local_4._0_1_ = 0x17;
        pcVar5 = (code *)FUN_005a07f0(s_m_Initialized_00691bb0,s___AdamSource_AdamEngine_h_0068eb58,
                                      0x12d,acStack_15c);
        (*pcVar5)();
        local_4 = CONCAT31(local_4._1_3_,0x16);
        FUN_004040a0(1);
      }
      uStack_164 = *(undefined4 *)(iVar4 + 0x44);
      uVar3 = __ftol(0,1);
      piVar6 = (int *)FUN_004b09f0(&uStack_160,local_18c,uVar3);
      iVar4 = param_1[0x205];
      local_4._0_1_ = 0x18;
      if (iVar4 != *piVar6) {
        if ((iVar4 != 0) &&
           (iVar7 = *(int *)(iVar4 + 0x14) + -1, *(int *)(iVar4 + 0x14) = iVar7, iVar7 == 0)) {
          FUN_005abfc0(0);
        }
        param_1[0x205] = *piVar6;
        FUN_005844b0();
      }
      local_4 = CONCAT31(local_4._1_3_,0x16);
      FUN_0057d310();
      local_4 = 0xffffffff;
      FUN_004040a0(1);
    }
  }
  local_14c[0] = local_18d;
  FUN_004040a0(0);
  uVar9 = 0xffffffff;
  pcVar11 = s_General_00690810;
  do {
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    cVar2 = *pcVar11;
    pcVar11 = pcVar11 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_General_00690810,~uVar9 - 1);
  local_4 = 0x19;
  acStack_11c[0] = local_18d;
  FUN_004040a0(0);
  uVar9 = 0xffffffff;
  pcVar11 = &DAT_0069ff7c;
  do {
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    cVar2 = *pcVar11;
    pcVar11 = pcVar11 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(&DAT_0069ff7c,~uVar9 - 1);
  local_4._0_1_ = 0x1a;
  uVar3 = FUN_00436f90(auStack_fc);
  local_4._0_1_ = 0x1b;
  iVar4 = FUN_005acaf0(acStack_11c,local_14c,&DAT_0069ff78,uVar3,0);
  local_18c[0] = *(char *)(iVar4 + 0x14);
  local_4._0_1_ = 0x1c;
  FUN_004040a0(0);
  FUN_0040cc00(iVar4 + 0x14,0,0xffffffff);
  local_4._0_1_ = 0x1d;
  acStack_12c[0] = local_18c[0];
  FUN_004040a0(0);
  FUN_0040cc00(local_18c,0,0xffffffff);
  local_4._0_1_ = 0x23;
  FUN_004040a0(1);
  local_4._0_1_ = 0x22;
  FUN_005acca0();
  local_4._0_1_ = 0x21;
  FUN_004040a0(1);
  local_4._0_1_ = 0x20;
  FUN_004040a0(1);
  local_4._0_1_ = 0x1f;
  FUN_004040a0(1);
  acStack_178[0] = local_18d;
  FUN_004040a0(0);
  uVar9 = 0xffffffff;
  pcVar11 = &DAT_0069ff74;
  do {
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    cVar2 = *pcVar11;
    pcVar11 = pcVar11 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(&DAT_0069ff74,~uVar9 - 1);
  local_4._0_1_ = 0x24;
  iVar4 = FUN_005affe0(acStack_12c,acStack_178);
  local_18d = iVar4 == 1;
  local_4._0_1_ = 0x1f;
  FUN_004040a0(1);
  if (local_18d == '\0') {
    acStack_178[0] = local_18d;
    FUN_004040a0(0);
    uVar9 = 0xffffffff;
    pcVar11 = &DAT_0069ff70;
    do {
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      cVar2 = *pcVar11;
      pcVar11 = pcVar11 + 1;
    } while (cVar2 != '\0');
    FUN_004040f0(&DAT_0069ff70,~uVar9 - 1);
    local_4._0_1_ = 0x25;
    iVar4 = FUN_005affe0(acStack_12c,acStack_178);
    local_18d = iVar4 == 1;
    local_4._0_1_ = 0x1f;
    FUN_004040a0(1);
    if (local_18d != '\0') {
      uVar3 = 0;
      goto LAB_00528b2c;
    }
    acStack_178[0] = local_18d;
    FUN_004040a0(0);
    uVar9 = 0xffffffff;
    pcVar11 = (char *)&DAT_0069ff78;
    do {
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      cVar2 = *pcVar11;
      pcVar11 = pcVar11 + 1;
    } while (cVar2 != '\0');
    FUN_004040f0(&DAT_0069ff78,~uVar9 - 1);
    local_4._0_1_ = 0x26;
    iVar4 = FUN_005affe0(acStack_12c,acStack_178);
    local_18d = iVar4 == 1;
    local_4._0_1_ = 0x1f;
    FUN_004040a0(1);
    if (local_18d != '\0') {
      uVar3 = 2;
      goto LAB_00528b2c;
    }
    acStack_178[0] = local_18d;
    FUN_004040a0(0);
    uVar9 = 0xffffffff;
    pcVar11 = (char *)&DAT_0069ff6c;
    do {
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      cVar2 = *pcVar11;
      pcVar11 = pcVar11 + 1;
    } while (cVar2 != '\0');
    FUN_004040f0(&DAT_0069ff6c,~uVar9 - 1);
    local_4._0_1_ = 0x27;
    iVar4 = FUN_005affe0(acStack_12c,acStack_178);
    local_18d = iVar4 == 1;
    local_4._0_1_ = 0x1f;
    FUN_004040a0(1);
    if (local_18d != '\0') {
      uVar3 = 3;
      goto LAB_00528b2c;
    }
    acStack_178[0] = local_18d;
    FUN_004040a0(0);
    uVar9 = 0xffffffff;
    pcVar11 = (char *)&DAT_0069ff68;
    do {
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      cVar2 = *pcVar11;
      pcVar11 = pcVar11 + 1;
    } while (cVar2 != '\0');
    FUN_004040f0(&DAT_0069ff68,~uVar9 - 1);
    local_4._0_1_ = 0x28;
    iVar4 = FUN_005affe0(acStack_12c,acStack_178);
    local_18d = iVar4 == 1;
    local_4._0_1_ = 0x1f;
    FUN_004040a0(1);
    if (local_18d != '\0') {
      uVar3 = 4;
      goto LAB_00528b2c;
    }
    acStack_178[0] = local_18d;
    FUN_004040a0(0);
    uVar9 = 0xffffffff;
    pcVar11 = (char *)&DAT_0069ff64;
    do {
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      cVar2 = *pcVar11;
      pcVar11 = pcVar11 + 1;
    } while (cVar2 != '\0');
    FUN_004040f0(&DAT_0069ff64,~uVar9 - 1);
    local_4._0_1_ = 0x29;
    iVar4 = FUN_005affe0(acStack_12c,acStack_178);
    local_18d = iVar4 == 1;
    local_4._0_1_ = 0x1f;
    FUN_004040a0(1);
    if (local_18d != '\0') {
      uVar3 = 5;
      goto LAB_00528b2c;
    }
    if (DAT_006b915c == 0) {
      FUN_004bc480();
    }
    puVar8 = puStack_128;
    if (puStack_128 == (undefined1 *)0x0) {
      puVar8 = &DAT_0064a3b4;
    }
    uVar3 = FUN_005ae390(acStack_15c,s_Unknown_language___s___Using_def_0069feb8,puVar8);
    local_4._0_1_ = 0x2a;
    FUN_004c43b0(uVar3);
    local_4._0_1_ = 0x1f;
    FUN_004040a0(1);
  }
  uVar3 = 1;
LAB_00528b2c:
  FUN_00529a50(uVar3);
  iVar4 = DAT_006c8de0;
  if (DAT_006c8de0 == 0) {
    iVar4 = FUN_0055b280();
  }
  if (*(int *)(iVar4 + 0xfc) == 0) {
    acStack_178[0] = local_18d;
    FUN_004040a0(0);
    uVar9 = 0xffffffff;
    pcVar11 = &DAT_006b3f70;
    do {
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      cVar2 = *pcVar11;
      pcVar11 = pcVar11 + 1;
    } while (cVar2 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar9 - 1);
    local_4._0_1_ = 0x2b;
    pcVar5 = (code *)FUN_005a07f0(s_m_SoundSystem_0068f8ec,s___AdamSource_AdamEngine_h_0068eb58,399,
                                  acStack_178);
    (*pcVar5)();
    local_4._0_1_ = 0x1f;
    FUN_004040a0(1);
  }
  FUN_0054e120(0x3f666666);
  acStack_15c[0] = local_18d;
  FUN_004040a0(0);
  uVar9 = 0xffffffff;
  pcVar11 = s_Sound_0069aec4;
  do {
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    cVar2 = *pcVar11;
    pcVar11 = pcVar11 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_Sound_0069aec4,~uVar9 - 1);
  acStack_13c[0] = local_18d;
  local_4._0_1_ = 0x2c;
  FUN_004040a0(0);
  uVar9 = 0xffffffff;
  pcVar11 = s_MusicVolume_0069feac;
  do {
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    cVar2 = *pcVar11;
    pcVar11 = pcVar11 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_MusicVolume_0069feac,~uVar9 - 1);
  local_4._0_1_ = 0x2d;
  uVar3 = FUN_0043b0a0(auStack_10c);
  local_4._0_1_ = 0x2e;
  iVar4 = FUN_005a3d10(acStack_13c,acStack_15c,0x42a00000,0,0x42c80000,uVar3);
  local_4 = CONCAT31(local_4._1_3_,0x2f);
  if (*(float *)(iVar4 + 0x60) == 0.0) {
    fVar13 = (float10)FUN_005ad390(iVar4 + 0x14,&local_18d);
    *(float *)(iVar4 + 0x60) = (float)fVar13;
    local_17c = (float)fVar13;
  }
  else {
    local_17c = *(float *)(iVar4 + 0x60);
  }
  iVar4 = DAT_006c8de0;
  if (DAT_006c8de0 == 0) {
    iVar4 = FUN_0055b280();
  }
  if (*(int *)(iVar4 + 0xfc) == 0) {
    acStack_178[0] = local_18d;
    FUN_004040a0(0);
    uVar9 = 0xffffffff;
    pcVar11 = &DAT_006b3f70;
    do {
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      cVar2 = *pcVar11;
      pcVar11 = pcVar11 + 1;
    } while (cVar2 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar9 - 1);
    local_4._0_1_ = 0x30;
    pcVar5 = (code *)FUN_005a07f0(s_m_SoundSystem_0068f8ec,s___AdamSource_AdamEngine_h_0068eb58,399,
                                  acStack_178);
    (*pcVar5)();
    local_4 = CONCAT31(local_4._1_3_,0x2f);
    FUN_004040a0(1);
  }
  FUN_0054e5f0(local_17c * 0.01);
  local_4._0_1_ = 0x2e;
  FUN_005a3ce0();
  local_4._0_1_ = 0x2d;
  FUN_004040a0(1);
  local_4._0_1_ = 0x2c;
  FUN_004040a0(1);
  local_4 = CONCAT31(local_4._1_3_,0x1f);
  FUN_004040a0(1);
  acStack_178[0] = local_18d;
  FUN_004040a0(0);
  uVar9 = 0xffffffff;
  pcVar11 = s_Sound_0069aec4;
  do {
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    cVar2 = *pcVar11;
    pcVar11 = pcVar11 + 1;
  } while (cVar2 != '\0');
  uVar9 = ~uVar9 - 1;
  cVar2 = FUN_00401940(uVar9,1);
  if (cVar2 != '\0') {
    pcVar11 = s_Sound_0069aec4;
    pcVar12 = pcStack_174;
    for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
      *(undefined4 *)pcVar12 = *(undefined4 *)pcVar11;
      pcVar11 = pcVar11 + 4;
      pcVar12 = pcVar12 + 4;
    }
    for (uVar10 = uVar9 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
      *pcVar12 = *pcVar11;
      pcVar11 = pcVar11 + 1;
      pcVar12 = pcVar12 + 1;
    }
    FUN_00404190(uVar9);
  }
  local_4 = CONCAT31(local_4._1_3_,0x31);
  acStack_13c[0] = local_18d;
  FUN_004040a0(0);
  uVar9 = 0xffffffff;
  pcVar11 = s_SoundVolume_0069fea0;
  do {
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    cVar2 = *pcVar11;
    pcVar11 = pcVar11 + 1;
  } while (cVar2 != '\0');
  uVar9 = ~uVar9 - 1;
  cVar2 = FUN_00401940(uVar9,1);
  if (cVar2 != '\0') {
    pcVar11 = s_SoundVolume_0069fea0;
    for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
      *(undefined4 *)pcStack_138 = *(undefined4 *)pcVar11;
      pcVar11 = pcVar11 + 4;
      pcStack_138 = pcStack_138 + 4;
    }
    for (uVar10 = uVar9 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
      *pcStack_138 = *pcVar11;
      pcVar11 = pcVar11 + 1;
      pcStack_138 = pcStack_138 + 1;
    }
    FUN_00404190(uVar9);
  }
  local_4._0_1_ = 0x32;
  uVar3 = FUN_0043b0a0(auStack_10c);
  local_4._0_1_ = 0x33;
  iVar4 = FUN_005a3d10(acStack_13c,acStack_178,0x42a00000,0,0x42c80000,uVar3);
  local_4 = CONCAT31(local_4._1_3_,0x34);
  if (*(float *)(iVar4 + 0x60) == 0.0) {
    fVar13 = (float10)FUN_005ad390(iVar4 + 0x14,&cStack_165);
    *(float *)(iVar4 + 0x60) = (float)fVar13;
    local_17c = (float)fVar13;
  }
  else {
    local_17c = *(float *)(iVar4 + 0x60);
  }
  iVar4 = DAT_006c8de0;
  if (DAT_006c8de0 == 0) {
    iVar4 = FUN_0055b280();
  }
  if (*(int *)(iVar4 + 0xfc) == 0) {
    acStack_15c[0] = cStack_165;
    FUN_004040a0(0);
    uVar9 = 0xffffffff;
    pcVar11 = &DAT_006b3f70;
    do {
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      cVar2 = *pcVar11;
      pcVar11 = pcVar11 + 1;
    } while (cVar2 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar9 - 1);
    local_4._0_1_ = 0x35;
    pcVar5 = (code *)FUN_005a07f0(s_m_SoundSystem_0068f8ec,s___AdamSource_AdamEngine_h_0068eb58,399,
                                  acStack_15c);
    (*pcVar5)();
    local_4 = CONCAT31(local_4._1_3_,0x34);
    FUN_004040a0(1);
  }
  FUN_0054e490(local_17c * 0.01);
  local_4._0_1_ = 0x33;
  FUN_005a3ce0();
  local_4._0_1_ = 0x32;
  FUN_004040a0(1);
  local_4._0_1_ = 0x31;
  FUN_004040a0(1);
  local_4 = CONCAT31(local_4._1_3_,0x1f);
  if (pcStack_174 != (char *)0x0) {
    cVar2 = pcStack_174[-1];
    if ((cVar2 == '\0') || (cVar2 == -1)) {
      FUN_005fe5f0(pcStack_174 + -1);
    }
    else {
      pcStack_174[-1] = cVar2 + -1;
    }
  }
  (**(code **)(*param_1 + 0xc))();
  (**(code **)(*param_1 + 4))();
  FUN_00535a20();
  if (puStack_128 != (undefined1 *)0x0) {
    cVar2 = puStack_128[-1];
    if ((cVar2 != '\0') && (cVar2 != -1)) {
      puStack_128[-1] = cVar2 + -1;
      ExceptionList = pvStack_c;
      return;
    }
    FUN_005fe5f0(puStack_128 + -1);
  }
  ExceptionList = pvStack_c;
  return;
}

