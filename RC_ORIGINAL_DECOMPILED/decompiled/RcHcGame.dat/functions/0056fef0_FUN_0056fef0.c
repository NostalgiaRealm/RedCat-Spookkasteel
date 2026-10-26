/*
 * FUN_0056fef0 at 0056fef0
 * undefined FUN_0056fef0(void)
 * Address ranges: 0056fef0-00570fc8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_0056fef0(int *param_1,int param_2)

{
  float fVar1;
  float fVar2;
  char cVar3;
  undefined1 uVar4;
  code *pcVar5;
  float *pfVar6;
  undefined1 *puVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 unaff_EBX;
  undefined4 unaff_EBP;
  float *pfVar10;
  char *pcVar11;
  float10 fVar12;
  undefined1 uVar13;
  undefined4 uStack_1d8;
  float fStack_1d4;
  undefined1 local_1d0;
  float fStack_1c4;
  undefined1 *puStack_1c0;
  float fStack_1bc;
  float fStack_1b8;
  float fStack_1b4;
  int iStack_1b0;
  int local_1ac;
  float local_1a8;
  int local_1a4;
  float *pfStack_1a0;
  float fStack_19c;
  int iStack_198;
  int iStack_194;
  float fStack_190;
  float fStack_18c;
  float fStack_188;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  float fStack_178;
  undefined1 *puStack_16c;
  float fStack_168;
  float fStack_164;
  float fStack_15c;
  float fStack_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float fStack_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float fStack_138;
  float fStack_134;
  float fStack_130;
  undefined1 local_128;
  float fStack_11c;
  int iStack_118;
  int iStack_114;
  undefined1 uStack_ec;
  undefined1 uStack_eb;
  undefined1 uStack_ea;
  undefined1 uStack_e9;
  undefined1 uStack_e8;
  undefined1 uStack_e7;
  undefined1 uStack_e6;
  int iStack_e0;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  undefined4 uStack_a4;
  undefined1 auStack_a0 [60];
  float fStack_64;
  int iStack_60;
  int iStack_5c;
  float fStack_58;
  float afStack_28 [5];
  void *pvStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006410cf;
  pvStack_c = ExceptionList;
  local_1ac = param_1[0xa5];
  local_1a8 = (float)param_1[0xa6];
  local_1a4 = param_1[0xa7];
  ExceptionList = &pvStack_c;
  if (param_2 == -1) {
    local_1d0 = uStack_1d8._3_1_;
    ExceptionList = &pvStack_c;
    FUN_004040a0();
    iVar9 = -1;
    pcVar11 = &DAT_006b3f70;
    do {
      if (iVar9 == 0) break;
      iVar9 = iVar9 + -1;
      cVar3 = *pcVar11;
      pcVar11 = pcVar11 + 1;
    } while (cVar3 != '\0');
    FUN_004040f0();
    local_4 = 0;
    pcVar5 = (code *)FUN_005a07f0();
    (*pcVar5)();
    local_4 = 0xffffffff;
    FUN_004040a0();
  }
  if (param_1[0x42] == 0) {
    local_128 = uStack_1d8._3_1_;
    FUN_004040a0();
    iVar9 = -1;
    pcVar11 = &DAT_006b3f70;
    do {
      if (iVar9 == 0) break;
      iVar9 = iVar9 + -1;
      cVar3 = *pcVar11;
      pcVar11 = pcVar11 + 1;
    } while (cVar3 != '\0');
    FUN_004040f0();
    local_4 = 1;
    pcVar5 = (code *)FUN_005a07f0();
    (*pcVar5)();
    local_4 = 0xffffffff;
    FUN_004040a0();
  }
  puStack_1c0 = (undefined1 *)(float)param_2;
  local_1a8 = local_1a8 - (float)puStack_1c0 * *(float *)(param_1[0x42] + 0x80) * 0.032;
  if (param_1[0x42] == 0) {
    local_1d0 = uStack_1d8._3_1_;
    FUN_004040a0();
    iVar9 = -1;
    pcVar11 = &DAT_006b3f70;
    do {
      if (iVar9 == 0) break;
      iVar9 = iVar9 + -1;
      cVar3 = *pcVar11;
      pcVar11 = pcVar11 + 1;
    } while (cVar3 != '\0');
    FUN_004040f0();
    local_4 = 2;
    pcVar5 = (code *)FUN_005a07f0();
    (*pcVar5)();
    local_4 = 0xffffffff;
    FUN_004040a0();
  }
  fStack_1d4 = *(float *)(param_1[0x42] + 0xac);
  if ((fStack_1d4 < 1.0) && (0.0 <= fStack_1d4)) {
    if (param_2 == -1) {
      local_1d0 = uStack_1d8._3_1_;
      FUN_004040a0();
      iVar9 = -1;
      pcVar11 = &DAT_006b3f70;
      do {
        if (iVar9 == 0) break;
        iVar9 = iVar9 + -1;
        cVar3 = *pcVar11;
        pcVar11 = pcVar11 + 1;
      } while (cVar3 != '\0');
      FUN_004040f0();
      local_4 = 3;
      pcVar5 = (code *)FUN_005a07f0();
      (*pcVar5)();
      local_4 = 0xffffffff;
      FUN_004040a0();
    }
    fStack_1d4 = (1.0 - fStack_1d4) * (float)puStack_1c0 * 0.001;
    FUN_005b2fd0();
    if (1.0 < fStack_1d4) {
      fStack_1d4 = 1.0;
    }
    FUN_005b2fa0();
  }
  param_1[0xa5] = local_1ac;
  param_1[0xa6] = (int)local_1a8;
  param_1[0xa7] = local_1a4;
  pfVar6 = (float *)(**(code **)(*param_1 + 0x48))();
  fStack_144 = *pfVar6;
  fStack_140 = pfVar6[1];
  fStack_13c = pfVar6[2];
  uVar13 = (undefined1)((uint)unaff_EBX >> 0x18);
  if (param_2 == -1) {
    fStack_1d4 = (float)CONCAT31(fStack_1d4._1_3_,uVar13);
    FUN_004040a0();
    iVar9 = -1;
    pcVar11 = &DAT_006b3f70;
    do {
      if (iVar9 == 0) break;
      iVar9 = iVar9 + -1;
      cVar3 = *pcVar11;
      pcVar11 = pcVar11 + 1;
    } while (cVar3 != '\0');
    FUN_004040f0(&DAT_006b3f70);
    puStack_8 = (undefined1 *)0x4;
    pcVar5 = (code *)FUN_005a07f0(s_a_Time____ADAMTIME_NONE_0068e214,
                                  s___AdamSource_AdamClock_h_0068e22c,0x8a);
    (*pcVar5)();
    puStack_8 = (undefined1 *)0xffffffff;
    FUN_004040a0();
  }
  FUN_005b2fa0();
  FUN_005b3000();
  if (param_1[0x42] == 0) {
    fStack_1d4 = (float)CONCAT31(fStack_1d4._1_3_,uVar13);
    FUN_004040a0();
    iVar9 = -1;
    pcVar11 = &DAT_006b3f70;
    do {
      if (iVar9 == 0) break;
      iVar9 = iVar9 + -1;
      cVar3 = *pcVar11;
      pcVar11 = pcVar11 + 1;
    } while (cVar3 != '\0');
    FUN_004040f0(&DAT_006b3f70);
    puStack_8 = (undefined1 *)0x5;
    pcVar5 = (code *)FUN_005a07f0(s_m_Settings____0_0068f8a0,
                                  s_D__Work_RCHorror_AdamSource_Adam_00694bcc,0x141);
    (*pcVar5)();
    puStack_8 = (undefined1 *)0xffffffff;
    FUN_004040a0();
  }
  if (*(char *)(param_1[0x42] + 0x85) != '\0') {
    puStack_1c0 = &stack0xfffffe10;
    uStack_1d8 = 1.0;
    local_1a4 = 0;
    FUN_004042e0(&stack0xfffffe10);
    FUN_00565c30();
    puStack_8 = (undefined1 *)0x6;
    if ((char)param_1[0xc0] == '\0') {
      if (param_1[0x42] == 0) {
        fStack_1d4 = (float)CONCAT31(fStack_1d4._1_3_,uVar13);
        FUN_004040a0();
        iVar9 = -1;
        pcVar11 = &DAT_006b3f70;
        do {
          if (iVar9 == 0) break;
          iVar9 = iVar9 + -1;
          cVar3 = *pcVar11;
          pcVar11 = pcVar11 + 1;
        } while (cVar3 != '\0');
        FUN_004040f0(&DAT_006b3f70);
        puStack_8._0_1_ = 8;
        pcVar5 = (code *)FUN_005a07f0(s_m_Settings____0_0068f8a0,
                                      s_D__Work_RCHorror_AdamSource_Adam_00694bcc,0x141);
        (*pcVar5)();
        puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,6);
        FUN_004040a0();
      }
      fStack_c4 = *(float *)(param_1[0x42] + 0x8c) * -0.16;
      if (param_1[0x42] == 0) {
        fStack_1d4 = (float)CONCAT31(fStack_1d4._1_3_,uVar13);
        FUN_004040a0();
        iVar9 = -1;
        pcVar11 = &DAT_006b3f70;
        do {
          if (iVar9 == 0) break;
          iVar9 = iVar9 + -1;
          cVar3 = *pcVar11;
          pcVar11 = pcVar11 + 1;
        } while (cVar3 != '\0');
        FUN_004040f0(&DAT_006b3f70);
        puStack_8._0_1_ = 9;
        pcVar5 = (code *)FUN_005a07f0(s_m_Settings____0_0068f8a0,
                                      s_D__Work_RCHorror_AdamSource_Adam_00694bcc,0x141);
        (*pcVar5)();
        puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,6);
        FUN_004040a0();
      }
      fStack_c0 = *(float *)(param_1[0x42] + 0x98) * -0.32;
      if (param_1[0x42] == 0) {
        fStack_1d4 = (float)CONCAT31(fStack_1d4._1_3_,uVar13);
        FUN_004040a0();
        iVar9 = -1;
        pcVar11 = &DAT_006b3f70;
        do {
          if (iVar9 == 0) break;
          iVar9 = iVar9 + -1;
          cVar3 = *pcVar11;
          pcVar11 = pcVar11 + 1;
        } while (cVar3 != '\0');
        FUN_004040f0(&DAT_006b3f70);
        puStack_8._0_1_ = 10;
        pcVar5 = (code *)FUN_005a07f0(s_m_Settings____0_0068f8a0,
                                      s_D__Work_RCHorror_AdamSource_Adam_00694bcc,0x141);
        (*pcVar5)();
        puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,6);
        FUN_004040a0();
      }
      fStack_bc = *(float *)(param_1[0x42] + 0x94) * -0.16;
      if (param_1[0x42] == 0) {
        FUN_00409810(&DAT_006b3f70);
        puStack_8._0_1_ = 0xb;
        pcVar5 = (code *)FUN_005a07f0(s_m_Settings____0_0068f8a0,
                                      s_D__Work_RCHorror_AdamSource_Adam_00694bcc,0x141);
        (*pcVar5)();
        puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,6);
        FUN_004040a0();
      }
      fStack_b8 = *(float *)(param_1[0x42] + 0x8c) * 0.16;
      if (param_1[0x42] == 0) {
        FUN_00409810(&DAT_006b3f70);
        puStack_8._0_1_ = 0xc;
        pcVar5 = (code *)FUN_005a07f0(s_m_Settings____0_0068f8a0,
                                      s_D__Work_RCHorror_AdamSource_Adam_00694bcc,0x141);
        (*pcVar5)();
        puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,6);
        FUN_004040a0();
      }
      fStack_b4 = *(float *)(param_1[0x42] + 0x90) * 0.32;
      if (param_1[0x42] == 0) {
        FUN_00409810(&DAT_006b3f70);
        puStack_8._0_1_ = 0xd;
        pcVar5 = (code *)FUN_005a07f0(s_m_Settings____0_0068f8a0,
                                      s_D__Work_RCHorror_AdamSource_Adam_00694bcc,0x141);
        (*pcVar5)();
        puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,6);
        FUN_004040a0();
      }
      pfVar6 = &fStack_19c;
      pfVar10 = &fStack_144;
      fStack_b0 = *(float *)(param_1[0x42] + 0x94) * 0.16;
    }
    else {
      if (param_1[0x45] == 0) {
        fStack_1d4 = (float)CONCAT31(fStack_1d4._1_3_,uVar13);
        FUN_004040a0();
        iVar9 = -1;
        pcVar11 = &DAT_006b3f70;
        do {
          if (iVar9 == 0) break;
          iVar9 = iVar9 + -1;
          cVar3 = *pcVar11;
          pcVar11 = pcVar11 + 1;
        } while (cVar3 != '\0');
        FUN_004040f0(&DAT_006b3f70);
        puStack_8._0_1_ = 7;
        pcVar5 = (code *)FUN_005a07f0(s_m_Actor____0_0068e768,
                                      s_D__Work_RCHorror_AdamSource_Adam_00694bcc,0x18d);
        (*pcVar5)();
        puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,6);
        FUN_004040a0();
      }
      FUN_005b4a80();
      fStack_138 = (fStack_150 + fStack_15c) * 0.5;
      fStack_134 = (fStack_14c + fStack_158) * 0.5;
      fStack_130 = (fStack_148 + fStack_154) * 0.5;
      FUN_005b3000();
      FUN_005b2fe0();
      pfVar6 = afStack_28;
      pfVar10 = &fStack_138;
      fStack_180 = (fStack_150 - fStack_15c) * 0.5;
      fStack_17c = (fStack_14c - fStack_158) * 0.5;
      fStack_178 = (fStack_148 - fStack_154) * 0.5;
      fStack_18c = -fStack_180;
      fStack_188 = -fStack_17c;
      fStack_184 = -fStack_178;
      fStack_c4 = fStack_18c;
      fStack_c0 = fStack_188;
      fStack_bc = fStack_184;
      fStack_b8 = fStack_180;
      fStack_b4 = fStack_17c;
      fStack_b0 = fStack_178;
    }
    pfStack_1a0 = pfVar6;
    if (*(char *)((int)param_1 + 0xa9) != '\0') {
      puVar7 = (undefined1 *)param_1[0x18];
      if (puVar7 == (undefined1 *)0x0) {
        puVar7 = &DAT_0064a3b4;
      }
      uVar8 = FUN_005ae390(&fStack_18c,s_ActorParticle__s_has_bbox____f____006a4680,puVar7,
                           (double)fStack_c4,(double)fStack_c0,(double)fStack_bc,(double)fStack_b8,
                           (double)fStack_b4,(double)fStack_b0);
      puStack_8._0_1_ = 0xe;
      FUN_005aff00(uVar8);
      puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,6);
      FUN_004040a0();
    }
    uStack_ec = *(undefined1 *)((int)param_1 + 0x2e7);
    uStack_a4 = 0x3e23d70a;
    uStack_eb = 1;
    uStack_ea = 1;
    uStack_e9 = 0;
    uStack_e8 = 1;
    uStack_e7 = 0;
    uStack_e6 = 0;
    cVar3 = FUN_00565e10(pfVar10);
    if (cVar3 != '\0') {
      do {
        if (param_1[0x42] == 0) {
          fStack_15c = (float)CONCAT31(fStack_15c._1_3_,uVar13);
          FUN_004040a0();
          iVar9 = -1;
          pcVar11 = &DAT_006b3f70;
          do {
            if (iVar9 == 0) break;
            iVar9 = iVar9 + -1;
            cVar3 = *pcVar11;
            pcVar11 = pcVar11 + 1;
          } while (cVar3 != '\0');
          FUN_004040f0(&DAT_006b3f70);
          puStack_8._0_1_ = 0xf;
          pcVar5 = (code *)FUN_005a07f0(s_m_Settings____0_0068f8a0,
                                        s_D__Work_RCHorror_AdamSource_Adam_00694bcc,0x141);
          (*pcVar5)();
          puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,6);
          FUN_004040a0();
          pfVar6 = pfStack_1a0;
        }
        puStack_1c0 = *(undefined1 **)(param_1[0x42] + 0xa4);
        if (param_1[0x42] == 0) {
          fStack_18c = (float)CONCAT31(fStack_18c._1_3_,uVar13);
          FUN_004040a0();
          iVar9 = -1;
          pcVar11 = &DAT_006b3f70;
          do {
            if (iVar9 == 0) break;
            iVar9 = iVar9 + -1;
            cVar3 = *pcVar11;
            pcVar11 = pcVar11 + 1;
          } while (cVar3 != '\0');
          FUN_004040f0(&DAT_006b3f70);
          puStack_8._0_1_ = 0x10;
          pcVar5 = (code *)FUN_005a07f0(s_m_Settings____0_0068f8a0,
                                        s_D__Work_RCHorror_AdamSource_Adam_00694bcc,0x141);
          (*pcVar5)();
          puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,6);
          FUN_004040a0();
          pfVar6 = pfStack_1a0;
        }
        fStack_1c4 = *(float *)(param_1[0x42] + 0xa8);
        if ((char)param_1[0xc0] == '\0') {
          fStack_11c = fStack_19c;
          iStack_118 = iStack_198;
          iStack_114 = iStack_194;
          fStack_19c = fStack_64;
          iStack_198 = iStack_60;
          iStack_194 = iStack_5c;
          FUN_005b2fe0();
          fVar12 = (float10)FUN_005b2fd0();
          fStack_190 = (float)fVar12;
          FUN_005b2fe0();
          fVar12 = (float10)FUN_005b2fd0();
          if ((float10)fStack_190 < fVar12) {
            fVar1 = pfVar10[1];
            fVar2 = pfVar10[2];
            *pfVar6 = *pfVar10;
            pfVar6[1] = fVar1;
            pfVar6[2] = fVar2;
            break;
          }
        }
        else {
          FUN_005b3000();
        }
        param_1[0xb8] = param_1[0xb8] + 1;
        FUN_005b1570(auStack_a0,&iStack_1b0,puStack_1c0,fStack_1c4,&iStack_1b0);
        fStack_1bc = (float)param_1[0x8c] * fStack_1c4;
        fStack_1b8 = (float)param_1[0x8d] * fStack_1c4;
        param_1[0x8c] = (int)fStack_1bc;
        fStack_1b4 = (float)param_1[0x8e] * fStack_1c4;
        param_1[0x8d] = (int)fStack_1b8;
        param_1[0x8e] = (int)fStack_1b4;
        if (((fStack_1bc == 0.0) && (fStack_1b8 == 0.0)) && (fStack_1b4 == 0.0)) {
          uVar4 = 0;
        }
        else {
          uVar4 = 1;
        }
        *(undefined1 *)(param_1 + 0x8f) = uVar4;
        if (0.0 <= fStack_58) {
          uStack_1d8 = (1.0 - uStack_1d8) * fStack_58 + uStack_1d8;
        }
        if (((0.999 <= uStack_1d8) || (local_1a4 = local_1a4 + 1, 9 < local_1a4)) ||
           (cVar3 = FUN_00565e10(pfVar10), cVar3 == '\0')) break;
      } while( true );
    }
    param_1[0xaf] = (int)fStack_c4;
    param_1[0xb0] = (int)fStack_c0;
    param_1[0xb1] = (int)fStack_bc;
    param_1[0xb2] = (int)fStack_b8;
    param_1[0xb3] = (int)fStack_b4;
    param_1[0xb4] = (int)fStack_b0;
    param_1[0xb5] = (int)fStack_19c;
    param_1[0xb6] = iStack_198;
    param_1[0xb7] = iStack_194;
    puStack_8 = (undefined1 *)0x13;
    FUN_00514430();
    puStack_8._0_1_ = 0x12;
    FUN_00514430();
    puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,0x11);
    if (iStack_e0 != 0) {
      FUN_004098d0();
      iStack_e0 = 0;
    }
    puStack_8 = (undefined1 *)0xffffffff;
    FUN_005ab4d0();
  }
  (**(code **)(*param_1 + 0x4c))();
  param_1[0xa5] = (int)fStack_1b4;
  param_1[0xa6] = iStack_1b0;
  param_1[0xa7] = local_1ac;
  fVar12 = (float10)FUN_005b2fd0();
  if ((fVar12 < (float10)100.0) && (10 < param_1[0xb8])) {
    *(undefined1 *)((int)param_1 + 0x2e6) = 0;
    uVar13 = (undefined1)((uint)unaff_EBP >> 0x18);
    if (param_1[0x42] == 0) {
      fStack_190 = (float)CONCAT31(fStack_190._1_3_,uVar13);
      FUN_004040a0(0);
      iVar9 = -1;
      pcVar11 = &DAT_006b3f70;
      do {
        if (iVar9 == 0) break;
        iVar9 = iVar9 + -1;
        cVar3 = *pcVar11;
        pcVar11 = pcVar11 + 1;
      } while (cVar3 != '\0');
      FUN_004040f0();
      pvStack_c = (void *)0x14;
      pcVar5 = (code *)FUN_005a07f0();
      (*pcVar5)();
      pvStack_c = (void *)0xffffffff;
      FUN_004040a0(1);
    }
    if (*(char *)(param_1[0x42] + 0x86) != '\0') {
      pfVar6 = (float *)(**(code **)(*param_1 + 0x48))(&uStack_1d8);
      puStack_1c0 = (undefined1 *)*pfVar6;
      fStack_1bc = pfVar6[1];
      fStack_1b8 = pfVar6[2];
      local_1a8 = (float)param_1[0x54];
      pfVar6 = (float *)(param_1 + 0x5a);
      pfVar10 = &fStack_190;
      for (iVar9 = 0xc; iVar9 != 0; iVar9 = iVar9 + -1) {
        *pfVar10 = *pfVar6;
        pfVar6 = pfVar6 + 1;
        pfVar10 = pfVar10 + 1;
      }
      iStack_194 = param_1[0x55];
      fStack_1c4 = (float)param_1[0x56];
      FUN_005b30c0();
      fStack_168 = fStack_1bc;
      puStack_16c = puStack_1c0;
      fStack_164 = fStack_1b8;
      pfVar6 = &fStack_190;
      pfVar10 = (float *)(param_1 + 0x5a);
      for (iVar9 = 0xc; iVar9 != 0; iVar9 = iVar9 + -1) {
        *pfVar10 = *pfVar6;
        pfVar6 = pfVar6 + 1;
        pfVar10 = pfVar10 + 1;
      }
      FUN_0049d5e0(1);
      *(undefined1 *)(param_1 + 0x66) = 1;
      FUN_0049eed0();
      FUN_0049cca0(local_1a8,iStack_194,fStack_1c4);
      FUN_0049ccf0(0xbfc90fdb);
      iVar9 = FUN_0060a4a0();
      fStack_1c4 = (float)(iVar9 % 10000);
      FUN_0049cd90((float)(int)fStack_1c4 * 0.0006283185 - 3.1415927);
    }
    if (param_1[0xa8] != -1) {
      if (param_1[0x42] == 0) {
        fStack_190 = (float)CONCAT31(fStack_190._1_3_,uVar13);
        FUN_004040a0(0);
        iVar9 = -1;
        pcVar11 = &DAT_006b3f70;
        do {
          if (iVar9 == 0) break;
          iVar9 = iVar9 + -1;
          cVar3 = *pcVar11;
          pcVar11 = pcVar11 + 1;
        } while (cVar3 != '\0');
        FUN_004040f0();
        pvStack_c = (void *)0x15;
        pcVar5 = (code *)FUN_005a07f0();
        (*pcVar5)();
        pvStack_c = (void *)0xffffffff;
        FUN_004040a0(1);
      }
      if (*(char *)(param_1[0x42] + 0x84) != '\0') {
        *(undefined1 *)((int)param_1 + 0x2e5) = 1;
        param_1[0xba] = 0x42c80000;
        param_1[0xbb] = 0;
        param_1[0xbc] = 2000;
        param_1[0xbd] = -1;
        param_1[0xbe] = 0x3f800000;
        *(undefined1 *)(param_1 + 0xbf) = 1;
        param_1[0xa8] = 2000;
        param_1[0xa9] = -1;
        param_1[0xaa] = 0x3f800000;
        *(undefined1 *)(param_1 + 0xab) = 1;
      }
    }
  }
  ExceptionList = pvStack_14;
  return;
}

