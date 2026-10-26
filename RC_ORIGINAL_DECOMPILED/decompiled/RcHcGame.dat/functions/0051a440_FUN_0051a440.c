/*
 * FUN_0051a440 at 0051a440
 * undefined FUN_0051a440(void)
 * Address ranges: 0051a440-0051a902
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_0051a440(int param_1,int param_2)

{
  float fVar1;
  char cVar2;
  DWORD DVar3;
  code *pcVar4;
  int iVar5;
  uint uVar6;
  char *pcVar7;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  char *pcStack_68;
  char *pcStack_64;
  char *pcStack_60;
  char **ppcStack_5c;
  char *pcStack_58;
  char *pcStack_48;
  float local_44;
  undefined1 *local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  char acStack_2c [16];
  char local_1c [16];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_006386e8;
  local_c = ExceptionList;
  local_4 = 0;
  pcStack_58 = (char *)0x51a468;
  ExceptionList = &local_c;
  cVar2 = FUN_0051a420();
  if (cVar2 != '\0') {
    local_4 = 0xffffffff;
    pcStack_58 = (char *)0x51a47d;
    FUN_0057d310();
    ExceptionList = local_c;
    return;
  }
  pcStack_58 = (char *)0x51a497;
  DVar3 = timeGetTime();
  local_40 = *(undefined1 **)(param_1 + 0x40);
  cVar2 = '\x01';
  if (local_40 != (undefined1 *)0xffffffff) {
    iVar5 = *(int *)(param_1 + 0x44);
    if (iVar5 == -1) {
      *(undefined4 *)(param_1 + 0x48) = 0x3f800000;
      *(DWORD *)(param_1 + 0x44) = (int)local_40 + DVar3;
    }
    else if (iVar5 < (int)DVar3) {
      *(undefined4 *)(param_1 + 0x48) = 0;
      cVar2 = '\0';
    }
    else if ((int)local_40 < 1) {
      *(undefined4 *)(param_1 + 0x48) = 0;
    }
    else {
      local_44 = (float)(iVar5 - DVar3);
      *(float *)(param_1 + 0x48) = (float)(int)local_44 / (float)(int)local_40;
    }
  }
  *(char *)(param_1 + 0x4c) = cVar2;
  iVar5 = *(int *)(param_1 + 0x3c);
  fVar1 = 1.0 - *(float *)(param_1 + 0x48);
  if (iVar5 == 1) {
    local_44 = 255.0 - fVar1 * 255.0;
    if (cVar2 == '\0') {
      *(undefined4 *)(param_1 + 0x3c) = 2;
    }
  }
  else if (iVar5 == 3) {
    local_44 = fVar1 * 255.0;
    if (cVar2 == '\0') {
      *(undefined4 *)(param_1 + 0x3c) = 4;
    }
  }
  else if (iVar5 == 4) {
    local_44 = 255.0;
  }
  else {
    pcStack_58 = *(char **)(param_1 + 0x18);
    if (pcStack_58 == (char *)0x0) {
      pcStack_58 = "";
    }
    pcStack_64 = local_1c;
    pcStack_60 = s_Invalid_fadestate__d_for_state___0069f41c;
    pcStack_68 = (char *)0x51a520;
    ppcStack_5c = (char **)iVar5;
    pcStack_58 = (char *)FUN_005ae390();
    ppcStack_5c = (char **)0x70;
    pcStack_60 = s_D__Work_RCHorror_AdamSource_Adam_0069f3ec;
    pcStack_64 = s_false_0068d2d0;
    local_4._0_1_ = 1;
    pcStack_68 = (char *)0x51a53a;
    pcVar4 = (code *)FUN_005a07f0();
    pcStack_68 = (char *)0x51a53c;
    (*pcVar4)();
    local_4 = (uint)local_4._1_3_ << 8;
    pcStack_58 = (char *)0x1;
    ppcStack_5c = (char **)0x51a54e;
    FUN_004040a0();
  }
  iVar5 = DAT_006c8de0;
  if (DAT_006c8de0 == 0) {
    pcStack_58 = (char *)0x51a59b;
    iVar5 = FUN_0055b280();
  }
  if (*(char *)(iVar5 + 0x194) == '\0') {
    pcStack_58 = (char *)0x0;
    uStack_3c = CONCAT31(uStack_3c._1_3_,(char)param_2);
    ppcStack_5c = (char **)0x51a5b9;
    FUN_004040a0();
    uVar6 = 0xffffffff;
    pcVar7 = &DAT_006b3f70;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar2 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar2 != '\0');
    pcStack_58 = (char *)(~uVar6 - 1);
    ppcStack_5c = (char **)&DAT_006b3f70;
    pcStack_60 = (char *)0x51a5d7;
    FUN_004040f0();
    pcStack_58 = (char *)&uStack_3c;
    local_4._0_1_ = 2;
    ppcStack_5c = (char **)0x75;
    pcStack_60 = s_D__Work_RCHorror_AdamSource_Adam_0069f3ec;
    pcStack_64 = s_engine_GetInFrame___0069f3d8;
    pcStack_68 = (char *)0x51a5f2;
    pcVar4 = (code *)FUN_005a07f0();
    pcStack_68 = (char *)0x51a5f4;
    (*pcVar4)();
    local_4 = (uint)local_4._1_3_ << 8;
    pcStack_58 = (char *)0x1;
    ppcStack_5c = (char **)0x51a606;
    FUN_004040a0();
  }
  if (*(int *)(iVar5 + 0xd8) == 0) {
    pcStack_58 = (char *)0x0;
    acStack_2c[0] = (char)param_2;
    ppcStack_5c = (char **)0x51a620;
    FUN_004040a0();
    uVar6 = 0xffffffff;
    pcVar7 = &DAT_006b3f70;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar2 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar2 != '\0');
    pcStack_58 = (char *)(~uVar6 - 1);
    ppcStack_5c = (char **)&DAT_006b3f70;
    pcStack_60 = (char *)0x51a63e;
    FUN_004040f0();
    pcStack_58 = acStack_2c;
    local_4._0_1_ = 3;
    ppcStack_5c = (char **)0x188;
    pcStack_60 = s___AdamSource_AdamEngine_h_0068eb58;
    pcStack_64 = s_m_BitmapMgr_0068eb4c;
    pcStack_68 = (char *)0x51a65c;
    pcVar4 = (code *)FUN_005a07f0();
    pcStack_68 = (char *)0x51a65e;
    (*pcVar4)();
    local_4 = (uint)local_4._1_3_ << 8;
    pcStack_58 = (char *)0x1;
    ppcStack_5c = (char **)0x51a670;
    FUN_004040a0();
  }
  pcStack_58 = (char *)0x51a67b;
  pcStack_58 = (char *)FUN_0051a410();
  ppcStack_5c = &pcStack_48;
  pcStack_60 = (char *)0x51a688;
  FUN_0050d350();
  local_4._0_1_ = 4;
  if (pcStack_48 == (char *)0x0) {
    ppcStack_5c = (char **)local_1c;
    pcStack_58 = s_CAdamGameState__DoFade_____bitma_0069f3a8;
    pcStack_60 = (char *)0x51a6a4;
    pcStack_60 = (char *)FUN_005ae390();
    pcStack_64 = (char *)0x7b;
    pcStack_68 = s_D__Work_RCHorror_AdamSource_Adam_0069f3ec;
    local_4._0_1_ = 5;
    uStack_6c = 0x51a6b6;
    FUN_005aff20();
    local_4._0_1_ = 4;
    pcStack_58 = (char *)0x1;
    ppcStack_5c = (char **)0x51a6c9;
    FUN_004040a0();
    local_4 = (uint)local_4._1_3_ << 8;
    if (pcStack_48 != (char *)0x0) {
      pcStack_58 = (char *)0x51a6da;
      FUN_004098d0();
      pcStack_48 = (char *)0x0;
    }
    local_4 = 0xffffffff;
    if (param_2 != 0) {
      pcStack_58 = (char *)0x51a6f7;
      FUN_004098d0();
      ExceptionList = local_c;
      return;
    }
  }
  else {
    local_40 = (undefined1 *)&pcStack_58;
    pcStack_58 = pcStack_48;
    if (pcStack_48 != (char *)0x0) {
      *(int *)(pcStack_48 + 0x14) = *(int *)(pcStack_48 + 0x14) + 1;
    }
    local_4._0_1_ = 4;
    ppcStack_5c = (char **)0x51a72d;
    FUN_00421430();
    ppcStack_5c = (char **)0x51a734;
    cVar2 = FUN_004fbca0();
    if (cVar2 == '\0') {
      ppcStack_5c = (char **)local_1c;
      pcStack_58 = s_CAdamGameState__DoFade_____bitma_0069f370;
      pcStack_60 = (char *)0x51a74b;
      pcStack_60 = (char *)FUN_005ae390();
      pcStack_64 = (char *)0x82;
      pcStack_68 = s_D__Work_RCHorror_AdamSource_Adam_0069f3ec;
      local_4._0_1_ = 7;
      uStack_6c = 0x51a760;
      FUN_005aff20();
      local_4._0_1_ = 4;
      pcStack_58 = (char *)0x1;
      ppcStack_5c = (char **)0x51a773;
      FUN_004040a0();
      local_4 = (uint)local_4._1_3_ << 8;
      if (pcStack_48 != (char *)0x0) {
        iVar5 = *(int *)(pcStack_48 + 0x14);
        *(int *)(pcStack_48 + 0x14) = iVar5 + -1;
        if (iVar5 + -1 == 0) {
          pcStack_58 = (char *)0x0;
          ppcStack_5c = (char **)0x51a796;
          FUN_005abfc0();
        }
        pcStack_48 = (char *)0x0;
      }
      if (param_2 == 0) {
        ExceptionList = local_c;
        return;
      }
      iVar5 = *(int *)(param_2 + 0x14) + -1;
      *(int *)(param_2 + 0x14) = iVar5;
    }
    else {
      if (*(int *)(iVar5 + 0x100) == 0) {
        pcStack_58 = (char *)0x0;
        local_1c[0] = (char)param_2;
        ppcStack_5c = (char **)0x51a7e2;
        FUN_004040a0();
        uVar6 = 0xffffffff;
        pcVar7 = &DAT_006b3f70;
        do {
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          cVar2 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar2 != '\0');
        pcStack_58 = (char *)(~uVar6 - 1);
        ppcStack_5c = (char **)&DAT_006b3f70;
        pcStack_60 = (char *)0x51a800;
        FUN_004040f0();
        pcStack_58 = local_1c;
        local_4._0_1_ = 8;
        ppcStack_5c = (char **)0x1ad;
        pcStack_60 = s___AdamSource_AdamEngine_h_0068eb58;
        pcStack_64 = s_m_Engine_006934e0;
        pcStack_68 = (char *)0x51a81e;
        pcVar4 = (code *)FUN_005a07f0();
        pcStack_68 = (char *)0x51a820;
        (*pcVar4)();
        local_4._0_1_ = 4;
        pcStack_58 = (char *)0x1;
        ppcStack_5c = (char **)0x51a833;
        FUN_004040a0();
      }
      pcStack_58 = *(char **)(iVar5 + 0x100);
      ppcStack_5c = (char **)0x51a83f;
      FUN_005bcdd0();
      uStack_3c = 0;
      pcStack_58 = (char *)0x0;
      ppcStack_5c = (char **)local_44;
      pcStack_60 = (char *)0x0;
      uStack_38 = 0x3f800000;
      uStack_34 = 0;
      uStack_30 = 0x3f800000;
      uStack_70 = 0;
      uStack_6c = 0x3f800000;
      local_40 = (undefined1 *)&uStack_74;
      uStack_74 = 0x3f800000;
      pcStack_68 = (char *)0x0;
      pcStack_64 = (char *)0x3f800000;
      FUN_00449760(&pcStack_48);
      FUN_005614e0();
      local_4 = (uint)local_4._1_3_ << 8;
      if (pcStack_48 != (char *)0x0) {
        iVar5 = *(int *)(pcStack_48 + 0x14);
        *(int *)(pcStack_48 + 0x14) = iVar5 + -1;
        if (iVar5 + -1 == 0) {
          pcStack_58 = (char *)0x0;
          ppcStack_5c = (char **)0x51a8c4;
          FUN_005abfc0();
        }
        pcStack_48 = (char *)0x0;
      }
      if (param_2 == 0) {
        ExceptionList = local_c;
        return;
      }
      iVar5 = *(int *)(param_2 + 0x14) + -1;
      *(int *)(param_2 + 0x14) = iVar5;
    }
    if (iVar5 == 0) {
      local_4 = 0xffffffff;
      pcStack_58 = (char *)0x0;
      ppcStack_5c = (char **)0x51a8ef;
      FUN_005abfc0();
    }
  }
  ExceptionList = local_c;
  return;
}

