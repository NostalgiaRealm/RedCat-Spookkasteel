/*
 * FUN_00521de0 at 00521de0
 * undefined FUN_00521de0(void)
 * Address ranges: 00521de0-005235f7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x00523570) */
/* WARNING: Removing unreachable block (ram,0x0052358e) */
/* WARNING: Removing unreachable block (ram,0x0052359d) */
/* WARNING: Removing unreachable block (ram,0x005235a6) */

undefined4 * __fastcall FUN_00521de0(undefined4 *param_1)

{
  void *pvVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 *puVar5;
  int iVar6;
  uint uVar7;
  char *pcVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined1 local_f9;
  undefined1 local_f8 [4];
  undefined4 *local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined1 local_e8 [4];
  char *local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined1 local_d8 [4];
  int local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined1 local_c8 [16];
  uint local_b8;
  undefined1 local_b4 [4];
  int local_b0;
  undefined1 local_a4 [16];
  undefined4 local_94;
  uint local_90;
  undefined1 local_89;
  int local_88;
  void *local_80;
  undefined4 *local_7c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006390b5;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_7c = param_1;
  FUN_005ab4a0();
  local_4 = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  param_1[6] = 1;
  FUN_0044e4a0(&local_89);
  param_1[0xd] = 0;
  param_1[0xe] = &LAB_0051d870;
  *(undefined1 *)(param_1 + 0xf) = 0;
  local_4._0_1_ = 1;
  FUN_0044e4a0(&local_f9);
  param_1[0x14] = 0;
  param_1[0x15] = &LAB_0051d890;
  *(undefined1 *)(param_1 + 0x16) = 0;
  local_4._0_1_ = 2;
  param_1[0x17] = 0;
  FUN_005844b0();
  local_4._0_1_ = 3;
  param_1[0x18] = 0;
  FUN_005844b0();
  local_4._0_1_ = 4;
  param_1[0x19] = 0;
  FUN_005844b0();
  local_4._0_1_ = 5;
  *(undefined1 *)(param_1 + 0x1a) = local_f9;
  FUN_004040a0(0);
  param_1[0x1f] = 0;
  *(undefined1 *)(param_1 + 0x1e) = local_f9;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x23] = 0;
  *(undefined1 *)(param_1 + 0x22) = local_f9;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  *(undefined1 *)(param_1 + 0x29) = 0;
  local_4._0_1_ = 8;
  param_1[0x2a] = 0;
  FUN_005844b0();
  *(undefined1 *)(param_1 + 0x2b) = 0;
  param_1[0x2c] = 0;
  *(undefined1 *)(param_1 + 0x2d) = local_f9;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0xffffffff;
  local_4._0_1_ = 10;
  *(undefined1 *)(param_1 + 0x32) = local_f9;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar8 = &DAT_006b3f70;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar2 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(&DAT_006b3f70,~uVar7 - 1);
  param_1[0x36] = 0xffffffff;
  local_4._0_1_ = 0xb;
  param_1[0x37] = 0;
  FUN_005844b0();
  local_e8[0] = local_f9;
  local_4._0_1_ = 0xc;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar8 = s_Player_006902e0;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar2 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_Player_006902e0,~uVar7 - 1);
  local_4._0_1_ = 0xd;
  local_f8[0] = local_f9;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar8 = s_RotationSpeed_0069fc14;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar2 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_RotationSpeed_0069fc14,~uVar7 - 1);
  local_4._0_1_ = 0xe;
  uVar3 = FUN_00436f90(local_a4);
  local_4._0_1_ = 0xf;
  FUN_005ac8b0(local_f8,local_e8,0x3f800000,uVar3,0);
  local_4._0_1_ = 0x13;
  FUN_004040a0(1);
  local_4._0_1_ = 0x12;
  FUN_004040a0(1);
  local_4._0_1_ = 0x11;
  FUN_004040a0(1);
  local_d8[0] = local_f9;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar8 = s_Player_006902e0;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar2 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_Player_006902e0,~uVar7 - 1);
  local_c8[0] = local_f9;
  local_4._0_1_ = 0x14;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar8 = &DAT_0069fc0c;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar2 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(&DAT_0069fc0c,~uVar7 - 1);
  local_4._0_1_ = 0x15;
  uVar3 = FUN_00436f90(local_b4);
  local_4._0_1_ = 0x16;
  FUN_005ac8b0(local_c8,local_d8,0x3f47ae14,uVar3,0);
  local_4._0_1_ = 0x1a;
  FUN_004040a0(1);
  local_4._0_1_ = 0x19;
  FUN_004040a0(1);
  local_4._0_1_ = 0x18;
  FUN_004040a0(1);
  local_e8[0] = local_f9;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar8 = s_Player_006902e0;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar2 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_Player_006902e0,~uVar7 - 1);
  local_4._0_1_ = 0x1b;
  local_f8[0] = local_f9;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar8 = s_BBYSize_0069fc04;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar2 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_BBYSize_0069fc04,~uVar7 - 1);
  local_4._0_1_ = 0x1c;
  uVar3 = FUN_00436f90(local_a4);
  local_4._0_1_ = 0x1d;
  FUN_005ac8b0(local_f8,local_e8,0x3fe7ae14,uVar3,0);
  local_4._0_1_ = 0x21;
  FUN_004040a0(1);
  local_4._0_1_ = 0x20;
  FUN_004040a0(1);
  local_4._0_1_ = 0x1f;
  FUN_004040a0(1);
  local_c8[0] = local_f9;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar8 = s_Player_006902e0;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar2 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_Player_006902e0,~uVar7 - 1);
  local_4._0_1_ = 0x22;
  local_d8[0] = local_f9;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar8 = &DAT_0069fbfc;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar2 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(&DAT_0069fbfc,~uVar7 - 1);
  local_4._0_1_ = 0x23;
  uVar3 = FUN_00436f90(local_b4);
  local_4._0_1_ = 0x24;
  FUN_005ac8b0(local_d8,local_c8,0x3f47ae14,uVar3,0);
  local_4._0_1_ = 0x28;
  FUN_004040a0(1);
  local_4._0_1_ = 0x27;
  FUN_004040a0(1);
  local_4._0_1_ = 0x26;
  FUN_004040a0(1);
  local_e8[0] = local_f9;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar8 = s_Player_006902e0;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar2 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_Player_006902e0,~uVar7 - 1);
  local_f8[0] = local_f9;
  local_4._0_1_ = 0x29;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar8 = s_EyeHeight_0069fbf0;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar2 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_EyeHeight_0069fbf0,~uVar7 - 1);
  local_4._0_1_ = 0x2a;
  uVar3 = FUN_00436f90(local_a4);
  local_4._0_1_ = 0x2b;
  FUN_005ac8b0(local_f8,local_e8,0x3fd851ec,uVar3,0);
  local_4._0_1_ = 0x2f;
  FUN_004040a0(1);
  local_4._0_1_ = 0x2e;
  FUN_004040a0(1);
  local_4._0_1_ = 0x2d;
  FUN_004040a0(1);
  local_c8[0] = local_f9;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar8 = s_Player_006902e0;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar2 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_Player_006902e0,~uVar7 - 1);
  local_4._0_1_ = 0x30;
  local_d8[0] = local_f9;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar8 = s_WalkForwardSpeed_0069fbdc;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar2 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_WalkForwardSpeed_0069fbdc,~uVar7 - 1);
  local_4._0_1_ = 0x31;
  uVar3 = FUN_00436f90(local_b4);
  local_4._0_1_ = 0x32;
  FUN_005ac8b0(local_d8,local_c8,0x40400000,uVar3,0);
  local_4._0_1_ = 0x36;
  FUN_004040a0(1);
  local_4._0_1_ = 0x35;
  FUN_004040a0(1);
  local_4._0_1_ = 0x34;
  FUN_004040a0(1);
  local_e8[0] = local_f9;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar8 = s_Player_006902e0;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar2 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_Player_006902e0,~uVar7 - 1);
  local_4._0_1_ = 0x37;
  local_f8[0] = local_f9;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar8 = s_WalkOtherSpeed_0069fbcc;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar2 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_WalkOtherSpeed_0069fbcc,~uVar7 - 1);
  local_4._0_1_ = 0x38;
  uVar3 = FUN_00436f90(local_a4);
  local_4._0_1_ = 0x39;
  FUN_005ac8b0(local_f8,local_e8,0x40000000,uVar3,0);
  local_4._0_1_ = 0x3d;
  FUN_004040a0(1);
  local_4._0_1_ = 0x3c;
  FUN_004040a0(1);
  local_4._0_1_ = 0x3b;
  FUN_004040a0(1);
  local_c8[0] = local_f9;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar8 = s_Player_006902e0;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar2 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_Player_006902e0,~uVar7 - 1);
  local_d8[0] = local_f9;
  local_4._0_1_ = 0x3e;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar8 = s_RunForwardSpeed_0069fbbc;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar2 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_RunForwardSpeed_0069fbbc,~uVar7 - 1);
  local_4._0_1_ = 0x3f;
  uVar3 = FUN_00436f90(local_b4);
  local_4._0_1_ = 0x40;
  FUN_005ac8b0(local_d8,local_c8,0x40f00000,uVar3,0);
  local_4._0_1_ = 0x44;
  FUN_004040a0(1);
  local_4._0_1_ = 0x43;
  FUN_004040a0(1);
  local_4._0_1_ = 0x42;
  FUN_004040a0(1);
  local_e8[0] = local_f9;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar8 = s_Player_006902e0;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar2 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_Player_006902e0,~uVar7 - 1);
  local_4._0_1_ = 0x45;
  local_f8[0] = local_f9;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar8 = s_RunOtherSpeed_0069fbac;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar2 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_RunOtherSpeed_0069fbac,~uVar7 - 1);
  local_4._0_1_ = 0x46;
  uVar3 = FUN_00436f90(local_a4);
  local_4._0_1_ = 0x47;
  FUN_005ac8b0(local_f8,local_e8,0x40a00000,uVar3,0);
  local_4._0_1_ = 0x4b;
  FUN_004040a0(1);
  local_4._0_1_ = 0x4a;
  FUN_004040a0(1);
  local_4._0_1_ = 0x49;
  FUN_004040a0(1);
  local_c8[0] = local_f9;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar8 = s_Player_006902e0;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar2 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_Player_006902e0,~uVar7 - 1);
  local_4._0_1_ = 0x4c;
  local_d8[0] = local_f9;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar8 = s_AirForwardSpeed_0069fb9c;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar2 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_AirForwardSpeed_0069fb9c,~uVar7 - 1);
  local_4._0_1_ = 0x4d;
  uVar3 = FUN_00436f90(local_b4);
  local_4._0_1_ = 0x4e;
  FUN_005ac8b0(local_d8,local_c8,0x3f800000,uVar3,0);
  local_4._0_1_ = 0x52;
  FUN_004040a0(1);
  local_4._0_1_ = 0x51;
  FUN_004040a0(1);
  local_4._0_1_ = 0x50;
  FUN_004040a0(1);
  local_e8[0] = local_f9;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar8 = s_Player_006902e0;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar2 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_Player_006902e0,~uVar7 - 1);
  local_f8[0] = local_f9;
  local_4._0_1_ = 0x53;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar8 = s_AirOtherSpeed_0069fb8c;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar2 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_AirOtherSpeed_0069fb8c,~uVar7 - 1);
  local_4._0_1_ = 0x54;
  uVar3 = FUN_00436f90(local_a4);
  local_4._0_1_ = 0x55;
  FUN_005ac8b0(local_f8,local_e8,0x3f800000,uVar3,0);
  local_4._0_1_ = 0x59;
  FUN_004040a0(1);
  local_4._0_1_ = 0x58;
  FUN_004040a0(1);
  local_4._0_1_ = 0x57;
  FUN_004040a0(1);
  local_c8[0] = local_f9;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar8 = s_Player_006902e0;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar2 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_Player_006902e0,~uVar7 - 1);
  local_4._0_1_ = 0x5a;
  local_d8[0] = local_f9;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar8 = s_JumpHeight_0069fb80;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar2 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_JumpHeight_0069fb80,~uVar7 - 1);
  local_4._0_1_ = 0x5b;
  uVar3 = FUN_00436f90(local_b4);
  local_4._0_1_ = 0x5c;
  FUN_005ac8b0(local_d8,local_c8,0x3fcccccd,uVar3,0);
  local_4._0_1_ = 0x60;
  FUN_004040a0(1);
  local_4._0_1_ = 0x5f;
  FUN_004040a0(1);
  local_4._0_1_ = 0x5e;
  FUN_004040a0(1);
  local_e8[0] = local_f9;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar8 = s_Player_006902e0;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar2 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_Player_006902e0,~uVar7 - 1);
  local_4._0_1_ = 0x61;
  local_f8[0] = local_f9;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar8 = s_StepHeight_0069fb74;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar2 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_StepHeight_0069fb74,~uVar7 - 1);
  local_4._0_1_ = 0x62;
  uVar3 = FUN_00436f90(local_a4);
  local_4._0_1_ = 99;
  FUN_005ac8b0(local_f8,local_e8,0x3f000000,uVar3,0);
  local_4._0_1_ = 0x67;
  FUN_004040a0(1);
  local_4._0_1_ = 0x66;
  FUN_004040a0(1);
  local_4._0_1_ = 0x65;
  FUN_004040a0(1);
  local_c8[0] = local_f9;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar8 = s_Player_006902e0;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar2 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_Player_006902e0,~uVar7 - 1);
  local_4._0_1_ = 0x68;
  local_d8[0] = local_f9;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar8 = s_Acceleration_0069fb64;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar2 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_Acceleration_0069fb64,~uVar7 - 1);
  local_4._0_1_ = 0x69;
  uVar3 = FUN_00436f90(local_b4);
  local_4._0_1_ = 0x6a;
  FUN_005ac8b0(local_d8,local_c8,0x41a00000,uVar3,0);
  local_4._0_1_ = 0x6e;
  FUN_004040a0(1);
  local_4._0_1_ = 0x6d;
  FUN_004040a0(1);
  local_4._0_1_ = 0x6c;
  FUN_004040a0(1);
  local_e8[0] = local_f9;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar8 = s_Player_006902e0;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar2 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_Player_006902e0,~uVar7 - 1);
  local_4._0_1_ = 0x6f;
  local_f8[0] = local_f9;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar8 = s_Gravitation_0069fb58;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar2 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_Gravitation_0069fb58,~uVar7 - 1);
  local_4._0_1_ = 0x70;
  uVar3 = FUN_00436f90(local_a4);
  local_4._0_1_ = 0x71;
  FUN_005ac8b0(local_f8,local_e8,0x41c80000,uVar3,0);
  local_4._0_1_ = 0x75;
  FUN_004040a0(1);
  local_4._0_1_ = 0x74;
  FUN_004040a0(1);
  local_4._0_1_ = 0x73;
  FUN_004040a0(1);
  local_c8[0] = local_f9;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar8 = s_Player_006902e0;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar2 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_Player_006902e0,~uVar7 - 1);
  local_4._0_1_ = 0x76;
  local_d8[0] = local_f9;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar8 = s_DistanceBetweenEyes_0069fb44;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar2 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_DistanceBetweenEyes_0069fb44,~uVar7 - 1);
  local_4._0_1_ = 0x77;
  uVar3 = FUN_00436f90(local_b4);
  local_4._0_1_ = 0x78;
  FUN_005ac8b0(local_d8,local_c8,0x3d75c28f,uVar3,0);
  local_4._0_1_ = 0x7c;
  FUN_004040a0(1);
  local_4._0_1_ = 0x7b;
  FUN_004040a0(1);
  local_4 = CONCAT31(local_4._1_3_,0x7a);
  FUN_004040a0(1);
  local_f8[0] = local_f9;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar8 = (char *)&DAT_0069fb3c;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar2 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar2 != '\0');
  local_b8 = ~uVar7 - 1;
  cVar2 = FUN_00401940(local_b8,1);
  if (cVar2 != '\0') {
    puVar9 = &DAT_0069fb3c;
    puVar10 = local_f4;
    for (uVar7 = local_b8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar10 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar10 = puVar10 + 1;
    }
    for (uVar7 = local_b8 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined1 *)puVar10 = *(undefined1 *)puVar9;
      puVar9 = (undefined4 *)((int)puVar9 + 1);
      puVar10 = (undefined4 *)((int)puVar10 + 1);
    }
    FUN_00404190(local_b8);
  }
  local_4 = CONCAT31(local_4._1_3_,0x7d);
  local_e8[0] = local_f9;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar8 = s_ScaleCorrection_0069fb2c;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar2 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar2 != '\0');
  local_b8 = ~uVar7 - 1;
  cVar2 = FUN_00401940(local_b8,1);
  if (cVar2 != '\0') {
    pcVar8 = s_ScaleCorrection_0069fb2c;
    for (uVar7 = local_b8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)local_e4 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      local_e4 = local_e4 + 4;
    }
    for (uVar7 = local_b8 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *local_e4 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      local_e4 = local_e4 + 1;
    }
    FUN_00404190(local_b8);
  }
  local_4._0_1_ = 0x7e;
  uVar3 = FUN_00436f90(local_a4);
  local_4._0_1_ = 0x7f;
  FUN_005ac8b0(local_e8,local_f8,0x3bc49ba6,uVar3,0);
  local_4._0_1_ = 0x83;
  FUN_004040a0(1);
  local_4._0_1_ = 0x82;
  FUN_004040a0(1);
  local_4._0_1_ = 0x81;
  FUN_004040a0(1);
  param_1[0x203] = 0;
  param_1[0x204] = 0;
  param_1[0x205] = 0;
  local_4._0_1_ = 0x86;
  *param_1 = &PTR_FUN_0064f6a8;
  FUN_005ae5f0(s_D__Work_RCHorror_AdamSource_Adam_0069fb00,0xc4);
  local_4 = CONCAT31(local_4._1_3_,0x87);
  *(undefined1 *)(param_1 + 0x16) = 1;
  local_f8[0] = local_f9;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar8 = (char *)&DAT_0069fafc;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar2 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar2 != '\0');
  local_b8 = ~uVar7 - 1;
  cVar2 = FUN_00401940(local_b8,1);
  if (cVar2 != '\0') {
    puVar9 = &DAT_0069fafc;
    for (uVar7 = local_b8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *local_f4 = *puVar9;
      puVar9 = puVar9 + 1;
      local_f4 = local_f4 + 1;
    }
    for (uVar7 = local_b8 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined1 *)local_f4 = *(undefined1 *)puVar9;
      puVar9 = (undefined4 *)((int)puVar9 + 1);
      local_f4 = (undefined4 *)((int)local_f4 + 1);
    }
    FUN_00404190(local_b8);
  }
  puVar5 = local_f8;
  local_4._0_1_ = 0x88;
  FUN_005a2980(puVar5);
  FUN_005a2340(puVar5);
  local_4._0_1_ = 0x87;
  FUN_004040a0(1);
  iVar4 = FUN_005a2f50(local_a4);
  puVar5 = *(undefined1 **)(iVar4 + 4);
  local_4._0_1_ = 0x89;
  if (puVar5 == (undefined1 *)0x0) {
    puVar5 = &DAT_0064a3b4;
  }
  uVar3 = FUN_005ae390(local_b4,s_SoundsFolder____s_0069fae8,puVar5);
  local_4._0_1_ = 0x8a;
  FUN_005aff00(uVar3);
  local_4._0_1_ = 0x89;
  FUN_004040a0(1);
  local_4._0_1_ = 0x87;
  FUN_004040a0(1);
  iVar4 = FUN_005a2f50(local_a4);
  puVar5 = *(undefined1 **)(iVar4 + 4);
  local_4._0_1_ = 0x8b;
  if (puVar5 == (undefined1 *)0x0) {
    puVar5 = &DAT_0064a3b4;
  }
  uVar3 = FUN_005ae390(local_b4,s_SoundsLowFolder____s_0069fad0,puVar5);
  local_4._0_1_ = 0x8c;
  FUN_005aff00(uVar3);
  local_4._0_1_ = 0x8b;
  FUN_004040a0(1);
  local_4._0_1_ = 0x87;
  FUN_004040a0(1);
  iVar4 = FUN_005a2f50(local_a4);
  puVar5 = *(undefined1 **)(iVar4 + 4);
  local_4._0_1_ = 0x8d;
  if (puVar5 == (undefined1 *)0x0) {
    puVar5 = &DAT_0064a3b4;
  }
  uVar3 = FUN_005ae390(local_b4,s_BitmapsFolder____s_0069fabc,puVar5);
  local_4._0_1_ = 0x8e;
  FUN_005aff00(uVar3);
  local_4._0_1_ = 0x8d;
  FUN_004040a0(1);
  local_4._0_1_ = 0x87;
  FUN_004040a0(1);
  iVar4 = FUN_005a2f50(local_a4);
  puVar5 = *(undefined1 **)(iVar4 + 4);
  local_4._0_1_ = 0x8f;
  if (puVar5 == (undefined1 *)0x0) {
    puVar5 = &DAT_0064a3b4;
  }
  uVar3 = FUN_005ae390(local_b4,s_ActorsFolder____s_0069faa8,puVar5);
  local_4._0_1_ = 0x90;
  FUN_005aff00(uVar3);
  local_4._0_1_ = 0x8f;
  FUN_004040a0(1);
  local_4._0_1_ = 0x87;
  FUN_004040a0(1);
  iVar4 = FUN_005a2f50(local_a4);
  puVar5 = *(undefined1 **)(iVar4 + 4);
  local_4._0_1_ = 0x91;
  if (puVar5 == (undefined1 *)0x0) {
    puVar5 = &DAT_0064a3b4;
  }
  uVar3 = FUN_005ae390(local_b4,s_LevelsFolder____s_0069fa94,puVar5);
  local_4._0_1_ = 0x92;
  FUN_005aff00(uVar3);
  local_4._0_1_ = 0x91;
  FUN_004040a0(1);
  local_4._0_1_ = 0x87;
  FUN_004040a0(1);
  iVar4 = FUN_005a2f50(local_b4);
  puVar5 = *(undefined1 **)(iVar4 + 4);
  local_4._0_1_ = 0x93;
  if (puVar5 == (undefined1 *)0x0) {
    puVar5 = &DAT_0064a3b4;
  }
  uVar3 = FUN_005ae390(local_d8,s_SettingsFolder____s_0069fa80,puVar5);
  local_4 = CONCAT31(local_4._1_3_,0x94);
  FUN_005aff00(uVar3);
  if (local_d4 != 0) {
    cVar2 = *(char *)(local_d4 + -1);
    if ((cVar2 == '\0') || (cVar2 == -1)) {
      FUN_005fe5f0((char *)(local_d4 + -1));
    }
    else {
      *(char *)(local_d4 + -1) = cVar2 + -1;
    }
  }
  local_d4 = 0;
  local_d0 = 0;
  local_cc = 0;
  local_4._0_1_ = 0x87;
  if (local_b0 != 0) {
    cVar2 = *(char *)(local_b0 + -1);
    if ((cVar2 == '\0') || (cVar2 == -1)) {
      FUN_005fe5f0((char *)(local_b0 + -1));
    }
    else {
      *(char *)(local_b0 + -1) = cVar2 + -1;
    }
  }
  iVar4 = FUN_005a2f50(local_b4);
  puVar5 = *(undefined1 **)(iVar4 + 4);
  local_4._0_1_ = 0x95;
  if (puVar5 == (undefined1 *)0x0) {
    puVar5 = &DAT_0064a3b4;
  }
  uVar3 = FUN_005ae390(local_d8,s_ScreenShotsFolder____s_0069fa68,puVar5);
  local_4 = CONCAT31(local_4._1_3_,0x96);
  FUN_005aff00(uVar3);
  if (local_d4 != 0) {
    cVar2 = *(char *)(local_d4 + -1);
    if ((cVar2 == '\0') || (cVar2 == -1)) {
      FUN_005fe5f0((char *)(local_d4 + -1));
    }
    else {
      *(char *)(local_d4 + -1) = cVar2 + -1;
    }
  }
  local_d4 = 0;
  local_d0 = 0;
  local_cc = 0;
  local_4._0_1_ = 0x87;
  if (local_b0 != 0) {
    cVar2 = *(char *)(local_b0 + -1);
    if ((cVar2 == '\0') || (cVar2 == -1)) {
      FUN_005fe5f0((char *)(local_b0 + -1));
    }
    else {
      *(char *)(local_b0 + -1) = cVar2 + -1;
    }
  }
  local_f8[0] = local_f9;
  uVar7 = 0xffffffff;
  *(undefined1 *)(param_1 + 5) = 1;
  pcVar8 = s_General_00690810;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar2 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar2 != '\0');
  local_f4 = (undefined4 *)0x0;
  local_f0 = 0;
  local_ec = 0;
  FUN_004040f0(s_General_00690810,~uVar7 - 1);
  local_e8[0] = local_f9;
  uVar7 = 0xffffffff;
  local_4._0_1_ = 0x97;
  pcVar8 = s_DifficultyLevel_0069fa58;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar2 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar2 != '\0');
  local_e4 = (char *)0x0;
  local_e0 = 0;
  local_dc = 0;
  FUN_004040f0(s_DifficultyLevel_0069fa58,~uVar7 - 1);
  local_4._0_1_ = 0x98;
  uVar3 = FUN_0043b0a0(local_d8);
  local_4 = CONCAT31(local_4._1_3_,0x99);
  iVar6 = FUN_005ac9d0(local_e8,local_f8,1,uVar3,0);
  iVar4 = *(int *)(iVar6 + 100);
  if (iVar4 == -0x80000000) {
    puVar5 = *(undefined1 **)(iVar6 + 0x18);
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &DAT_0064a3b4;
    }
    iVar4 = FUN_0060af10(puVar5);
    *(int *)(iVar6 + 100) = iVar4;
  }
  param_1[6] = iVar4;
  FUN_005acca0();
  if (local_d4 != 0) {
    cVar2 = *(char *)(local_d4 + -1);
    if ((cVar2 == '\0') || (cVar2 == -1)) {
      FUN_005fe5f0((char *)(local_d4 + -1));
    }
    else {
      *(char *)(local_d4 + -1) = cVar2 + -1;
    }
  }
  local_d4 = 0;
  local_d0 = 0;
  local_cc = 0;
  if (local_e4 != (char *)0x0) {
    cVar2 = *(char *)((int)local_e4 + -1);
    if ((cVar2 == '\0') || (cVar2 == -1)) {
      FUN_005fe5f0((char *)((int)local_e4 + -1));
    }
    else {
      *(char *)((int)local_e4 + -1) = cVar2 + -1;
    }
  }
  local_e4 = (char *)0x0;
  local_e0 = 0;
  local_dc = 0;
  local_4 = CONCAT31(local_4._1_3_,0x87);
  if (local_f4 != (undefined4 *)0x0) {
    cVar2 = *(char *)((int)local_f4 + -1);
    if ((cVar2 == '\0') || (cVar2 == -1)) {
      FUN_005fe5f0((char *)((int)local_f4 + -1));
    }
    else {
      *(char *)((int)local_f4 + -1) = cVar2 + -1;
    }
  }
  iVar6 = FUN_00515b70();
  iVar4 = *(int *)(iVar6 + 100);
  if (iVar4 == -0x80000000) {
    puVar5 = *(undefined1 **)(iVar6 + 0x18);
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &DAT_0064a3b4;
    }
    iVar4 = FUN_0060af10(puVar5);
    *(int *)(iVar6 + 100) = iVar4;
  }
  if (iVar4 != 0) {
    *(undefined1 *)(param_1 + 0x2b) = 1;
  }
  local_b8 = 8;
  do {
    puVar9 = (undefined4 *)param_1[0x24];
    local_94 = 0;
    if (param_1[0x25] - (int)puVar9 >> 2 == 0) {
      if ((param_1[0x23] == 0) || (local_90 = (int)puVar9 - param_1[0x23] >> 2, local_90 < 2)) {
        local_90 = 1;
      }
      local_88 = FUN_0044e4c0();
      local_88 = local_88 + local_90;
      iVar4 = local_88;
      if (local_88 < 0) {
        iVar4 = 0;
      }
      local_80 = operator_new(iVar4 << 2);
      local_90 = FUN_004dddf0(param_1[0x23],puVar9,local_80);
      FUN_004a7300(local_90,1,&local_94);
      FUN_004dddf0(puVar9,param_1[0x24],local_90 + 4);
      FUN_00587d50(param_1[0x23],param_1[0x24]);
      FUN_005fe5f0(param_1[0x23]);
      pvVar1 = local_80;
      param_1[0x25] = (void *)((int)local_80 + local_88 * 4);
      iVar4 = FUN_0044e4c0();
      param_1[0x23] = pvVar1;
      param_1[0x24] = (int)pvVar1 + iVar4 * 4 + 4;
    }
    else {
      FUN_004dddf0(puVar9,puVar9,puVar9 + 1);
      FUN_004a7300(param_1[0x24],1 - (param_1[0x24] - (int)puVar9 >> 2),&local_94);
      puVar10 = (undefined4 *)param_1[0x24];
      for (; puVar9 != puVar10; puVar9 = puVar9 + 1) {
        *puVar9 = local_94;
      }
      param_1[0x24] = param_1[0x24] + 4;
    }
    local_b8 = local_b8 + -1;
  } while (local_b8 != 0);
  local_4 = CONCAT31(local_4._1_3_,0x86);
  FUN_005ae770();
  ExceptionList = local_c;
  return param_1;
}

