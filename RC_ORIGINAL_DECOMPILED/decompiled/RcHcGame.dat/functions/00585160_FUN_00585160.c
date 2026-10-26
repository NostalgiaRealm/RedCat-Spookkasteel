/*
 * FUN_00585160 at 00585160
 * undefined FUN_00585160(void)
 * Address ranges: 00585160-005856a0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_00585160(int param_1)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  code *pcVar6;
  int *piVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  char *pcVar11;
  bool bVar12;
  char *pcVar13;
  undefined1 uStack_55;
  int local_54;
  void *local_50;
  undefined1 local_4c [4];
  char *pcStack_48;
  undefined1 local_3c [16];
  undefined1 auStack_2c [16];
  undefined1 local_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00642a1a;
  pvStack_c = ExceptionList;
  local_54 = 0;
  ExceptionList = &pvStack_c;
  local_50 = operator_new(0x128);
  iVar1 = param_1;
  bVar12 = local_50 == (void *)0x0;
  local_4 = 0;
  if (bVar12) {
    iVar4 = 0;
  }
  else {
    uVar3 = FUN_005033f0(local_1c,*(undefined4 *)(param_1 + 0xc),s_EffectSound_006a5c78);
    local_54 = 1;
    local_4 = CONCAT31(local_4._1_3_,1);
    iVar4 = FUN_00584610(uVar3,iVar1);
  }
  local_4 = 0xffffffff;
  if (!bVar12) {
    FUN_004040a0(1);
  }
  pcVar13 = *(char **)(iVar1 + 0xc);
  local_3c[0] = (undefined1)param_1;
  FUN_004040a0(0);
  local_4 = 3;
  if (pcVar13 == (char *)0x0) {
    uVar9 = 0xffffffff;
    pcVar13 = &DAT_006b3f70;
    do {
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      cVar2 = *pcVar13;
      pcVar13 = pcVar13 + 1;
    } while (cVar2 != '\0');
    pcVar13 = &DAT_006b3f70;
  }
  else {
    uVar9 = 0xffffffff;
    pcVar11 = pcVar13;
    do {
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      cVar2 = *pcVar11;
      pcVar11 = pcVar11 + 1;
    } while (cVar2 != '\0');
  }
  FUN_004040f0(pcVar13,~uVar9 - 1);
  FUN_00503ae0(local_3c);
  local_4 = 0xffffffff;
  FUN_004040a0(1);
  pcVar13 = *(char **)(iVar1 + 0x10);
  local_3c[0] = (undefined1)param_1;
  FUN_004040a0(0);
  local_4 = 4;
  if (pcVar13 != (char *)0x0) {
    uVar9 = 0xffffffff;
    pcVar11 = pcVar13;
    do {
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      cVar2 = *pcVar11;
      pcVar11 = pcVar11 + 1;
    } while (cVar2 != '\0');
    FUN_004040f0(pcVar13,~uVar9 - 1);
  }
  FUN_0040cc00(local_3c,0,0xffffffff);
  local_4 = 0xffffffff;
  FUN_004040a0(1);
  FUN_00502350(CONCAT31((int3)((uint)*(int *)(iVar1 + 0x24) >> 8),*(int *)(iVar1 + 0x24) != 0));
  if (((*(float *)(iVar1 + 0x1c) < *(float *)(iVar1 + 0x18)) || (*(float *)(iVar1 + 0x1c) < 0.0)) ||
     (*(float *)(iVar1 + 0x18) < 0.0)) {
    local_3c[0] = (undefined1)param_1;
    FUN_004040a0(0);
    uVar9 = 0xffffffff;
    pcVar13 = s_CAdamEffectSound__CreateFromEnti_006a5d30;
    do {
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      cVar2 = *pcVar13;
      pcVar13 = pcVar13 + 1;
    } while (cVar2 != '\0');
    FUN_004040f0(s_CAdamEffectSound__CreateFromEnti_006a5d30,~uVar9 - 1);
    local_4 = 5;
    FUN_005035a0(local_3c);
    local_4 = 0xffffffff;
    FUN_004040a0(1);
    *(undefined4 *)(iVar1 + 0x18) = 0x3f800000;
    *(undefined4 *)(iVar1 + 0x1c) = 0x40a00000;
  }
  if (0.0 < *(float *)(iVar1 + 0x30)) {
    *(undefined4 *)(iVar4 + 0x120) = *(undefined4 *)(iVar1 + 0x30);
  }
  if (0.0 < *(float *)(iVar1 + 0x38)) {
    *(undefined4 *)(iVar4 + 0x124) = *(undefined4 *)(iVar1 + 0x38);
  }
  if (*(int *)(iVar1 + 0x20) == 0) {
    *(undefined1 **)(iVar1 + 0x20) = &DAT_006b3f70;
    local_3c[0] = (undefined1)param_1;
    FUN_004040a0(0);
    uVar9 = 0xffffffff;
    pcVar13 = s_CAdamEffectSound__CreateFromEnti_006a5ce8;
    do {
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      cVar2 = *pcVar13;
      pcVar13 = pcVar13 + 1;
    } while (cVar2 != '\0');
    FUN_004040f0(s_CAdamEffectSound__CreateFromEnti_006a5ce8,~uVar9 - 1);
    local_4 = 6;
    FUN_005035a0(local_3c);
    local_4 = 0xffffffff;
    FUN_004040a0(1);
  }
  cVar2 = FUN_00553640();
  if (cVar2 != '\0') {
    iVar5 = DAT_006c8de0;
    if (DAT_006c8de0 == 0) {
      iVar5 = FUN_0055b280();
    }
    if (*(int *)(iVar5 + 0xfc) == 0) {
      FUN_00409810(&DAT_006b3f70,&param_1);
      local_4 = 7;
      pcVar6 = (code *)FUN_005a07f0(s_m_SoundSystem_0068f8ec,s___AdamSource_AdamEngine_h_0068eb58,
                                    399,local_3c);
      (*pcVar6)();
      local_4 = 0xffffffff;
      FUN_004040a0(1);
    }
    if (*(char *)(*(int *)(iVar5 + 0xfc) + 0x8c) != '\0') {
      pcVar13 = *(char **)(iVar1 + 0x20);
      local_3c[0] = (undefined1)param_1;
      FUN_004040a0(0);
      uVar9 = 0xffffffff;
      pcVar11 = pcVar13;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        cVar2 = *pcVar11;
        pcVar11 = pcVar11 + 1;
      } while (cVar2 != '\0');
      FUN_004040f0(pcVar13,~uVar9 - 1);
      local_4 = 8;
      iVar5 = DAT_006c8de0;
      if (DAT_006c8de0 == 0) {
        iVar5 = FUN_0055b280();
      }
      if (*(int *)(iVar5 + 0xfc) == 0) {
        FUN_00409810(&DAT_006b3f70,&param_1);
        local_4._0_1_ = 9;
        pcVar6 = (code *)FUN_005a07f0(s_m_SoundSystem_0068f8ec,s___AdamSource_AdamEngine_h_0068eb58,
                                      399,local_4c);
        (*pcVar6)();
        local_4 = CONCAT31(local_4._1_3_,8);
        FUN_004040a0(1);
      }
      if (*(char *)(*(int *)(iVar5 + 0xfc) + 0x8c) == '\0') {
        FUN_00409810(&DAT_006b3f70,&uStack_55);
        local_4._0_1_ = 10;
        pcVar6 = (code *)FUN_005a07f0(s_m_Initialized_00691bb0,s___AdamSource_AdamSound_h_00692cdc,
                                      0x14b,auStack_2c);
        (*pcVar6)();
        local_4 = CONCAT31(local_4._1_3_,8);
        FUN_004040a0(1);
      }
      piVar7 = (int *)FUN_005514e0(&local_54,local_3c);
      iVar5 = *(int *)(iVar4 + 0xfc);
      local_4._0_1_ = 0xb;
      if (iVar5 != *piVar7) {
        if ((iVar5 != 0) &&
           (iVar8 = *(int *)(iVar5 + 0x14) + -1, *(int *)(iVar5 + 0x14) = iVar8, iVar8 == 0)) {
          FUN_005abfc0(0);
        }
        *(int *)(iVar4 + 0xfc) = *piVar7;
        FUN_005844b0();
      }
      local_4 = CONCAT31(local_4._1_3_,8);
      if (local_54 != 0) {
        FUN_004098d0();
        local_54 = 0;
      }
      local_4 = 0xffffffff;
      FUN_004040a0(1);
      if (*(int *)(iVar4 + 0xfc) != 0) {
        ExceptionList = pvStack_c;
        return iVar4;
      }
      uVar3 = FUN_005ae390(local_1c,s_Cannot_preload_sound___s__006a4b48,
                           *(undefined4 *)(iVar1 + 0x20));
      local_4 = 0xc;
      FUN_005035a0(uVar3);
      goto LAB_00585687;
    }
  }
  local_4c[0] = (undefined1)param_1;
  FUN_004040a0(0);
  uVar9 = 0xffffffff;
  pcVar13 = s_Soundsystem_not_available_00692c8c;
  do {
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    cVar2 = *pcVar13;
    pcVar13 = pcVar13 + 1;
  } while (cVar2 != '\0');
  uVar9 = ~uVar9 - 1;
  cVar2 = FUN_00401940(uVar9,1);
  if (cVar2 != '\0') {
    pcVar13 = s_Soundsystem_not_available_00692c8c;
    for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
      *(undefined4 *)pcStack_48 = *(undefined4 *)pcVar13;
      pcVar13 = pcVar13 + 4;
      pcStack_48 = pcStack_48 + 4;
    }
    for (uVar10 = uVar9 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
      *pcStack_48 = *pcVar13;
      pcVar13 = pcVar13 + 1;
      pcStack_48 = pcStack_48 + 1;
    }
    FUN_00404190(uVar9);
  }
  local_4 = 0xd;
  FUN_005035a0(local_4c);
LAB_00585687:
  local_4 = 0xffffffff;
  FUN_004040a0(1);
  ExceptionList = pvStack_c;
  return iVar4;
}

