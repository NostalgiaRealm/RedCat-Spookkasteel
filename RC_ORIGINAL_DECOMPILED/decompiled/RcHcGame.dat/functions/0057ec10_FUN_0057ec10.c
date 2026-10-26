/*
 * FUN_0057ec10 at 0057ec10
 * undefined FUN_0057ec10(void)
 * Address ranges: 0057ec10-0057f168
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_0057ec10(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  code *pcVar4;
  int *piVar5;
  undefined1 *puVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  char *pcVar11;
  bool bVar12;
  char *pcVar13;
  undefined1 local_96;
  undefined1 local_95;
  int local_94;
  int local_90;
  int local_84;
  void *local_80;
  undefined1 local_7c [4];
  char *pcStack_78;
  uint uStack_74;
  undefined1 auStack_6c [16];
  undefined1 auStack_5c [16];
  undefined1 auStack_4c [16];
  undefined1 auStack_3c [16];
  undefined1 local_2c [16];
  undefined1 auStack_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006422a9;
  pvStack_c = ExceptionList;
  iVar9 = 0;
  local_84 = 0;
  ExceptionList = &pvStack_c;
  local_80 = operator_new(0x144);
  bVar12 = local_80 != (void *)0x0;
  local_4 = 0;
  if (bVar12) {
    uVar2 = FUN_005033f0(local_2c,*(undefined4 *)(param_1 + 0xc),s_EffectMusic_006a51bc);
    local_84 = 1;
    local_4 = CONCAT31(local_4._1_3_,1);
    iVar9 = FUN_0057d160(uVar2,param_1);
  }
  local_4 = 0xffffffff;
  if (bVar12) {
    FUN_004040a0(1);
  }
  pcVar13 = *(char **)(param_1 + 0xc);
  local_94 = CONCAT31(local_94._1_3_,local_96);
  FUN_004040a0(0);
  local_4 = 3;
  if (pcVar13 == (char *)0x0) {
    uVar7 = 0xffffffff;
    pcVar13 = &DAT_006b3f70;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar1 = *pcVar13;
      pcVar13 = pcVar13 + 1;
    } while (cVar1 != '\0');
    pcVar13 = &DAT_006b3f70;
  }
  else {
    uVar7 = 0xffffffff;
    pcVar11 = pcVar13;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar1 = *pcVar11;
      pcVar11 = pcVar11 + 1;
    } while (cVar1 != '\0');
  }
  FUN_004040f0(pcVar13,~uVar7 - 1);
  FUN_00503ae0(&local_94);
  local_4 = 0xffffffff;
  FUN_004040a0(1);
  pcVar13 = *(char **)(param_1 + 0x10);
  FUN_0044e4a0(&local_96);
  local_4 = 4;
  if (pcVar13 != (char *)0x0) {
    uVar7 = 0xffffffff;
    pcVar11 = pcVar13;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar1 = *pcVar11;
      pcVar11 = pcVar11 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(pcVar13,~uVar7 - 1);
  }
  FUN_0040cc00(&local_94,0,0xffffffff);
  local_4 = 0xffffffff;
  FUN_004040a0(1);
  FUN_00502350(*(int *)(param_1 + 0x30) != 0);
  if (0.0 < *(float *)(param_1 + 0x38)) {
    *(undefined4 *)(iVar9 + 0x114) = *(undefined4 *)(param_1 + 0x38);
  }
  if (0.0 < *(float *)(param_1 + 0x3c)) {
    *(undefined4 *)(iVar9 + 0x118) = *(undefined4 *)(param_1 + 0x3c);
  }
  *(bool *)(iVar9 + 0x11c) = *(int *)(param_1 + 0x34) != 0;
  cVar1 = FUN_00553640();
  if (cVar1 != '\0') {
    iVar3 = DAT_006c8de0;
    if (DAT_006c8de0 == 0) {
      iVar3 = FUN_0055b280();
    }
    if (*(int *)(iVar3 + 0xfc) == 0) {
      FUN_00409810(&DAT_006b3f70,&local_96);
      local_4 = 5;
      pcVar4 = (code *)FUN_005a07f0(s_m_SoundSystem_0068f8ec,s___AdamSource_AdamEngine_h_0068eb58,
                                    399,&local_94);
      (*pcVar4)();
      local_4 = 0xffffffff;
      FUN_004040a0(1);
    }
    if (*(char *)(*(int *)(iVar3 + 0xfc) + 0x8c) != '\0') {
      local_84 = 0;
      do {
        iVar10 = local_84;
        local_90 = 0;
        FUN_005844b0();
        local_4 = 6;
        local_94 = iVar10;
        iVar3 = FUN_00580390(auStack_5c,iVar10);
        iVar3 = *(int *)(iVar3 + 8);
        FUN_004040a0(1);
        if (iVar3 != 0) {
          uVar2 = FUN_00580390(auStack_4c,local_94);
          local_4._0_1_ = 7;
          iVar3 = DAT_006c8de0;
          if (DAT_006c8de0 == 0) {
            iVar3 = FUN_0055b280();
          }
          if (*(int *)(iVar3 + 0xfc) == 0) {
            FUN_00409810(&DAT_006b3f70,&local_96);
            local_4._0_1_ = 8;
            pcVar4 = (code *)FUN_005a07f0(s_m_SoundSystem_0068f8ec,
                                          s___AdamSource_AdamEngine_h_0068eb58,399,local_7c);
            (*pcVar4)();
            local_4._0_1_ = 7;
            FUN_004040a0(1);
          }
          if (*(char *)(*(int *)(iVar3 + 0xfc) + 0x8c) == '\0') {
            FUN_00409810(&DAT_006b3f70,&local_95);
            local_4._0_1_ = 9;
            pcVar4 = (code *)FUN_005a07f0(s_m_Initialized_00691bb0,
                                          s___AdamSource_AdamSound_h_00692cdc,0x14b,auStack_6c);
            (*pcVar4)();
            local_4._0_1_ = 7;
            FUN_004040a0(1);
          }
          piVar5 = (int *)FUN_005514e0(&local_80,uVar2);
          local_4._0_1_ = 10;
          if (local_90 != *piVar5) {
            if ((local_90 != 0) &&
               (iVar3 = *(int *)(local_90 + 0x14) + -1, *(int *)(local_90 + 0x14) = iVar3,
               iVar3 == 0)) {
              FUN_005abfc0(0);
            }
            local_90 = *piVar5;
            FUN_005844b0();
          }
          local_4._0_1_ = 7;
          FUN_0057d310();
          local_4._0_1_ = 6;
          FUN_004040a0(1);
          if (local_90 == 0) {
            iVar3 = FUN_00580390(auStack_1c,local_94);
            puVar6 = *(undefined1 **)(iVar3 + 4);
            local_4._0_1_ = 0xb;
            if (puVar6 == (undefined1 *)0x0) {
              puVar6 = &DAT_0064a3b4;
            }
            uVar2 = FUN_005ae390(auStack_3c,s_Cannot_preload_sound___s__006a4b48,puVar6);
            local_4._0_1_ = 0xc;
            FUN_005035a0(uVar2);
            local_4._0_1_ = 0xb;
            FUN_004040a0(1);
            local_4._0_1_ = 6;
            FUN_004040a0(1);
          }
          FUN_005808d0(*(undefined4 *)(iVar9 + 0x104),&local_94);
          iVar10 = local_84;
        }
        local_4 = 0xffffffff;
        if ((local_90 != 0) &&
           (iVar3 = *(int *)(local_90 + 0x14) + -1, *(int *)(local_90 + 0x14) = iVar3, iVar3 == 0))
        {
          FUN_005abfc0(0);
        }
        local_84 = iVar10 + 1;
      } while (local_84 < 8);
      ExceptionList = pvStack_c;
      return iVar9;
    }
  }
  local_7c[0] = local_95;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar13 = s_Soundsystem_not_available_00692c8c;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar13;
    pcVar13 = pcVar13 + 1;
  } while (cVar1 != '\0');
  uVar7 = ~uVar7 - 1;
  cVar1 = FUN_00401940(uVar7,1);
  if (cVar1 != '\0') {
    pcVar13 = s_Soundsystem_not_available_00692c8c;
    pcVar11 = pcStack_78;
    for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pcVar11 = *(undefined4 *)pcVar13;
      pcVar13 = pcVar13 + 4;
      pcVar11 = pcVar11 + 4;
    }
    for (uVar8 = uVar7 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *pcVar11 = *pcVar13;
      pcVar13 = pcVar13 + 1;
      pcVar11 = pcVar11 + 1;
    }
    pcStack_78[uVar7] = '\0';
    uStack_74 = uVar7;
  }
  local_4 = 0xd;
  FUN_005035a0(local_7c);
  local_4 = 0xffffffff;
  FUN_004040a0(1);
  ExceptionList = pvStack_c;
  return iVar9;
}

