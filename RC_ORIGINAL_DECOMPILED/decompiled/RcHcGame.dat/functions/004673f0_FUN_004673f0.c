/*
 * FUN_004673f0 at 004673f0
 * undefined FUN_004673f0(void)
 * Address ranges: 004673f0-00467ea4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x004675f5) */
/* WARNING: Removing unreachable block (ram,0x00467606) */
/* WARNING: Removing unreachable block (ram,0x004676c8) */
/* WARNING: Removing unreachable block (ram,0x004676d9) */

int FUN_004673f0(undefined4 *param_1)

{
  undefined4 *puVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  code *pcVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  char *pcVar11;
  char *pcVar12;
  int local_6c;
  int local_68;
  uint local_64;
  void *local_60;
  undefined1 uStack_5c;
  char *pcStack_58;
  undefined1 local_4c;
  int iStack_44;
  undefined1 local_3c [16];
  undefined1 local_2c;
  int iStack_28;
  undefined1 local_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puVar1 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00627972;
  pvStack_c = ExceptionList;
  local_64 = 0;
  ExceptionList = &pvStack_c;
  local_60 = operator_new(0x16d4);
  local_4 = 0;
  if (local_60 == (void *)0x0) {
    iVar4 = 0;
  }
  else {
    uVar3 = FUN_005033f0(local_1c,*param_1);
    local_64 = 1;
    local_4 = CONCAT31(local_4._1_3_,1);
    iVar4 = FUN_00466a90(uVar3);
  }
  local_4 = 0xffffffff;
  if ((local_64 & 1) != 0) {
    FUN_004040a0();
  }
  if ((param_1[0x1a] == 0) || (param_1[0x1b] == 0)) {
    local_3c[0] = param_1._0_1_;
    FUN_004040a0();
    iVar8 = -1;
    pcVar12 = s_CAdamEffectSpout__CreateFromEnti_00692b80;
    do {
      if (iVar8 == 0) break;
      iVar8 = iVar8 + -1;
      cVar2 = *pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (cVar2 != '\0');
    FUN_004040f0(s_CAdamEffectSpout__CreateFromEnti_00692b80);
    local_4 = 3;
    FUN_005035a0();
    local_4 = 0xffffffff;
    FUN_004040a0();
    param_1[0x1a] = s_blast_bmp_00692b74;
    param_1[0x1b] = s_blast_a_bmp_00692b68;
  }
  pcVar12 = (char *)param_1[0x1a];
  local_2c = param_1._0_1_;
  FUN_004040a0();
  iVar8 = -1;
  pcVar11 = pcVar12;
  do {
    if (iVar8 == 0) break;
    iVar8 = iVar8 + -1;
    cVar2 = *pcVar11;
    pcVar11 = pcVar11 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(pcVar12);
  pcVar12 = (char *)param_1[0x1b];
  local_4 = 4;
  local_4c = param_1._0_1_;
  FUN_004040a0();
  iVar8 = -1;
  pcVar11 = pcVar12;
  do {
    if (iVar8 == 0) break;
    iVar8 = iVar8 + -1;
    cVar2 = *pcVar11;
    pcVar11 = pcVar11 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(pcVar12);
  local_68 = 0;
  local_6c = 0;
  local_4._0_1_ = 7;
  iVar8 = DAT_006c8de0;
  if (DAT_006c8de0 == 0) {
    iVar8 = FUN_0055b280();
  }
  if (*(int *)(iVar8 + 0xd8) == 0) {
    FUN_00409810(&DAT_006b3f70);
    local_4._0_1_ = 8;
    pcVar5 = (code *)FUN_005a07f0(s_m_BitmapMgr_0068eb4c,s___AdamSource_AdamEngine_h_0068eb58,0x188)
    ;
    (*pcVar5)();
    local_4._0_1_ = 7;
    FUN_004040a0();
  }
  piVar6 = (int *)FUN_0050d980(&local_64);
  if (*piVar6 != 0) {
    local_4._0_1_ = 9;
    local_68 = *piVar6;
    FUN_005844b0();
  }
  local_4._0_1_ = 7;
  if (local_64 != 0) {
    FUN_004098d0();
  }
  if (iStack_44 != 0) {
    iVar8 = DAT_006c8de0;
    if (DAT_006c8de0 == 0) {
      iVar8 = FUN_0055b280();
    }
    if (*(int *)(iVar8 + 0xd8) == 0) {
      FUN_00409810(&DAT_006b3f70);
      local_4._0_1_ = 10;
      pcVar5 = (code *)FUN_005a07f0(s_m_BitmapMgr_0068eb4c,s___AdamSource_AdamEngine_h_0068eb58,
                                    0x188);
      (*pcVar5)();
      local_4._0_1_ = 7;
      FUN_004040a0();
    }
    piVar6 = (int *)FUN_0050d980(&local_64);
    if (*piVar6 != 0) {
      local_4._0_1_ = 0xb;
      local_6c = *piVar6;
      FUN_005844b0();
    }
    local_4._0_1_ = 7;
    if (local_64 != 0) {
      FUN_004098d0();
    }
  }
  if ((local_68 != 0) && (local_6c != 0)) {
    param_1 = (undefined4 *)&stack0xffffff80;
    if (local_6c != 0) {
      *(int *)(local_6c + 0x14) = *(int *)(local_6c + 0x14) + 1;
    }
    local_4._0_1_ = 7;
    FUN_00412de0();
    FUN_0050aea0();
  }
  iVar8 = *(int *)(iVar4 + 0xfc);
  if (iVar8 != local_68) {
    if ((iVar8 != 0) &&
       (iVar7 = *(int *)(iVar8 + 0x14) + -1, *(int *)(iVar8 + 0x14) = iVar7, iVar7 == 0)) {
      FUN_005abfc0();
    }
    *(int *)(iVar4 + 0xfc) = local_68;
    FUN_005844b0();
  }
  pcVar12 = (char *)*puVar1;
  uStack_5c = param_1._0_1_;
  FUN_004040a0();
  local_4._0_1_ = 0xd;
  if (pcVar12 == (char *)0x0) {
    iVar8 = -1;
    pcVar12 = &DAT_006b3f70;
    do {
      if (iVar8 == 0) break;
      iVar8 = iVar8 + -1;
      cVar2 = *pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (cVar2 != '\0');
    pcVar12 = &DAT_006b3f70;
  }
  else {
    iVar8 = -1;
    pcVar11 = pcVar12;
    do {
      if (iVar8 == 0) break;
      iVar8 = iVar8 + -1;
      cVar2 = *pcVar11;
      pcVar11 = pcVar11 + 1;
    } while (cVar2 != '\0');
  }
  FUN_004040f0(pcVar12);
  FUN_00503ae0();
  local_4._0_1_ = 7;
  FUN_004040a0();
  pcVar12 = (char *)puVar1[1];
  local_3c[0] = param_1._0_1_;
  FUN_004040a0();
  local_4._0_1_ = 0xe;
  if (pcVar12 != (char *)0x0) {
    iVar8 = -1;
    pcVar11 = pcVar12;
    do {
      if (iVar8 == 0) break;
      iVar8 = iVar8 + -1;
      cVar2 = *pcVar11;
      pcVar11 = pcVar11 + 1;
    } while (cVar2 != '\0');
    FUN_004040f0(pcVar12);
  }
  FUN_0040cc00(local_3c,0);
  local_4._0_1_ = 7;
  FUN_004040a0();
  FUN_00502350();
  if (*(char *)(iVar4 + 0x7c) != '\0') {
    iVar8 = *(int *)(iVar4 + 0x14b0);
    if ((iVar8 != -1) && (iVar8 < 0)) {
      FUN_00409810(&DAT_006b3f70);
      local_4._0_1_ = 0xf;
      pcVar5 = (code *)FUN_005a07f0(s__a_LifeTime____ADAMTIME_NONE_____0068d490,
                                    s___AdamSource_AdamLifeTime_h_0068d4c8,0x56);
      (*pcVar5)();
      local_4._0_1_ = 7;
      FUN_004040a0();
    }
    *(int *)(iVar4 + 0x1680) = iVar8;
    *(undefined4 *)(iVar4 + 0x1684) = 0xffffffff;
    *(undefined4 *)(iVar4 + 0x1688) = 0x3f800000;
    *(undefined1 *)(iVar4 + 0x168c) = 1;
    iVar8 = *(int *)(iVar4 + 0x16ac);
    if ((iVar8 != -1) && (iVar8 < 0)) {
      FUN_00409810(&DAT_006b3f70);
      local_4._0_1_ = 0x10;
      pcVar5 = (code *)FUN_005a07f0(s__a_LifeTime____ADAMTIME_NONE_____0068d490,
                                    s___AdamSource_AdamLifeTime_h_0068d4c8,0x56);
      (*pcVar5)();
      local_4._0_1_ = 7;
      FUN_004040a0();
    }
    *(int *)(iVar4 + 0x1690) = iVar8;
    *(undefined4 *)(iVar4 + 0x1694) = 0xffffffff;
    *(undefined4 *)(iVar4 + 0x1698) = 0x3f800000;
    *(undefined1 *)(iVar4 + 0x169c) = 1;
  }
  if (((float)puVar1[0xe] < (float)puVar1[0xd]) || ((float)puVar1[0xd] < 0.0)) {
    local_3c[0] = param_1._0_1_;
    FUN_004040a0();
    iVar8 = -1;
    pcVar12 = s_CAdamEffectSpout__CreateFromEnti_00692b24;
    do {
      if (iVar8 == 0) break;
      iVar8 = iVar8 + -1;
      cVar2 = *pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (cVar2 != '\0');
    FUN_004040f0(s_CAdamEffectSpout__CreateFromEnti_00692b24);
    local_4._0_1_ = 0x11;
    FUN_005035a0();
    local_4._0_1_ = 7;
    FUN_004040a0();
    puVar1[0xd] = 0x3f000000;
    puVar1[0xe] = 0x3f800000;
  }
  if (((float)puVar1[0x10] < (float)puVar1[0xf]) || ((float)puVar1[0xf] < 0.0)) {
    local_3c[0] = param_1._0_1_;
    FUN_004040a0();
    iVar8 = -1;
    pcVar12 = s_CAdamEffectSpout__CreateFromEnti_00692b24;
    do {
      if (iVar8 == 0) break;
      iVar8 = iVar8 + -1;
      cVar2 = *pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (cVar2 != '\0');
    FUN_004040f0(s_CAdamEffectSpout__CreateFromEnti_00692b24);
    local_4._0_1_ = 0x12;
    FUN_005035a0();
    local_4._0_1_ = 7;
    FUN_004040a0();
    puVar1[0xf] = 0x40000000;
    puVar1[0x10] = 0x40400000;
  }
  if ((float)puVar1[0x12] <= 0.0) {
    local_3c[0] = param_1._0_1_;
    FUN_004040a0();
    iVar8 = -1;
    pcVar12 = s_CAdamEffectSpout__CreateFromEnti_00692ae8;
    do {
      if (iVar8 == 0) break;
      iVar8 = iVar8 + -1;
      cVar2 = *pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (cVar2 != '\0');
    FUN_004040f0(s_CAdamEffectSpout__CreateFromEnti_00692ae8);
    local_4._0_1_ = 0x13;
    FUN_005035a0();
    local_4._0_1_ = 7;
    FUN_004040a0();
    puVar1[0x12] = 0x3f800000;
  }
  if (((((float)puVar1[0x13] < 0.0) || (100.0 < (float)puVar1[0x13])) || ((float)puVar1[0x14] < 0.0)
      ) || (100.0 < (float)puVar1[0x14])) {
    local_3c[0] = param_1._0_1_;
    FUN_004040a0();
    iVar8 = -1;
    pcVar12 = s_CAdamEffectSpout__CreateFromEnti_00692aa4;
    do {
      if (iVar8 == 0) break;
      iVar8 = iVar8 + -1;
      cVar2 = *pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (cVar2 != '\0');
    FUN_004040f0(s_CAdamEffectSpout__CreateFromEnti_00692aa4);
    local_4._0_1_ = 0x14;
    FUN_005035a0();
    local_4._0_1_ = 7;
    FUN_004040a0();
    puVar1[0x13] = 0x41c80000;
    puVar1[0x14] = 0x42c80000;
  }
  if ((((float)puVar1[0x15] < 0.0) || (100.0 < (float)puVar1[0x15])) ||
     (((float)puVar1[0x16] < 0.0 || (100.0 < (float)puVar1[0x16])))) {
    local_3c[0] = param_1._0_1_;
    FUN_004040a0();
    iVar8 = -1;
    pcVar12 = s_CAdamEffectSpout__CreateFromEnti_00692a5c;
    do {
      if (iVar8 == 0) break;
      iVar8 = iVar8 + -1;
      cVar2 = *pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (cVar2 != '\0');
    FUN_004040f0(s_CAdamEffectSpout__CreateFromEnti_00692a5c);
    local_4._0_1_ = 0x15;
    FUN_005035a0();
    local_4._0_1_ = 7;
    FUN_004040a0();
    puVar1[0x15] = 0x41c80000;
    puVar1[0x16] = 0x42c80000;
  }
  if ((float)puVar1[0x17] < 0.0) {
    local_3c[0] = param_1._0_1_;
    FUN_004040a0();
    iVar8 = -1;
    pcVar12 = s_CAdamEffectSpout__CreateFromEnti_00692a18;
    do {
      if (iVar8 == 0) break;
      iVar8 = iVar8 + -1;
      cVar2 = *pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (cVar2 != '\0');
    FUN_004040f0(s_CAdamEffectSpout__CreateFromEnti_00692a18);
    local_4._0_1_ = 0x16;
    FUN_005035a0();
    local_4._0_1_ = 7;
    FUN_004040a0();
    puVar1[0x17] = 0x40400000;
  }
  if ((((float)puVar1[0x19] < (float)puVar1[0x18]) || ((float)puVar1[0x18] < 0.0)) ||
     ((float)puVar1[0x19] < 0.0)) {
    uStack_5c = param_1._0_1_;
    FUN_004040a0();
    uVar9 = 0xffffffff;
    pcVar12 = s_CAdamEffectSpout__CreateFromEnti_006929d4;
    do {
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      cVar2 = *pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (cVar2 != '\0');
    param_1 = (undefined4 *)(~uVar9 - 1);
    cVar2 = FUN_00401940(param_1);
    if (cVar2 != '\0') {
      pcVar12 = s_CAdamEffectSpout__CreateFromEnti_006929d4;
      pcVar11 = pcStack_58;
      for (uVar9 = (uint)param_1 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined4 *)pcVar11 = *(undefined4 *)pcVar12;
        pcVar12 = pcVar12 + 4;
        pcVar11 = pcVar11 + 4;
      }
      for (uVar9 = (uint)param_1 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *pcVar11 = *pcVar12;
        pcVar12 = pcVar12 + 1;
        pcVar11 = pcVar11 + 1;
      }
      FUN_00404190();
    }
    local_4._0_1_ = 0x17;
    FUN_005035a0();
    local_4._0_1_ = 7;
    FUN_004040a0();
    puVar1[0x18] = 0x40a00000;
    puVar1[0x19] = 0x41200000;
  }
  if (((((float)puVar1[0x1d] < (float)puVar1[0x1c]) || ((float)puVar1[0x1c] < 0.0)) ||
      ((float)puVar1[0x1d] < 0.0)) ||
     ((90.0 <= (float)puVar1[0x1c] || (90.0 <= (float)puVar1[0x1d])))) {
    uStack_5c = param_1._0_1_;
    FUN_004040a0();
    uVar9 = 0xffffffff;
    pcVar12 = s_CAdamEffectSpout__CreateFromEnti_00692990;
    do {
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      cVar2 = *pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (cVar2 != '\0');
    uVar9 = ~uVar9 - 1;
    cVar2 = FUN_00401940(uVar9);
    if (cVar2 != '\0') {
      pcVar12 = s_CAdamEffectSpout__CreateFromEnti_00692990;
      for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined4 *)pcStack_58 = *(undefined4 *)pcVar12;
        pcVar12 = pcVar12 + 4;
        pcStack_58 = pcStack_58 + 4;
      }
      for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *pcStack_58 = *pcVar12;
        pcVar12 = pcVar12 + 1;
        pcStack_58 = pcStack_58 + 1;
      }
      FUN_00404190();
    }
    local_4._0_1_ = 0x18;
    FUN_005035a0();
    local_4._0_1_ = 7;
    FUN_004040a0();
    puVar1[0x1c] = 0;
    puVar1[0x1d] = 0x41f00000;
  }
  local_4._0_1_ = 6;
  if ((local_6c != 0) &&
     (iVar8 = *(int *)(local_6c + 0x14) + -1, *(int *)(local_6c + 0x14) = iVar8, iVar8 == 0)) {
    FUN_005abfc0();
  }
  local_4._0_1_ = 5;
  if ((local_68 != 0) &&
     (iVar8 = *(int *)(local_68 + 0x14) + -1, *(int *)(local_68 + 0x14) = iVar8, iVar8 == 0)) {
    FUN_005abfc0();
  }
  local_4 = CONCAT31(local_4._1_3_,4);
  FUN_004040a0();
  if (iStack_28 != 0) {
    cVar2 = *(char *)(iStack_28 + -1);
    if ((cVar2 == '\0') || (cVar2 == -1)) {
      FUN_005fe5f0();
    }
    else {
      *(char *)(iStack_28 + -1) = cVar2 + -1;
    }
  }
  ExceptionList = pvStack_c;
  return iVar4;
}

