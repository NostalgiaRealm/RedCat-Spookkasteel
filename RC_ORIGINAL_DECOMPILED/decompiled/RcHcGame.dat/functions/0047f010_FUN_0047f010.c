/*
 * FUN_0047f010 at 0047f010
 * undefined FUN_0047f010(void)
 * Address ranges: 0047f010-00480b03
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_0047f010(undefined4 *param_1,undefined4 param_2)

{
  float fVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined1 *puVar6;
  code *pcVar7;
  int *piVar8;
  uint uVar9;
  char *pcVar10;
  char *pcVar11;
  float10 fVar12;
  undefined1 local_fd;
  undefined1 local_fc [4];
  char *pcStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined1 local_ec [4];
  char *pcStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  uint uStack_dc;
  undefined1 local_d8 [16];
  void *pvStack_c8;
  float local_c4;
  float fStack_c0;
  float fStack_bc;
  int iStack_b8;
  undefined1 auStack_b4 [16];
  undefined1 auStack_a4 [16];
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 *local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062928b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  local_10 = param_1;
  FUN_005ab4a0();
  local_4 = 0;
  *(undefined1 *)(param_1 + 6) = local_fd;
  FUN_004040a0(0);
  uVar9 = 0xffffffff;
  pcVar10 = &DAT_006b3f70;
  do {
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    cVar2 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(&DAT_006b3f70,~uVar9 - 1);
  param_1[10] = 0x437f0000;
  param_1[0xb] = 0;
  param_1[0xd] = 0;
  *(undefined1 *)(param_1 + 0xe) = local_fd;
  local_4._0_1_ = 1;
  FUN_004040a0(0);
  uVar9 = 0xffffffff;
  pcVar10 = &DAT_006b3f70;
  do {
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    cVar2 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(&DAT_006b3f70,~uVar9 - 1);
  param_1[0x12] = 0;
  local_4._0_1_ = 3;
  param_1[0x13] = 0;
  FUN_005844b0();
  param_1[0x14] = 0;
  param_1[0x15] = param_2;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  local_4._0_1_ = 5;
  param_1[0x2c] = 0;
  FUN_005844b0();
  *(undefined1 *)(param_1 + 0x2d) = 1;
  param_1[0x2e] = 0;
  *param_1 = &PTR_FUN_0064e374;
  local_4._0_1_ = 6;
  local_fc[0] = local_fd;
  FUN_004040a0(0);
  uVar9 = 0xffffffff;
  pcVar10 = s_CUT_Scene_006930b4;
  do {
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    cVar2 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_CUT_Scene_006930b4,~uVar9 - 1);
  local_ec[0] = local_fd;
  local_4._0_1_ = 7;
  FUN_004040a0(0);
  uVar9 = 0xffffffff;
  pcVar10 = s_TextWidth_00693218;
  do {
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    cVar2 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_TextWidth_00693218,~uVar9 - 1);
  local_4._0_1_ = 8;
  uVar3 = FUN_00436f90(local_d8);
  local_4._0_1_ = 9;
  iVar4 = FUN_005a3d10(local_ec,local_fc,0x43a00000,0,0x44200000,uVar3);
  local_4._0_1_ = 10;
  if (*(float *)(iVar4 + 0x60) == 0.0) {
    fVar12 = (float10)FUN_005ad390(iVar4 + 0x14,&local_fd);
    *(float *)(iVar4 + 0x60) = (float)fVar12;
    local_c4 = (float)fVar12;
  }
  else {
    local_c4 = *(float *)(iVar4 + 0x60);
  }
  local_4._0_1_ = 9;
  FUN_005a3ce0();
  local_4._0_1_ = 8;
  FUN_004040a0(1);
  local_4._0_1_ = 7;
  FUN_004040a0(1);
  local_4._0_1_ = 6;
  FUN_004040a0(1);
  local_fc[0] = local_fd;
  FUN_004040a0(0);
  uVar9 = 0xffffffff;
  pcVar10 = s_CUT_Scene_006930b4;
  do {
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    cVar2 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_CUT_Scene_006930b4,~uVar9 - 1);
  local_4._0_1_ = 0xb;
  local_ec[0] = local_fd;
  FUN_004040a0(0);
  uVar9 = 0xffffffff;
  pcVar10 = s_TextHeight_0069320c;
  do {
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    cVar2 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_TextHeight_0069320c,~uVar9 - 1);
  local_4._0_1_ = 0xc;
  uVar3 = FUN_00436f90(local_d8);
  local_4._0_1_ = 0xd;
  iVar4 = FUN_005a3d10(local_ec,local_fc,0x42400000,0,0x44200000,uVar3);
  local_4._0_1_ = 0xe;
  if (*(float *)(iVar4 + 0x60) == 0.0) {
    fVar12 = (float10)FUN_005ad390(iVar4 + 0x14,&local_fd);
    *(float *)(iVar4 + 0x60) = (float)fVar12;
    pvStack_c8 = (void *)(float)fVar12;
  }
  else {
    pvStack_c8 = *(void **)(iVar4 + 0x60);
  }
  local_4._0_1_ = 0xd;
  FUN_005a3ce0();
  local_4._0_1_ = 0xc;
  FUN_004040a0(1);
  local_4._0_1_ = 0xb;
  FUN_004040a0(1);
  local_4._0_1_ = 6;
  FUN_004040a0(1);
  local_fc[0] = local_fd;
  FUN_004040a0(0);
  uVar9 = 0xffffffff;
  pcVar10 = s_CUT_Scene_006930b4;
  do {
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    cVar2 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_CUT_Scene_006930b4,~uVar9 - 1);
  local_4._0_1_ = 0xf;
  local_ec[0] = local_fd;
  FUN_004040a0(0);
  uVar9 = 0xffffffff;
  pcVar10 = s_BoxWidth_00693200;
  do {
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    cVar2 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_BoxWidth_00693200,~uVar9 - 1);
  local_4._0_1_ = 0x10;
  uVar3 = FUN_00436f90(local_d8);
  local_4._0_1_ = 0x11;
  iVar4 = FUN_005a3d10(local_ec,local_fc,0x44200000,0,0x44200000,uVar3);
  local_4._0_1_ = 0x12;
  if (*(float *)(iVar4 + 0x60) == 0.0) {
    fVar12 = (float10)FUN_005ad390(iVar4 + 0x14,&local_fd);
    *(float *)(iVar4 + 0x60) = (float)fVar12;
    fStack_bc = (float)fVar12;
  }
  else {
    fStack_bc = *(float *)(iVar4 + 0x60);
  }
  local_4._0_1_ = 0x11;
  FUN_005a3ce0();
  local_4._0_1_ = 0x10;
  FUN_004040a0(1);
  local_4._0_1_ = 0xf;
  FUN_004040a0(1);
  local_4._0_1_ = 6;
  FUN_004040a0(1);
  local_fc[0] = local_fd;
  FUN_004040a0(0);
  uVar9 = 0xffffffff;
  pcVar10 = s_CUT_Scene_006930b4;
  do {
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    cVar2 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_CUT_Scene_006930b4,~uVar9 - 1);
  local_ec[0] = local_fd;
  local_4._0_1_ = 0x13;
  FUN_004040a0(0);
  uVar9 = 0xffffffff;
  pcVar10 = s_BoxHeight_006931f4;
  do {
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    cVar2 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_BoxHeight_006931f4,~uVar9 - 1);
  local_4._0_1_ = 0x14;
  uVar3 = FUN_00436f90(local_d8);
  local_4._0_1_ = 0x15;
  iVar4 = FUN_005a3d10(local_ec,local_fc,0x42800000,0,0x44200000,uVar3);
  local_4._0_1_ = 0x16;
  if (*(float *)(iVar4 + 0x60) == 0.0) {
    fVar12 = (float10)FUN_005ad390(iVar4 + 0x14,&local_fd);
    *(float *)(iVar4 + 0x60) = (float)fVar12;
    fStack_c0 = (float)fVar12;
  }
  else {
    fStack_c0 = *(float *)(iVar4 + 0x60);
  }
  local_4._0_1_ = 0x15;
  FUN_005a3ce0();
  local_4._0_1_ = 0x14;
  FUN_004040a0(1);
  local_4._0_1_ = 0x13;
  FUN_004040a0(1);
  local_4._0_1_ = 6;
  FUN_004040a0(1);
  local_fc[0] = local_fd;
  FUN_004040a0(0);
  uVar9 = 0xffffffff;
  pcVar10 = s_CUT_Scene_006930b4;
  do {
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    cVar2 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_CUT_Scene_006930b4,~uVar9 - 1);
  local_4._0_1_ = 0x17;
  local_ec[0] = local_fd;
  FUN_004040a0(0);
  uVar9 = 0xffffffff;
  pcVar10 = s_FontSpaceX_006931e8;
  do {
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    cVar2 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_FontSpaceX_006931e8,~uVar9 - 1);
  local_4._0_1_ = 0x18;
  uVar3 = FUN_00436f90(local_d8);
  local_4._0_1_ = 0x19;
  iVar4 = FUN_005a3d10(local_ec,local_fc,0,0,0x44200000,uVar3);
  local_4._0_1_ = 0x1a;
  if (*(float *)(iVar4 + 0x60) == 0.0) {
    fVar12 = (float10)FUN_005ad390(iVar4 + 0x14,&local_fd);
    *(float *)(iVar4 + 0x60) = (float)fVar12;
  }
  local_4._0_1_ = 0x19;
  FUN_005a3ce0();
  local_4._0_1_ = 0x18;
  FUN_004040a0(1);
  local_4._0_1_ = 0x17;
  FUN_004040a0(1);
  local_4._0_1_ = 6;
  FUN_004040a0(1);
  local_fc[0] = local_fd;
  FUN_004040a0(0);
  uVar9 = 0xffffffff;
  pcVar10 = s_CUT_Scene_006930b4;
  do {
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    cVar2 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_CUT_Scene_006930b4,~uVar9 - 1);
  local_ec[0] = local_fd;
  local_4._0_1_ = 0x1b;
  FUN_004040a0(0);
  uVar9 = 0xffffffff;
  pcVar10 = s_FontSpaceY_006931dc;
  do {
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    cVar2 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_FontSpaceY_006931dc,~uVar9 - 1);
  local_4._0_1_ = 0x1c;
  uVar3 = FUN_00436f90(local_d8);
  local_4._0_1_ = 0x1d;
  iVar4 = FUN_005a3d10(local_ec,local_fc,0,0,0x43f00000,uVar3);
  local_4._0_1_ = 0x1e;
  if (*(float *)(iVar4 + 0x60) == 0.0) {
    fVar12 = (float10)FUN_005ad390(iVar4 + 0x14,&local_fd);
    *(float *)(iVar4 + 0x60) = (float)fVar12;
  }
  local_4._0_1_ = 0x1d;
  FUN_005a3ce0();
  local_4._0_1_ = 0x1c;
  FUN_004040a0(1);
  local_4._0_1_ = 0x1b;
  FUN_004040a0(1);
  local_4._0_1_ = 6;
  FUN_004040a0(1);
  local_fc[0] = local_fd;
  FUN_004040a0(0);
  uVar9 = 0xffffffff;
  pcVar10 = s_CUT_Scene_006930b4;
  do {
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    cVar2 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_CUT_Scene_006930b4,~uVar9 - 1);
  local_4._0_1_ = 0x1f;
  local_ec[0] = local_fd;
  FUN_004040a0(0);
  uVar9 = 0xffffffff;
  pcVar10 = s_ScrnIconX_006931d0;
  do {
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    cVar2 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_ScrnIconX_006931d0,~uVar9 - 1);
  local_4._0_1_ = 0x20;
  uVar3 = FUN_00436f90(local_d8);
  local_4._0_1_ = 0x21;
  iVar4 = FUN_005a3d10(local_ec,local_fc,0x44138000,0,0x44200000,uVar3);
  local_4._0_1_ = 0x22;
  if (*(float *)(iVar4 + 0x60) == 0.0) {
    fVar12 = (float10)FUN_005ad390(iVar4 + 0x14,&local_fd);
    *(float *)(iVar4 + 0x60) = (float)fVar12;
  }
  else {
    fVar12 = (float10)*(float *)(iVar4 + 0x60);
  }
  param_1[0x1a] = (float)fVar12;
  local_4._0_1_ = 0x21;
  FUN_005a3ce0();
  local_4._0_1_ = 0x20;
  FUN_004040a0(1);
  local_4._0_1_ = 0x1f;
  FUN_004040a0(1);
  local_4._0_1_ = 6;
  FUN_004040a0(1);
  local_fc[0] = local_fd;
  FUN_004040a0(0);
  uVar9 = 0xffffffff;
  pcVar10 = s_CUT_Scene_006930b4;
  do {
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    cVar2 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_CUT_Scene_006930b4,~uVar9 - 1);
  local_4._0_1_ = 0x23;
  local_ec[0] = local_fd;
  FUN_004040a0(0);
  uVar9 = 0xffffffff;
  pcVar10 = s_ScrnIconY_006931c4;
  do {
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    cVar2 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_ScrnIconY_006931c4,~uVar9 - 1);
  local_4._0_1_ = 0x24;
  uVar3 = FUN_00436f90(local_d8);
  local_4._0_1_ = 0x25;
  iVar4 = FUN_005a3d10(local_ec,local_fc,0x41200000,0,0x44200000,uVar3);
  local_4._0_1_ = 0x26;
  if (*(float *)(iVar4 + 0x60) == 0.0) {
    fVar12 = (float10)FUN_005ad390(iVar4 + 0x14,&local_fd);
    *(float *)(iVar4 + 0x60) = (float)fVar12;
  }
  else {
    fVar12 = (float10)*(float *)(iVar4 + 0x60);
  }
  param_1[0x1c] = (float)fVar12;
  local_4._0_1_ = 0x25;
  FUN_005a3ce0();
  local_4._0_1_ = 0x24;
  FUN_004040a0(1);
  local_4._0_1_ = 0x23;
  FUN_004040a0(1);
  local_4._0_1_ = 6;
  FUN_004040a0(1);
  local_fc[0] = local_fd;
  FUN_004040a0(0);
  uVar9 = 0xffffffff;
  pcVar10 = s_CUT_Scene_006930b4;
  do {
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    cVar2 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_CUT_Scene_006930b4,~uVar9 - 1);
  local_ec[0] = local_fd;
  local_4._0_1_ = 0x27;
  FUN_004040a0(0);
  uVar9 = 0xffffffff;
  pcVar10 = s_TextBoxY_006931b8;
  do {
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    cVar2 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_TextBoxY_006931b8,~uVar9 - 1);
  local_4._0_1_ = 0x28;
  uVar3 = FUN_00436f90(local_d8);
  local_4._0_1_ = 0x29;
  iVar4 = FUN_005a3d10(local_ec,local_fc,0x43960000,0,0x44200000,uVar3);
  local_4._0_1_ = 0x2a;
  if (*(float *)(iVar4 + 0x60) == 0.0) {
    fVar12 = (float10)FUN_005ad390(iVar4 + 0x14,&local_fd);
    *(float *)(iVar4 + 0x60) = (float)fVar12;
  }
  else {
    fVar12 = (float10)*(float *)(iVar4 + 0x60);
  }
  param_1[0x24] = (float)fVar12;
  local_4._0_1_ = 0x29;
  FUN_005a3ce0();
  local_4._0_1_ = 0x28;
  FUN_004040a0(1);
  local_4._0_1_ = 0x27;
  FUN_004040a0(1);
  local_4._0_1_ = 6;
  FUN_004040a0(1);
  local_fc[0] = local_fd;
  FUN_004040a0(0);
  uVar9 = 0xffffffff;
  pcVar10 = s_CUT_Scene_006930b4;
  do {
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    cVar2 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_CUT_Scene_006930b4,~uVar9 - 1);
  local_4._0_1_ = 0x2b;
  local_ec[0] = local_fd;
  FUN_004040a0(0);
  uVar9 = 0xffffffff;
  pcVar10 = s_FontSize_006931ac;
  do {
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    cVar2 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_FontSize_006931ac,~uVar9 - 1);
  local_4._0_1_ = 0x2c;
  uVar3 = FUN_00436f90(local_d8);
  local_4._0_1_ = 0x2d;
  iVar4 = FUN_005a3d10(local_ec,local_fc,0x41700000,0x41000000,0x42800000,uVar3);
  local_4._0_1_ = 0x2e;
  if (*(float *)(iVar4 + 0x60) == 0.0) {
    fVar12 = (float10)FUN_005ad390(iVar4 + 0x14,&local_fd);
    *(float *)(iVar4 + 0x60) = (float)fVar12;
  }
  else {
    fVar12 = (float10)*(float *)(iVar4 + 0x60);
  }
  param_1[0xd] = (float)fVar12;
  local_4._0_1_ = 0x2d;
  FUN_005a3ce0();
  local_4._0_1_ = 0x2c;
  FUN_004040a0(1);
  local_4._0_1_ = 0x2b;
  FUN_004040a0(1);
  local_4._0_1_ = 6;
  FUN_004040a0(1);
  local_fc[0] = local_fd;
  FUN_004040a0(0);
  uVar9 = 0xffffffff;
  pcVar10 = s_CUT_Scene_006930b4;
  do {
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    cVar2 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_CUT_Scene_006930b4,~uVar9 - 1);
  local_4._0_1_ = 0x2f;
  local_ec[0] = local_fd;
  FUN_004040a0(0);
  uVar9 = 0xffffffff;
  pcVar10 = s_IconBaseX_006931a0;
  do {
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    cVar2 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_IconBaseX_006931a0,~uVar9 - 1);
  local_4._0_1_ = 0x30;
  uVar3 = FUN_00436f90(local_d8);
  local_4 = CONCAT31(local_4._1_3_,0x31);
  iVar5 = FUN_005ac9d0(local_ec,local_fc,0xd2,uVar3,0);
  iVar4 = *(int *)(iVar5 + 100);
  if (iVar4 == -0x80000000) {
    puVar6 = *(undefined1 **)(iVar5 + 0x18);
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &DAT_0064a3b4;
    }
    iVar4 = FUN_0060af10(puVar6);
    *(int *)(iVar5 + 100) = iVar4;
  }
  param_1[0x26] = iVar4;
  FUN_005acca0();
  local_4._0_1_ = 0x30;
  FUN_004040a0(1);
  local_4._0_1_ = 0x2f;
  FUN_004040a0(1);
  local_4._0_1_ = 6;
  FUN_004040a0(1);
  local_fc[0] = local_fd;
  FUN_004040a0(0);
  uVar9 = 0xffffffff;
  pcVar10 = s_CUT_Scene_006930b4;
  do {
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    cVar2 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_CUT_Scene_006930b4,~uVar9 - 1);
  local_4._0_1_ = 0x32;
  local_ec[0] = local_fd;
  FUN_004040a0(0);
  uVar9 = 0xffffffff;
  pcVar10 = s_IconBaseY_00693194;
  do {
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    cVar2 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_IconBaseY_00693194,~uVar9 - 1);
  local_4._0_1_ = 0x33;
  uVar3 = FUN_00436f90(local_d8);
  local_4 = CONCAT31(local_4._1_3_,0x34);
  iVar5 = FUN_005ac9d0(local_ec,local_fc,0xa8,uVar3,0);
  iVar4 = *(int *)(iVar5 + 100);
  if (iVar4 == -0x80000000) {
    puVar6 = *(undefined1 **)(iVar5 + 0x18);
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &DAT_0064a3b4;
    }
    iVar4 = FUN_0060af10(puVar6);
    *(int *)(iVar5 + 100) = iVar4;
  }
  param_1[0x28] = iVar4;
  FUN_005acca0();
  local_4._0_1_ = 0x33;
  FUN_004040a0(1);
  local_4._0_1_ = 0x32;
  FUN_004040a0(1);
  local_4._0_1_ = 6;
  FUN_004040a0(1);
  local_fc[0] = local_fd;
  FUN_004040a0(0);
  uVar9 = 0xffffffff;
  pcVar10 = s_CUT_Scene_006930b4;
  do {
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    cVar2 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_CUT_Scene_006930b4,~uVar9 - 1);
  local_ec[0] = local_fd;
  local_4._0_1_ = 0x35;
  FUN_004040a0(0);
  uVar9 = 0xffffffff;
  pcVar10 = s_FadeTime_00693188;
  do {
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    cVar2 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_FadeTime_00693188,~uVar9 - 1);
  local_4._0_1_ = 0x36;
  uVar3 = FUN_00436f90(local_d8);
  local_4._0_1_ = 0x37;
  iVar4 = FUN_005ac8b0(local_ec,local_fc,0x40000000,uVar3,0);
  local_4._0_1_ = 0x38;
  if (*(float *)(iVar4 + 0x60) == 0.0) {
    fVar12 = (float10)FUN_005ad390(iVar4 + 0x14,&local_fd);
    *(float *)(iVar4 + 0x60) = (float)fVar12;
  }
  uVar3 = __ftol();
  param_1[0xc] = uVar3;
  local_4._0_1_ = 0x37;
  FUN_005acca0();
  local_4._0_1_ = 0x36;
  FUN_004040a0(1);
  local_4._0_1_ = 0x35;
  FUN_004040a0(1);
  local_4._0_1_ = 6;
  FUN_004040a0(1);
  local_d8[0] = local_fd;
  FUN_004040a0(0);
  uVar9 = 0xffffffff;
  pcVar10 = s_CUT_Scene_006930b4;
  do {
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    cVar2 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_CUT_Scene_006930b4,~uVar9 - 1);
  local_4._0_1_ = 0x39;
  auStack_a4[0] = local_fd;
  FUN_004040a0(0);
  uVar9 = 0xffffffff;
  pcVar10 = s_FontName_0069317c;
  do {
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    cVar2 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_FontName_0069317c,~uVar9 - 1);
  local_4._0_1_ = 0x3a;
  uVar3 = FUN_00436f90(auStack_b4);
  local_4._0_1_ = 0x3b;
  iVar4 = FUN_005acaf0(auStack_a4,local_d8,s_Comic_Sans_MS_006930a4,uVar3,0);
  local_ec[0] = *(undefined1 *)(iVar4 + 0x14);
  local_4._0_1_ = 0x3c;
  FUN_004040a0(0);
  FUN_0040cc00(iVar4 + 0x14,0,0xffffffff);
  local_4._0_1_ = 0x3d;
  local_fc[0] = local_ec[0];
  FUN_004040a0(0);
  FUN_0040cc00(local_ec,0,0xffffffff);
  local_4._0_1_ = 0x3e;
  FUN_0040cc00(local_fc,0,0xffffffff);
  local_4._0_1_ = 0x3d;
  FUN_004040a0(1);
  local_4._0_1_ = 0x3c;
  FUN_004040a0(1);
  local_4._0_1_ = 0x3b;
  FUN_005acca0();
  local_4._0_1_ = 0x3a;
  FUN_004040a0(1);
  local_4._0_1_ = 0x39;
  FUN_004040a0(1);
  local_4 = CONCAT31(local_4._1_3_,6);
  FUN_004040a0(1);
  local_ec[0] = local_fd;
  FUN_004040a0(0);
  uVar9 = 0xffffffff;
  pcVar10 = s_CUT_Scene_006930b4;
  do {
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    cVar2 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar2 != '\0');
  uStack_dc = ~uVar9 - 1;
  cVar2 = FUN_00401940(uStack_dc,1);
  if (cVar2 != '\0') {
    pcVar10 = s_CUT_Scene_006930b4;
    pcVar11 = pcStack_e8;
    for (uVar9 = uStack_dc >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      *(undefined4 *)pcVar11 = *(undefined4 *)pcVar10;
      pcVar10 = pcVar10 + 4;
      pcVar11 = pcVar11 + 4;
    }
    for (uVar9 = uStack_dc & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
      *pcVar11 = *pcVar10;
      pcVar10 = pcVar10 + 1;
      pcVar11 = pcVar11 + 1;
    }
    FUN_00404190(uStack_dc);
  }
  local_4 = CONCAT31(local_4._1_3_,0x3f);
  local_fc[0] = local_fd;
  FUN_004040a0(0);
  uVar9 = 0xffffffff;
  pcVar10 = (char *)&DAT_00693174;
  do {
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    cVar2 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar2 != '\0');
  uStack_dc = ~uVar9 - 1;
  cVar2 = FUN_00401940(uStack_dc,1);
  if (cVar2 != '\0') {
    pcVar10 = (char *)&DAT_00693174;
    pcVar11 = pcStack_f8;
    for (uVar9 = uStack_dc >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      *(undefined4 *)pcVar11 = *(undefined4 *)pcVar10;
      pcVar10 = pcVar10 + 4;
      pcVar11 = pcVar11 + 4;
    }
    for (uVar9 = uStack_dc & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
      *pcVar11 = *pcVar10;
      pcVar10 = pcVar10 + 1;
      pcVar11 = pcVar11 + 1;
    }
    FUN_00404190(uStack_dc);
  }
  local_4._0_1_ = 0x40;
  uVar3 = FUN_00436f90(auStack_b4);
  local_4._0_1_ = 0x41;
  FUN_005ac9d0(local_fc,local_ec,1,uVar3,0);
  local_4._0_1_ = 0x42;
  FUN_004337e0();
  local_4._0_1_ = 0x41;
  FUN_005acca0();
  local_4._0_1_ = 0x40;
  FUN_004040a0(1);
  local_4._0_1_ = 0x3f;
  FUN_004040a0(1);
  local_4 = CONCAT31(local_4._1_3_,6);
  FUN_004040a0(1);
  local_fc[0] = local_fd;
  FUN_004040a0(0);
  uVar9 = 0xffffffff;
  pcVar10 = s_CUT_Scene_006930b4;
  do {
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    cVar2 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar2 != '\0');
  uStack_dc = ~uVar9 - 1;
  cVar2 = FUN_00401940(uStack_dc,1);
  if (cVar2 != '\0') {
    pcVar10 = s_CUT_Scene_006930b4;
    pcVar11 = pcStack_f8;
    for (uVar9 = uStack_dc >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      *(undefined4 *)pcVar11 = *(undefined4 *)pcVar10;
      pcVar10 = pcVar10 + 4;
      pcVar11 = pcVar11 + 4;
    }
    for (uVar9 = uStack_dc & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
      *pcVar11 = *pcVar10;
      pcVar10 = pcVar10 + 1;
      pcVar11 = pcVar11 + 1;
    }
    FUN_00404190(uStack_dc);
  }
  local_4 = CONCAT31(local_4._1_3_,0x43);
  local_ec[0] = local_fd;
  FUN_004040a0(0);
  uVar9 = 0xffffffff;
  pcVar10 = s_IconWidth_00693168;
  do {
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    cVar2 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar2 != '\0');
  uStack_dc = ~uVar9 - 1;
  cVar2 = FUN_00401940(uStack_dc,1);
  if (cVar2 != '\0') {
    pcVar10 = s_IconWidth_00693168;
    pcVar11 = pcStack_e8;
    for (uVar9 = uStack_dc >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      *(undefined4 *)pcVar11 = *(undefined4 *)pcVar10;
      pcVar10 = pcVar10 + 4;
      pcVar11 = pcVar11 + 4;
    }
    for (uVar9 = uStack_dc & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
      *pcVar11 = *pcVar10;
      pcVar10 = pcVar10 + 1;
      pcVar11 = pcVar11 + 1;
    }
    FUN_00404190(uStack_dc);
  }
  local_4._0_1_ = 0x44;
  uVar3 = FUN_00436f90(auStack_b4);
  local_4 = CONCAT31(local_4._1_3_,0x45);
  iVar4 = FUN_005ac9d0(local_ec,local_fc,0xd2,uVar3,0);
  iStack_b8 = *(int *)(iVar4 + 100);
  if (iStack_b8 == -0x80000000) {
    puVar6 = *(undefined1 **)(iVar4 + 0x18);
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &DAT_0064a3b4;
    }
    iStack_b8 = FUN_0060af10(puVar6);
    *(int *)(iVar4 + 100) = iStack_b8;
  }
  FUN_005acca0();
  local_4._0_1_ = 0x44;
  FUN_004040a0(1);
  local_4._0_1_ = 0x43;
  FUN_004040a0(1);
  local_4 = CONCAT31(local_4._1_3_,6);
  FUN_004040a0(1);
  local_fc[0] = local_fd;
  FUN_004040a0(0);
  uVar9 = 0xffffffff;
  pcVar10 = s_CUT_Scene_006930b4;
  do {
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    cVar2 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar2 != '\0');
  uStack_dc = ~uVar9 - 1;
  cVar2 = FUN_00401940(uStack_dc,1);
  if (cVar2 != '\0') {
    pcVar10 = s_CUT_Scene_006930b4;
    pcVar11 = pcStack_f8;
    for (uVar9 = uStack_dc >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      *(undefined4 *)pcVar11 = *(undefined4 *)pcVar10;
      pcVar10 = pcVar10 + 4;
      pcVar11 = pcVar11 + 4;
    }
    for (uVar9 = uStack_dc & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
      *pcVar11 = *pcVar10;
      pcVar10 = pcVar10 + 1;
      pcVar11 = pcVar11 + 1;
    }
    FUN_00404190(uStack_dc);
  }
  local_4 = CONCAT31(local_4._1_3_,0x46);
  local_ec[0] = local_fd;
  FUN_004040a0(0);
  uVar9 = 0xffffffff;
  pcVar10 = s_IconHeight_0069315c;
  do {
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    cVar2 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar2 != '\0');
  uStack_dc = ~uVar9 - 1;
  cVar2 = FUN_00401940(uStack_dc,1);
  if (cVar2 != '\0') {
    pcVar10 = s_IconHeight_0069315c;
    pcVar11 = pcStack_e8;
    for (uVar9 = uStack_dc >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      *(undefined4 *)pcVar11 = *(undefined4 *)pcVar10;
      pcVar10 = pcVar10 + 4;
      pcVar11 = pcVar11 + 4;
    }
    for (uVar9 = uStack_dc & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
      *pcVar11 = *pcVar10;
      pcVar10 = pcVar10 + 1;
      pcVar11 = pcVar11 + 1;
    }
    FUN_00404190(uStack_dc);
  }
  local_4._0_1_ = 0x47;
  uVar3 = FUN_00436f90(auStack_b4);
  local_4 = CONCAT31(local_4._1_3_,0x48);
  iVar5 = FUN_005ac9d0(local_ec,local_fc,0xa8,uVar3,0);
  iVar4 = *(int *)(iVar5 + 100);
  if (iVar4 == -0x80000000) {
    puVar6 = *(undefined1 **)(iVar5 + 0x18);
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &DAT_0064a3b4;
    }
    iVar4 = FUN_0060af10(puVar6);
    *(int *)(iVar5 + 100) = iVar4;
  }
  uStack_dc = iVar4;
  FUN_005acca0();
  local_4._0_1_ = 0x47;
  FUN_004040a0(1);
  local_4._0_1_ = 0x46;
  FUN_004040a0(1);
  local_4._0_1_ = 6;
  FUN_004040a0(1);
  uVar3 = __ftol();
  param_1[0xc] = uVar3;
  param_1[0x27] = param_1[0x26] + iStack_b8;
  param_1[0x29] = param_1[0x28] + iVar4;
  param_1[0x1b] = (float)iStack_b8 + (float)param_1[0x1a];
  param_1[0x1e] = 0;
  param_1[0x1f] = fStack_bc;
  param_1[0x20] = 0;
  param_1[0x21] = fStack_c0;
  param_1[0x16] = 0;
  param_1[0x17] = fStack_bc;
  param_1[0x19] = 0x43f00000;
  param_1[0x1d] = (float)(int)uStack_dc + (float)param_1[0x1c];
  param_1[0x18] = 480.0 - fStack_c0;
  fVar1 = (640.0 - local_c4) * 0.5;
  param_1[0x22] = fVar1;
  param_1[0x23] = fVar1 + local_c4;
  param_1[0x25] = (float)pvStack_c8 + (float)param_1[0x24];
  iVar4 = DAT_006c8de0;
  if (DAT_006c8de0 == 0) {
    iVar4 = FUN_0055b280();
  }
  if (*(char *)(iVar4 + 0x125) == '\0') {
    local_d8[0] = local_fd;
    FUN_004040a0(0);
    uVar9 = 0xffffffff;
    pcVar10 = &DAT_006b3f70;
    do {
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      cVar2 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar2 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar9 - 1);
    local_4._0_1_ = 0x49;
    pcVar7 = (code *)FUN_005a07f0(s_m_Initialized_00691bb0,s___AdamSource_AdamEngine_h_0068eb58,
                                  0x127,local_d8);
    (*pcVar7)();
    local_4._0_1_ = 6;
    FUN_004040a0(1);
  }
  param_1[0xd] = (float)param_1[0xd] * 0.0015625;
  param_1[0x1a] = (float)param_1[0x1a] * 0.0015625;
  param_1[0x1b] = (float)param_1[0x1b] * 0.0015625;
  param_1[0x1c] = (float)param_1[0x1c] * 0.0020833334;
  param_1[0x1d] = (float)param_1[0x1d] * 0.0020833334;
  param_1[0x1e] = (float)param_1[0x1e] * 0.0015625;
  param_1[0x1f] = (float)param_1[0x1f] * 0.0015625;
  param_1[0x20] = (float)param_1[0x20] * 0.0020833334;
  param_1[0x21] = (float)param_1[0x21] * 0.0020833334;
  param_1[0x16] = (float)param_1[0x16] * 0.0015625;
  param_1[0x17] = (float)param_1[0x17] * 0.0015625;
  param_1[0x18] = (float)param_1[0x18] * 0.0020833334;
  param_1[0x19] = (float)param_1[0x19] * 0.0020833334;
  param_1[0x22] = (float)param_1[0x22] * 0.0015625;
  param_1[0x23] = (float)param_1[0x23] * 0.0015625;
  param_1[0x24] = (float)param_1[0x24] * 0.0020833334;
  param_1[0x25] = (float)param_1[0x25] * 0.0020833334;
  iVar4 = DAT_006c8de0;
  if (DAT_006c8de0 == 0) {
    iVar4 = FUN_0055b280();
  }
  local_c4 = (float)iVar4;
  if (param_1 != (undefined4 *)0xffffffb4) {
    if (*(int *)(iVar4 + 0xd8) == 0) {
      local_d8[0] = local_fd;
      FUN_004040a0(0);
      uVar9 = 0xffffffff;
      pcVar10 = &DAT_006b3f70;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        cVar2 = *pcVar10;
        pcVar10 = pcVar10 + 1;
      } while (cVar2 != '\0');
      FUN_004040f0(&DAT_006b3f70,~uVar9 - 1);
      local_4._0_1_ = 0x4a;
      pcVar7 = (code *)FUN_005a07f0(s_m_BitmapMgr_0068eb4c,s___AdamSource_AdamEngine_h_0068eb58,
                                    0x188,local_d8);
      (*pcVar7)();
      local_4._0_1_ = 6;
      FUN_004040a0(1);
    }
    piVar8 = (int *)FUN_0050d730(&pvStack_c8,&DAT_006b8878);
    iVar4 = param_1[0x13];
    local_4._0_1_ = 0x4b;
    if (iVar4 != *piVar8) {
      if ((iVar4 != 0) &&
         (iVar5 = *(int *)(iVar4 + 0x14) + -1, *(int *)(iVar4 + 0x14) = iVar5, iVar5 == 0)) {
        FUN_005abfc0(0);
      }
      iVar4 = *piVar8;
      param_1[0x13] = iVar4;
      if (iVar4 != 0) {
        *(int *)(iVar4 + 0x14) = *(int *)(iVar4 + 0x14) + 1;
      }
    }
    local_4._0_1_ = 6;
    if ((pvStack_c8 != (void *)0x0) &&
       (iVar4 = *(int *)((int)pvStack_c8 + 0x14) + -1, *(int *)((int)pvStack_c8 + 0x14) = iVar4,
       iVar4 == 0)) {
      FUN_005abfc0(0);
    }
    if (param_1[0x13] == 0) {
      local_ec[0] = local_fd;
      uVar9 = 0xffffffff;
      pcStack_e8 = (char *)0x0;
      pcVar10 = &DAT_006b3f70;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        cVar2 = *pcVar10;
        pcVar10 = pcVar10 + 1;
      } while (cVar2 != '\0');
      uStack_e4 = 0;
      uStack_e0 = 0;
      FUN_004040f0(&DAT_006b3f70,~uVar9 - 1);
      local_4._0_1_ = 0x4c;
      pcVar7 = (code *)FUN_005a07f0(s_m_HBmpFade_IsNotNull___00693118,
                                    s_D__Work_RCHorror_RCSource_RcCutS_00693130,0x72,local_ec);
      (*pcVar7)();
      local_4._0_1_ = 6;
      if (pcStack_e8 != (char *)0x0) {
        cVar2 = pcStack_e8[-1];
        if ((cVar2 == '\0') || (cVar2 == -1)) {
          FUN_005fe5f0(pcStack_e8 + -1);
        }
        else {
          pcStack_e8[-1] = cVar2 + -1;
        }
      }
    }
  }
  pvStack_c8 = operator_new(0x48);
  local_4._0_1_ = 0x4d;
  if (pvStack_c8 == (void *)0x0) {
    iVar4 = 0;
  }
  else {
    iVar4 = FUN_004efbe0(param_1 + 0xe,param_1[0xd],0,0,1);
  }
  local_4 = CONCAT31(local_4._1_3_,6);
  param_1[0x2e] = iVar4;
  if (iVar4 == 0) {
    local_fc[0] = local_fd;
    uVar9 = 0xffffffff;
    pcVar10 = s_Unable_to_create_TextPrinter_obj_006930f4;
    do {
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      cVar2 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar2 != '\0');
    pvStack_c8 = (void *)(~uVar9 - 1);
    pcStack_f8 = (char *)0x0;
    uStack_f4 = 0;
    uStack_f0 = 0;
    cVar2 = FUN_00401940(pvStack_c8,1);
    if (cVar2 != '\0') {
      pcVar10 = s_Unable_to_create_TextPrinter_obj_006930f4;
      pcVar11 = pcStack_f8;
      for (uVar9 = (uint)pvStack_c8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined4 *)pcVar11 = *(undefined4 *)pcVar10;
        pcVar10 = pcVar10 + 4;
        pcVar11 = pcVar11 + 4;
      }
      for (uVar9 = (uint)pvStack_c8 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *pcVar11 = *pcVar10;
        pcVar10 = pcVar10 + 1;
        pcVar11 = pcVar11 + 1;
      }
      FUN_00404190(pvStack_c8);
    }
    local_4._0_1_ = 0x4e;
    pcVar7 = (code *)FUN_005a07f0(s_m_TextPrinter____NULL_006930dc,
                                  s_D__Work_RCHorror_RCSource_RcCutS_00693130,0x77,local_fc);
    (*pcVar7)();
    local_4 = CONCAT31(local_4._1_3_,6);
    if (pcStack_f8 != (char *)0x0) {
      cVar2 = pcStack_f8[-1];
      if ((cVar2 == '\0') || (cVar2 == -1)) {
        FUN_005fe5f0(pcStack_f8 + -1);
      }
      else {
        pcStack_f8[-1] = cVar2 + -1;
      }
    }
  }
  uStack_94 = 0x437a0000;
  uStack_90 = 0x437e0000;
  uStack_8c = 0x437f0000;
  uStack_88 = 0x437f0000;
  FUN_004f01c0(&uStack_94);
  FUN_004f0200(0x20,0x7e);
  FUN_004f0200(0xfffffff8,0xfffffff8);
  FUN_004f0200(0xffffffdf,0xffffffdf);
  FUN_004f0200(0xffffffe9,0xffffffe9);
  ExceptionList = pvStack_c;
  return param_1;
}

