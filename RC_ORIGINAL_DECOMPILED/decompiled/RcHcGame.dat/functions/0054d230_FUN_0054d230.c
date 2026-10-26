/*
 * FUN_0054d230 at 0054d230
 * undefined FUN_0054d230(void)
 * Address ranges: 0054d230-0054dac5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_0054d230(int param_1)

{
  float fVar1;
  undefined1 uVar2;
  char cVar3;
  code *pcVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  char *pcVar10;
  char *pcVar11;
  float10 fVar12;
  undefined1 local_bd;
  float local_bc;
  undefined1 local_b8 [4];
  char *pcStack_b4;
  undefined1 auStack_a8 [4];
  char *pcStack_a4;
  undefined1 auStack_98 [4];
  char *pcStack_94;
  undefined1 auStack_88 [4];
  int iStack_84;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063d87a;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  local_bc = (float)param_1;
  if (*(char *)(param_1 + 0x8c) != '\0') {
    local_b8[0] = local_bd;
    ExceptionList = &pvStack_c;
    FUN_004040a0();
    uVar8 = 0xffffffff;
    pcVar10 = &DAT_006b3f70;
    do {
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      cVar3 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar3 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar8 - 1);
    local_4 = 0;
    pcVar4 = (code *)FUN_005a07f0(s___m_Initialized_00694cac,
                                  s_D__Work_RCHorror_AdamSource_Adam_006a1798,99,local_b8);
    (*pcVar4)();
    local_4 = 0xffffffff;
    FUN_004040a0();
  }
  if (*(int *)(param_1 + 0x50) != 0) {
    local_b8[0] = local_bd;
    FUN_004040a0();
    uVar8 = 0xffffffff;
    pcVar10 = &DAT_006b3f70;
    do {
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      cVar3 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar3 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar8 - 1);
    local_4 = 1;
    pcVar4 = (code *)FUN_005a07f0(s_m_System__0_006a1a4c,s_D__Work_RCHorror_AdamSource_Adam_006a1798
                                  ,100,local_b8);
    (*pcVar4)();
    local_4 = 0xffffffff;
    FUN_004040a0();
  }
  FUN_00516fb0();
  iVar5 = FUN_004337e0();
  if (iVar5 != 0) {
    uVar2 = FUN_00553640();
    uVar6 = FUN_005ae390(local_b8,s_CAdamSoundSystem__Init____SoundA_006a1a20,uVar2);
    local_4 = 2;
    FUN_005aff00(uVar6);
    local_4 = 0xffffffff;
    FUN_004040a0();
  }
  cVar3 = FUN_00553640();
  if (cVar3 != '\0') {
    FUN_00516fb0();
    iVar5 = FUN_004337e0();
    if (iVar5 != 0) {
      uVar2 = FUN_005536e0();
      uVar6 = FUN_005ae390(local_b8,s_CAdamSoundSystem__Init____UseLow_006a19ec,uVar2);
      local_4 = 3;
      FUN_005aff00(uVar6);
      local_4 = 0xffffffff;
      FUN_004040a0();
    }
    FUN_005536e0();
    FUN_005c7e10();
    FUN_005597c0();
    FUN_005a0d70();
    FUN_005584b0();
    FUN_00557520();
    FUN_005acdb0();
    FUN_00553680();
    auStack_a8[0] = local_bd;
    FUN_004040a0();
    uVar8 = 0xffffffff;
    pcVar10 = &DAT_006b3f70;
    do {
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      cVar3 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar3 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar8 - 1);
    auStack_98[0] = local_bd;
    local_4 = 4;
    FUN_004040a0();
    uVar8 = 0xffffffff;
    pcVar10 = s_Debug_006901ec;
    do {
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      cVar3 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar3 != '\0');
    FUN_004040f0(s_Debug_006901ec,~uVar8 - 1);
    local_4._0_1_ = 5;
    local_b8[0] = local_bd;
    FUN_004040a0();
    uVar8 = 0xffffffff;
    pcVar10 = s_DebugFakeSoundCrash_006a19d8;
    do {
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      cVar3 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar3 != '\0');
    FUN_004040f0(s_DebugFakeSoundCrash_006a19d8,~uVar8 - 1);
    local_4._0_1_ = 6;
    FUN_005ac9d0(local_b8,auStack_98,0,auStack_a8,0);
    local_4._0_1_ = 7;
    iVar5 = FUN_004337e0();
    local_4._0_1_ = 6;
    FUN_005acca0();
    local_4._0_1_ = 5;
    FUN_004040a0();
    local_4 = CONCAT31(local_4._1_3_,4);
    FUN_004040a0();
    local_4 = 0xffffffff;
    FUN_004040a0();
    if (iVar5 != 0) {
      iVar7 = FUN_005a0830();
      iVar5 = *(int *)(iVar7 + 100);
      if (iVar5 == -0x80000000) {
        iVar5 = FUN_0060af10();
        *(int *)(iVar7 + 100) = iVar5;
      }
      if (iVar5 != 0) {
        FUN_005afe30();
      }
      auStack_a8[0] = local_bd;
      FUN_004040a0();
      uVar8 = 0xffffffff;
      pcVar10 = s_Faking__DebugFakeSoundCrash__006a19b8;
      do {
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        cVar3 = *pcVar10;
        pcVar10 = pcVar10 + 1;
      } while (cVar3 != '\0');
      uVar8 = ~uVar8 - 1;
      cVar3 = FUN_00401940(uVar8,1);
      if (cVar3 != '\0') {
        pcVar10 = s_Faking__DebugFakeSoundCrash__006a19b8;
        for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
          *(undefined4 *)pcStack_a4 = *(undefined4 *)pcVar10;
          pcVar10 = pcVar10 + 4;
          pcStack_a4 = pcStack_a4 + 4;
        }
        for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *pcStack_a4 = *pcVar10;
          pcVar10 = pcVar10 + 1;
          pcStack_a4 = pcStack_a4 + 1;
        }
        FUN_00404190();
      }
      local_4 = 8;
      pcVar4 = (code *)FUN_005a07f0(s_false_0068d2d0,s_D__Work_RCHorror_AdamSource_Adam_006a1798,
                                    0x76,auStack_a8);
      (*pcVar4)();
      local_4 = 0xffffffff;
      FUN_004040a0();
      ExceptionList = pvStack_c;
      return 0;
    }
    local_b8[0] = local_bd;
    FUN_004040a0();
    uVar8 = 0xffffffff;
    pcVar10 = &DAT_006b3f70;
    do {
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      cVar3 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar3 != '\0');
    uVar8 = ~uVar8 - 1;
    cVar3 = FUN_00401940(uVar8,1);
    if (cVar3 != '\0') {
      pcVar10 = &DAT_006b3f70;
      pcVar11 = pcStack_b4;
      for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined4 *)pcVar11 = *(undefined4 *)pcVar10;
        pcVar10 = pcVar10 + 4;
        pcVar11 = pcVar11 + 4;
      }
      for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *pcVar11 = *pcVar10;
        pcVar10 = pcVar10 + 1;
        pcVar11 = pcVar11 + 1;
      }
      FUN_00404190();
    }
    local_4 = 9;
    auStack_98[0] = local_bd;
    FUN_004040a0();
    uVar8 = 0xffffffff;
    pcVar10 = s_Debug_006901ec;
    do {
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      cVar3 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar3 != '\0');
    uVar8 = ~uVar8 - 1;
    cVar3 = FUN_00401940(uVar8,1);
    if (cVar3 != '\0') {
      pcVar10 = s_Debug_006901ec;
      for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined4 *)pcStack_94 = *(undefined4 *)pcVar10;
        pcVar10 = pcVar10 + 4;
        pcStack_94 = pcStack_94 + 4;
      }
      for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *pcStack_94 = *pcVar10;
        pcVar10 = pcVar10 + 1;
        pcStack_94 = pcStack_94 + 1;
      }
      FUN_00404190();
    }
    local_4 = CONCAT31(local_4._1_3_,10);
    auStack_a8[0] = local_bd;
    FUN_004040a0();
    uVar8 = 0xffffffff;
    pcVar10 = s_DebugFakeSoundFailure_006a19a0;
    do {
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      cVar3 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar3 != '\0');
    uVar8 = ~uVar8 - 1;
    cVar3 = FUN_00401940(uVar8,1);
    if (cVar3 != '\0') {
      pcVar10 = s_DebugFakeSoundFailure_006a19a0;
      for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined4 *)pcStack_a4 = *(undefined4 *)pcVar10;
        pcVar10 = pcVar10 + 4;
        pcStack_a4 = pcStack_a4 + 4;
      }
      for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *pcStack_a4 = *pcVar10;
        pcVar10 = pcVar10 + 1;
        pcStack_a4 = pcStack_a4 + 1;
      }
      FUN_00404190();
    }
    local_4._0_1_ = 0xb;
    FUN_005ac9d0(auStack_a8,auStack_98,0,local_b8,0);
    local_4._0_1_ = 0xc;
    iVar5 = FUN_004337e0();
    local_4._0_1_ = 0xb;
    FUN_005acca0();
    local_4._0_1_ = 10;
    FUN_004040a0();
    local_4 = CONCAT31(local_4._1_3_,9);
    FUN_004040a0();
    local_4 = 0xffffffff;
    FUN_004040a0();
    if (iVar5 == 0) {
      iVar7 = FUN_005a0830();
      iVar5 = *(int *)(iVar7 + 100);
      if (iVar5 == -0x80000000) {
        iVar5 = FUN_0060af10();
        *(int *)(iVar7 + 100) = iVar5;
      }
      if (iVar5 != 0) {
        FUN_005afe30();
      }
      uVar6 = FUN_005c7e30();
      *(undefined4 *)((int)local_bc + 0x50) = uVar6;
    }
    else {
      iVar7 = FUN_005a0830();
      iVar5 = *(int *)(iVar7 + 100);
      if (iVar5 == -0x80000000) {
        iVar5 = FUN_0060af10();
        *(int *)(iVar7 + 100) = iVar5;
      }
      if (iVar5 != 0) {
        FUN_005afe30();
      }
      *(undefined4 *)((int)local_bc + 0x50) = 0;
    }
    fVar1 = local_bc;
    FUN_00553680();
    FUN_00557520();
    FUN_005acdb0();
    if (*(int *)((int)fVar1 + 0x50) == 0) {
      FUN_005597c0();
      FUN_005a10d0();
      local_b8[0] = local_bd;
      FUN_004040a0();
      uVar8 = 0xffffffff;
      pcVar10 = s_CAdamSoundSystem__Init____geSoun_006a18fc;
      do {
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        cVar3 = *pcVar10;
        pcVar10 = pcVar10 + 1;
      } while (cVar3 != '\0');
      uVar8 = ~uVar8 - 1;
      cVar3 = FUN_00401940(uVar8,1);
      if (cVar3 != '\0') {
        pcVar10 = s_CAdamSoundSystem__Init____geSoun_006a18fc;
        for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
          *(undefined4 *)pcStack_b4 = *(undefined4 *)pcVar10;
          pcVar10 = pcVar10 + 4;
          pcStack_b4 = pcStack_b4 + 4;
        }
        for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *pcStack_b4 = *pcVar10;
          pcVar10 = pcVar10 + 1;
          pcStack_b4 = pcStack_b4 + 1;
        }
        FUN_00404190();
      }
      local_4 = 0xd;
      FUN_005aff20(s_D__Work_RCHorror_AdamSource_Adam_006a1798,0x8f,local_b8);
      local_4 = 0xffffffff;
      FUN_004040a0();
      ExceptionList = pvStack_c;
      return 0;
    }
    FUN_005597c0();
    FUN_005a10d0();
    if (*(float *)((int)fVar1 + 0xf0) == 0.0) {
      fVar12 = (float10)FUN_005ad390((int)fVar1 + 0xa4,&local_bd);
      *(float *)((int)fVar1 + 0xf0) = (float)fVar12;
      local_bc = (float)fVar12;
    }
    else {
      local_bc = *(float *)((int)fVar1 + 0xf0);
    }
    fVar12 = (float10)FUN_0054d030();
    FUN_005c7f30(*(undefined4 *)((int)fVar1 + 0x50),(float)fVar12);
    iVar7 = FUN_00516fb0();
    iVar5 = *(int *)(iVar7 + 100);
    if (iVar5 == -0x80000000) {
      iVar5 = FUN_0060af10();
      *(int *)(iVar7 + 100) = iVar5;
    }
    if (iVar5 != 0) {
      uVar6 = FUN_005c7e20();
      uVar6 = FUN_005ae390(local_b8,s_CAdamSoundSystem__Init____Mode___006a18d8,uVar6);
      local_4 = 0xe;
      FUN_005aff00(uVar6);
      local_4 = 0xffffffff;
      if (pcStack_b4 != (char *)0x0) {
        cVar3 = pcStack_b4[-1];
        if ((cVar3 == '\0') || (cVar3 == -1)) {
          FUN_005fe5f0();
        }
        else {
          pcStack_b4[-1] = cVar3 + -1;
        }
      }
    }
    local_bc = *(float *)((int)fVar1 + 0x1f0);
    iVar7 = FUN_00516fb0();
    iVar5 = *(int *)(iVar7 + 100);
    if (iVar5 == -0x80000000) {
      iVar5 = FUN_0060af10();
      *(int *)(iVar7 + 100) = iVar5;
    }
    if (iVar5 != 0) {
      uVar6 = FUN_005ae390(auStack_88,s_geSound3D_SetMaxDistanceFactor____006a18b0,(double)local_bc)
      ;
      local_4 = 0xf;
      FUN_005aff00(uVar6);
      if (iStack_84 != 0) {
        cVar3 = *(char *)(iStack_84 + -1);
        if ((cVar3 == '\0') || (cVar3 == -1)) {
          FUN_005fe5f0();
        }
        else {
          *(char *)(iStack_84 + -1) = cVar3 + -1;
        }
      }
    }
    FUN_005c7b90();
    *(undefined1 *)((int)fVar1 + 0x8c) = 1;
  }
  ExceptionList = pvStack_c;
  return 1;
}

