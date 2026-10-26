/*
 * FUN_004bb0e0 at 004bb0e0
 * undefined FUN_004bb0e0(void)
 * Address ranges: 004bb0e0-004bbfc9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_004bb0e0(undefined4 *param_1,undefined1 *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  code *pcVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint uVar7;
  char *pcVar8;
  char *pcVar9;
  undefined4 *puVar10;
  float10 fVar11;
  undefined1 local_2f5;
  undefined1 local_2f4 [4];
  char *local_2f0;
  undefined1 local_2e4 [4];
  char *pcStack_2e0;
  undefined1 local_2d4 [4];
  undefined4 *puStack_2d0;
  undefined1 local_2c4 [4];
  char *pcStack_2c0;
  undefined1 local_2b4 [4];
  char *pcStack_2b0;
  undefined1 local_2a4 [4];
  undefined4 *puStack_2a0;
  undefined4 *local_294;
  undefined1 local_28c [16];
  undefined1 local_27c [16];
  undefined1 local_26c [16];
  undefined4 *local_25c;
  undefined1 *puStack_240;
  int iStack_1f4;
  undefined1 *puStack_1d4;
  int iStack_188;
  undefined4 local_10c [64];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062f735;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  local_25c = param_1;
  FUN_005ab4a0();
  local_4 = 0;
  *(undefined1 *)(param_1 + 5) = local_2f5;
  FUN_004040a0(0);
  uVar5 = 0xffffffff;
  pcVar8 = &DAT_006b3f70;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(&DAT_006b3f70,~uVar5 - 1);
  local_4._0_1_ = 1;
  *(undefined1 *)(param_1 + 9) = local_2f5;
  FUN_004040a0(0);
  uVar5 = 0xffffffff;
  pcVar8 = &DAT_006b3f70;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(&DAT_006b3f70,~uVar5 - 1);
  local_294 = param_1 + 0x12;
  local_4._0_1_ = 2;
  *(undefined1 *)(param_1 + 0xd) = 1;
  param_1[0xe] = 0x800000;
  *(undefined1 *)(param_1 + 0xf) = 1;
  *(undefined1 *)((int)param_1 + 0x3d) = 1;
  *(undefined1 *)((int)param_1 + 0x3e) = 0;
  param_1[0x10] = 0;
  *(undefined1 *)(param_1 + 0x11) = 0;
  *(undefined1 *)((int)param_1 + 0x45) = 0;
  FUN_0044e4a0(&local_2f5);
  local_4._0_1_ = 3;
  FUN_004c4990(0);
  local_4._0_1_ = 4;
  iVar2 = DAT_006cad58;
  if (DAT_006cad58 == 0) {
    iVar2 = FUN_005a78b0();
  }
  param_1[0x16] = iVar2;
  param_1[0x17] = 0;
  *(undefined1 *)(param_1 + 0x18) = *param_2;
  FUN_004040a0(0);
  FUN_0040cc00(param_2,0,0xffffffff);
  local_4._0_1_ = 5;
  *(undefined1 *)(param_1 + 0x1c) = *param_2;
  FUN_004040a0(0);
  FUN_0040cc00(param_2,0,0xffffffff);
  local_4._0_1_ = 6;
  param_1[0x20] = 400;
  param_1[0x21] = 300;
  FUN_00592a50();
  *(undefined1 *)(param_1 + 0xe7) = 0;
  local_4._0_1_ = 7;
  iVar2 = DAT_006c8de0;
  if (DAT_006c8de0 == 0) {
    iVar2 = FUN_0055b280();
  }
  local_2b4[0] = local_2f5;
  param_1[0xe8] = iVar2;
  param_1[0xe9] = 0;
  FUN_004040a0(0);
  uVar5 = 0xffffffff;
  pcVar8 = &DAT_006b3f70;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(&DAT_006b3f70,~uVar5 - 1);
  local_4._0_1_ = 8;
  local_2c4[0] = local_2f5;
  FUN_004040a0(0);
  uVar5 = 0xffffffff;
  pcVar8 = s_Application_00697684;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_Application_00697684,~uVar5 - 1);
  local_4._0_1_ = 9;
  local_2d4[0] = local_2f5;
  FUN_004040a0(0);
  uVar5 = 0xffffffff;
  pcVar8 = s_ClockSpeed_006949e0;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_ClockSpeed_006949e0,~uVar5 - 1);
  local_4._0_1_ = 10;
  FUN_005acaf0(local_2d4,local_2c4,&DAT_00697680,local_2b4,0);
  local_4._0_1_ = 0xe;
  FUN_004040a0(1);
  local_4._0_1_ = 0xd;
  FUN_004040a0(1);
  local_4._0_1_ = 0xc;
  FUN_004040a0(1);
  local_2f4[0] = local_2f5;
  FUN_004040a0(0);
  uVar5 = 0xffffffff;
  pcVar8 = &DAT_006b3f70;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(&DAT_006b3f70,~uVar5 - 1);
  local_4._0_1_ = 0xf;
  local_2e4[0] = local_2f5;
  FUN_004040a0(0);
  uVar5 = 0xffffffff;
  pcVar8 = s_Application_00697684;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_Application_00697684,~uVar5 - 1);
  local_4._0_1_ = 0x10;
  local_2a4[0] = local_2f5;
  FUN_004040a0(0);
  uVar5 = 0xffffffff;
  pcVar8 = s_GeneralWorldScale_0069766c;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_GeneralWorldScale_0069766c,~uVar5 - 1);
  local_4._0_1_ = 0x11;
  FUN_005ac8b0(local_2a4,local_2e4,0x42000000,local_2f4,0);
  local_4._0_1_ = 0x15;
  FUN_004040a0(1);
  local_4._0_1_ = 0x14;
  FUN_004040a0(1);
  local_4._0_1_ = 0x13;
  FUN_004040a0(1);
  local_2c4[0] = local_2f5;
  FUN_004040a0(0);
  uVar5 = 0xffffffff;
  pcVar8 = &DAT_00693a14;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(&DAT_00693a14,~uVar5 - 1);
  local_4._0_1_ = 0x16;
  local_2d4[0] = local_2f5;
  FUN_004040a0(0);
  uVar5 = 0xffffffff;
  pcVar8 = s_IsLowEndPC_00697660;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_IsLowEndPC_00697660,~uVar5 - 1);
  local_4._0_1_ = 0x17;
  uVar3 = FUN_00436f90(local_28c);
  local_4._0_1_ = 0x18;
  FUN_005ac9d0(local_2d4,local_2c4,0,uVar3,0);
  local_4._0_1_ = 0x1c;
  FUN_004040a0(1);
  local_4._0_1_ = 0x1b;
  FUN_004040a0(1);
  local_4._0_1_ = 0x1a;
  FUN_004040a0(1);
  local_2e4[0] = local_2f5;
  FUN_004040a0(0);
  uVar5 = 0xffffffff;
  pcVar8 = &DAT_006b3f70;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(&DAT_006b3f70,~uVar5 - 1);
  local_4._0_1_ = 0x1d;
  local_2a4[0] = local_2f5;
  FUN_004040a0(0);
  uVar5 = 0xffffffff;
  pcVar8 = s_Application_00697684;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_Application_00697684,~uVar5 - 1);
  local_4._0_1_ = 0x1e;
  local_2b4[0] = local_2f5;
  FUN_004040a0(0);
  uVar5 = 0xffffffff;
  pcVar8 = s_RenderAIInfo_00697650;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_RenderAIInfo_00697650,~uVar5 - 1);
  local_4._0_1_ = 0x1f;
  FUN_005ac9d0(local_2b4,local_2a4,0,local_2e4,0);
  local_4._0_1_ = 0x23;
  FUN_004040a0(1);
  local_4._0_1_ = 0x22;
  FUN_004040a0(1);
  local_4._0_1_ = 0x21;
  FUN_004040a0(1);
  local_2f4[0] = local_2f5;
  FUN_004040a0(0);
  uVar5 = 0xffffffff;
  pcVar8 = &DAT_006b3f70;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(&DAT_006b3f70,~uVar5 - 1);
  local_2c4[0] = local_2f5;
  local_4._0_1_ = 0x24;
  FUN_004040a0(0);
  uVar5 = 0xffffffff;
  pcVar8 = s_Application_00697684;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_Application_00697684,~uVar5 - 1);
  local_4._0_1_ = 0x25;
  local_2d4[0] = local_2f5;
  FUN_004040a0(0);
  uVar5 = 0xffffffff;
  pcVar8 = s_RenderBoundingBoxes_0069763c;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_RenderBoundingBoxes_0069763c,~uVar5 - 1);
  local_4._0_1_ = 0x26;
  FUN_005ac9d0(local_2d4,local_2c4,0,local_2f4,0);
  local_4._0_1_ = 0x2a;
  FUN_004040a0(1);
  local_4._0_1_ = 0x29;
  FUN_004040a0(1);
  local_4._0_1_ = 0x28;
  FUN_004040a0(1);
  local_2e4[0] = local_2f5;
  FUN_004040a0(0);
  uVar5 = 0xffffffff;
  pcVar8 = &DAT_006b3f70;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(&DAT_006b3f70,~uVar5 - 1);
  local_2a4[0] = local_2f5;
  local_4._0_1_ = 0x2b;
  FUN_004040a0(0);
  uVar5 = 0xffffffff;
  pcVar8 = s_Application_00697684;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_Application_00697684,~uVar5 - 1);
  local_4._0_1_ = 0x2c;
  local_2b4[0] = local_2f5;
  FUN_004040a0(0);
  uVar5 = 0xffffffff;
  pcVar8 = s_Console_00697634;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_Console_00697634,~uVar5 - 1);
  local_4._0_1_ = 0x2d;
  FUN_005ac9d0(local_2b4,local_2a4,0,local_2e4,0);
  local_4._0_1_ = 0x31;
  FUN_004040a0(1);
  local_4._0_1_ = 0x30;
  FUN_004040a0(1);
  local_4._0_1_ = 0x2f;
  FUN_004040a0(1);
  local_28c[0] = local_2f5;
  FUN_004040a0(0);
  uVar5 = 0xffffffff;
  pcVar8 = &DAT_006b3f70;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(&DAT_006b3f70,~uVar5 - 1);
  local_26c[0] = local_2f5;
  local_4._0_1_ = 0x32;
  FUN_004040a0(0);
  uVar5 = 0xffffffff;
  pcVar8 = s_Application_00697684;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_Application_00697684,~uVar5 - 1);
  local_4._0_1_ = 0x33;
  local_27c[0] = local_2f5;
  FUN_004040a0(0);
  uVar5 = 0xffffffff;
  pcVar8 = s_LastFileNameUsed_00697620;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_LastFileNameUsed_00697620,~uVar5 - 1);
  local_4._0_1_ = 0x34;
  FUN_005acaf0(local_27c,local_26c,&DAT_006b3f70,local_28c,0);
  local_4._0_1_ = 0x38;
  FUN_004040a0(1);
  local_4._0_1_ = 0x37;
  FUN_004040a0(1);
  local_4._0_1_ = 0x36;
  FUN_004040a0(1);
  *param_1 = &PTR_FUN_0064ee04;
  FUN_005ae5f0(s_D__Work_RCHorror_AdamSource_Adam_006975f0,0x3d);
  local_4 = CONCAT31(local_4._1_3_,0x39);
  if (DAT_006b915c != (undefined4 *)0x0) {
    local_2f4[0] = local_2f5;
    FUN_004040a0(0);
    uVar5 = 0xffffffff;
    pcVar8 = &DAT_006b3f70;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    puVar6 = (undefined4 *)(~uVar5 - 1);
    local_294 = puVar6;
    cVar1 = FUN_00401940(puVar6,1);
    if (cVar1 != '\0') {
      pcVar8 = &DAT_006b3f70;
      pcVar9 = local_2f0;
      for (uVar5 = (uint)puVar6 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
        pcVar8 = pcVar8 + 4;
        pcVar9 = pcVar9 + 4;
      }
      for (uVar5 = (uint)puVar6 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *pcVar9 = *pcVar8;
        pcVar8 = pcVar8 + 1;
        pcVar9 = pcVar9 + 1;
      }
      FUN_00404190(puVar6);
    }
    local_4._0_1_ = 0x3a;
    pcVar4 = (code *)FUN_005a07f0(s_m_Instance__0_006975e0,
                                  s_D__Work_RCHorror_AdamSource_Adam_006975f0,0x3f,local_2f4);
    (*pcVar4)();
    local_4 = CONCAT31(local_4._1_3_,0x39);
    FUN_004040a0(1);
  }
  puVar6 = local_10c;
  for (iVar2 = 0x40; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  DAT_006b915c = param_1;
  FUN_0060af1b(local_10c,0xff,&DAT_00690818,1);
  FUN_005acdb0(local_10c);
  local_2e4[0] = local_2f5;
  FUN_004040a0(0);
  uVar5 = 0xffffffff;
  pcVar8 = s_Display_006975d8;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5 - 1;
  cVar1 = FUN_00401940(uVar5,1);
  if (cVar1 != '\0') {
    pcVar8 = s_Display_006975d8;
    pcVar9 = pcStack_2e0;
    for (uVar7 = uVar5 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar9 = pcVar9 + 4;
    }
    for (uVar7 = uVar5 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcVar9 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      pcVar9 = pcVar9 + 1;
    }
    FUN_00404190(uVar5);
  }
  local_4 = CONCAT31(local_4._1_3_,0x3b);
  local_2f4[0] = local_2f5;
  FUN_004040a0(0);
  uVar5 = 0xffffffff;
  pcVar8 = s_Gamma_006975d0;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5 - 1;
  cVar1 = FUN_00401940(uVar5,1);
  if (cVar1 != '\0') {
    pcVar8 = s_Gamma_006975d0;
    pcVar9 = local_2f0;
    for (uVar7 = uVar5 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar9 = pcVar9 + 4;
    }
    for (uVar7 = uVar5 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcVar9 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      pcVar9 = pcVar9 + 1;
    }
    FUN_00404190(uVar5);
  }
  local_4._0_1_ = 0x3c;
  uVar3 = FUN_0043b0a0(local_2d4);
  local_4._0_1_ = 0x3d;
  iVar2 = FUN_005a3d10(local_2f4,local_2e4,0x3f800000,0,0x40400000,uVar3);
  local_4._0_1_ = 0x3e;
  if (*(float *)(iVar2 + 0x60) == 0.0) {
    fVar11 = (float10)FUN_005ad390(iVar2 + 0x14,&local_2f5);
    *(float *)(iVar2 + 0x60) = (float)fVar11;
  }
  else {
    fVar11 = (float10)*(float *)(iVar2 + 0x60);
  }
  param_1[0xe] = (float)fVar11;
  local_4._0_1_ = 0x3d;
  FUN_005a3ce0();
  local_4._0_1_ = 0x3c;
  FUN_004040a0(1);
  local_4._0_1_ = 0x3b;
  FUN_004040a0(1);
  local_4 = CONCAT31(local_4._1_3_,0x39);
  FUN_004040a0(1);
  local_2a4[0] = local_2f5;
  FUN_004040a0(0);
  uVar5 = 0xffffffff;
  pcVar8 = &DAT_006b3f70;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5 - 1;
  cVar1 = FUN_00401940(uVar5,1);
  if (cVar1 != '\0') {
    puVar6 = (undefined4 *)&DAT_006b3f70;
    for (uVar7 = uVar5 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puStack_2a0 = *puVar6;
      puVar6 = puVar6 + 1;
      puStack_2a0 = puStack_2a0 + 1;
    }
    for (uVar7 = uVar5 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined1 *)puStack_2a0 = *(undefined1 *)puVar6;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
      puStack_2a0 = (undefined4 *)((int)puStack_2a0 + 1);
    }
    FUN_00404190(uVar5);
  }
  local_2f4[0] = local_2f5;
  local_4 = CONCAT31(local_4._1_3_,0x3f);
  FUN_004040a0(0);
  uVar5 = 0xffffffff;
  pcVar8 = s_Windowed_Mode_006975c0;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5 - 1;
  cVar1 = FUN_00401940(uVar5,1);
  if (cVar1 != '\0') {
    pcVar8 = s_Windowed_Mode_006975c0;
    for (uVar7 = uVar5 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)local_2f0 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      local_2f0 = local_2f0 + 4;
    }
    for (uVar7 = uVar5 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *local_2f0 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      local_2f0 = local_2f0 + 1;
    }
    FUN_00404190(uVar5);
  }
  local_4 = CONCAT31(local_4._1_3_,0x40);
  local_2e4[0] = local_2f5;
  FUN_004040a0(0);
  uVar5 = 0xffffffff;
  pcVar8 = s_Width_006975b8;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5 - 1;
  cVar1 = FUN_00401940(uVar5,1);
  if (cVar1 != '\0') {
    pcVar8 = s_Width_006975b8;
    for (uVar7 = uVar5 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcStack_2e0 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcStack_2e0 = pcStack_2e0 + 4;
    }
    for (uVar7 = uVar5 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcStack_2e0 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      pcStack_2e0 = pcStack_2e0 + 1;
    }
    FUN_00404190(uVar5);
  }
  local_4._0_1_ = 0x41;
  FUN_005ac9d0(local_2e4,local_2f4,0x280,local_2a4,0);
  local_4._0_1_ = 0x45;
  FUN_004040a0(1);
  local_4._0_1_ = 0x44;
  FUN_004040a0(1);
  local_4 = CONCAT31(local_4._1_3_,0x43);
  FUN_004040a0(1);
  local_2d4[0] = local_2f5;
  FUN_004040a0(0);
  uVar5 = 0xffffffff;
  pcVar8 = &DAT_006b3f70;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5 - 1;
  cVar1 = FUN_00401940(uVar5,1);
  if (cVar1 != '\0') {
    puVar6 = (undefined4 *)&DAT_006b3f70;
    puVar10 = puStack_2d0;
    for (uVar7 = uVar5 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar10 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar10 = puVar10 + 1;
    }
    for (uVar7 = uVar5 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined1 *)puVar10 = *(undefined1 *)puVar6;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
      puVar10 = (undefined4 *)((int)puVar10 + 1);
    }
    FUN_00404190(uVar5);
  }
  local_4 = CONCAT31(local_4._1_3_,0x46);
  local_2c4[0] = local_2f5;
  FUN_004040a0(0);
  uVar5 = 0xffffffff;
  pcVar8 = s_Windowed_Mode_006975c0;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5 - 1;
  cVar1 = FUN_00401940(uVar5,1);
  if (cVar1 != '\0') {
    pcVar8 = s_Windowed_Mode_006975c0;
    for (uVar7 = uVar5 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcStack_2c0 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcStack_2c0 = pcStack_2c0 + 4;
    }
    for (uVar7 = uVar5 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcStack_2c0 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      pcStack_2c0 = pcStack_2c0 + 1;
    }
    FUN_00404190(uVar5);
  }
  local_4 = CONCAT31(local_4._1_3_,0x47);
  local_2b4[0] = local_2f5;
  FUN_004040a0(0);
  uVar5 = 0xffffffff;
  pcVar8 = s_Height_006975b0;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5 - 1;
  cVar1 = FUN_00401940(uVar5,1);
  if (cVar1 != '\0') {
    pcVar8 = s_Height_006975b0;
    for (uVar7 = uVar5 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcStack_2b0 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcStack_2b0 = pcStack_2b0 + 4;
    }
    for (uVar7 = uVar5 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcStack_2b0 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      pcStack_2b0 = pcStack_2b0 + 1;
    }
    FUN_00404190(uVar5);
  }
  local_4._0_1_ = 0x48;
  FUN_005ac9d0(local_2b4,local_2c4,0x1e0,local_2d4,0);
  local_4._0_1_ = 0x4c;
  FUN_004040a0(1);
  local_4 = CONCAT31(local_4._1_3_,0x4b);
  FUN_004040a0(1);
  if (puStack_2d0 != (undefined4 *)0x0) {
    cVar1 = *(char *)((int)puStack_2d0 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0((char *)((int)puStack_2d0 + -1));
    }
    else {
      *(char *)((int)puStack_2d0 + -1) = cVar1 + -1;
    }
  }
  if (iStack_188 == -0x80000000) {
    if (puStack_1d4 == (undefined1 *)0x0) {
      puStack_1d4 = &DAT_0064a3b4;
    }
    iStack_188 = FUN_0060af10(puStack_1d4);
  }
  param_1[0x20] = iStack_188;
  if (iStack_1f4 == -0x80000000) {
    if (puStack_240 == (undefined1 *)0x0) {
      puStack_240 = &DAT_0064a3b4;
    }
    iStack_1f4 = FUN_0060af10(puStack_240);
  }
  param_1[0x21] = iStack_1f4;
  local_4._0_1_ = 0x43;
  FUN_005acca0();
  local_4._0_1_ = 0x39;
  FUN_005acca0();
  local_4 = CONCAT31(local_4._1_3_,0x36);
  FUN_005ae770();
  ExceptionList = pvStack_c;
  return param_1;
}

