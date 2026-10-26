/*
 * FUN_004d0a90 at 004d0a90
 * undefined FUN_004d0a90(void)
 * Address ranges: 004d0a90-004d14e1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 __thiscall FUN_004d0a90(int param_1,float param_2,int param_3)

{
  undefined1 uVar1;
  char cVar2;
  int *piVar3;
  code *pcVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  float *pfVar10;
  int *piVar11;
  uint uVar12;
  undefined4 *puVar13;
  char *pcVar14;
  float10 fVar15;
  undefined8 uVar16;
  undefined1 local_13b;
  undefined1 local_13a;
  char local_139;
  int *local_138;
  float local_134;
  float fStack_130;
  undefined1 auStack_12c [4];
  int iStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined1 auStack_11c [16];
  undefined1 auStack_10c [16];
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  undefined1 local_cc [16];
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined1 auStack_b0 [12];
  undefined1 uStack_a4;
  undefined4 auStack_a0 [6];
  undefined4 uStack_88;
  undefined1 auStack_84 [24];
  undefined4 auStack_6c [12];
  undefined1 auStack_3c [48];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006313e6;
  pvStack_c = ExceptionList;
  local_13a = 1;
  local_139 = '\0';
  ExceptionList = &pvStack_c;
  piVar3 = (int *)FUN_004042e0();
  local_4 = 0;
  if (*piVar3 == 0) {
    FUN_00409810(&DAT_006b3f70,&local_13b);
    local_4._0_1_ = 1;
    pcVar4 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                  local_cc);
    (*pcVar4)();
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_004040a0();
  }
  local_138 = *(int **)(*piVar3 + 0x360);
  local_4 = 0xffffffff;
  if (local_134 != 0.0) {
    FUN_004098d0();
    local_134 = 0.0;
  }
  FUN_00519a70();
  iVar5 = FUN_004337e0();
  if ((iVar5 != 0) && (*(char *)(param_1 + 0xa9) != '\0')) {
    puVar6 = *(undefined1 **)(param_1 + 0x60);
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &DAT_0064a3b4;
    }
    uVar7 = FUN_005ae390(auStack_11c,s_Model__s_tries_to_move_to_time___006992c8,puVar6,
                         (double)param_2);
    local_4 = 2;
    FUN_005aff00(uVar7);
    local_4 = 0xffffffff;
    FUN_004040a0();
  }
  puVar8 = (undefined4 *)FUN_004d0720(auStack_3c,param_2);
  puVar13 = auStack_6c;
  for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar13 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar13 = puVar13 + 1;
  }
  if (local_138 == (int *)0x0) {
    FUN_004d0770();
    local_13a = 1;
  }
  else {
    puVar9 = (undefined4 *)FUN_004dc0d0();
    uStack_a4 = *(undefined1 *)puVar9;
    puVar13 = auStack_a0;
    puVar8 = puVar9;
    for (iVar5 = 6; puVar8 = puVar8 + 1, iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar13 = *puVar8;
      puVar13 = puVar13 + 1;
    }
    uStack_88 = puVar9[7];
    FUN_005844b0();
    piVar3 = local_138;
    local_4 = 3;
    pfVar10 = (float *)(**(code **)(*local_138 + 0x48))();
    fStack_fc = *pfVar10;
    fStack_f8 = pfVar10[1];
    fStack_f4 = pfVar10[2];
    puVar8 = auStack_6c;
    uVar16 = CONCAT44(&fStack_d8,&fStack_fc);
    uVar7 = FUN_004cffd0();
    cVar2 = FUN_00555140(uVar7,puVar8,uVar16);
    if (cVar2 == '\0') {
      local_13a = 0;
      FUN_00519a70();
      iVar5 = FUN_004337e0();
      if ((iVar5 != 0) && (*(char *)(param_1 + 0xa9) != '\0')) {
        puVar6 = *(undefined1 **)(param_1 + 0x60);
        if (puVar6 == (undefined1 *)0x0) {
          puVar6 = &DAT_0064a3b4;
        }
        uVar7 = FUN_005ae390(local_cc,s_Model__s_stopped_at_time__f_due_t_0069929c,puVar6,
                             (double)*(float *)(param_1 + 0x100));
        local_4._0_1_ = 4;
        FUN_005aff00(uVar7);
        local_4 = CONCAT31(local_4._1_3_,3);
        FUN_004040a0();
      }
      if (0.0 < *(float *)(param_1 + 0x158)) {
        local_134 = ABS(param_2 - *(float *)(param_1 + 0x100));
        local_138 = (int *)(local_134 * *(float *)(param_1 + 0x158));
        FUN_00519a70();
        iVar5 = FUN_004337e0();
        if ((iVar5 != 0) && (*(char *)(param_1 + 0xa9) != '\0')) {
          puVar6 = *(undefined1 **)(param_1 + 0x60);
          if (puVar6 == (undefined1 *)0x0) {
            puVar6 = &DAT_0064a3b4;
          }
          uVar7 = FUN_005ae390(local_cc,s_Model__s_does__f_damage_to_playe_0069926c,puVar6,
                               (double)(float)local_138,(double)local_134);
          local_4._0_1_ = 5;
          FUN_005aff00(uVar7);
          local_4 = CONCAT31(local_4._1_3_,3);
          FUN_004040a0();
        }
        FUN_00503fc0();
      }
    }
    else {
      if (((fStack_d8 != fStack_fc) || (fStack_d4 != fStack_f8)) || (fStack_d0 != fStack_f4)) {
        (**(code **)(*piVar3 + 0x4c))();
        local_139 = '\x01';
      }
      piVar3 = (int *)FUN_004042e0();
      local_4._0_1_ = 6;
      if (*piVar3 == 0) {
        auStack_11c[0] = local_13b;
        FUN_004040a0();
        uVar12 = 0xffffffff;
        pcVar14 = &DAT_006b3f70;
        do {
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          cVar2 = *pcVar14;
          pcVar14 = pcVar14 + 1;
        } while (cVar2 != '\0');
        FUN_004040f0(&DAT_006b3f70,~uVar12 - 1);
        local_4._0_1_ = 7;
        pcVar4 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                      auStack_11c);
        (*pcVar4)();
        local_4._0_1_ = 6;
        FUN_004040a0();
      }
      if (*(int *)(*piVar3 + 0x5c) == 0) {
        auStack_10c[0] = local_13b;
        FUN_004040a0();
        uVar12 = 0xffffffff;
        pcVar14 = &DAT_006b3f70;
        do {
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          cVar2 = *pcVar14;
          pcVar14 = pcVar14 + 1;
        } while (cVar2 != '\0');
        FUN_004040f0(&DAT_006b3f70,~uVar12 - 1);
        local_4._0_1_ = 8;
        pcVar4 = (code *)FUN_005a07f0(s_m_GenesisWorld_0068e1a8,
                                      s___AdamSource_AdamSubLevel_h_0068e1b8,0x144,auStack_10c);
        (*pcVar4)();
        local_4._0_1_ = 6;
        FUN_004040a0();
      }
      FUN_005b9810();
      local_4._0_1_ = 3;
      if (fStack_130 != 0.0) {
        FUN_004098d0();
      }
      piVar3 = (int *)FUN_004042e0();
      local_4._0_1_ = 9;
      uVar1 = (undefined1)local_4;
      local_4._0_1_ = 9;
      if (*piVar3 == 0) {
        auStack_11c[0] = local_13b;
        FUN_004040a0();
        uVar12 = 0xffffffff;
        pcVar14 = &DAT_006b3f70;
        do {
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          cVar2 = *pcVar14;
          pcVar14 = pcVar14 + 1;
        } while (cVar2 != '\0');
        FUN_004040f0(&DAT_006b3f70,~uVar12 - 1);
        local_4._0_1_ = 10;
        pcVar4 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                      auStack_11c);
        (*pcVar4)();
        local_4._0_1_ = 9;
        FUN_004040a0();
        uVar1 = (undefined1)local_4;
      }
      local_4._0_1_ = uVar1;
      if (*(int *)(*piVar3 + 0x5c) == 0) {
        auStack_10c[0] = local_13b;
        FUN_004040a0();
        uVar12 = 0xffffffff;
        pcVar14 = &DAT_006b3f70;
        do {
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          cVar2 = *pcVar14;
          pcVar14 = pcVar14 + 1;
        } while (cVar2 != '\0');
        FUN_004040f0(&DAT_006b3f70,~uVar12 - 1);
        local_4._0_1_ = 0xb;
        pcVar4 = (code *)FUN_005a07f0(s_m_GenesisWorld_0068e1a8,
                                      s___AdamSource_AdamSubLevel_h_0068e1b8,0x144,auStack_10c);
        (*pcVar4)();
        local_4._0_1_ = 9;
        FUN_004040a0();
      }
      FUN_005b96a0();
      local_4._0_1_ = 3;
      if (fStack_130 != 0.0) {
        FUN_004098d0();
      }
      FUN_005b3070();
      piVar3 = local_138;
      cVar2 = FUN_004d67d0();
      if (cVar2 != '\0') {
        FUN_005b3670();
        FUN_005b3670();
        fVar15 = (float10)FUN_005b15f0();
        fStack_130 = (float)fVar15;
        fVar15 = (float10)FUN_005b15f0(auStack_84);
        local_138 = (int *)(float)((float10)fStack_130 - fVar15);
        fVar15 = (float10)FUN_004d67f0();
        if (fVar15 < (float10)1.0) {
          FUN_004d6870();
          if (local_139 == '\0') {
            FUN_005b2fe0();
            piVar11 = (int *)FUN_004042e0();
            local_4._0_1_ = 0xc;
            uVar1 = (undefined1)local_4;
            local_4._0_1_ = 0xc;
            if (*piVar11 == 0) {
              auStack_11c[0] = local_13b;
              FUN_004040a0();
              uVar12 = 0xffffffff;
              pcVar14 = &DAT_006b3f70;
              do {
                if (uVar12 == 0) break;
                uVar12 = uVar12 - 1;
                cVar2 = *pcVar14;
                pcVar14 = pcVar14 + 1;
              } while (cVar2 != '\0');
              FUN_004040f0(&DAT_006b3f70,~uVar12 - 1);
              local_4._0_1_ = 0xd;
              pcVar4 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,
                                            0xb6,auStack_11c);
              (*pcVar4)();
              local_4._0_1_ = 0xc;
              FUN_004040a0();
              uVar1 = (undefined1)local_4;
            }
            local_4._0_1_ = uVar1;
            if (*(int *)(*piVar11 + 0x5c) == 0) {
              auStack_12c[0] = local_13b;
              FUN_004040a0();
              uVar12 = 0xffffffff;
              pcVar14 = &DAT_006b3f70;
              do {
                if (uVar12 == 0) break;
                uVar12 = uVar12 - 1;
                cVar2 = *pcVar14;
                pcVar14 = pcVar14 + 1;
              } while (cVar2 != '\0');
              FUN_004040f0(&DAT_006b3f70,~uVar12 - 1);
              local_4._0_1_ = 0xe;
              pcVar4 = (code *)FUN_005a07f0(s_m_GenesisWorld_0068e1a8,
                                            s___AdamSource_AdamSubLevel_h_0068e1b8,0x144,auStack_12c
                                           );
              (*pcVar4)();
              local_4._0_1_ = 0xc;
              FUN_004040a0();
            }
            iVar5 = FUN_005b98a0();
            local_4._0_1_ = 3;
            if (fStack_130 != 0.0) {
              FUN_004098d0();
            }
            if (iVar5 == 0) {
              auStack_12c[0] = local_13b;
              FUN_004040a0();
              uVar12 = 0xffffffff;
              pcVar14 = s_could_not_get_model_origin_00699250;
              do {
                if (uVar12 == 0) break;
                uVar12 = uVar12 - 1;
                cVar2 = *pcVar14;
                pcVar14 = pcVar14 + 1;
              } while (cVar2 != '\0');
              FUN_004040f0(s_could_not_get_model_origin_00699250,~uVar12 - 1);
              local_4._0_1_ = 0xf;
              FUN_005035a0();
              local_4._0_1_ = 3;
              FUN_004040a0();
              puVar8 = (undefined4 *)(**(code **)(*piVar3 + 0x48))();
              uStack_f0 = *puVar8;
              uStack_ec = puVar8[1];
              uStack_e8 = puVar8[2];
            }
            else {
              FUN_005b3000();
            }
            (**(code **)(*piVar3 + 0x48))(auStack_11c,auStack_b0);
            FUN_005b2fe0();
            puVar8 = (undefined4 *)FUN_005b16e0();
            uStack_bc = *puVar8;
            uStack_b8 = puVar8[1];
            uStack_b4 = puVar8[2];
            FUN_005b2fe0();
            FUN_005b3000();
            FUN_004d6800();
          }
          else {
            (**(code **)(*piVar3 + 0x48))(auStack_10c);
            FUN_005b2fe0();
          }
        }
      }
      if (param_3 == -1) {
        auStack_12c[0] = local_13b;
        FUN_004040a0();
        uVar12 = 0xffffffff;
        pcVar14 = &DAT_006b3f70;
        do {
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          cVar2 = *pcVar14;
          pcVar14 = pcVar14 + 1;
        } while (cVar2 != '\0');
        FUN_004040f0(&DAT_006b3f70,~uVar12 - 1);
        local_4._0_1_ = 0x10;
        pcVar4 = (code *)FUN_005a07f0(s_a_Time____ADAMTIME_NONE_0068e214,
                                      s___AdamSource_AdamClock_h_0068e22c,0x8a,auStack_12c);
        (*pcVar4)();
        local_4._0_1_ = 3;
        FUN_004040a0();
      }
      local_134 = 0.0;
      if ((float)param_3 * 0.001 != 0.0) {
        local_134 = 1.0 / ((float)param_3 * 0.001);
      }
      FUN_005b2fa0();
      *(float *)(param_1 + 0x100) = param_2;
      FUN_00519a70();
      iVar5 = FUN_004337e0();
      if ((iVar5 != 0) && (*(char *)(param_1 + 0xa9) != '\0')) {
        puVar6 = *(undefined1 **)(param_1 + 0x60);
        if (puVar6 == (undefined1 *)0x0) {
          puVar6 = &DAT_0064a3b4;
        }
        uVar7 = FUN_005ae390(auStack_12c,s_Model__s_moved_to_time__f_00699234,puVar6,
                             (double)*(float *)(param_1 + 0x100));
        local_4 = CONCAT31(local_4._1_3_,0x11);
        FUN_005aff00(uVar7);
        if (iStack_128 != 0) {
          cVar2 = *(char *)(iStack_128 + -1);
          if ((cVar2 == '\0') || (cVar2 == -1)) {
            FUN_005fe5f0();
          }
          else {
            *(char *)(iStack_128 + -1) = cVar2 + -1;
          }
        }
        iStack_128 = 0;
        uStack_124 = 0;
        uStack_120 = 0;
      }
    }
    local_4 = 0xffffffff;
    FUN_00554630();
  }
  ExceptionList = pvStack_c;
  return local_13a;
}

