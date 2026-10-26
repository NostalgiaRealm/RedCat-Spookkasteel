/*
 * FUN_005622c0 at 005622c0
 * undefined FUN_005622c0(void)
 * Address ranges: 005622c0-005630d5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall
FUN_005622c0(int param_1,int param_2,float param_3,undefined4 param_4,float param_5,
            undefined4 param_6,int *param_7,float param_8,int param_9)

{
  float fVar1;
  undefined1 uVar2;
  char cVar3;
  code *pcVar4;
  undefined4 uVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  undefined4 *puVar10;
  char *pcVar11;
  undefined4 *puVar12;
  undefined1 local_105;
  uint local_104;
  undefined4 *local_100;
  uint local_fc;
  undefined4 uStack_f8;
  float fStack_f4;
  float fStack_f0;
  undefined4 *puStack_ec;
  float fStack_e0;
  int local_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c0;
  int iStack_bc;
  int iStack_b8;
  int iStack_b4;
  int iStack_b0;
  float fStack_ac;
  float fStack_a8;
  undefined4 uStack_a4;
  float fStack_a0;
  float fStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  undefined4 uStack_80;
  float fStack_7c;
  float fStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  undefined4 uStack_5c;
  float fStack_58;
  float fStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  undefined4 uStack_38;
  float fStack_34;
  float fStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  float fStack_20;
  undefined1 auStack_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_0063fcf5;
  pvStack_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  local_dc = param_1;
  if (param_2 == 0) {
    local_104 = CONCAT31(local_104._1_3_,local_105);
    ExceptionList = &pvStack_c;
    FUN_004040a0(0);
    uVar7 = 0xffffffff;
    pcVar11 = &DAT_006b3f70;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar3 = *pcVar11;
      pcVar11 = pcVar11 + 1;
    } while (cVar3 != '\0');
    uVar7 = ~uVar7 - 1;
    cVar3 = FUN_00401940(uVar7,1);
    if (cVar3 != '\0') {
      puVar10 = (undefined4 *)&DAT_006b3f70;
      puVar12 = local_100;
      for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *puVar12 = *puVar10;
        puVar10 = puVar10 + 1;
        puVar12 = puVar12 + 1;
      }
      for (uVar8 = uVar7 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined1 *)puVar12 = *(undefined1 *)puVar10;
        puVar10 = (undefined4 *)((int)puVar10 + 1);
        puVar12 = (undefined4 *)((int)puVar12 + 1);
      }
      *(undefined1 *)((int)local_100 + uVar7) = 0;
      local_fc = uVar7;
    }
    local_4._0_1_ = 1;
    pcVar4 = (code *)FUN_005a07f0(s_a_Bitmap_IsNotNull___006a3710,
                                  s_D__Work_RCHorror_AdamSource_Adam_006a26f8,0x65e,&local_104);
    (*pcVar4)();
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_004040a0(1);
  }
  iVar9 = local_dc;
  FUN_005ae5f0(s_D__Work_RCHorror_AdamSource_Adam_006a26f8,0x662);
  local_4._0_1_ = 2;
  if (*(char *)(iVar9 + 0x125) == '\0') {
    local_104 = CONCAT31(local_104._1_3_,local_105);
    FUN_004040a0(0);
    uVar7 = 0xffffffff;
    pcVar11 = &DAT_006b3f70;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar3 = *pcVar11;
      pcVar11 = pcVar11 + 1;
    } while (cVar3 != '\0');
    uVar7 = ~uVar7 - 1;
    cVar3 = FUN_00401940(uVar7,1);
    if (cVar3 != '\0') {
      puVar10 = (undefined4 *)&DAT_006b3f70;
      puVar12 = local_100;
      for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *puVar12 = *puVar10;
        puVar10 = puVar10 + 1;
        puVar12 = puVar12 + 1;
      }
      for (uVar8 = uVar7 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined1 *)puVar12 = *(undefined1 *)puVar10;
        puVar10 = (undefined4 *)((int)puVar10 + 1);
        puVar12 = (undefined4 *)((int)puVar12 + 1);
      }
      *(undefined1 *)((int)local_100 + uVar7) = 0;
      local_fc = uVar7;
    }
    local_4._0_1_ = 3;
    pcVar4 = (code *)FUN_005a07f0(s_m_Initialized_00691bb0,
                                  s_D__Work_RCHorror_AdamSource_Adam_006a26f8,0x663,&local_104);
    (*pcVar4)();
    local_4._0_1_ = 2;
    FUN_004040a0(1);
    iVar9 = local_dc;
  }
  if (*(char *)(iVar9 + 0x194) == '\0') {
    local_104 = CONCAT31(local_104._1_3_,local_105);
    FUN_004040a0(0);
    uVar7 = 0xffffffff;
    pcVar11 = &DAT_006b3f70;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar3 = *pcVar11;
      pcVar11 = pcVar11 + 1;
    } while (cVar3 != '\0');
    uVar7 = ~uVar7 - 1;
    cVar3 = FUN_00401940(uVar7,1);
    if (cVar3 != '\0') {
      puVar10 = (undefined4 *)&DAT_006b3f70;
      puVar12 = local_100;
      for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *puVar12 = *puVar10;
        puVar10 = puVar10 + 1;
        puVar12 = puVar12 + 1;
      }
      for (uVar8 = uVar7 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined1 *)puVar12 = *(undefined1 *)puVar10;
        puVar10 = (undefined4 *)((int)puVar10 + 1);
        puVar12 = (undefined4 *)((int)puVar12 + 1);
      }
      *(undefined1 *)((int)local_100 + uVar7) = 0;
      local_fc = uVar7;
    }
    local_4._0_1_ = 4;
    pcVar4 = (code *)FUN_005a07f0(s_m_InFrame_006a3704,s_D__Work_RCHorror_AdamSource_Adam_006a26f8,
                                  0x664,&local_104);
    (*pcVar4)();
    local_4._0_1_ = 2;
    FUN_004040a0(1);
    iVar9 = local_dc;
  }
  if (param_2 == 0) {
    local_104 = CONCAT31(local_104._1_3_,local_105);
    FUN_004040a0(0);
    uVar7 = 0xffffffff;
    pcVar11 = &DAT_006b3f70;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar3 = *pcVar11;
      pcVar11 = pcVar11 + 1;
    } while (cVar3 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar7 - 1);
    local_4._0_1_ = 5;
    pcVar4 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                  &local_104);
    (*pcVar4)();
    local_4._0_1_ = 2;
    FUN_004040a0(1);
  }
  cVar3 = FUN_0050b2e0();
  if (cVar3 == '\0') {
    if (param_2 == 0) {
      local_104 = CONCAT31(local_104._1_3_,local_105);
      FUN_004040a0(0);
      uVar7 = 0xffffffff;
      pcVar11 = &DAT_006b3f70;
      do {
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        cVar3 = *pcVar11;
        pcVar11 = pcVar11 + 1;
      } while (cVar3 != '\0');
      FUN_004040f0(&DAT_006b3f70,~uVar7 - 1);
      local_4._0_1_ = 6;
      pcVar4 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                    &local_104);
      (*pcVar4)();
      local_4._0_1_ = 2;
      FUN_004040a0(1);
    }
    uVar5 = FUN_00556560();
    pcVar4 = (code *)FUN_005a07f0(s_a_Bitmap_>GetIsAddedToWorld___006a3728,
                                  s_D__Work_RCHorror_AdamSource_Adam_006a26f8,0x665,uVar5);
    (*pcVar4)();
  }
  if (param_9 == 0) {
    iStack_b4 = 0;
    if (*(char *)(iVar9 + 0x125) == '\0') {
      local_104 = CONCAT31(local_104._1_3_,local_105);
      FUN_004040a0(0);
      uVar7 = 0xffffffff;
      pcVar11 = &DAT_006b3f70;
      do {
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        cVar3 = *pcVar11;
        pcVar11 = pcVar11 + 1;
      } while (cVar3 != '\0');
      FUN_004040f0(&DAT_006b3f70,~uVar7 - 1);
      local_4._0_1_ = 7;
      pcVar4 = (code *)FUN_005a07f0(s_m_Initialized_00691bb0,s___AdamSource_AdamEngine_h_0068eb58,
                                    0x12d,&local_104);
      (*pcVar4)();
      local_4._0_1_ = 2;
      FUN_004040a0(1);
    }
    iStack_b0 = *(int *)(iVar9 + 0x44);
    iStack_bc = 0;
    if (*(char *)(iVar9 + 0x125) == '\0') {
      local_104 = CONCAT31(local_104._1_3_,local_105);
      FUN_004040a0(0);
      uVar7 = 0xffffffff;
      pcVar11 = &DAT_006b3f70;
      do {
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        cVar3 = *pcVar11;
        pcVar11 = pcVar11 + 1;
      } while (cVar3 != '\0');
      FUN_004040f0(&DAT_006b3f70,~uVar7 - 1);
      local_4._0_1_ = 8;
      pcVar4 = (code *)FUN_005a07f0(s_m_Initialized_00691bb0,s___AdamSource_AdamEngine_h_0068eb58,
                                    0x127,&local_104);
      (*pcVar4)();
      local_4._0_1_ = 2;
      FUN_004040a0(1);
    }
    iStack_b8 = *(int *)(iVar9 + 0x40);
  }
  else {
    FUN_005c9000();
  }
  fStack_e0 = (float)__ftol();
  local_104 = __ftol();
  if (param_7 == (int *)0x0) {
    fStack_d0 = 0.0;
    fStack_c8 = 0.0;
    fStack_c0 = 1.0;
    fStack_cc = 1.0;
  }
  else {
    if (param_2 == 0) {
      fStack_f0 = (float)CONCAT31(fStack_f0._1_3_,local_105);
      FUN_004040a0(0);
      uVar7 = 0xffffffff;
      pcVar11 = &DAT_006b3f70;
      do {
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        cVar3 = *pcVar11;
        pcVar11 = pcVar11 + 1;
      } while (cVar3 != '\0');
      FUN_004040f0(&DAT_006b3f70,~uVar7 - 1);
      local_4._0_1_ = 9;
      pcVar4 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                    &fStack_f0);
      (*pcVar4)();
      local_4._0_1_ = 2;
      FUN_004040a0(1);
    }
    fStack_f4 = (float)*param_7;
    fStack_f0 = (float)FUN_00439d60();
    fStack_d0 = fStack_f4 / (float)(int)fStack_f0;
    if (param_2 == 0) {
      fStack_f0._1_3_ = (undefined3)((uint)fStack_f0 >> 8);
      fStack_f0 = (float)CONCAT31(fStack_f0._1_3_,local_105);
      FUN_004040a0(0);
      uVar7 = 0xffffffff;
      pcVar11 = &DAT_006b3f70;
      do {
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        cVar3 = *pcVar11;
        pcVar11 = pcVar11 + 1;
      } while (cVar3 != '\0');
      FUN_004040f0(&DAT_006b3f70,~uVar7 - 1);
      local_4._0_1_ = 10;
      pcVar4 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                    &fStack_f0);
      (*pcVar4)();
      local_4._0_1_ = 2;
      FUN_004040a0(1);
    }
    fStack_f4 = (float)param_7[2];
    fStack_f0 = (float)FUN_00439e20();
    fStack_c8 = fStack_f4 / (float)(int)fStack_f0;
    if (param_2 == 0) {
      fStack_f0._1_3_ = (undefined3)((uint)fStack_f0 >> 8);
      fStack_f0 = (float)CONCAT31(fStack_f0._1_3_,local_105);
      FUN_004040a0(0);
      uVar7 = 0xffffffff;
      pcVar11 = &DAT_006b3f70;
      do {
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        cVar3 = *pcVar11;
        pcVar11 = pcVar11 + 1;
      } while (cVar3 != '\0');
      FUN_004040f0(&DAT_006b3f70,~uVar7 - 1);
      local_4._0_1_ = 0xb;
      pcVar4 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                    &fStack_f0);
      (*pcVar4)();
      local_4._0_1_ = 2;
      FUN_004040a0(1);
    }
    fStack_f4 = (float)param_7[1];
    fStack_f0 = (float)FUN_00439d60();
    fStack_c0 = fStack_f4 / (float)(int)fStack_f0;
    if (param_2 == 0) {
      fStack_f0._1_3_ = (undefined3)((uint)fStack_f0 >> 8);
      fStack_f0 = (float)CONCAT31(fStack_f0._1_3_,local_105);
      FUN_004040a0(0);
      uVar7 = 0xffffffff;
      pcVar11 = &DAT_006b3f70;
      do {
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        cVar3 = *pcVar11;
        pcVar11 = pcVar11 + 1;
      } while (cVar3 != '\0');
      FUN_004040f0(&DAT_006b3f70,~uVar7 - 1);
      local_4._0_1_ = 0xc;
      pcVar4 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                    &fStack_f0);
      (*pcVar4)();
      local_4._0_1_ = 2;
      FUN_004040a0(1);
    }
    fStack_f4 = (float)param_7[3];
    fStack_f0 = (float)FUN_00439e20();
    fStack_cc = fStack_f4 / (float)(int)fStack_f0;
  }
  piVar6 = (int *)FUN_00421750(&fStack_f0);
  local_4._0_1_ = 0xd;
  uVar2 = (undefined1)local_4;
  local_4._0_1_ = 0xd;
  if (*piVar6 == 0) {
    FUN_004040a0(0);
    uVar7 = 0xffffffff;
    pcVar11 = &DAT_006b3f70;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar3 = *pcVar11;
      pcVar11 = pcVar11 + 1;
    } while (cVar3 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar7 - 1);
    local_4._0_1_ = 0xe;
    pcVar4 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                  auStack_1c);
    (*pcVar4)();
    local_4._0_1_ = 0xd;
    FUN_004040a0(1);
    uVar2 = (undefined1)local_4;
  }
  local_4._0_1_ = uVar2;
  FUN_00556570();
  local_4._0_1_ = 2;
  if ((fStack_f0 != 0.0) &&
     (iVar9 = *(int *)((int)fStack_f0 + 0x14) + -1, *(int *)((int)fStack_f0 + 0x14) = iVar9,
     iVar9 == 0)) {
    FUN_005abfc0(0);
  }
  fStack_d4 = (float)iStack_b8;
  puStack_ec = (undefined4 *)0x0;
  fStack_8c = param_8;
  fStack_7c = fStack_c0;
  fStack_40 = param_3 * 0.0015625 * fStack_d4;
  local_100 = (undefined4 *)0x0;
  fStack_9c = fStack_c8;
  fStack_d8 = (float)iStack_b0;
  fStack_68 = param_8;
  fStack_54 = fStack_cc;
  uStack_a4 = 0x3f800000;
  uStack_98 = 0x437f0000;
  uStack_94 = 0x437f0000;
  fStack_a8 = param_5 * 0.0020833334 * fStack_d8;
  uStack_90 = 0x437f0000;
  uStack_80 = 0x3f800000;
  uStack_74 = 0x437f0000;
  uStack_70 = 0x437f0000;
  uStack_6c = 0x437f0000;
  uStack_5c = 0x3f800000;
  uStack_50 = 0x437f0000;
  fStack_88 = fStack_40 + (float)(uint)fStack_e0;
  fStack_78 = fStack_c8;
  fStack_44 = param_8;
  fStack_f0 = (float)local_104;
  fStack_60 = fStack_a8 + fStack_f0;
  uStack_4c = 0x437f0000;
  fStack_58 = fStack_c0;
  uStack_48 = 0x437f0000;
  uStack_38 = 0x3f800000;
  uStack_2c = 0x437f0000;
  uStack_28 = 0x437f0000;
  uStack_24 = 0x437f0000;
  fStack_20 = param_8;
  fStack_34 = fStack_d0;
  fStack_30 = fStack_cc;
  fStack_e0 = (float)(uint)fStack_e0 / (fStack_c0 - fStack_d0);
  fStack_f4 = fStack_f0 / (fStack_cc - fStack_c8);
  fVar1 = (float)iStack_bc;
  fStack_84 = fStack_a8;
  fStack_64 = fStack_88;
  fStack_3c = fStack_60;
  if (fVar1 <= fStack_40) {
LAB_00562cf8:
    fVar1 = (float)iStack_b4;
    if (fStack_a8 < fVar1) {
      if (fStack_60 <= fVar1) goto LAB_00562d1d;
      fStack_f0 = (fVar1 - fStack_a8) / fStack_f4;
      fStack_f4 = fStack_f4 - (fVar1 - fStack_a8);
      fStack_78 = fStack_f0 + fStack_c8;
      fStack_84 = fVar1;
    }
    fStack_ac = fStack_40;
    fStack_a8 = fStack_84;
    fStack_a0 = fStack_34;
    fStack_9c = fStack_78;
    if (fStack_d4 < fStack_88) {
      if (fStack_d4 <= fStack_40) {
        local_4 = (uint)local_4._1_3_ << 8;
        FUN_005ae770();
        if (param_2 == 0) {
          ExceptionList = pvStack_c;
          return 1;
        }
        iVar9 = *(int *)(param_2 + 0x14) + -1;
        *(int *)(param_2 + 0x14) = iVar9;
        goto joined_r0x00562df6;
      }
      fStack_58 = fStack_c0 - (fStack_88 - fStack_d4) / fStack_e0;
      fStack_64 = fStack_d4 - 1.0;
    }
    fStack_88 = fStack_64;
    fStack_7c = fStack_58;
    if (fStack_d8 < fStack_60) {
      if (fStack_d8 <= fStack_84) {
        local_4 = (uint)local_4._1_3_ << 8;
        FUN_005ae770();
        if (param_2 == 0) {
          ExceptionList = pvStack_c;
          return 1;
        }
        iVar9 = *(int *)(param_2 + 0x14) + -1;
        *(int *)(param_2 + 0x14) = iVar9;
        goto joined_r0x00562df6;
      }
      fStack_30 = fStack_cc - (fStack_60 - fStack_d8) / fStack_f4;
      fStack_3c = fStack_d8 - 1.0;
    }
    fStack_60 = fStack_3c;
    fStack_54 = fStack_30;
    if (param_2 == 0) {
      fStack_f0 = (float)CONCAT31(fStack_f0._1_3_,local_105);
      FUN_004040a0(0);
      uVar7 = 0xffffffff;
      pcVar11 = &DAT_006b3f70;
      do {
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        cVar3 = *pcVar11;
        pcVar11 = pcVar11 + 1;
      } while (cVar3 != '\0');
      uVar7 = ~uVar7 - 1;
      cVar3 = FUN_00401940(uVar7,1);
      if (cVar3 != '\0') {
        puVar10 = (undefined4 *)&DAT_006b3f70;
        puVar12 = puStack_ec;
        for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
          *puVar12 = *puVar10;
          puVar10 = puVar10 + 1;
          puVar12 = puVar12 + 1;
        }
        for (uVar8 = uVar7 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *(undefined1 *)puVar12 = *(undefined1 *)puVar10;
          puVar10 = (undefined4 *)((int)puVar10 + 1);
          puVar12 = (undefined4 *)((int)puVar12 + 1);
        }
        FUN_00404190(uVar7);
      }
      local_4._0_1_ = 0xf;
      pcVar4 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                    &fStack_f0);
      (*pcVar4)();
      local_4._0_1_ = 2;
      FUN_004040a0(1);
    }
    if (*(int *)(local_dc + 0x100) == 0) {
      local_104 = CONCAT31(local_104._1_3_,local_105);
      FUN_004040a0(0);
      uVar7 = 0xffffffff;
      pcVar11 = &DAT_006b3f70;
      do {
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        cVar3 = *pcVar11;
        pcVar11 = pcVar11 + 1;
      } while (cVar3 != '\0');
      uVar7 = ~uVar7 - 1;
      cVar3 = FUN_00401940(uVar7,1);
      if (cVar3 != '\0') {
        puVar10 = (undefined4 *)&DAT_006b3f70;
        puVar12 = local_100;
        for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
          *puVar12 = *puVar10;
          puVar10 = puVar10 + 1;
          puVar12 = puVar12 + 1;
        }
        for (uVar8 = uVar7 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *(undefined1 *)puVar12 = *(undefined1 *)puVar10;
          puVar10 = (undefined4 *)((int)puVar10 + 1);
          puVar12 = (undefined4 *)((int)puVar12 + 1);
        }
        FUN_00404190(uVar7);
      }
      local_4._0_1_ = 0x10;
      pcVar4 = (code *)FUN_005a07f0(s_m_Engine_006934e0,s___AdamSource_AdamEngine_h_0068eb58,0x1ad,
                                    &local_104);
      (*pcVar4)();
      local_4._0_1_ = 2;
      if (local_100 != (undefined4 *)0x0) {
        cVar3 = *(char *)((int)local_100 + -1);
        if ((cVar3 == '\0') || (cVar3 == -1)) {
          FUN_005fe5f0((char *)((int)local_100 + -1));
        }
        else {
          *(char *)((int)local_100 + -1) = cVar3 + -1;
        }
      }
      local_100 = (undefined4 *)0x0;
      local_fc = 0;
      uStack_f8 = 0;
    }
    uVar7 = param_8 != 255.0 | 0x1e;
    uVar5 = FUN_0050aa70(uVar7);
    FUN_005bba60(4,uVar5,uVar7);
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_005ae770();
    if (param_2 == 0) {
      ExceptionList = pvStack_c;
      return 1;
    }
    iVar9 = *(int *)(param_2 + 0x14) + -1;
    *(int *)(param_2 + 0x14) = iVar9;
  }
  else {
    if (fVar1 < fStack_88) {
      fStack_f0 = (fVar1 - fStack_40) / fStack_e0;
      fStack_e0 = fStack_e0 - (fVar1 - fStack_40);
      fStack_34 = fStack_f0 + fStack_d0;
      fStack_40 = fVar1;
      goto LAB_00562cf8;
    }
LAB_00562d1d:
    local_4 = (uint)local_4._1_3_ << 8;
    fStack_ac = fStack_40;
    fStack_a0 = fStack_34;
    FUN_005ae770();
    if (param_2 == 0) {
      ExceptionList = pvStack_c;
      return 1;
    }
    iVar9 = *(int *)(param_2 + 0x14) + -1;
    *(int *)(param_2 + 0x14) = iVar9;
  }
joined_r0x00562df6:
  if (iVar9 == 0) {
    local_4 = 0xffffffff;
    FUN_005abfc0(0);
  }
  ExceptionList = pvStack_c;
  return 1;
}

