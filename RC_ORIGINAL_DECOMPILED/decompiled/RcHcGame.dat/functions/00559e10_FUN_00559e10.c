/*
 * FUN_00559e10 at 00559e10
 * undefined FUN_00559e10(void)
 * Address ranges: 00559e10-0055af87
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __fastcall FUN_00559e10(undefined4 *param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  char *pcVar9;
  undefined1 local_18d;
  undefined4 *local_18c;
  undefined1 local_188 [4];
  char *local_184;
  undefined1 local_178 [4];
  char *local_174;
  undefined1 local_168 [4];
  undefined4 *local_164;
  undefined1 local_158 [4];
  char *local_154;
  undefined1 local_148 [4];
  char *local_144;
  undefined1 local_138 [19];
  undefined1 local_125;
  undefined1 local_124 [4];
  int local_120;
  undefined4 *local_110;
  undefined4 local_10c [64];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063f2f6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_110 = param_1;
  FUN_005ab4a0();
  local_18c = param_1 + 5;
  local_4 = 0;
  FUN_0044e4a0(&local_125);
  local_4._0_1_ = 1;
  FUN_00514da0(0);
  local_4._0_1_ = 2;
  FUN_0044e4a0(&local_18d);
  param_1[0xd] = 0;
  param_1[0xe] = &LAB_00566670;
  *(undefined1 *)(param_1 + 0xf) = 0;
  local_4._0_1_ = 3;
  *(undefined1 *)(param_1 + 0x12) = 1;
  local_168[0] = local_18d;
  FUN_004040a0(0);
  uVar6 = 0xffffffff;
  pcVar9 = &DAT_006b3f70;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(&DAT_006b3f70,~uVar6 - 1);
  local_4._0_1_ = 4;
  local_188[0] = local_18d;
  FUN_004040a0(0);
  uVar6 = 0xffffffff;
  pcVar9 = s_Engine_006a1858;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_Engine_006a1858,~uVar6 - 1);
  local_178[0] = local_18d;
  local_4._0_1_ = 5;
  FUN_004040a0(0);
  uVar6 = 0xffffffff;
  pcVar9 = s_SoftwareInterlaceStrategy_006a27f0;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_SoftwareInterlaceStrategy_006a27f0,~uVar6 - 1);
  local_4._0_1_ = 6;
  FUN_005ac9d0(local_178,local_188,0,local_168,0);
  local_4._0_1_ = 10;
  FUN_004040a0(1);
  local_4._0_1_ = 9;
  FUN_004040a0(1);
  local_4._0_1_ = 8;
  FUN_004040a0(1);
  *(undefined1 *)(param_1 + 0x2e) = 1;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3b] = 0;
  *(undefined1 *)(param_1 + 0x3a) = local_18d;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  local_4._0_1_ = 0xe;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  *(undefined1 *)(param_1 + 0x41) = 1;
  param_1[0x42] = 0xc;
  *(undefined1 *)(param_1 + 0x43) = 0;
  param_1[0x47] = 0xffffffff;
  *(undefined1 *)(param_1 + 0x48) = 0;
  *(undefined1 *)((int)param_1 + 0x121) = 0;
  *(undefined1 *)((int)param_1 + 0x122) = 0;
  *(undefined1 *)((int)param_1 + 0x123) = 0;
  *(undefined1 *)(param_1 + 0x49) = 0;
  *(undefined1 *)((int)param_1 + 0x125) = 0;
  local_168[0] = local_18d;
  FUN_004040a0(0);
  uVar6 = 0xffffffff;
  pcVar9 = &DAT_006b3f70;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(&DAT_006b3f70,~uVar6 - 1);
  local_188[0] = local_18d;
  local_4._0_1_ = 0xf;
  FUN_004040a0(0);
  uVar6 = 0xffffffff;
  pcVar9 = s_Engine_006a1858;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_Engine_006a1858,~uVar6 - 1);
  local_4._0_1_ = 0x10;
  local_178[0] = local_18d;
  FUN_004040a0(0);
  uVar6 = 0xffffffff;
  pcVar9 = s_Gamma_006975d0;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_Gamma_006975d0,~uVar6 - 1);
  local_4._0_1_ = 0x11;
  FUN_005ac8b0(local_178,local_188,0x3f800000,local_168,0);
  local_4._0_1_ = 0x15;
  FUN_004040a0(1);
  local_4._0_1_ = 0x14;
  FUN_004040a0(1);
  local_4._0_1_ = 0x13;
  FUN_004040a0(1);
  *(undefined1 *)(param_1 + 0x65) = 0;
  param_1[0x67] = 0;
  *(undefined1 *)(param_1 + 0x68) = 0;
  param_1[0x69] = 0;
  param_1[0x6a] = 0;
  local_4._0_1_ = 0x17;
  param_1[0x6b] = 0;
  param_1[0x6c] = 0;
  local_168[0] = local_18d;
  FUN_004040a0(0);
  uVar6 = 0xffffffff;
  pcVar9 = &DAT_006b3f70;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(&DAT_006b3f70,~uVar6 - 1);
  local_188[0] = local_18d;
  local_4._0_1_ = 0x18;
  FUN_004040a0(0);
  uVar6 = 0xffffffff;
  pcVar9 = s_Engine_006a1858;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_Engine_006a1858,~uVar6 - 1);
  local_4._0_1_ = 0x19;
  local_178[0] = local_18d;
  FUN_004040a0(0);
  uVar6 = 0xffffffff;
  pcVar9 = s_RenderLightMappedWorldPolys_006a27d4;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_RenderLightMappedWorldPolys_006a27d4,~uVar6 - 1);
  local_4._0_1_ = 0x1a;
  FUN_005ac9d0(local_178,local_188,1,local_168,0);
  local_4._0_1_ = 0x1e;
  FUN_004040a0(1);
  local_4._0_1_ = 0x1d;
  FUN_004040a0(1);
  local_4._0_1_ = 0x1c;
  FUN_004040a0(1);
  local_138[0] = local_18d;
  FUN_004040a0(0);
  uVar6 = 0xffffffff;
  pcVar9 = &DAT_006b3f70;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(&DAT_006b3f70,~uVar6 - 1);
  local_4._0_1_ = 0x1f;
  local_148[0] = local_18d;
  FUN_004040a0(0);
  uVar6 = 0xffffffff;
  pcVar9 = s_Engine_006a1858;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_Engine_006a1858,~uVar6 - 1);
  local_4._0_1_ = 0x20;
  local_158[0] = local_18d;
  FUN_004040a0(0);
  uVar6 = 0xffffffff;
  pcVar9 = s_RenderActors_006a27c4;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_RenderActors_006a27c4,~uVar6 - 1);
  local_4._0_1_ = 0x21;
  FUN_005ac9d0(local_158,local_148,1,local_138,0);
  local_4._0_1_ = 0x25;
  FUN_004040a0(1);
  local_4._0_1_ = 0x24;
  FUN_004040a0(1);
  local_4._0_1_ = 0x23;
  FUN_004040a0(1);
  local_168[0] = local_18d;
  FUN_004040a0(0);
  uVar6 = 0xffffffff;
  pcVar9 = &DAT_006b3f70;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(&DAT_006b3f70,~uVar6 - 1);
  local_188[0] = local_18d;
  local_4._0_1_ = 0x26;
  FUN_004040a0(0);
  uVar6 = 0xffffffff;
  pcVar9 = s_Engine_006a1858;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_Engine_006a1858,~uVar6 - 1);
  local_4._0_1_ = 0x27;
  local_178[0] = local_18d;
  FUN_004040a0(0);
  uVar6 = 0xffffffff;
  pcVar9 = s_RenderMirrors_006a27b4;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_RenderMirrors_006a27b4,~uVar6 - 1);
  local_4._0_1_ = 0x28;
  FUN_005ac9d0(local_178,local_188,1,local_168,0);
  local_4._0_1_ = 0x2c;
  FUN_004040a0(1);
  local_4._0_1_ = 0x2b;
  FUN_004040a0(1);
  local_4._0_1_ = 0x2a;
  FUN_004040a0(1);
  local_148[0] = local_18d;
  FUN_004040a0(0);
  uVar6 = 0xffffffff;
  pcVar9 = &DAT_006b3f70;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(&DAT_006b3f70,~uVar6 - 1);
  local_4._0_1_ = 0x2d;
  local_158[0] = local_18d;
  FUN_004040a0(0);
  uVar6 = 0xffffffff;
  pcVar9 = s_Engine_006a1858;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_Engine_006a1858,~uVar6 - 1);
  local_4._0_1_ = 0x2e;
  local_138[0] = local_18d;
  FUN_004040a0(0);
  uVar6 = 0xffffffff;
  pcVar9 = s_RenderTransparantPolys_006a279c;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_RenderTransparantPolys_006a279c,~uVar6 - 1);
  local_4._0_1_ = 0x2f;
  FUN_005ac9d0(local_138,local_158,1,local_148,0);
  local_4._0_1_ = 0x33;
  FUN_004040a0(1);
  local_4._0_1_ = 0x32;
  FUN_004040a0(1);
  local_4._0_1_ = 0x31;
  FUN_004040a0(1);
  local_168[0] = local_18d;
  FUN_004040a0(0);
  uVar6 = 0xffffffff;
  pcVar9 = &DAT_006b3f70;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(&DAT_006b3f70,~uVar6 - 1);
  local_4._0_1_ = 0x34;
  local_188[0] = local_18d;
  FUN_004040a0(0);
  uVar6 = 0xffffffff;
  pcVar9 = s_Engine_006a1858;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_Engine_006a1858,~uVar6 - 1);
  local_4._0_1_ = 0x35;
  local_178[0] = local_18d;
  FUN_004040a0(0);
  uVar6 = 0xffffffff;
  pcVar9 = s_RenderNonLightMappedWorldPolys_006a277c;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_RenderNonLightMappedWorldPolys_006a277c,~uVar6 - 1);
  local_4._0_1_ = 0x36;
  FUN_005ac9d0(local_178,local_188,1,local_168,0);
  local_4._0_1_ = 0x3a;
  FUN_004040a0(1);
  local_4._0_1_ = 0x39;
  FUN_004040a0(1);
  local_4._0_1_ = 0x38;
  FUN_004040a0(1);
  local_148[0] = local_18d;
  FUN_004040a0(0);
  uVar6 = 0xffffffff;
  pcVar9 = &DAT_006b3f70;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(&DAT_006b3f70,~uVar6 - 1);
  local_4._0_1_ = 0x3b;
  local_158[0] = local_18d;
  FUN_004040a0(0);
  uVar6 = 0xffffffff;
  pcVar9 = s_Engine_006a1858;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_Engine_006a1858,~uVar6 - 1);
  local_4._0_1_ = 0x3c;
  local_138[0] = local_18d;
  FUN_004040a0(0);
  uVar6 = 0xffffffff;
  pcVar9 = s_RenderUserPolys_006a276c;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_RenderUserPolys_006a276c,~uVar6 - 1);
  local_4._0_1_ = 0x3d;
  FUN_005ac9d0(local_138,local_158,1,local_148,0);
  local_4._0_1_ = 0x41;
  FUN_004040a0(1);
  local_4._0_1_ = 0x40;
  FUN_004040a0(1);
  local_4._0_1_ = 0x3f;
  FUN_004040a0(1);
  local_168[0] = local_18d;
  FUN_004040a0(0);
  uVar6 = 0xffffffff;
  pcVar9 = &DAT_006b3f70;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(&DAT_006b3f70,~uVar6 - 1);
  local_4._0_1_ = 0x42;
  local_188[0] = local_18d;
  FUN_004040a0(0);
  uVar6 = 0xffffffff;
  pcVar9 = s_Engine_006a1858;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_Engine_006a1858,~uVar6 - 1);
  local_4._0_1_ = 0x43;
  local_178[0] = local_18d;
  FUN_004040a0(0);
  uVar6 = 0xffffffff;
  pcVar9 = s_RenderActorShadows_006a2758;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_RenderActorShadows_006a2758,~uVar6 - 1);
  local_4._0_1_ = 0x44;
  FUN_005ac9d0(local_178,local_188,1,local_168,0);
  local_4._0_1_ = 0x48;
  FUN_004040a0(1);
  local_4._0_1_ = 0x47;
  FUN_004040a0(1);
  local_4._0_1_ = 0x46;
  FUN_004040a0(1);
  local_148[0] = local_18d;
  FUN_004040a0(0);
  uVar6 = 0xffffffff;
  pcVar9 = &DAT_006b3f70;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(&DAT_006b3f70,~uVar6 - 1);
  local_4._0_1_ = 0x49;
  local_158[0] = local_18d;
  FUN_004040a0(0);
  uVar6 = 0xffffffff;
  pcVar9 = s_Engine_006a1858;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_Engine_006a1858,~uVar6 - 1);
  local_4._0_1_ = 0x4a;
  local_138[0] = local_18d;
  FUN_004040a0(0);
  uVar6 = 0xffffffff;
  pcVar9 = s_UseDirectInput_006a2748;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_UseDirectInput_006a2748,~uVar6 - 1);
  local_4._0_1_ = 0x4b;
  FUN_005ac9d0(local_138,local_158,1,local_148,0);
  local_4._0_1_ = 0x4f;
  FUN_004040a0(1);
  local_4._0_1_ = 0x4e;
  FUN_004040a0(1);
  local_4._0_1_ = 0x4d;
  FUN_004040a0(1);
  local_124[0] = local_18d;
  FUN_004040a0(0);
  uVar6 = 0xffffffff;
  pcVar9 = &DAT_006b3f70;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(&DAT_006b3f70,~uVar6 - 1);
  local_4._0_1_ = 0x50;
  local_188[0] = local_18d;
  FUN_004040a0(0);
  uVar6 = 0xffffffff;
  pcVar9 = s_Engine_006a1858;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_Engine_006a1858,~uVar6 - 1);
  local_4._0_1_ = 0x51;
  local_178[0] = local_18d;
  FUN_004040a0(0);
  uVar6 = 0xffffffff;
  pcVar9 = s_UseBackGroundBitmap_006a2734;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_UseBackGroundBitmap_006a2734,~uVar6 - 1);
  local_4._0_1_ = 0x52;
  FUN_005ac9d0(local_178,local_188,0,local_124,0);
  local_4._0_1_ = 0x56;
  FUN_004040a0(1);
  local_4._0_1_ = 0x55;
  FUN_004040a0(1);
  local_4 = CONCAT31(local_4._1_3_,0x54);
  FUN_004040a0(1);
  local_168[0] = local_18d;
  FUN_004040a0(0);
  uVar6 = 0xffffffff;
  pcVar9 = &DAT_006b3f70;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  uVar6 = ~uVar6 - 1;
  local_18c = (undefined4 *)uVar6;
  cVar1 = FUN_00401940(uVar6,1);
  if (cVar1 != '\0') {
    puVar8 = (undefined4 *)&DAT_006b3f70;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *local_164 = *puVar8;
      puVar8 = puVar8 + 1;
      local_164 = local_164 + 1;
    }
    for (uVar7 = uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined1 *)local_164 = *(undefined1 *)puVar8;
      puVar8 = (undefined4 *)((int)puVar8 + 1);
      local_164 = (undefined4 *)((int)local_164 + 1);
    }
    FUN_00404190(uVar6);
  }
  local_158[0] = local_18d;
  local_4 = CONCAT31(local_4._1_3_,0x57);
  FUN_004040a0(0);
  uVar6 = 0xffffffff;
  pcVar9 = s_Sound_0069aec4;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  uVar6 = ~uVar6 - 1;
  local_18c = (undefined4 *)uVar6;
  cVar1 = FUN_00401940(uVar6,1);
  if (cVar1 != '\0') {
    pcVar9 = s_Sound_0069aec4;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)local_154 = *(undefined4 *)pcVar9;
      pcVar9 = pcVar9 + 4;
      local_154 = local_154 + 4;
    }
    for (uVar7 = uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *local_154 = *pcVar9;
      pcVar9 = pcVar9 + 1;
      local_154 = local_154 + 1;
    }
    FUN_00404190(uVar6);
  }
  local_148[0] = local_18d;
  local_4 = CONCAT31(local_4._1_3_,0x58);
  FUN_004040a0(0);
  uVar6 = 0xffffffff;
  pcVar9 = s_EffectsVolume_006a2724;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  uVar6 = ~uVar6 - 1;
  local_18c = (undefined4 *)uVar6;
  cVar1 = FUN_00401940(uVar6,1);
  if (cVar1 != '\0') {
    pcVar9 = s_EffectsVolume_006a2724;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)local_144 = *(undefined4 *)pcVar9;
      pcVar9 = pcVar9 + 4;
      local_144 = local_144 + 4;
    }
    for (uVar7 = uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *local_144 = *pcVar9;
      pcVar9 = pcVar9 + 1;
      local_144 = local_144 + 1;
    }
    FUN_00404190(uVar6);
  }
  local_4._0_1_ = 0x59;
  FUN_005a3d10(local_148,local_158,0x42c80000,0,0x42c80000,local_168);
  local_4._0_1_ = 0x5d;
  FUN_004040a0(1);
  local_4._0_1_ = 0x5c;
  FUN_004040a0(1);
  local_4 = CONCAT31(local_4._1_3_,0x5b);
  FUN_004040a0(1);
  local_178[0] = local_18d;
  FUN_004040a0(0);
  uVar6 = 0xffffffff;
  pcVar9 = s_Sound_0069aec4;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  uVar6 = ~uVar6 - 1;
  local_18c = (undefined4 *)uVar6;
  cVar1 = FUN_00401940(uVar6,1);
  if (cVar1 != '\0') {
    pcVar9 = s_Sound_0069aec4;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)local_174 = *(undefined4 *)pcVar9;
      pcVar9 = pcVar9 + 4;
      local_174 = local_174 + 4;
    }
    for (uVar7 = uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *local_174 = *pcVar9;
      pcVar9 = pcVar9 + 1;
      local_174 = local_174 + 1;
    }
    FUN_00404190(uVar6);
  }
  local_188[0] = local_18d;
  local_4 = CONCAT31(local_4._1_3_,0x5e);
  FUN_004040a0(0);
  uVar6 = 0xffffffff;
  pcVar9 = s_MusicVolume_0069feac;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  uVar6 = ~uVar6 - 1;
  local_18c = (undefined4 *)uVar6;
  cVar1 = FUN_00401940(uVar6,1);
  if (cVar1 != '\0') {
    pcVar9 = s_MusicVolume_0069feac;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)local_184 = *(undefined4 *)pcVar9;
      pcVar9 = pcVar9 + 4;
      local_184 = local_184 + 4;
    }
    for (uVar7 = uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *local_184 = *pcVar9;
      pcVar9 = pcVar9 + 1;
      local_184 = local_184 + 1;
    }
    FUN_00404190(uVar6);
  }
  local_4._0_1_ = 0x5f;
  uVar2 = FUN_0043b0a0(local_124);
  local_4._0_1_ = 0x60;
  FUN_005a3d10(local_188,local_178,0x42a00000,0,0x42c80000,uVar2);
  local_4._0_1_ = 100;
  FUN_004040a0(1);
  local_4._0_1_ = 99;
  FUN_004040a0(1);
  local_4._0_1_ = 0x62;
  FUN_004040a0(1);
  FUN_005ab4a0();
  *(undefined1 *)(param_1 + 0x19f) = 1;
  *(undefined1 *)((int)param_1 + 0x67d) = 0;
  param_1[0x1a4] = 0x43a00000;
  param_1[0x1a5] = 0x44c80000;
  param_1[0x19a] = &PTR_FUN_0064f850;
  param_1[0x1a3] = 0x437f0000;
  param_1[0x1a2] = 0x437f0000;
  param_1[0x1a1] = 0x437f0000;
  param_1[0x1a0] = 0x437f0000;
  local_4._0_1_ = 0x65;
  *param_1 = &PTR_FUN_0064f848;
  FUN_005ae5f0(s_D__Work_RCHorror_AdamSource_Adam_006a26f8,0x7e);
  local_4._0_1_ = 0x66;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x87] = &LAB_005644c0;
  param_1[0xa2] = &LAB_005644c0;
  param_1[0xbd] = &LAB_005644c0;
  iVar3 = FUN_00557970();
  iVar5 = *(int *)(iVar3 + 100);
  if (iVar5 == -0x80000000) {
    puVar4 = *(undefined1 **)(iVar3 + 0x18);
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &DAT_0064a3b4;
    }
    iVar5 = FUN_0060af10(puVar4);
    *(int *)(iVar3 + 100) = iVar5;
  }
  iVar3 = 0x40;
  if (iVar5 < 3) {
    puVar8 = local_10c;
    for (; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar8 = 0;
      puVar8 = puVar8 + 1;
    }
    FUN_0060af1b(local_10c,0xff,&DAT_00690818,0);
  }
  else {
    puVar8 = local_10c;
    for (; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar8 = 0;
      puVar8 = puVar8 + 1;
    }
    FUN_0060af1b(local_10c,0xff,&DAT_00690818,1);
  }
  FUN_005acdb0(local_10c);
  iVar3 = FUN_005166b0();
  iVar5 = *(int *)(iVar3 + 100);
  if (iVar5 == -0x80000000) {
    puVar4 = *(undefined1 **)(iVar3 + 0x18);
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &DAT_0064a3b4;
    }
    iVar5 = FUN_0060af10(puVar4);
    *(int *)(iVar3 + 100) = iVar5;
  }
  if (iVar5 != 0) {
    iVar3 = FUN_00557970();
    iVar5 = *(int *)(iVar3 + 100);
    if (iVar5 == -0x80000000) {
      puVar4 = *(undefined1 **)(iVar3 + 0x18);
      if (puVar4 == (undefined1 *)0x0) {
        puVar4 = &DAT_0064a3b4;
      }
      iVar5 = FUN_0060af10(puVar4);
      *(int *)(iVar3 + 100) = iVar5;
    }
    iVar3 = param_1[0xbc];
    if (iVar3 == -0x80000000) {
      puVar4 = (undefined1 *)param_1[0xa9];
      if (puVar4 == (undefined1 *)0x0) {
        puVar4 = &DAT_0064a3b4;
      }
      iVar3 = FUN_0060af10(puVar4);
      param_1[0xbc] = iVar3;
    }
    uVar2 = FUN_005ae390(local_124,s_RenderMirrors_set_to__d__Effects_006a26c4,iVar3,iVar5,3);
    local_4._0_1_ = 0x67;
    FUN_005aff00(uVar2);
    local_4._0_1_ = 0x66;
    if (local_120 != 0) {
      cVar1 = *(char *)(local_120 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_005fe5f0((char *)(local_120 + -1));
      }
      else {
        *(char *)(local_120 + -1) = cVar1 + -1;
      }
    }
  }
  param_1[0xd8] = &LAB_005644c0;
  param_1[0xf3] = &LAB_005644c0;
  param_1[0x10e] = &LAB_005644c0;
  param_1[0x129] = &LAB_005644c0;
  FUN_00564310();
  local_4 = CONCAT31(local_4._1_3_,0x65);
  FUN_005ae770();
  ExceptionList = local_c;
  return param_1;
}

