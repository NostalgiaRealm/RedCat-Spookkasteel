/*
 * FUN_0054c500 at 0054c500
 * undefined FUN_0054c500(void)
 * Address ranges: 0054c500-0054ce8a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __fastcall FUN_0054c500(undefined4 *param_1)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  char *pcVar10;
  float10 fVar11;
  undefined1 local_10d;
  float local_10c;
  undefined1 local_108 [16];
  undefined1 local_f8 [4];
  char *pcStack_f4;
  undefined1 local_e5;
  undefined1 local_e4 [16];
  undefined1 local_d4 [16];
  undefined1 local_c4 [4];
  char *pcStack_c0;
  undefined1 local_b4 [4];
  char *pcStack_b0;
  undefined1 local_a4 [16];
  undefined1 local_94 [16];
  undefined4 *local_84;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063d705;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  local_84 = param_1;
  FUN_005ab4a0();
  local_4 = 0;
  FUN_005508a0(param_1);
  local_4._0_1_ = 1;
  param_1[0x14] = 0;
  FUN_0044e4a0(&local_e5);
  param_1[0x19] = 0;
  param_1[0x1a] = &LAB_00566810;
  *(undefined1 *)(param_1 + 0x1b) = 0;
  local_4._0_1_ = 2;
  FUN_0044e4a0(&local_10d);
  param_1[0x20] = 0;
  param_1[0x21] = &LAB_00566810;
  *(undefined1 *)(param_1 + 0x22) = 0;
  local_4._0_1_ = 3;
  *(undefined1 *)(param_1 + 0x23) = 0;
  local_c4[0] = local_10d;
  FUN_004040a0(0);
  uVar8 = 0xffffffff;
  pcVar10 = &DAT_006b3f70;
  do {
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    cVar1 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(&DAT_006b3f70,~uVar8 - 1);
  local_4._0_1_ = 4;
  local_b4[0] = local_10d;
  FUN_004040a0(0);
  uVar8 = 0xffffffff;
  pcVar10 = s_Engine_006a1858;
  do {
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    cVar1 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_Engine_006a1858,~uVar8 - 1);
  local_f8[0] = local_10d;
  local_4._0_1_ = 5;
  FUN_004040a0(0);
  uVar8 = 0xffffffff;
  pcVar10 = s_MasterVolume_006a1848;
  do {
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    cVar1 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_MasterVolume_006a1848,~uVar8 - 1);
  local_4._0_1_ = 6;
  FUN_005a3d10(local_f8,local_b4,0x3f800000,0,0x3f800000,local_c4);
  local_4._0_1_ = 10;
  FUN_004040a0(1);
  local_4._0_1_ = 9;
  FUN_004040a0(1);
  local_4._0_1_ = 8;
  FUN_004040a0(1);
  local_108[0] = local_10d;
  FUN_004040a0(0);
  uVar8 = 0xffffffff;
  pcVar10 = &DAT_006b3f70;
  do {
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    cVar1 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(&DAT_006b3f70,~uVar8 - 1);
  local_4._0_1_ = 0xb;
  local_e4[0] = local_10d;
  FUN_004040a0(0);
  uVar8 = 0xffffffff;
  pcVar10 = s_Engine_006a1858;
  do {
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    cVar1 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_Engine_006a1858,~uVar8 - 1);
  local_d4[0] = local_10d;
  local_4._0_1_ = 0xc;
  FUN_004040a0(0);
  uVar8 = 0xffffffff;
  pcVar10 = s_SoundVolume_0069fea0;
  do {
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    cVar1 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_SoundVolume_0069fea0,~uVar8 - 1);
  local_4._0_1_ = 0xd;
  FUN_005a3d10(local_d4,local_e4,0x3f800000,0,0x3f800000,local_108);
  local_4._0_1_ = 0x11;
  FUN_004040a0(1);
  local_4._0_1_ = 0x10;
  FUN_004040a0(1);
  local_4._0_1_ = 0xf;
  FUN_004040a0(1);
  local_a4[0] = local_10d;
  FUN_004040a0(0);
  uVar8 = 0xffffffff;
  pcVar10 = &DAT_006b3f70;
  do {
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    cVar1 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(&DAT_006b3f70,~uVar8 - 1);
  local_4._0_1_ = 0x12;
  local_94[0] = local_10d;
  FUN_004040a0(0);
  uVar8 = 0xffffffff;
  pcVar10 = s_Engine_006a1858;
  do {
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    cVar1 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_Engine_006a1858,~uVar8 - 1);
  local_f8[0] = local_10d;
  local_4._0_1_ = 0x13;
  FUN_004040a0(0);
  uVar8 = 0xffffffff;
  pcVar10 = s_MusicVolume_0069feac;
  do {
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    cVar1 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_MusicVolume_0069feac,~uVar8 - 1);
  local_4._0_1_ = 0x14;
  FUN_005a3d10(local_f8,local_94,0x3f800000,0,0x3f800000,local_a4);
  local_4._0_1_ = 0x18;
  FUN_004040a0(1);
  local_4._0_1_ = 0x17;
  FUN_004040a0(1);
  local_4._0_1_ = 0x16;
  FUN_004040a0(1);
  local_d4[0] = local_10d;
  FUN_004040a0(0);
  uVar8 = 0xffffffff;
  pcVar10 = s___Settings_Computer_ini_006a1830;
  do {
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    cVar1 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s___Settings_Computer_ini_006a1830,~uVar8 - 1);
  local_4._0_1_ = 0x19;
  local_e4[0] = local_10d;
  FUN_004040a0(0);
  uVar8 = 0xffffffff;
  pcVar10 = s_3DSound_006a1828;
  do {
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    cVar1 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_3DSound_006a1828,~uVar8 - 1);
  local_108[0] = local_10d;
  local_4._0_1_ = 0x1a;
  FUN_004040a0(0);
  uVar8 = 0xffffffff;
  pcVar10 = s_MinDistanceMeters_006a1814;
  do {
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    cVar1 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_MinDistanceMeters_006a1814,~uVar8 - 1);
  local_4._0_1_ = 0x1b;
  iVar3 = FUN_005a3d10(local_108,local_e4,0x40a00000,0,0x447a0000,local_d4);
  local_4._0_1_ = 0x1c;
  if (*(float *)(iVar3 + 0x60) == 0.0) {
    fVar11 = (float10)FUN_005ad390(iVar3 + 0x14,&local_10d);
    *(float *)(iVar3 + 0x60) = (float)fVar11;
    local_10c = (float)fVar11;
  }
  else {
    local_10c = *(float *)(iVar3 + 0x60);
  }
  local_4._0_1_ = 0x1b;
  FUN_005a3ce0();
  local_4._0_1_ = 0x1a;
  FUN_004040a0(1);
  local_4._0_1_ = 0x19;
  FUN_004040a0(1);
  local_4._0_1_ = 0x16;
  FUN_004040a0(1);
  param_1[0x7b] = local_10c;
  local_d4[0] = local_10d;
  FUN_004040a0(0);
  uVar8 = 0xffffffff;
  pcVar10 = s___Settings_Computer_ini_006a1830;
  do {
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    cVar1 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s___Settings_Computer_ini_006a1830,~uVar8 - 1);
  local_e4[0] = local_10d;
  local_4._0_1_ = 0x1d;
  FUN_004040a0(0);
  uVar8 = 0xffffffff;
  pcVar10 = s_3DSound_006a1828;
  do {
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    cVar1 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_3DSound_006a1828,~uVar8 - 1);
  local_4._0_1_ = 0x1e;
  local_108[0] = local_10d;
  FUN_004040a0(0);
  uVar8 = 0xffffffff;
  pcVar10 = s_MaxDistanceFactor_006a1800;
  do {
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    cVar1 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_MaxDistanceFactor_006a1800,~uVar8 - 1);
  local_4._0_1_ = 0x1f;
  iVar3 = FUN_005a3d10(local_108,local_e4,0x459c4000,0x3f800000,0x47c35000,local_d4);
  local_4._0_1_ = 0x20;
  if (*(float *)(iVar3 + 0x60) == 0.0) {
    fVar11 = (float10)FUN_005ad390(iVar3 + 0x14,&local_10d);
    *(float *)(iVar3 + 0x60) = (float)fVar11;
    local_10c = (float)fVar11;
  }
  else {
    local_10c = *(float *)(iVar3 + 0x60);
  }
  local_4._0_1_ = 0x1f;
  FUN_005a3ce0();
  local_4._0_1_ = 0x1e;
  FUN_004040a0(1);
  local_4._0_1_ = 0x1d;
  FUN_004040a0(1);
  local_4 = CONCAT31(local_4._1_3_,0x16);
  FUN_004040a0(1);
  local_b4[0] = local_10d;
  param_1[0x7c] = local_10c;
  FUN_004040a0(0);
  uVar8 = 0xffffffff;
  pcVar10 = s___Settings_Computer_ini_006a1830;
  do {
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    cVar1 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar1 != '\0');
  uVar8 = ~uVar8 - 1;
  local_10c = (float)uVar8;
  cVar1 = FUN_00401940(uVar8,1);
  if (cVar1 != '\0') {
    pcVar10 = s___Settings_Computer_ini_006a1830;
    for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      *(undefined4 *)pcStack_b0 = *(undefined4 *)pcVar10;
      pcVar10 = pcVar10 + 4;
      pcStack_b0 = pcStack_b0 + 4;
    }
    for (uVar9 = uVar8 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
      *pcStack_b0 = *pcVar10;
      pcVar10 = pcVar10 + 1;
      pcStack_b0 = pcStack_b0 + 1;
    }
    FUN_00404190(uVar8);
  }
  local_c4[0] = local_10d;
  local_4 = CONCAT31(local_4._1_3_,0x21);
  FUN_004040a0(0);
  uVar8 = 0xffffffff;
  pcVar10 = s_3DSound_006a1828;
  do {
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    cVar1 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar1 != '\0');
  uVar8 = ~uVar8 - 1;
  local_10c = (float)uVar8;
  cVar1 = FUN_00401940(uVar8,1);
  if (cVar1 != '\0') {
    pcVar10 = s_3DSound_006a1828;
    for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      *(undefined4 *)pcStack_c0 = *(undefined4 *)pcVar10;
      pcVar10 = pcVar10 + 4;
      pcStack_c0 = pcStack_c0 + 4;
    }
    for (uVar9 = uVar8 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
      *pcStack_c0 = *pcVar10;
      pcVar10 = pcVar10 + 1;
      pcStack_c0 = pcStack_c0 + 1;
    }
    FUN_00404190(uVar8);
  }
  local_108[0] = local_10d;
  local_4._0_1_ = 0x22;
  FUN_004040a0(0);
  uVar8 = 0xffffffff;
  pcVar10 = s_Allowed_006a1248;
  do {
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    cVar1 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_Allowed_006a1248,~uVar8 - 1);
  local_4._0_1_ = 0x23;
  FUN_005ac9d0(local_108,local_c4,1,local_b4,0);
  local_4._0_1_ = 0x27;
  FUN_004040a0(1);
  local_4._0_1_ = 0x26;
  FUN_004040a0(1);
  local_4 = CONCAT31(local_4._1_3_,0x25);
  FUN_004040a0(1);
  *param_1 = &PTR_FUN_0064f808;
  if (DAT_006ba778 != '\0') {
    local_f8[0] = local_10d;
    FUN_004040a0(0);
    uVar8 = 0xffffffff;
    pcVar10 = s_Cannot_create_more_than_one_inst_006a17c4;
    do {
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar1 != '\0');
    uVar8 = ~uVar8 - 1;
    local_10c = (float)uVar8;
    cVar1 = FUN_00401940(uVar8,1);
    if (cVar1 != '\0') {
      pcVar10 = s_Cannot_create_more_than_one_inst_006a17c4;
      for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined4 *)pcStack_f4 = *(undefined4 *)pcVar10;
        pcVar10 = pcVar10 + 4;
        pcStack_f4 = pcStack_f4 + 4;
      }
      for (uVar9 = uVar8 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *pcStack_f4 = *pcVar10;
        pcVar10 = pcVar10 + 1;
        pcStack_f4 = pcStack_f4 + 1;
      }
      FUN_00404190(uVar8);
    }
    local_4._0_1_ = 0x28;
    pcVar4 = (code *)FUN_005a07f0(s___m_Created_006a178c,s_D__Work_RCHorror_AdamSource_Adam_006a1798
                                  ,0x25,local_f8);
    (*pcVar4)();
    local_4 = CONCAT31(local_4._1_3_,0x25);
    FUN_004040a0(1);
  }
  iVar5 = FUN_00516fb0();
  iVar3 = *(int *)(iVar5 + 100);
  if (iVar3 == -0x80000000) {
    puVar6 = *(undefined1 **)(iVar5 + 0x18);
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &DAT_0064a3b4;
    }
    iVar3 = FUN_0060af10(puVar6);
    *(int *)(iVar5 + 100) = iVar3;
  }
  if (iVar3 != 0) {
    uVar2 = FUN_00553640();
    uVar7 = FUN_005ae390(local_a4,s_CAdamSoundSystem__CAdamSoundSyst_006a174c,uVar2);
    local_4._0_1_ = 0x29;
    FUN_005aff00(uVar7);
    local_4 = CONCAT31(local_4._1_3_,0x25);
    FUN_004040a0(1);
  }
  cVar1 = FUN_00553640();
  if (cVar1 != '\0') {
    iVar5 = FUN_005597c0();
    iVar3 = *(int *)(iVar5 + 0xfc);
    if (iVar3 == -0x80000000) {
      puVar6 = *(undefined1 **)(iVar5 + 0xb0);
      if (puVar6 == (undefined1 *)0x0) {
        puVar6 = &DAT_0064a3b4;
      }
      iVar3 = FUN_0060af10(puVar6);
      *(int *)(iVar5 + 0xfc) = iVar3;
    }
    if (iVar3 == 0) {
      iVar5 = FUN_00516fb0();
      iVar3 = *(int *)(iVar5 + 100);
      if (iVar3 == -0x80000000) {
        puVar6 = *(undefined1 **)(iVar5 + 0x18);
        if (puVar6 == (undefined1 *)0x0) {
          puVar6 = &DAT_0064a3b4;
        }
        iVar3 = FUN_0060af10(puVar6);
        *(int *)(iVar5 + 100) = iVar3;
      }
      if (iVar3 != 0) {
        FUN_005afe30(s_CAdamSoundSystem__CAdamSoundSyst_006a16f8);
      }
    }
  }
  DAT_006ba778 = 1;
  ExceptionList = pvStack_c;
  return param_1;
}

