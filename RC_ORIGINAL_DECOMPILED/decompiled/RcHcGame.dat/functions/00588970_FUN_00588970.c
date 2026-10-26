/*
 * FUN_00588970 at 00588970
 * undefined FUN_00588970(void)
 * Address ranges: 00588970-005897c3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_00588970(int param_1,int param_2,int param_3)

{
  float fVar1;
  undefined4 uVar2;
  bool bVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  bool bVar7;
  bool bVar8;
  char cVar9;
  int iVar10;
  code *pcVar11;
  void *pvVar12;
  int *piVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  char *pcVar19;
  undefined4 *puVar20;
  char *pcVar21;
  undefined4 *puVar22;
  char local_209;
  int local_1fc;
  int local_1f8;
  float fStack_1f4;
  int local_1ec;
  int local_1e8;
  int iStack_1e4;
  undefined4 *puStack_1d8;
  float fStack_1c8;
  float fStack_1c4;
  float fStack_1c0;
  char *pcStack_1ac;
  float fStack_198;
  undefined4 uStack_190;
  float fStack_18c;
  undefined4 uStack_188;
  undefined1 auStack_178 [4];
  undefined4 uStack_174;
  float fStack_16c;
  float fStack_164;
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 local_158;
  char cStack_154;
  char cStack_144;
  char cStack_134;
  float afStack_124 [6];
  undefined1 auStack_10c [16];
  undefined4 auStack_fc [11];
  undefined1 uStack_cf;
  undefined1 uStack_ce;
  undefined1 uStack_cd;
  undefined1 uStack_cc;
  undefined1 uStack_cb;
  int iStack_c4;
  undefined4 uStack_68;
  float fStack_64;
  undefined4 uStack_60;
  float fStack_50;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00642f5f;
  pvStack_c = ExceptionList;
  bVar8 = false;
  bVar7 = false;
  ExceptionList = &pvStack_c;
  if (*(int *)(*(int *)(param_1 + 0xf8) + 0x18) != 0) {
    iVar10 = *(int *)(param_1 + 0x22f0);
    ExceptionList = &pvStack_c;
    if (iVar10 != -1) {
      bVar3 = true;
      ExceptionList = &pvStack_c;
      if (iVar10 != -1) {
        iVar14 = *(int *)(param_1 + 0x22f4);
        if (iVar14 == -1) {
          ExceptionList = &pvStack_c;
          *(undefined4 *)(param_1 + 0x22f8) = 0x3f800000;
          *(int *)(param_1 + 0x22f4) = iVar10 + param_2;
        }
        else if (iVar14 < param_2) {
          ExceptionList = &pvStack_c;
          *(undefined4 *)(param_1 + 0x22f8) = 0;
          bVar3 = false;
        }
        else if (iVar10 < 1) {
          ExceptionList = &pvStack_c;
          *(undefined4 *)(param_1 + 0x22f8) = 0;
        }
        else {
          ExceptionList = &pvStack_c;
          *(float *)(param_1 + 0x22f8) = (float)(iVar14 - param_2) / (float)iVar10;
        }
      }
      *(bool *)(param_1 + 0x22fc) = bVar3;
      local_1e8 = iVar10;
      if (bVar3) goto LAB_00588b4b;
    }
    *(undefined1 *)(param_1 + 0x2300) = 1;
    if (*(int *)(param_1 + 0x2304) < 3) {
      *(int *)(param_1 + 0x2304) = *(int *)(param_1 + 0x2304) + 1;
      *(undefined4 *)(param_1 + 0x22f0) = 0x4b;
      *(undefined4 *)(param_1 + 0x22f4) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x22f8) = 0x3f800000;
      *(undefined1 *)(param_1 + 0x22fc) = 1;
    }
    else {
      *(undefined4 *)(param_1 + 0x2304) = 0;
      local_1e8 = *(int *)(*(int *)(param_1 + 0xf8) + 0x24);
      FUN_0060a4a0();
      iVar10 = __ftol();
      if ((iVar10 != -1) && (iVar10 < 0)) {
        FUN_004040a0();
        iVar14 = -1;
        pcVar19 = &DAT_006b3f70;
        do {
          if (iVar14 == 0) break;
          iVar14 = iVar14 + -1;
          cVar9 = *pcVar19;
          pcVar19 = pcVar19 + 1;
        } while (cVar9 != '\0');
        FUN_004040f0(&DAT_006b3f70);
        local_4 = 0;
        pcVar11 = (code *)FUN_005a07f0(s__a_LifeTime____ADAMTIME_NONE_____0068d490,
                                       s___AdamSource_AdamLifeTime_h_0068d4c8,0x56);
        (*pcVar11)();
        local_4 = 0xffffffff;
        FUN_004040a0();
      }
      *(int *)(param_1 + 0x22f0) = iVar10;
      *(undefined4 *)(param_1 + 0x22f4) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x22f8) = 0x3f800000;
      *(undefined1 *)(param_1 + 0x22fc) = 1;
    }
  }
LAB_00588b4b:
  if (DAT_006c8de0 == 0) {
    FUN_0055b280();
  }
  FUN_00421750();
  local_4 = 2;
  if (local_1ec == 0) {
    FUN_004040a0();
    iVar10 = -1;
    pcVar19 = &DAT_006b3f70;
    do {
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      cVar9 = *pcVar19;
      pcVar19 = pcVar19 + 1;
    } while (cVar9 != '\0');
    FUN_004040f0(&DAT_006b3f70);
    local_4._0_1_ = 3;
    pcVar11 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6);
    (*pcVar11)();
    local_4 = CONCAT31(local_4._1_3_,2);
    FUN_004040a0();
  }
  local_160 = *(undefined4 *)(local_1ec + 0x210);
  local_15c = *(undefined4 *)(local_1ec + 0x214);
  local_158 = *(undefined4 *)(local_1ec + 0x218);
  if (local_1ec == 0) {
    FUN_004040a0();
    iVar10 = -1;
    pcVar19 = &DAT_006b3f70;
    do {
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      cVar9 = *pcVar19;
      pcVar19 = pcVar19 + 1;
    } while (cVar9 != '\0');
    FUN_004040f0(&DAT_006b3f70);
    local_4._0_1_ = 4;
    pcVar11 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6);
    (*pcVar11)();
    local_4 = CONCAT31(local_4._1_3_,2);
    FUN_004040a0();
  }
  FUN_005b3670();
  if (local_1ec == 0) {
    FUN_004040a0();
    iVar10 = -1;
    pcVar19 = &DAT_006b3f70;
    do {
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      cVar9 = *pcVar19;
      pcVar19 = pcVar19 + 1;
    } while (cVar9 != '\0');
    FUN_004040f0(&DAT_006b3f70);
    local_4._0_1_ = 5;
    pcVar11 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6);
    (*pcVar11)();
    local_4 = CONCAT31(local_4._1_3_,2);
    FUN_004040a0();
  }
  FUN_005b3630();
  local_1f8 = 0;
  if (0 < *(int *)(param_1 + 0x22e0)) {
    do {
      iStack_1e4 = 0;
      if (0 < *(int *)(param_1 + 0x22e4)) {
        do {
          iVar10 = iStack_1e4 + 1;
          iVar14 = *(int *)(param_1 + 0x22e8);
          local_1fc = 0;
          fVar4 = (float)(iVar10 * iVar10) * 32.0;
          fVar6 = (float)iStack_1e4 * 4.0 + 3.0;
          fVar5 = (float)(iVar10 * iVar10) * 3.0;
          if (0 < iVar14) {
            do {
              iVar18 = (local_1f8 * *(int *)(param_1 + 0x22e4) + iStack_1e4) * iVar14 + local_1fc;
              iVar15 = iVar18 * 0x30;
              iVar14 = iVar15 + param_1;
              if (*(char *)(iVar15 + 0x13c + param_1) == '\0') {
                uStack_174 = 0xbf800000;
                if ((local_1f8 == 0) || (local_1f8 == 2)) {
                  FUN_00588930(auStack_178);
                }
                FUN_005b3020(fVar4 * (1.0 - fStack_198 * fStack_198));
                fVar1 = fVar4 * -0.3;
                iVar15 = FUN_0060a4a0();
                fStack_1c8 = ((fVar4 * 0.3 - fVar1) * (float)(iVar15 % 10000) * 0.0001 + fVar1) *
                             fStack_16c + fStack_1c8;
                iVar15 = FUN_0060a4a0();
                fStack_1c0 = ((fVar4 * 0.3 - fVar1) * (float)(iVar15 % 10000) * 0.0001 + fVar1) *
                             fStack_164 + fStack_1c0;
                FUN_005b3020(fVar5);
                FUN_005b3020(-fVar5);
                local_209 = '\0';
                fStack_1f4 = fStack_1c4;
                iVar15 = 0;
                do {
                  fVar1 = *(float *)((int)afStack_124 + iVar15 + 4);
                  *(undefined4 *)((int)auStack_fc + iVar15) =
                       *(undefined4 *)((int)afStack_124 + iVar15);
                  *(undefined4 *)((int)auStack_fc + iVar15 + 4) =
                       *(undefined4 *)((int)afStack_124 + iVar15 + 4);
                  *(undefined4 *)((int)auStack_fc + iVar15 + 8) =
                       *(undefined4 *)((int)afStack_124 + iVar15 + 8);
                  uVar2 = *(undefined4 *)(*(int *)(param_1 + 0xf8) + 0xc);
                  *(float *)((int)afStack_124 + iVar15 + 4) = fVar1 - 10.0;
                  *(undefined4 *)((int)auStack_fc + iVar15 + 4) = uVar2;
                  FUN_004042e0(&stack0xfffffde0);
                  FUN_00565c30();
                  local_4._0_1_ = 6;
                  uStack_cf = 1;
                  uStack_ce = 1;
                  uStack_cd = 1;
                  uStack_cc = 1;
                  uStack_cb = 1;
                  cVar9 = FUN_00565e10((undefined4 *)((int)auStack_fc + iVar15));
                  if (cVar9 == '\0') {
                    if (fStack_1f4 < fStack_1c4) {
                      fStack_1f4 = fStack_1c4;
                    }
                  }
                  else if (fStack_1f4 < fStack_50) {
                    fStack_1f4 = fStack_50;
                    local_209 = '\x01';
                    uStack_190 = uStack_68;
                    fStack_18c = fStack_64;
                    uStack_188 = uStack_60;
                  }
                  local_4._0_1_ = 9;
                  FUN_00514430();
                  local_4._0_1_ = 8;
                  FUN_00514430();
                  local_4._0_1_ = 7;
                  if (iStack_c4 != 0) {
                    FUN_004098d0();
                    iStack_c4 = 0;
                  }
                  local_4 = CONCAT31(local_4._1_3_,2);
                  FUN_005ab4d0();
                  iVar15 = iVar15 + 0xc;
                } while (iVar15 < 0x18);
                *(float *)(iVar14 + 0x138) = fStack_1f4;
                iVar15 = FUN_0060a4a0();
                *(float *)(iVar14 + 0x118) =
                     (fVar6 * 32.0 - (fVar6 + 50.0)) * (float)(iVar15 % 10000) * 0.0001 +
                     fVar6 + 50.0 + fStack_1f4;
                if (local_209 != '\0') {
                  if (fStack_18c <= 0.7) {
                    *(undefined1 *)(iVar14 + 0x13d) = 0;
                  }
                  else {
                    *(undefined4 *)(iVar14 + 300) = uStack_190;
                    *(float *)(iVar14 + 0x130) = fStack_18c;
                    *(undefined4 *)(iVar14 + 0x134) = uStack_188;
                    *(undefined1 *)(iVar14 + 0x13d) = 1;
                  }
                }
                *(undefined1 *)(iVar14 + 0x13c) = 1;
                *(int *)(iVar14 + 0x140) = iStack_1e4;
                *(float *)(iVar14 + 0x114) = fStack_1c8;
                *(float *)(iVar14 + 0x11c) = fStack_1c0;
              }
              else {
                if (param_3 == -1) {
                  cStack_154 = local_209;
                  FUN_004040a0();
                  iVar15 = -1;
                  pcVar19 = &DAT_006b3f70;
                  do {
                    if (iVar15 == 0) break;
                    iVar15 = iVar15 + -1;
                    cVar9 = *pcVar19;
                    pcVar19 = pcVar19 + 1;
                  } while (cVar9 != '\0');
                  FUN_004040f0(&DAT_006b3f70);
                  local_4._0_1_ = 10;
                  pcVar11 = (code *)FUN_005a07f0(s_a_Time____ADAMTIME_NONE_0068e214,
                                                 s___AdamSource_AdamClock_h_0068e22c,0x8a);
                  (*pcVar11)();
                  local_4 = CONCAT31(local_4._1_3_,2);
                  FUN_004040a0();
                }
                fVar1 = (float)param_3;
                *(float *)(iVar14 + 0x114) =
                     fVar1 * *(float *)((iVar18 * 3 + 0x12) * 0x10 + param_1) * 0.001 +
                     *(float *)(iVar14 + 0x114);
                if (param_3 == -1) {
                  cStack_134 = local_209;
                  FUN_004040a0();
                  iVar15 = -1;
                  pcVar19 = &DAT_006b3f70;
                  do {
                    if (iVar15 == 0) break;
                    iVar15 = iVar15 + -1;
                    cVar9 = *pcVar19;
                    pcVar19 = pcVar19 + 1;
                  } while (cVar9 != '\0');
                  FUN_004040f0(&DAT_006b3f70);
                  local_4._0_1_ = 0xb;
                  pcVar11 = (code *)FUN_005a07f0(s_a_Time____ADAMTIME_NONE_0068e214,
                                                 s___AdamSource_AdamClock_h_0068e22c,0x8a);
                  (*pcVar11)();
                  local_4 = CONCAT31(local_4._1_3_,2);
                  FUN_004040a0();
                }
                *(float *)(iVar14 + 0x118) =
                     fVar1 * *(float *)(iVar14 + 0x124) * 0.001 + *(float *)(iVar14 + 0x118);
                if (param_3 == -1) {
                  cStack_144 = local_209;
                  FUN_004040a0();
                  iVar15 = -1;
                  pcVar19 = &DAT_006b3f70;
                  do {
                    if (iVar15 == 0) break;
                    iVar15 = iVar15 + -1;
                    cVar9 = *pcVar19;
                    pcVar19 = pcVar19 + 1;
                  } while (cVar9 != '\0');
                  FUN_004040f0(&DAT_006b3f70);
                  local_4._0_1_ = 0xc;
                  pcVar11 = (code *)FUN_005a07f0(s_a_Time____ADAMTIME_NONE_0068e214,
                                                 s___AdamSource_AdamClock_h_0068e22c,0x8a);
                  (*pcVar11)();
                  local_4 = CONCAT31(local_4._1_3_,2);
                  FUN_004040a0();
                }
                *(float *)(iVar14 + 0x11c) =
                     fVar1 * *(float *)(iVar14 + 0x128) * 0.001 + *(float *)(iVar14 + 0x11c);
                if (fVar5 * *(float *)(param_1 + 0x22ec) + *(float *)(iVar14 + 0x118) <
                    *(float *)(iVar14 + 0x138)) {
                  *(undefined1 *)(iVar14 + 0x13c) = 0;
                  *(float *)(iVar14 + 0x118) = fVar6 + *(float *)(iVar14 + 0x138);
                  if ((((float)iStack_1e4 < 3.0) && (iVar15 = FUN_0060a4a0(), iVar15 % 10 == 3)) &&
                     (*(char *)(iVar14 + 0x13d) != '\0')) {
                    pvVar12 = operator_new(0x250);
                    local_4 = CONCAT31(local_4._1_3_,0xd);
                    if (pvVar12 == (void *)0x0) {
                      iVar15 = 0;
                    }
                    else {
                      FUN_004040a0();
                      uVar16 = 0xffffffff;
                      pcVar19 = s_watersplash_006a613c;
                      do {
                        if (uVar16 == 0) break;
                        uVar16 = uVar16 - 1;
                        cVar9 = *pcVar19;
                        pcVar19 = pcVar19 + 1;
                      } while (cVar9 != '\0');
                      uVar16 = ~uVar16 - 1;
                      cVar9 = FUN_00401940(uVar16);
                      if (cVar9 != '\0') {
                        pcVar19 = s_watersplash_006a613c;
                        pcVar21 = pcStack_1ac;
                        for (uVar17 = uVar16 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
                          *(undefined4 *)pcVar21 = *(undefined4 *)pcVar19;
                          pcVar19 = pcVar19 + 4;
                          pcVar21 = pcVar21 + 4;
                        }
                        for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
                          *pcVar21 = *pcVar19;
                          pcVar19 = pcVar19 + 1;
                          pcVar21 = pcVar21 + 1;
                        }
                        FUN_00404190();
                      }
                      local_4 = CONCAT31(local_4._1_3_,0xe);
                      FUN_005033a0(auStack_10c);
                      bVar8 = true;
                      bVar7 = true;
                      local_4 = 0xf;
                      iVar15 = FUN_00571610();
                    }
                    local_4 = 0x10;
                    if (bVar7) {
                      bVar7 = false;
                      FUN_004040a0();
                    }
                    local_4 = 2;
                    if (bVar8) {
                      bVar8 = false;
                      FUN_004040a0();
                    }
                    if ((*(int *)(iVar15 + 0x1a4) != 0) || (iVar18 = FUN_005b2ec0(), iVar18 == 0)) {
                      *(undefined4 *)(iVar15 + 0x1a4) = 0;
                      *(undefined4 *)(iVar15 + 0x198) = *(undefined4 *)(iVar14 + 0x114);
                      *(undefined4 *)(iVar15 + 0x19c) = *(undefined4 *)(iVar14 + 0x118);
                      uVar2 = *(undefined4 *)(iVar14 + 0x11c);
                      *(undefined1 *)(iVar15 + 0x189) = 1;
                      *(undefined4 *)(iVar15 + 0x1a0) = uVar2;
                    }
                    *(undefined4 *)(iVar15 + 0x1a8) = *(undefined4 *)(iVar14 + 300);
                    *(undefined4 *)(iVar15 + 0x1ac) = *(undefined4 *)(iVar14 + 0x130);
                    *(undefined4 *)(iVar15 + 0x1b0) = *(undefined4 *)(iVar14 + 0x134);
                    FUN_005b2f20();
                    *(undefined1 *)(iVar15 + 0x1bc) = 1;
                    *(undefined4 *)(iVar15 + 0x180) = 0x437a0000;
                    *(float *)(iVar15 + 0x10c) = fVar4 * 0.020833334;
                    *(float *)(iVar15 + 0x108) = fVar4 * 0.020833334;
                    FUN_00571990();
                    FUN_00502350();
                    *(undefined4 *)(iVar15 + 0xf8) = 200;
                    *(undefined4 *)(iVar15 + 0xfc) = 0xffffffff;
                    *(undefined4 *)(iVar15 + 0x100) = 0x3f800000;
                    *(undefined1 *)(iVar15 + 0x104) = 1;
                    FUN_005733f0(0x40000000,0x41000000);
                    FUN_00573420(0x437a0000,0x42480000);
                    FUN_005727d0();
                    piVar13 = (int *)FUN_004042e0();
                    local_4._0_1_ = 0x13;
                    if (*piVar13 == 0) {
                      FUN_004040a0();
                      uVar16 = 0xffffffff;
                      pcVar19 = &DAT_006b3f70;
                      do {
                        if (uVar16 == 0) break;
                        uVar16 = uVar16 - 1;
                        cVar9 = *pcVar19;
                        pcVar19 = pcVar19 + 1;
                      } while (cVar9 != '\0');
                      uVar16 = ~uVar16 - 1;
                      cVar9 = FUN_00401940(uVar16);
                      if (cVar9 != '\0') {
                        puVar20 = (undefined4 *)&DAT_006b3f70;
                        puVar22 = puStack_1d8;
                        for (uVar17 = uVar16 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
                          *puVar22 = *puVar20;
                          puVar20 = puVar20 + 1;
                          puVar22 = puVar22 + 1;
                        }
                        for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
                          *(undefined1 *)puVar22 = *(undefined1 *)puVar20;
                          puVar20 = (undefined4 *)((int)puVar20 + 1);
                          puVar22 = (undefined4 *)((int)puVar22 + 1);
                        }
                        FUN_00404190();
                      }
                      local_4._0_1_ = 0x14;
                      pcVar11 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,
                                                     s___AdamSource_DaviRC_h_0068d638,0xb6);
                      (*pcVar11)();
                      local_4._0_1_ = 0x13;
                      FUN_004040a0();
                    }
                    FUN_004f41c0();
                    local_4 = CONCAT31(local_4._1_3_,2);
                    if (local_1e8 != 0) {
                      iVar15 = *(int *)(local_1e8 + 0x14) + -1;
                      *(int *)(local_1e8 + 0x14) = iVar15;
                      if (iVar15 == 0) {
                        FUN_005abfc0();
                      }
                      local_1e8 = 0;
                    }
                  }
                  *(undefined1 *)(iVar14 + 0x13d) = 0;
                }
              }
              iVar14 = *(int *)(param_1 + 0x22e8);
              local_1fc = local_1fc + 1;
            } while (local_1fc < iVar14);
          }
          iStack_1e4 = iVar10;
        } while (iVar10 < *(int *)(param_1 + 0x22e4));
      }
      local_1f8 = local_1f8 + 1;
    } while (local_1f8 < *(int *)(param_1 + 0x22e0));
  }
  local_4 = 0xffffffff;
  if ((local_1ec != 0) &&
     (iVar10 = *(int *)(local_1ec + 0x14) + -1, *(int *)(local_1ec + 0x14) = iVar10, iVar10 == 0)) {
    FUN_005abfc0();
  }
  ExceptionList = pvStack_c;
  return;
}

