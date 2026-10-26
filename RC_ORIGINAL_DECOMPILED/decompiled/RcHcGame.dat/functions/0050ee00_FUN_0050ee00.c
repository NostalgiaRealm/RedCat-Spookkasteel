/*
 * FUN_0050ee00 at 0050ee00
 * undefined FUN_0050ee00(void)
 * Address ranges: 0050ee00-00511277
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __fastcall FUN_0050ee00(undefined4 *param_1)

{
  undefined1 uVar1;
  char cVar2;
  undefined4 uVar3;
  code *pcVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  char *pcVar11;
  char *pcVar12;
  float10 fVar13;
  undefined4 *puVar14;
  float fVar15;
  undefined1 uStack_4b2;
  undefined1 local_4b0 [16];
  undefined1 auStack_4a0 [16];
  undefined1 local_490 [4];
  char *pcStack_48c;
  undefined1 local_480 [4];
  char *pcStack_47c;
  uint uStack_478;
  int iStack_470;
  float fStack_46c;
  undefined4 *puStack_468;
  undefined1 uStack_461;
  undefined1 uStack_460;
  undefined1 uStack_45f;
  undefined1 uStack_45e;
  undefined1 uStack_45d;
  undefined1 auStack_45c [4];
  int iStack_458;
  undefined4 uStack_454;
  undefined4 uStack_450;
  undefined1 auStack_44c [4];
  int iStack_448;
  undefined4 uStack_444;
  undefined4 uStack_440;
  undefined1 auStack_43c [16];
  int iStack_42c;
  int iStack_428;
  float fStack_424;
  float fStack_420;
  float fStack_41c;
  float fStack_418;
  undefined4 uStack_414;
  undefined4 uStack_410;
  undefined4 uStack_40c;
  undefined4 uStack_408;
  undefined1 auStack_404 [16];
  undefined1 auStack_3f4 [16];
  undefined1 auStack_3e4 [16];
  void *pvStack_3d4;
  undefined4 *local_3d0;
  undefined1 auStack_3cc [132];
  undefined1 auStack_348 [828];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00637457;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  local_3d0 = param_1;
  FUN_005ab4a0();
  local_4 = 0;
  FUN_004040a0();
  iVar8 = -1;
  pcVar11 = &DAT_006b3f70;
  do {
    if (iVar8 == 0) break;
    iVar8 = iVar8 + -1;
    cVar2 = *pcVar11;
    pcVar11 = pcVar11 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(&DAT_006b3f70);
  local_4._0_1_ = 1;
  FUN_004040a0();
  iVar8 = -1;
  pcVar11 = s_FadeTime_00693188;
  do {
    if (iVar8 == 0) break;
    iVar8 = iVar8 + -1;
    cVar2 = *pcVar11;
    pcVar11 = pcVar11 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_FadeTime_00693188);
  local_4._0_1_ = 2;
  uVar3 = FUN_004a9bc0();
  local_4._0_1_ = 3;
  iVar8 = FUN_005a3d10(local_490,uVar3,0x3e4ccccd,0,0x41200000);
  local_4._0_1_ = 4;
  if (*(float *)(iVar8 + 0x60) == 0.0) {
    fVar13 = (float10)FUN_005ad390(iVar8 + 0x14);
    *(float *)(iVar8 + 0x60) = (float)fVar13;
  }
  uVar3 = __ftol();
  local_4._0_1_ = 3;
  FUN_005a3ce0();
  local_4._0_1_ = 2;
  FUN_004040a0();
  local_4._0_1_ = 1;
  FUN_004040a0();
  local_4._0_1_ = 0;
  FUN_004040a0();
  param_1[5] = uVar3;
  FUN_004040a0();
  iVar8 = -1;
  pcVar11 = &DAT_006b3f70;
  do {
    if (iVar8 == 0) break;
    iVar8 = iVar8 + -1;
    cVar2 = *pcVar11;
    pcVar11 = pcVar11 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(&DAT_006b3f70);
  local_4._0_1_ = 5;
  FUN_004040a0();
  iVar8 = -1;
  pcVar11 = s_OpenTime_0069ed9c;
  do {
    if (iVar8 == 0) break;
    iVar8 = iVar8 + -1;
    cVar2 = *pcVar11;
    pcVar11 = pcVar11 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_OpenTime_0069ed9c);
  local_4._0_1_ = 6;
  uVar3 = FUN_004a9bc0();
  local_4._0_1_ = 7;
  iVar8 = FUN_005a3d10(local_490,uVar3,0x3e4ccccd,0,0x41200000);
  local_4._0_1_ = 8;
  if (*(float *)(iVar8 + 0x60) == 0.0) {
    fVar13 = (float10)FUN_005ad390(iVar8 + 0x14);
    *(float *)(iVar8 + 0x60) = (float)fVar13;
  }
  uVar3 = __ftol();
  local_4._0_1_ = 7;
  FUN_005a3ce0();
  local_4._0_1_ = 6;
  FUN_004040a0();
  local_4._0_1_ = 5;
  FUN_004040a0();
  local_4._0_1_ = 0;
  FUN_004040a0();
  param_1[6] = uVar3;
  FUN_004a9900(param_1);
  piVar7 = param_1 + 0x5d;
  *(undefined1 *)(param_1 + 0x5c) = 1;
  *piVar7 = 0;
  puStack_468 = param_1 + 0x5e;
  local_4._0_1_ = 10;
  FUN_0044e4a0();
  local_4._0_1_ = 0xb;
  FUN_00514e80();
  puStack_468 = param_1 + 0x62;
  local_4._0_1_ = 0xc;
  FUN_0044e4a0();
  local_4._0_1_ = 0xd;
  FUN_00514e80();
  puStack_468 = param_1 + 0x66;
  local_4._0_1_ = 0xe;
  FUN_0044e4a0();
  local_4._0_1_ = 0xf;
  FUN_00514da0();
  puStack_468 = param_1 + 0x6a;
  local_4._0_1_ = 0x10;
  FUN_0044e4a0();
  local_4._0_1_ = 0x11;
  FUN_00514e80();
  param_1[0x6e] = 8;
  param_1[0x6f] = 0;
  param_1[0x70] = 0;
  puStack_468 = param_1 + 0x7a;
  local_4._0_1_ = 0x14;
  param_1[0x71] = 0;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  param_1[0x74] = 0;
  param_1[0x75] = 0x3f800000;
  *(undefined1 *)(param_1 + 0x76) = 0;
  *(undefined1 *)((int)param_1 + 0x1d9) = 0;
  *(undefined1 *)((int)param_1 + 0x1da) = 0;
  *(undefined1 *)((int)param_1 + 0x1db) = 0;
  param_1[0x77] = 0;
  param_1[0x78] = 0;
  param_1[0x79] = 0;
  FUN_0044e4a0();
  local_4._0_1_ = 0x15;
  FUN_00514f20();
  param_1[0x7e] = 0;
  param_1[0x87] = 0;
  local_4._0_1_ = 0x16;
  *(undefined1 *)(param_1 + 0x88) = uStack_4b2;
  FUN_004040a0();
  iVar8 = -1;
  pcVar11 = &DAT_006b3f70;
  do {
    if (iVar8 == 0) break;
    iVar8 = iVar8 + -1;
    cVar2 = *pcVar11;
    pcVar11 = pcVar11 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(&DAT_006b3f70);
  param_1[0x8c] = 0;
  *param_1 = &PTR_FUN_0064f55c;
  local_4._0_1_ = 0x17;
  iVar8 = DAT_006b915c;
  if (DAT_006b915c == 0) {
    iVar8 = FUN_004bc480();
  }
  if (*(int *)(iVar8 + 0x3a4) == 0) {
    FUN_00409810(&DAT_006b3f70);
    local_4._0_1_ = 0x18;
    pcVar4 = (code *)FUN_005a07f0(s_m_Game_0068e584,s___AdamSource_AdamApplication_h_0068e58c,0x130)
    ;
    (*pcVar4)();
    local_4._0_1_ = 0x17;
    FUN_004040a0();
  }
  FUN_00453d20();
  local_4._0_1_ = 0x19;
  iVar8 = DAT_006c8de0;
  if (DAT_006c8de0 == 0) {
    iVar8 = FUN_0055b280();
  }
  if (*(int *)(iVar8 + 0xd8) == 0) {
    FUN_00409810(&DAT_006b3f70);
    local_4._0_1_ = 0x1a;
    pcVar4 = (code *)FUN_005a07f0(s_m_BitmapMgr_0068eb4c,s___AdamSource_AdamEngine_h_0068eb58,0x188)
    ;
    (*pcVar4)();
    local_4._0_1_ = 0x19;
    FUN_004040a0();
  }
  piVar5 = (int *)FUN_0050d730(&iStack_470);
  iVar8 = *piVar7;
  local_4._0_1_ = 0x1b;
  if (iVar8 != *piVar5) {
    if ((iVar8 != 0) &&
       (iVar6 = *(int *)(iVar8 + 0x14) + -1, *(int *)(iVar8 + 0x14) = iVar6, iVar6 == 0)) {
      FUN_005abfc0();
    }
    *piVar7 = *piVar5;
    FUN_005844b0();
  }
  local_4 = CONCAT31(local_4._1_3_,0x19);
  FUN_0057d310();
  iVar8 = DAT_006c8de0;
  if (DAT_006c8de0 == 0) {
    iVar8 = FUN_0055b280();
  }
  if (*(int *)(iVar8 + 0xd8) == 0) {
    FUN_00409810(&DAT_006b3f70);
    local_4._0_1_ = 0x1c;
    pcVar4 = (code *)FUN_005a07f0(s_m_BitmapMgr_0068eb4c,s___AdamSource_AdamEngine_h_0068eb58,0x188)
    ;
    (*pcVar4)();
    local_4 = CONCAT31(local_4._1_3_,0x19);
    FUN_004040a0();
  }
  FUN_0050d730(&fStack_46c);
  puStack_468 = (undefined4 *)&stack0xfffffb38;
  if (fStack_46c != 0.0) {
    *(int *)((int)fStack_46c + 0x14) = *(int *)((int)fStack_46c + 0x14) + 1;
  }
  local_4._0_1_ = 0x1e;
  uVar3 = FUN_005ae390(auStack_43c,s_default_0069c1a4);
  local_4._0_1_ = 0x20;
  FUN_005127d0(uVar3);
  local_4._0_1_ = 0x1d;
  FUN_004040a0();
  local_4._0_1_ = 0x19;
  FUN_0057d310();
  uVar3 = FUN_005a1d60();
  FUN_0040cad0(auStack_45c,uVar3);
  local_4._0_1_ = 0x21;
  FUN_004040a0();
  local_4._0_1_ = 0x22;
  FUN_004040a0();
  iVar8 = -1;
  pcVar11 = s_Communicator_00695f90;
  do {
    if (iVar8 == 0) break;
    iVar8 = iVar8 + -1;
    cVar2 = *pcVar11;
    pcVar11 = pcVar11 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_Communicator_00695f90);
  local_4._0_1_ = 0x23;
  FUN_004040a0();
  iVar8 = -1;
  pcVar11 = s_ASSETS_0069ed88;
  do {
    if (iVar8 == 0) break;
    iVar8 = iVar8 + -1;
    cVar2 = *pcVar11;
    pcVar11 = pcVar11 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_ASSETS_0069ed88);
  local_4 = CONCAT31(local_4._1_3_,0x24);
  iVar8 = FUN_005ac9d0(local_490,local_480,0,auStack_45c);
  iStack_470 = *(int *)(iVar8 + 100);
  if (iStack_470 == -0x80000000) {
    iStack_470 = FUN_0060af10();
    *(int *)(iVar8 + 100) = iStack_470;
  }
  FUN_005acca0();
  local_4._0_1_ = 0x23;
  FUN_004040a0();
  local_4 = CONCAT31(local_4._1_3_,0x22);
  FUN_004040a0();
  fStack_46c = 0.0;
  if (0 < iStack_470) {
    do {
      iStack_428 = 0;
      FUN_005844b0();
      local_4._0_1_ = 0x25;
      uVar3 = FUN_005ae390(auStack_3cc,s_CommunicatorAsset_d_0069ed74);
      local_4._0_1_ = 0x26;
      FUN_0040cc00(uVar3,0);
      local_4._0_1_ = 0x25;
      FUN_004040a0();
      FUN_004040a0();
      iVar8 = -1;
      pcVar11 = s_SCREENRECT_LEFT_0069ed64;
      do {
        if (iVar8 == 0) break;
        iVar8 = iVar8 + -1;
        cVar2 = *pcVar11;
        pcVar11 = pcVar11 + 1;
      } while (cVar2 != '\0');
      FUN_004040f0(s_SCREENRECT_LEFT_0069ed64);
      local_4._0_1_ = 0x27;
      iVar8 = FUN_005a3d10(local_490,auStack_44c,0,0,0x44200000);
      local_4._0_1_ = 0x28;
      if (*(float *)(iVar8 + 0x60) == 0.0) {
        fVar13 = (float10)FUN_005ad390(iVar8 + 0x14);
        *(float *)(iVar8 + 0x60) = (float)fVar13;
      }
      else {
        fVar13 = (float10)*(float *)(iVar8 + 0x60);
      }
      fStack_424 = (float)fVar13;
      local_4._0_1_ = 0x27;
      FUN_005a3ce0();
      local_4._0_1_ = 0x25;
      FUN_004040a0();
      FUN_004040a0();
      iVar8 = -1;
      pcVar11 = s_SCREENRECT_TOP_0069ed54;
      do {
        if (iVar8 == 0) break;
        iVar8 = iVar8 + -1;
        cVar2 = *pcVar11;
        pcVar11 = pcVar11 + 1;
      } while (cVar2 != '\0');
      FUN_004040f0(s_SCREENRECT_TOP_0069ed54);
      local_4._0_1_ = 0x29;
      iVar8 = FUN_005a3d10(local_480,auStack_44c,0,0,0x43f00000);
      local_4._0_1_ = 0x2a;
      if (*(float *)(iVar8 + 0x60) == 0.0) {
        fVar13 = (float10)FUN_005ad390(iVar8 + 0x14);
        *(float *)(iVar8 + 0x60) = (float)fVar13;
      }
      else {
        fVar13 = (float10)*(float *)(iVar8 + 0x60);
      }
      fStack_41c = (float)fVar13;
      local_4._0_1_ = 0x29;
      FUN_005a3ce0();
      local_4._0_1_ = 0x25;
      FUN_004040a0();
      FUN_004040a0();
      iVar8 = -1;
      pcVar11 = s_SCREENRECT_RIGHT_0069ed40;
      do {
        if (iVar8 == 0) break;
        iVar8 = iVar8 + -1;
        cVar2 = *pcVar11;
        pcVar11 = pcVar11 + 1;
      } while (cVar2 != '\0');
      FUN_004040f0(s_SCREENRECT_RIGHT_0069ed40);
      local_4._0_1_ = 0x2b;
      iVar8 = FUN_005a3d10(auStack_3e4,auStack_44c,0,0,0x44200000);
      local_4._0_1_ = 0x2c;
      if (*(float *)(iVar8 + 0x60) == 0.0) {
        fVar13 = (float10)FUN_005ad390(iVar8 + 0x14);
        *(float *)(iVar8 + 0x60) = (float)fVar13;
      }
      else {
        fVar13 = (float10)*(float *)(iVar8 + 0x60);
      }
      fStack_420 = (float)fVar13;
      local_4._0_1_ = 0x2b;
      FUN_005a3ce0();
      local_4._0_1_ = 0x25;
      FUN_004040a0();
      auStack_3f4[0] = uStack_45e;
      FUN_004040a0();
      iVar8 = -1;
      pcVar11 = s_SCREENRECT_BOTTOM_0069ed2c;
      do {
        if (iVar8 == 0) break;
        iVar8 = iVar8 + -1;
        cVar2 = *pcVar11;
        pcVar11 = pcVar11 + 1;
      } while (cVar2 != '\0');
      FUN_004040f0(s_SCREENRECT_BOTTOM_0069ed2c);
      local_4._0_1_ = 0x2d;
      iVar8 = FUN_005a3d10(auStack_3f4,auStack_44c,0,0,0x43f00000);
      local_4._0_1_ = 0x2e;
      if (*(float *)(iVar8 + 0x60) == 0.0) {
        fVar13 = (float10)FUN_005ad390(iVar8 + 0x14);
        *(float *)(iVar8 + 0x60) = (float)fVar13;
      }
      else {
        fVar13 = (float10)*(float *)(iVar8 + 0x60);
      }
      fStack_418 = (float)fVar13;
      local_4._0_1_ = 0x2d;
      FUN_005a3ce0();
      local_4._0_1_ = 0x25;
      FUN_004040a0();
      auStack_404[0] = uStack_461;
      FUN_004040a0();
      iVar8 = -1;
      pcVar11 = s_UVRECT_LEFT_0069ed20;
      do {
        if (iVar8 == 0) break;
        iVar8 = iVar8 + -1;
        cVar2 = *pcVar11;
        pcVar11 = pcVar11 + 1;
      } while (cVar2 != '\0');
      FUN_004040f0(s_UVRECT_LEFT_0069ed20);
      local_4._0_1_ = 0x2f;
      iVar8 = FUN_005a3d10(auStack_404,auStack_44c,0,0,0x44200000);
      local_4._0_1_ = 0x30;
      if (*(float *)(iVar8 + 0x60) == 0.0) {
        fVar13 = (float10)FUN_005ad390(iVar8 + 0x14);
        *(float *)(iVar8 + 0x60) = (float)fVar13;
      }
      uStack_414 = __ftol();
      local_4._0_1_ = 0x2f;
      FUN_005a3ce0();
      local_4._0_1_ = 0x25;
      FUN_004040a0();
      auStack_43c[0] = uStack_45d;
      FUN_004040a0();
      iVar8 = -1;
      pcVar11 = s_UVRECT_TOP_0069ed14;
      do {
        if (iVar8 == 0) break;
        iVar8 = iVar8 + -1;
        cVar2 = *pcVar11;
        pcVar11 = pcVar11 + 1;
      } while (cVar2 != '\0');
      FUN_004040f0(s_UVRECT_TOP_0069ed14);
      local_4._0_1_ = 0x31;
      iVar8 = FUN_005a3d10(auStack_43c,auStack_44c,0,0,0x43f00000);
      local_4._0_1_ = 0x32;
      if (*(float *)(iVar8 + 0x60) == 0.0) {
        fVar13 = (float10)FUN_005ad390(iVar8 + 0x14);
        *(float *)(iVar8 + 0x60) = (float)fVar13;
      }
      uStack_40c = __ftol();
      local_4._0_1_ = 0x31;
      FUN_005a3ce0();
      local_4._0_1_ = 0x25;
      FUN_004040a0();
      auStack_4a0[0] = uStack_460;
      FUN_004040a0();
      iVar8 = -1;
      pcVar11 = s_UVRECT_RIGHT_0069ed04;
      do {
        if (iVar8 == 0) break;
        iVar8 = iVar8 + -1;
        cVar2 = *pcVar11;
        pcVar11 = pcVar11 + 1;
      } while (cVar2 != '\0');
      FUN_004040f0(s_UVRECT_RIGHT_0069ed04);
      local_4._0_1_ = 0x33;
      iVar8 = FUN_005a3d10(auStack_4a0,auStack_44c,0,0,0x44200000);
      local_4._0_1_ = 0x34;
      if (*(float *)(iVar8 + 0x60) == 0.0) {
        fVar13 = (float10)FUN_005ad390(iVar8 + 0x14);
        *(float *)(iVar8 + 0x60) = (float)fVar13;
      }
      uStack_410 = __ftol();
      local_4._0_1_ = 0x33;
      FUN_005a3ce0();
      local_4._0_1_ = 0x25;
      FUN_004040a0();
      local_4b0[0] = uStack_45f;
      FUN_004040a0();
      iVar8 = -1;
      pcVar11 = s_UVRECT_BOTTOM_0069ecf4;
      do {
        if (iVar8 == 0) break;
        iVar8 = iVar8 + -1;
        cVar2 = *pcVar11;
        pcVar11 = pcVar11 + 1;
      } while (cVar2 != '\0');
      FUN_004040f0(s_UVRECT_BOTTOM_0069ecf4);
      local_4._0_1_ = 0x35;
      iVar8 = FUN_005a3d10(local_4b0,auStack_44c,0,0,0x43f00000);
      local_4._0_1_ = 0x36;
      if (*(float *)(iVar8 + 0x60) == 0.0) {
        fVar13 = (float10)FUN_005ad390(iVar8 + 0x14);
        *(float *)(iVar8 + 0x60) = (float)fVar13;
      }
      uStack_408 = __ftol();
      local_4._0_1_ = 0x35;
      FUN_005a3ce0();
      local_4._0_1_ = 0x25;
      FUN_004040a0();
      FUN_00515080(param_1[0x7c]);
      local_4 = CONCAT31(local_4._1_3_,0x22);
      if (iStack_428 != 0) {
        FUN_004098d0();
        iStack_428 = 0;
      }
      fStack_46c = (float)((int)fStack_46c + 1);
    } while ((int)fStack_46c < iStack_470);
  }
  FUN_004040a0();
  iVar8 = -1;
  pcVar11 = s_Communicator_00695f90;
  do {
    if (iVar8 == 0) break;
    iVar8 = iVar8 + -1;
    cVar2 = *pcVar11;
    pcVar11 = pcVar11 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_Communicator_00695f90);
  local_4._0_1_ = 0x37;
  FUN_004040a0();
  iVar8 = -1;
  pcVar11 = s_POPUP_SPEED_0069ece8;
  do {
    if (iVar8 == 0) break;
    iVar8 = iVar8 + -1;
    cVar2 = *pcVar11;
    pcVar11 = pcVar11 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_POPUP_SPEED_0069ece8);
  local_4._0_1_ = 0x38;
  iVar8 = FUN_005a3d10(local_4b0,auStack_4a0,0,0,0x461c4000);
  local_4._0_1_ = 0x39;
  if (*(float *)(iVar8 + 0x60) == 0.0) {
    fVar13 = (float10)FUN_005ad390(iVar8 + 0x14);
    *(float *)(iVar8 + 0x60) = (float)fVar13;
  }
  else {
    fVar13 = (float10)*(float *)(iVar8 + 0x60);
  }
  param_1[0x7e] = (float)fVar13;
  local_4._0_1_ = 0x38;
  FUN_005a3ce0();
  local_4._0_1_ = 0x37;
  FUN_004040a0();
  local_4._0_1_ = 0x22;
  FUN_004040a0();
  FUN_004040a0();
  iVar8 = -1;
  pcVar11 = s_Communicator_00695f90;
  do {
    if (iVar8 == 0) break;
    iVar8 = iVar8 + -1;
    cVar2 = *pcVar11;
    pcVar11 = pcVar11 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_Communicator_00695f90);
  local_4._0_1_ = 0x3a;
  FUN_004040a0();
  iVar8 = -1;
  pcVar11 = s_BOTTOM_0069ece0;
  do {
    if (iVar8 == 0) break;
    iVar8 = iVar8 + -1;
    cVar2 = *pcVar11;
    pcVar11 = pcVar11 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_BOTTOM_0069ece0);
  local_4._0_1_ = 0x3b;
  iVar8 = FUN_005a3d10(local_4b0,auStack_4a0,0,0,0x43f00000);
  local_4._0_1_ = 0x3c;
  if (*(float *)(iVar8 + 0x60) == 0.0) {
    fVar13 = (float10)FUN_005ad390(iVar8 + 0x14);
    *(float *)(iVar8 + 0x60) = (float)fVar13;
  }
  else {
    fVar13 = (float10)*(float *)(iVar8 + 0x60);
  }
  param_1[0x87] = (float)fVar13;
  local_4._0_1_ = 0x3b;
  FUN_005a3ce0();
  local_4._0_1_ = 0x3a;
  FUN_004040a0();
  local_4._0_1_ = 0x22;
  FUN_004040a0();
  FUN_004040a0();
  iVar8 = -1;
  pcVar11 = s_Communicator_00695f90;
  do {
    if (iVar8 == 0) break;
    iVar8 = iVar8 + -1;
    cVar2 = *pcVar11;
    pcVar11 = pcVar11 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_Communicator_00695f90);
  local_4._0_1_ = 0x3d;
  FUN_004040a0();
  iVar8 = -1;
  pcVar11 = s_TEXTRECT_LEFT_0069ecd0;
  do {
    if (iVar8 == 0) break;
    iVar8 = iVar8 + -1;
    cVar2 = *pcVar11;
    pcVar11 = pcVar11 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_TEXTRECT_LEFT_0069ecd0);
  local_4._0_1_ = 0x3e;
  iVar8 = FUN_005a3d10(local_4b0,auStack_4a0,0,0,0x44200000);
  local_4._0_1_ = 0x3f;
  if (*(float *)(iVar8 + 0x60) == 0.0) {
    fVar13 = (float10)FUN_005ad390(iVar8 + 0x14);
    *(float *)(iVar8 + 0x60) = (float)fVar13;
  }
  else {
    fVar13 = (float10)*(float *)(iVar8 + 0x60);
  }
  param_1[0x7f] = (float)fVar13;
  local_4._0_1_ = 0x3e;
  FUN_005a3ce0();
  local_4._0_1_ = 0x3d;
  FUN_004040a0();
  local_4._0_1_ = 0x22;
  FUN_004040a0();
  FUN_004040a0();
  iVar8 = -1;
  pcVar11 = s_Communicator_00695f90;
  do {
    if (iVar8 == 0) break;
    iVar8 = iVar8 + -1;
    cVar2 = *pcVar11;
    pcVar11 = pcVar11 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_Communicator_00695f90);
  local_4._0_1_ = 0x40;
  FUN_004040a0();
  iVar8 = -1;
  pcVar11 = s_TEXTRECT_TOP_0069ecc0;
  do {
    if (iVar8 == 0) break;
    iVar8 = iVar8 + -1;
    cVar2 = *pcVar11;
    pcVar11 = pcVar11 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_TEXTRECT_TOP_0069ecc0);
  local_4._0_1_ = 0x41;
  iVar8 = FUN_005a3d10(local_4b0,auStack_4a0,0,0,0x43f00000);
  local_4._0_1_ = 0x42;
  if (*(float *)(iVar8 + 0x60) == 0.0) {
    fVar13 = (float10)FUN_005ad390(iVar8 + 0x14);
    *(float *)(iVar8 + 0x60) = (float)fVar13;
  }
  else {
    fVar13 = (float10)*(float *)(iVar8 + 0x60);
  }
  param_1[0x81] = (float)fVar13;
  local_4._0_1_ = 0x41;
  FUN_005a3ce0();
  local_4._0_1_ = 0x40;
  FUN_004040a0();
  local_4._0_1_ = 0x22;
  FUN_004040a0();
  FUN_004040a0();
  iVar8 = -1;
  pcVar11 = s_Communicator_00695f90;
  do {
    if (iVar8 == 0) break;
    iVar8 = iVar8 + -1;
    cVar2 = *pcVar11;
    pcVar11 = pcVar11 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_Communicator_00695f90);
  local_4._0_1_ = 0x43;
  FUN_004040a0();
  iVar8 = -1;
  pcVar11 = s_TEXTRECT_RIGHT_0069ecb0;
  do {
    if (iVar8 == 0) break;
    iVar8 = iVar8 + -1;
    cVar2 = *pcVar11;
    pcVar11 = pcVar11 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_TEXTRECT_RIGHT_0069ecb0);
  local_4._0_1_ = 0x44;
  iVar8 = FUN_005a3d10(local_4b0,auStack_4a0,0,0,0x44200000);
  local_4._0_1_ = 0x45;
  if (*(float *)(iVar8 + 0x60) == 0.0) {
    fVar13 = (float10)FUN_005ad390(iVar8 + 0x14);
    *(float *)(iVar8 + 0x60) = (float)fVar13;
  }
  else {
    fVar13 = (float10)*(float *)(iVar8 + 0x60);
  }
  param_1[0x80] = (float)fVar13;
  local_4._0_1_ = 0x44;
  FUN_005a3ce0();
  local_4._0_1_ = 0x43;
  FUN_004040a0();
  local_4._0_1_ = 0x22;
  FUN_004040a0();
  FUN_004040a0();
  iVar8 = -1;
  pcVar11 = s_Communicator_00695f90;
  do {
    if (iVar8 == 0) break;
    iVar8 = iVar8 + -1;
    cVar2 = *pcVar11;
    pcVar11 = pcVar11 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_Communicator_00695f90);
  local_4._0_1_ = 0x46;
  FUN_004040a0();
  iVar8 = -1;
  pcVar11 = s_TEXTRECT_BOTTOM_0069eca0;
  do {
    if (iVar8 == 0) break;
    iVar8 = iVar8 + -1;
    cVar2 = *pcVar11;
    pcVar11 = pcVar11 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_TEXTRECT_BOTTOM_0069eca0);
  local_4._0_1_ = 0x47;
  iVar8 = FUN_005a3d10(local_4b0,auStack_4a0,0,0,0x43f00000);
  local_4._0_1_ = 0x48;
  if (*(float *)(iVar8 + 0x60) == 0.0) {
    fVar13 = (float10)FUN_005ad390(iVar8 + 0x14);
    *(float *)(iVar8 + 0x60) = (float)fVar13;
  }
  else {
    fVar13 = (float10)*(float *)(iVar8 + 0x60);
  }
  param_1[0x82] = (float)fVar13;
  local_4._0_1_ = 0x47;
  FUN_005a3ce0();
  local_4._0_1_ = 0x46;
  FUN_004040a0();
  local_4._0_1_ = 0x22;
  FUN_004040a0();
  FUN_004040a0();
  iVar8 = -1;
  pcVar11 = s_Communicator_00695f90;
  do {
    if (iVar8 == 0) break;
    iVar8 = iVar8 + -1;
    cVar2 = *pcVar11;
    pcVar11 = pcVar11 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_Communicator_00695f90);
  local_4._0_1_ = 0x49;
  FUN_004040a0();
  iVar8 = -1;
  pcVar11 = s_PORTRAITRECT_LEFT_0069ec8c;
  do {
    if (iVar8 == 0) break;
    iVar8 = iVar8 + -1;
    cVar2 = *pcVar11;
    pcVar11 = pcVar11 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_PORTRAITRECT_LEFT_0069ec8c);
  local_4._0_1_ = 0x4a;
  iVar8 = FUN_005a3d10(local_4b0,auStack_4a0,0,0,0x44200000);
  local_4._0_1_ = 0x4b;
  if (*(float *)(iVar8 + 0x60) == 0.0) {
    fVar13 = (float10)FUN_005ad390(iVar8 + 0x14);
    *(float *)(iVar8 + 0x60) = (float)fVar13;
  }
  else {
    fVar13 = (float10)*(float *)(iVar8 + 0x60);
  }
  local_4._0_1_ = 0x4a;
  param_1[0x83] = (float)(fVar13 * (float10)0.0015625);
  FUN_005a3ce0();
  local_4._0_1_ = 0x49;
  FUN_004040a0();
  local_4._0_1_ = 0x22;
  FUN_004040a0();
  FUN_004040a0();
  iVar8 = -1;
  pcVar11 = s_Communicator_00695f90;
  do {
    if (iVar8 == 0) break;
    iVar8 = iVar8 + -1;
    cVar2 = *pcVar11;
    pcVar11 = pcVar11 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_Communicator_00695f90);
  local_4._0_1_ = 0x4c;
  FUN_004040a0();
  iVar8 = -1;
  pcVar11 = s_PORTRAITRECT_TOP_0069ec78;
  do {
    if (iVar8 == 0) break;
    iVar8 = iVar8 + -1;
    cVar2 = *pcVar11;
    pcVar11 = pcVar11 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_PORTRAITRECT_TOP_0069ec78);
  local_4._0_1_ = 0x4d;
  iVar8 = FUN_005a3d10(local_4b0,auStack_4a0,0,0,0x43f00000);
  local_4._0_1_ = 0x4e;
  if (*(float *)(iVar8 + 0x60) == 0.0) {
    fVar13 = (float10)FUN_005ad390(iVar8 + 0x14);
    *(float *)(iVar8 + 0x60) = (float)fVar13;
  }
  else {
    fVar13 = (float10)*(float *)(iVar8 + 0x60);
  }
  local_4._0_1_ = 0x4d;
  param_1[0x85] = (float)(fVar13 * (float10)0.0020833334);
  FUN_005a3ce0();
  local_4._0_1_ = 0x4c;
  FUN_004040a0();
  local_4._0_1_ = 0x22;
  FUN_004040a0();
  FUN_004040a0();
  iVar8 = -1;
  pcVar11 = s_Communicator_00695f90;
  do {
    if (iVar8 == 0) break;
    iVar8 = iVar8 + -1;
    cVar2 = *pcVar11;
    pcVar11 = pcVar11 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_Communicator_00695f90);
  local_4._0_1_ = 0x4f;
  FUN_004040a0();
  iVar8 = -1;
  pcVar11 = s_PORTRAITRECT_RIGHT_0069ec64;
  do {
    if (iVar8 == 0) break;
    iVar8 = iVar8 + -1;
    cVar2 = *pcVar11;
    pcVar11 = pcVar11 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_PORTRAITRECT_RIGHT_0069ec64);
  local_4._0_1_ = 0x50;
  iVar8 = FUN_005a3d10(local_4b0,auStack_4a0,0,0,0x44200000);
  local_4._0_1_ = 0x51;
  if (*(float *)(iVar8 + 0x60) == 0.0) {
    fVar13 = (float10)FUN_005ad390(iVar8 + 0x14);
    *(float *)(iVar8 + 0x60) = (float)fVar13;
  }
  else {
    fVar13 = (float10)*(float *)(iVar8 + 0x60);
  }
  local_4._0_1_ = 0x50;
  param_1[0x84] = (float)(fVar13 * (float10)0.0015625);
  FUN_005a3ce0();
  local_4._0_1_ = 0x4f;
  FUN_004040a0();
  local_4._0_1_ = 0x22;
  FUN_004040a0();
  FUN_004040a0();
  iVar8 = -1;
  pcVar11 = s_Communicator_00695f90;
  do {
    if (iVar8 == 0) break;
    iVar8 = iVar8 + -1;
    cVar2 = *pcVar11;
    pcVar11 = pcVar11 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_Communicator_00695f90);
  local_4._0_1_ = 0x52;
  FUN_004040a0();
  iVar8 = -1;
  pcVar11 = s_PORTRAITRECT_BOTTOM_0069ec50;
  do {
    if (iVar8 == 0) break;
    iVar8 = iVar8 + -1;
    cVar2 = *pcVar11;
    pcVar11 = pcVar11 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_PORTRAITRECT_BOTTOM_0069ec50);
  local_4._0_1_ = 0x53;
  iVar8 = FUN_005a3d10(local_4b0,auStack_4a0,0,0,0x43f00000);
  local_4._0_1_ = 0x54;
  if (*(float *)(iVar8 + 0x60) == 0.0) {
    fVar13 = (float10)FUN_005ad390(iVar8 + 0x14);
    *(float *)(iVar8 + 0x60) = (float)fVar13;
  }
  else {
    fVar13 = (float10)*(float *)(iVar8 + 0x60);
  }
  local_4._0_1_ = 0x53;
  param_1[0x86] = (float)(fVar13 * (float10)0.0020833334);
  FUN_005a3ce0();
  local_4._0_1_ = 0x52;
  FUN_004040a0();
  local_4._0_1_ = 0x22;
  FUN_004040a0();
  FUN_004040a0();
  iVar8 = -1;
  pcVar11 = s_Communicator_00695f90;
  do {
    if (iVar8 == 0) break;
    iVar8 = iVar8 + -1;
    cVar2 = *pcVar11;
    pcVar11 = pcVar11 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_Communicator_00695f90);
  local_4._0_1_ = 0x55;
  FUN_004040a0();
  iVar8 = -1;
  pcVar11 = s_FONTNAME_0069ec44;
  do {
    if (iVar8 == 0) break;
    iVar8 = iVar8 + -1;
    cVar2 = *pcVar11;
    pcVar11 = pcVar11 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_FONTNAME_0069ec44);
  local_4._0_1_ = 0x56;
  iVar8 = FUN_005acaf0(auStack_4a0,auStack_43c,s_Arial_0069ec3c,auStack_45c);
  local_4._0_1_ = 0x57;
  local_490[0] = *(undefined1 *)(iVar8 + 0x14);
  FUN_004040a0();
  FUN_0040cc00((undefined1 *)(iVar8 + 0x14),0);
  local_4._0_1_ = 0x58;
  local_4b0[0] = local_490[0];
  FUN_004040a0();
  FUN_0040cc00(local_490,0);
  local_4._0_1_ = 0x59;
  FUN_0040cc00(local_4b0,0);
  local_4._0_1_ = 0x58;
  FUN_004040a0();
  local_4._0_1_ = 0x57;
  FUN_004040a0();
  local_4._0_1_ = 0x56;
  FUN_005acca0();
  local_4._0_1_ = 0x55;
  FUN_004040a0();
  local_4 = CONCAT31(local_4._1_3_,0x22);
  FUN_004040a0();
  FUN_004040a0();
  uVar9 = 0xffffffff;
  pcVar11 = s_Communicator_00695f90;
  do {
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    cVar2 = *pcVar11;
    pcVar11 = pcVar11 + 1;
  } while (cVar2 != '\0');
  uVar9 = ~uVar9 - 1;
  cVar2 = FUN_00401940(uVar9);
  if (cVar2 != '\0') {
    pcVar11 = s_Communicator_00695f90;
    pcVar12 = pcStack_48c;
    for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
      *(undefined4 *)pcVar12 = *(undefined4 *)pcVar11;
      pcVar11 = pcVar11 + 4;
      pcVar12 = pcVar12 + 4;
    }
    for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
      *pcVar12 = *pcVar11;
      pcVar11 = pcVar11 + 1;
      pcVar12 = pcVar12 + 1;
    }
    FUN_00404190();
  }
  local_4 = CONCAT31(local_4._1_3_,0x5a);
  FUN_004040a0();
  uVar9 = 0xffffffff;
  pcVar11 = s_FONTSIZE_0069ec30;
  do {
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    cVar2 = *pcVar11;
    pcVar11 = pcVar11 + 1;
  } while (cVar2 != '\0');
  uVar9 = ~uVar9 - 1;
  cVar2 = FUN_00401940(uVar9);
  if (cVar2 != '\0') {
    pcVar11 = s_FONTSIZE_0069ec30;
    pcVar12 = pcStack_47c;
    for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
      *(undefined4 *)pcVar12 = *(undefined4 *)pcVar11;
      pcVar11 = pcVar11 + 4;
      pcVar12 = pcVar12 + 4;
    }
    for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
      *pcVar12 = *pcVar11;
      pcVar11 = pcVar11 + 1;
      pcVar12 = pcVar12 + 1;
    }
    FUN_00404190();
  }
  local_4._0_1_ = 0x5b;
  iVar8 = FUN_005a3d10(local_480,local_490,0x41900000,0x41000000,0x42800000);
  local_4._0_1_ = 0x5c;
  if (*(float *)(iVar8 + 0x60) == 0.0) {
    fVar13 = (float10)FUN_005ad390(iVar8 + 0x14);
    *(float *)(iVar8 + 0x60) = (float)fVar13;
  }
  else {
    fVar13 = (float10)*(float *)(iVar8 + 0x60);
  }
  local_4._0_1_ = 0x5b;
  param_1[0x8c] = (float)(fVar13 * (float10)0.0015625);
  FUN_005a3ce0();
  local_4._0_1_ = 0x5a;
  FUN_004040a0();
  local_4._0_1_ = 0x22;
  FUN_004040a0();
  param_1[0x7f] = (float)param_1[0x7f] * 0.0015625;
  param_1[0x80] = (float)param_1[0x80] * 0.0015625;
  param_1[0x81] = (float)param_1[0x81] * 0.0020833334;
  param_1[0x82] = (float)param_1[0x82] * 0.0020833334;
  FUN_005ae390(auStack_348);
  local_4 = CONCAT31(local_4._1_3_,0x5d);
  iStack_470 = 4;
  do {
    FUN_004040a0();
    uVar9 = 0xffffffff;
    pcVar11 = s_PortraitDef_bmp_0069eb68;
    do {
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      cVar2 = *pcVar11;
      pcVar11 = pcVar11 + 1;
    } while (cVar2 != '\0');
    uVar9 = ~uVar9 - 1;
    cVar2 = FUN_00401940(uVar9);
    if (cVar2 != '\0') {
      pcVar11 = s_PortraitDef_bmp_0069eb68;
      pcVar12 = pcStack_48c;
      for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined4 *)pcVar12 = *(undefined4 *)pcVar11;
        pcVar11 = pcVar11 + 4;
        pcVar12 = pcVar12 + 4;
      }
      for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *pcVar12 = *pcVar11;
        pcVar11 = pcVar11 + 1;
        pcVar12 = pcVar12 + 1;
      }
      FUN_00404190();
    }
    local_4._0_1_ = 0x5e;
    FUN_00512a60(auStack_348);
    local_4 = CONCAT31(local_4._1_3_,0x5d);
    FUN_004040a0();
    iStack_470 = iStack_470 + -1;
  } while (iStack_470 != 0);
  iVar8 = 0;
  iStack_470 = 0;
  do {
    FUN_00511280(auStack_3cc);
    local_4._0_1_ = 0x5f;
    FUN_00512f00();
    local_4 = CONCAT31(local_4._1_3_,0x5d);
    FUN_004040a0();
    iVar8 = iVar8 + 1;
  } while (iVar8 < 0x17);
  iVar6 = FUN_00519ef0();
  iVar8 = *(int *)(iVar6 + 100);
  if (iVar8 == -0x80000000) {
    iVar8 = FUN_0060af10();
    *(int *)(iVar6 + 100) = iVar8;
  }
  if (iVar8 == 0) {
    if (param_1[0x6f] == 0) {
      FUN_005117e0();
      uVar3 = __ftol();
      piVar7 = (int *)FUN_004b09f0(&iStack_470,param_1 + 0x88,uVar3,0);
      iVar8 = param_1[0x6f];
      local_4._0_1_ = 0x60;
      if (iVar8 != *piVar7) {
        if ((iVar8 != 0) &&
           (iVar6 = *(int *)(iVar8 + 0x14) + -1, *(int *)(iVar8 + 0x14) = iVar6, iVar6 == 0)) {
          FUN_005abfc0();
        }
        param_1[0x6f] = *piVar7;
        FUN_005844b0();
      }
      local_4 = CONCAT31(local_4._1_3_,0x5d);
      if (iStack_470 != 0) {
        FUN_004098d0();
      }
    }
  }
  else {
    iVar6 = FUN_005181b0();
    iVar8 = *(int *)(iVar6 + 100);
    if (iVar8 == -0x80000000) {
      iVar8 = FUN_0060af10();
      *(int *)(iVar6 + 100) = iVar8;
    }
    if (iVar8 != 0) {
      FUN_005afe30();
    }
  }
  FUN_004040a0();
  uVar9 = 0xffffffff;
  pcVar11 = s_Communicator_00695f90;
  do {
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    cVar2 = *pcVar11;
    pcVar11 = pcVar11 + 1;
  } while (cVar2 != '\0');
  uVar9 = ~uVar9 - 1;
  cVar2 = FUN_00401940(uVar9);
  if (cVar2 != '\0') {
    pcVar11 = s_Communicator_00695f90;
    pcVar12 = pcStack_47c;
    for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
      *(undefined4 *)pcVar12 = *(undefined4 *)pcVar11;
      pcVar11 = pcVar11 + 4;
      pcVar12 = pcVar12 + 4;
    }
    for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
      *pcVar12 = *pcVar11;
      pcVar11 = pcVar11 + 1;
      pcVar12 = pcVar12 + 1;
    }
    FUN_00404190();
  }
  local_4 = CONCAT31(local_4._1_3_,0x61);
  FUN_004040a0();
  uVar9 = 0xffffffff;
  pcVar11 = s_FONTXSPACE_0069ebfc;
  do {
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    cVar2 = *pcVar11;
    pcVar11 = pcVar11 + 1;
  } while (cVar2 != '\0');
  uVar9 = ~uVar9 - 1;
  cVar2 = FUN_00401940(uVar9);
  if (cVar2 != '\0') {
    pcVar11 = s_FONTXSPACE_0069ebfc;
    pcVar12 = pcStack_48c;
    for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
      *(undefined4 *)pcVar12 = *(undefined4 *)pcVar11;
      pcVar11 = pcVar11 + 4;
      pcVar12 = pcVar12 + 4;
    }
    for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
      *pcVar12 = *pcVar11;
      pcVar11 = pcVar11 + 1;
      pcVar12 = pcVar12 + 1;
    }
    FUN_00404190();
  }
  local_4._0_1_ = 0x62;
  iVar8 = FUN_005a3d10(local_490,local_480,0,0,0x44200000);
  local_4._0_1_ = 99;
  if (*(float *)(iVar8 + 0x60) == 0.0) {
    fVar13 = (float10)FUN_005ad390(iVar8 + 0x14);
    *(float *)(iVar8 + 0x60) = (float)fVar13;
  }
  else {
    fVar13 = (float10)*(float *)(iVar8 + 0x60);
  }
  local_4._0_1_ = 0x62;
  puStack_468 = (undefined4 *)(float)(fVar13 * (float10)0.0015625);
  FUN_005a3ce0();
  local_4._0_1_ = 0x61;
  FUN_004040a0();
  local_4 = CONCAT31(local_4._1_3_,0x5d);
  FUN_004040a0();
  FUN_004040a0();
  uVar9 = 0xffffffff;
  pcVar11 = s_Communicator_00695f90;
  do {
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    cVar2 = *pcVar11;
    pcVar11 = pcVar11 + 1;
  } while (cVar2 != '\0');
  uVar9 = ~uVar9 - 1;
  cVar2 = FUN_00401940(uVar9);
  if (cVar2 != '\0') {
    pcVar11 = s_Communicator_00695f90;
    pcVar12 = pcStack_47c;
    for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
      *(undefined4 *)pcVar12 = *(undefined4 *)pcVar11;
      pcVar11 = pcVar11 + 4;
      pcVar12 = pcVar12 + 4;
    }
    for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
      *pcVar12 = *pcVar11;
      pcVar11 = pcVar11 + 1;
      pcVar12 = pcVar12 + 1;
    }
    FUN_00404190();
  }
  local_4 = CONCAT31(local_4._1_3_,100);
  FUN_004040a0();
  uVar9 = 0xffffffff;
  pcVar11 = s_FONTYSPACE_0069ebf0;
  do {
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    cVar2 = *pcVar11;
    pcVar11 = pcVar11 + 1;
  } while (cVar2 != '\0');
  uVar9 = ~uVar9 - 1;
  cVar2 = FUN_00401940(uVar9);
  if (cVar2 != '\0') {
    pcVar11 = s_FONTYSPACE_0069ebf0;
    pcVar12 = pcStack_48c;
    for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
      *(undefined4 *)pcVar12 = *(undefined4 *)pcVar11;
      pcVar11 = pcVar11 + 4;
      pcVar12 = pcVar12 + 4;
    }
    for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
      *pcVar12 = *pcVar11;
      pcVar11 = pcVar11 + 1;
      pcVar12 = pcVar12 + 1;
    }
    FUN_00404190();
  }
  local_4._0_1_ = 0x65;
  iVar8 = FUN_005a3d10(local_490,local_480,0,0,0x43f00000);
  local_4._0_1_ = 0x66;
  if (*(float *)(iVar8 + 0x60) == 0.0) {
    fVar13 = (float10)FUN_005ad390(iVar8 + 0x14);
    *(float *)(iVar8 + 0x60) = (float)fVar13;
  }
  else {
    fVar13 = (float10)*(float *)(iVar8 + 0x60);
  }
  local_4._0_1_ = 0x65;
  fStack_46c = (float)(fVar13 * (float10)0.0020833334);
  FUN_005a3ce0();
  local_4._0_1_ = 100;
  FUN_004040a0();
  local_4 = CONCAT31(local_4._1_3_,0x5d);
  FUN_004040a0();
  FUN_004040a0();
  uVar9 = 0xffffffff;
  pcVar11 = s_Communicator_00695f90;
  do {
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    cVar2 = *pcVar11;
    pcVar11 = pcVar11 + 1;
  } while (cVar2 != '\0');
  uVar9 = ~uVar9 - 1;
  cVar2 = FUN_00401940(uVar9);
  if (cVar2 != '\0') {
    pcVar11 = s_Communicator_00695f90;
    pcVar12 = pcStack_47c;
    for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
      *(undefined4 *)pcVar12 = *(undefined4 *)pcVar11;
      pcVar11 = pcVar11 + 4;
      pcVar12 = pcVar12 + 4;
    }
    for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
      *pcVar12 = *pcVar11;
      pcVar11 = pcVar11 + 1;
      pcVar12 = pcVar12 + 1;
    }
    FUN_00404190();
  }
  local_4 = CONCAT31(local_4._1_3_,0x67);
  FUN_004040a0();
  uVar9 = 0xffffffff;
  pcVar11 = s_FONTANTIALIASED_0069ebe0;
  do {
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    cVar2 = *pcVar11;
    pcVar11 = pcVar11 + 1;
  } while (cVar2 != '\0');
  uVar9 = ~uVar9 - 1;
  cVar2 = FUN_00401940(uVar9);
  if (cVar2 != '\0') {
    pcVar11 = s_FONTANTIALIASED_0069ebe0;
    for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
      *(undefined4 *)pcStack_48c = *(undefined4 *)pcVar11;
      pcVar11 = pcVar11 + 4;
      pcStack_48c = pcStack_48c + 4;
    }
    for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
      *pcStack_48c = *pcVar11;
      pcVar11 = pcVar11 + 1;
      pcStack_48c = pcStack_48c + 1;
    }
    FUN_00404190();
  }
  local_4 = CONCAT31(local_4._1_3_,0x68);
  iVar6 = FUN_005ac9d0(local_490,local_480,1,auStack_45c);
  iVar8 = *(int *)(iVar6 + 100);
  if (iVar8 == -0x80000000) {
    iVar8 = FUN_0060af10();
    *(int *)(iVar6 + 100) = iVar8;
  }
  iStack_470 = CONCAT31(iStack_470._1_3_,iVar8 != 0);
  FUN_005acca0();
  local_4._0_1_ = 0x67;
  FUN_004040a0();
  local_4._0_1_ = 0x5d;
  FUN_004040a0();
  pvStack_3d4 = operator_new(0x48);
  local_4._0_1_ = 0x69;
  if (pvStack_3d4 == (void *)0x0) {
    iVar8 = 0;
  }
  else {
    puVar14 = puStack_468;
    fVar15 = fStack_46c;
    fVar13 = (float10)FUN_005117e0(param_1[0x8c]);
    iVar8 = FUN_004efbe0(param_1 + 0x88,(float)fVar13,puVar14,fVar15);
  }
  local_4._0_1_ = 0x5d;
  uVar1 = (undefined1)local_4;
  local_4._0_1_ = 0x5d;
  param_1[0x79] = iVar8;
  if (iVar8 == 0) {
    FUN_004040a0();
    uVar9 = 0xffffffff;
    pcVar11 = &DAT_006b3f70;
    do {
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      cVar2 = *pcVar11;
      pcVar11 = pcVar11 + 1;
    } while (cVar2 != '\0');
    uVar9 = ~uVar9 - 1;
    cVar2 = FUN_00401940(uVar9);
    if (cVar2 != '\0') {
      pcVar11 = &DAT_006b3f70;
      pcVar12 = pcStack_47c;
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
      pcStack_47c[uVar9] = '\0';
      uStack_478 = uVar9;
    }
    local_4._0_1_ = 0x6a;
    pcVar4 = (code *)FUN_005a07f0(s_m_TextPrinter____0_0069eb98,
                                  s_D__Work_RCHorror_AdamSource_Adam_0069ebac,0xac);
    (*pcVar4)();
    local_4._0_1_ = 0x5d;
    FUN_004040a0();
    uVar1 = (undefined1)local_4;
  }
  local_4._0_1_ = uVar1;
  FUN_004f0200(0x20);
  FUN_004f0200(0xfffffff8);
  FUN_004f0200(0xffffffdf);
  FUN_004f0200(0xffffffe9);
  FUN_004f0200(0xfffffff6);
  FUN_004f0200(0xffffffe4);
  FUN_004f0200(0xfffffffc);
  FUN_004f0200(0xffffffc4);
  local_4 = CONCAT31(local_4._1_3_,0x22);
  FUN_004040a0();
  if (iStack_448 != 0) {
    cVar2 = *(char *)(iStack_448 + -1);
    if ((cVar2 == '\0') || (cVar2 == -1)) {
      FUN_005fe5f0();
    }
    else {
      *(char *)(iStack_448 + -1) = cVar2 + -1;
    }
  }
  iStack_448 = 0;
  uStack_444 = 0;
  uStack_440 = 0;
  if (iStack_458 != 0) {
    cVar2 = *(char *)(iStack_458 + -1);
    if ((cVar2 == '\0') || (cVar2 == -1)) {
      FUN_005fe5f0();
    }
    else {
      *(char *)(iStack_458 + -1) = cVar2 + -1;
    }
  }
  iStack_458 = 0;
  uStack_454 = 0;
  uStack_450 = 0;
  local_4 = CONCAT31(local_4._1_3_,0x17);
  if ((iStack_42c != 0) &&
     (iVar8 = *(int *)(iStack_42c + 0x14) + -1, *(int *)(iStack_42c + 0x14) = iVar8, iVar8 == 0)) {
    FUN_005abfc0();
  }
  ExceptionList = pvStack_c;
  return param_1;
}

