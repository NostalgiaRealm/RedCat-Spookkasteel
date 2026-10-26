/*
 * FUN_004a7940 at 004a7940
 * undefined FUN_004a7940(void)
 * Address ranges: 004a7940-004a845b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004a7940(int *param_1)

{
  float fVar1;
  char cVar2;
  float *pfVar3;
  code *pcVar4;
  int iVar5;
  undefined1 *puVar6;
  int iVar7;
  void *pvVar8;
  int *piVar9;
  undefined *puVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  undefined4 unaff_EBX;
  int iVar15;
  undefined4 unaff_ESI;
  undefined4 *puVar16;
  float *pfVar17;
  char *pcVar18;
  undefined4 *puVar19;
  undefined4 uStack_15c;
  int *piStack_158;
  undefined4 uStack_154;
  float fStack_14c;
  float fStack_148;
  int local_144;
  float fStack_140;
  float fStack_13c;
  float fStack_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  int iStack_128;
  undefined1 local_124 [4];
  undefined4 *puStack_120;
  undefined1 auStack_114 [4];
  undefined4 *puStack_110;
  uint uStack_10c;
  undefined4 uStack_108;
  undefined1 auStack_104 [4];
  int iStack_100;
  undefined4 uStack_fc;
  float fStack_f8;
  float local_f4 [4];
  float fStack_e4;
  float fStack_e0;
  float afStack_d8 [36];
  undefined1 local_48 [24];
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [16];
  undefined1 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062dc38;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_005ae5f0(s_D__Work_RCHorror_AdamSource_Adam_00695da4,0x91);
  iVar15 = 0;
  local_4 = 0;
  pfVar3 = (float *)FUN_0049bc00(local_48);
  iVar14 = param_1[0x42];
  pfVar17 = local_f4;
  for (iVar11 = 6; iVar11 != 0; iVar11 = iVar11 + -1) {
    *pfVar17 = *pfVar3;
    pfVar3 = pfVar3 + 1;
    pfVar17 = pfVar17 + 1;
  }
  if (iVar14 == 0) {
    local_124[0] = uStack_15c._3_1_;
    FUN_004040a0(0);
    uVar12 = 0xffffffff;
    pcVar18 = &DAT_006b3f70;
    do {
      if (uVar12 == 0) break;
      uVar12 = uVar12 - 1;
      cVar2 = *pcVar18;
      pcVar18 = pcVar18 + 1;
    } while (cVar2 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar12 - 1);
    local_4._0_1_ = 1;
    pcVar4 = (code *)FUN_005a07f0(s_m_Settings____0_0068f8a0,
                                  s_D__Work_RCHorror_AdamSource_Adam_00694bcc,0x141,local_124);
    (*pcVar4)();
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_004040a0(1);
  }
  local_144 = param_1[0x42];
  if (0 < *(int *)(local_144 + 100)) {
    do {
      iVar14 = *(int *)(*(int *)(local_144 + 0x150) + iVar15 * 4);
      iVar11 = *(int *)(iVar14 + 0x24);
      iVar14 = *(int *)(iVar14 + 0x28);
      iVar5 = FUN_00557970();
      iVar7 = *(int *)(iVar5 + 100);
      if (iVar7 == -0x80000000) {
        puVar6 = *(undefined1 **)(iVar5 + 0x18);
        if (puVar6 == (undefined1 *)0x0) {
          puVar6 = &DAT_0064a3b4;
        }
        iVar7 = FUN_0060af10(puVar6);
        *(int *)(iVar5 + 100) = iVar7;
      }
      if (0 < iVar7) {
        iVar5 = FUN_00557970();
        iVar7 = *(int *)(iVar5 + 100);
        if (iVar7 == -0x80000000) {
          puVar6 = *(undefined1 **)(iVar5 + 0x18);
          if (puVar6 == (undefined1 *)0x0) {
            puVar6 = &DAT_0064a3b4;
          }
          iVar7 = FUN_0060af10(puVar6);
          *(int *)(iVar5 + 100) = iVar7;
        }
        if (iVar7 < 2) {
          iVar14 = (iVar14 - iVar11) / 3 + iVar11;
        }
        else {
          iVar5 = FUN_00557970();
          iVar7 = *(int *)(iVar5 + 100);
          if (iVar7 == -0x80000000) {
            puVar6 = *(undefined1 **)(iVar5 + 0x18);
            if (puVar6 == (undefined1 *)0x0) {
              puVar6 = &DAT_0064a3b4;
            }
            iVar7 = FUN_0060af10(puVar6);
            *(int *)(iVar5 + 100) = iVar7;
          }
          if (iVar7 < 3) {
            iVar14 = (iVar14 - iVar11) / 2 + iVar11;
          }
        }
        if (iVar11 < iVar14) {
          iVar7 = FUN_0060a4a0();
          iVar11 = iVar7 % ((iVar14 - iVar11) + 1) + iVar11;
        }
        else if (iVar14 < iVar11) {
          iVar7 = FUN_0060a4a0();
          iVar11 = iVar7 % ((iVar11 - iVar14) + 1) + iVar14;
        }
      }
      if (0 < iVar11) {
        do {
          FUN_004a7360(param_1,local_f4,*(undefined4 *)(*(int *)(local_144 + 0x150) + iVar15 * 4),0,
                       0);
          iVar11 = iVar11 + -1;
        } while (iVar11 != 0);
      }
      iVar15 = iVar15 + 1;
    } while (iVar15 < *(int *)(local_144 + 100));
  }
  uVar13 = (uint)uStack_154;
  uVar12 = (uint)uStack_15c;
  fStack_13c = local_f4[3] - local_f4[0];
  afStack_d8[1] = 0.0;
  afStack_d8[8] = 0.0;
  afStack_d8[2] = 0.0;
  fStack_140 = fStack_e4 - local_f4[1];
  afStack_d8[3] = 0.0;
  afStack_d8[9] = 0.0;
  afStack_d8[4] = 0.0;
  afStack_d8[0xf] = 0.0;
  afStack_d8[5] = 0.0;
  afStack_d8[0x16] = 0.0;
  fStack_130 = fStack_e0 - local_f4[2];
  afStack_d8[0x17] = 0.0;
  afStack_d8[10] = 0.0;
  afStack_d8[0x10] = 0.0;
  uStack_154 = (float)CONCAT13(1,(undefined3)uStack_154);
  uStack_15c = (float)CONCAT13(1,(undefined3)uStack_15c);
  fStack_134 = 0.0;
  afStack_d8[0] = 0.5;
  afStack_d8[6] = 0.3;
  afStack_d8[7] = 0.6;
  afStack_d8[0xb] = 0.0;
  afStack_d8[0xc] = 0.5;
  afStack_d8[0xd] = 0.2;
  afStack_d8[0xe] = 0.8;
  afStack_d8[0x11] = 0.0;
  afStack_d8[0x12] = 0.5;
  afStack_d8[0x13] = 0.1;
  afStack_d8[0x14] = 0.7;
  afStack_d8[0x15] = 0.3;
  afStack_d8[0x18] = 0.5;
  afStack_d8[0x19] = 0.7;
  afStack_d8[0x1a] = 0.3;
  afStack_d8[0x1b] = 0.9;
  afStack_d8[0x1c] = 0.1;
  afStack_d8[0x1d] = 0.0;
  afStack_d8[0x1e] = 0.5;
  afStack_d8[0x1f] = 0.6;
  afStack_d8[0x20] = 0.4;
  afStack_d8[0x21] = 0.8;
  afStack_d8[0x22] = 0.1;
  afStack_d8[0x23] = 0.95;
  if (fStack_140 < fStack_13c) {
    uStack_15c = (float)(uVar12 & 0xffffff);
  }
  if (fStack_13c < fStack_140) {
    uStack_154 = (float)(uVar13 & 0xffffff);
  }
  if (fStack_13c < fStack_130) {
    uStack_154 = (float)((uint)uStack_154 & 0xffffff);
  }
  if (fStack_140 < fStack_130) {
    uStack_15c = (float)((uint)uStack_15c & 0xffffff);
  }
  fStack_138 = 0.0;
  if (0.0 < *(float *)(local_144 + 0xb8)) {
    do {
      iVar14 = local_144;
      iVar11 = __ftol();
      fStack_12c = afStack_d8[(int)fStack_138 % 6 + (iVar11 % 6) * 6] - 0.5;
      pfVar3 = (float *)(**(code **)(*param_1 + 0x48))(auStack_30);
      uStack_154 = (fStack_f8 + local_f4[2]) * 0.5 + *pfVar3;
      iVar11 = (**(code **)(*param_1 + 0x48))(auStack_28);
      uStack_154 = (fStack_f8 + local_f4[2]) * 0.5 + *(float *)(iVar11 + 4);
      iVar11 = (**(code **)(*param_1 + 0x48))(auStack_20);
      uStack_154 = (fStack_f8 + local_f4[2]) * 0.5 + *(float *)(iVar11 + 8);
      if ((char)((uint)unaff_EBX >> 0x18) == '\0') {
        if ((char)((uint)unaff_ESI >> 0x18) == '\0') {
          iVar11 = FUN_0060a4a0();
          uStack_15c = ((float)(iVar11 % 10000) * 4e-05 - 0.2) * fStack_148 + uStack_15c;
          iVar11 = FUN_0060a4a0();
          piStack_158 = (int *)(((float)(iVar11 % 10000) * 4e-05 - 0.2) * fStack_14c +
                               (float)piStack_158);
          iVar11 = FUN_0060a4a0();
          fVar1 = ((float)(iVar11 % 10000) * 1e-05 + fStack_138) - 0.05;
        }
        else {
          iVar11 = FUN_0060a4a0();
          uStack_15c = ((float)(iVar11 % 10000) * 4e-05 - 0.2) * fStack_148 + uStack_15c;
          iVar11 = FUN_0060a4a0();
          piStack_158 = (int *)((((float)(iVar11 % 10000) * 1e-05 + fStack_138) - 0.05) * fStack_14c
                               + (float)piStack_158);
          iVar11 = FUN_0060a4a0();
          fVar1 = (float)(iVar11 % 10000) * 4e-05 - 0.2;
        }
      }
      else {
        iVar11 = FUN_0060a4a0();
        uStack_15c = (((float)(iVar11 % 10000) * 1e-05 + fStack_138) - 0.05) * fStack_148 +
                     uStack_15c;
        iVar11 = FUN_0060a4a0();
        piStack_158 = (int *)(((float)(iVar11 % 10000) * 4e-05 - 0.2) * fStack_14c +
                             (float)piStack_158);
        iVar11 = FUN_0060a4a0();
        fVar1 = (float)(iVar11 % 10000) * 4e-05 - 0.2;
      }
      uStack_154 = fVar1 * fStack_13c + uStack_154;
      pvVar8 = operator_new(0x194);
      uStack_10 = 2;
      if (pvVar8 == (void *)0x0) {
        piVar9 = (int *)0x0;
      }
      else {
        piVar9 = (int *)FUN_0058d500();
      }
      uStack_10 = 0;
      FUN_00502350(1);
      (**(code **)(*piVar9 + 0x4c))(&uStack_15c);
      piVar9[0x61] = *(int *)(iVar14 + 0xb4);
      piVar9[0x60] = (int)(*(float *)(iVar14 + 0xb0) * 0.46875);
      iVar11 = __ftol();
      if ((iVar11 != -1) && (iVar11 < 0)) {
        local_48[0] = uStack_15c._3_1_;
        FUN_004040a0(0);
        uVar12 = 0xffffffff;
        pcVar18 = &DAT_006b3f70;
        do {
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          cVar2 = *pcVar18;
          pcVar18 = pcVar18 + 1;
        } while (cVar2 != '\0');
        FUN_004040f0(&DAT_006b3f70,~uVar12 - 1);
        local_4._0_1_ = 3;
        pcVar4 = (code *)FUN_005a07f0(s__a_LifeTime____ADAMTIME_NONE_____0068d490,
                                      s___AdamSource_AdamLifeTime_h_0068d4c8,0x56,local_48);
        (*pcVar4)();
        local_4 = (uint)local_4._1_3_ << 8;
        FUN_004040a0(1);
      }
      piVar9[0x2c] = iVar11;
      piVar9[0x2d] = -1;
      piVar9[0x2e] = 0x3f800000;
      *(undefined1 *)(piVar9 + 0x2f) = 1;
      *(undefined1 *)(piVar9 + 0x5d) = *(undefined1 *)(iVar14 + 0xbc);
      *(undefined1 *)((int)piVar9 + 0x175) = *(undefined1 *)(iVar14 + 200);
      piVar9[0x5f] = *(byte *)(iVar14 + 0xc9) + 1;
      iVar11 = *(int *)(iVar14 + 0xcc);
      if (iVar11 != 0) {
        if (iVar11 == 1) {
LAB_004a81b7:
          puVar10 = &DAT_006b8fb8;
        }
        else if (iVar11 == 2) {
          puVar10 = &DAT_006b8f90;
        }
        else {
          if (iVar11 != 3) {
            local_124[0] = uStack_15c._3_1_;
            FUN_004040a0(0);
            uVar12 = 0xffffffff;
            pcVar18 = &DAT_006b3f70;
            do {
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              cVar2 = *pcVar18;
              pcVar18 = pcVar18 + 1;
            } while (cVar2 != '\0');
            piStack_158 = (int *)(~uVar12 - 1);
            cVar2 = FUN_00401940(piStack_158,1);
            if (cVar2 != '\0') {
              puVar16 = (undefined4 *)&DAT_006b3f70;
              puVar19 = puStack_120;
              for (uVar12 = (uint)piStack_158 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
                *puVar19 = *puVar16;
                puVar16 = puVar16 + 1;
                puVar19 = puVar19 + 1;
              }
              for (uVar12 = (uint)piStack_158 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
                *(undefined1 *)puVar19 = *(undefined1 *)puVar16;
                puVar16 = (undefined4 *)((int)puVar16 + 1);
                puVar19 = (undefined4 *)((int)puVar19 + 1);
              }
              FUN_00404190(piStack_158);
            }
            local_4._0_1_ = 4;
            pcVar4 = (code *)FUN_005a07f0(s_false_0068d2d0,
                                          s_D__Work_RCHorror_AdamSource_Adam_00695d74,0xea,local_124
                                         );
            (*pcVar4)();
            local_4 = (uint)local_4._1_3_ << 8;
            FUN_004040a0(1);
            goto LAB_004a81b7;
          }
          puVar10 = &DAT_006b8f68;
        }
        FUN_0058eeb0(puVar10,*(undefined4 *)(iVar14 + 0xd0));
      }
      iVar11 = *(int *)(iVar14 + 0xc0);
      if (iVar11 != 0) {
        if (iVar11 == 1) {
LAB_004a82c6:
          puVar10 = &DAT_006b9030;
        }
        else if (iVar11 == 2) {
          puVar10 = &DAT_006b9008;
        }
        else {
          if (iVar11 != 3) {
            auStack_114[0] = uStack_15c._3_1_;
            FUN_004040a0(0);
            uVar12 = 0xffffffff;
            pcVar18 = &DAT_006b3f70;
            do {
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              cVar2 = *pcVar18;
              pcVar18 = pcVar18 + 1;
            } while (cVar2 != '\0');
            uVar12 = ~uVar12 - 1;
            cVar2 = FUN_00401940(uVar12,1);
            if (cVar2 != '\0') {
              puVar16 = (undefined4 *)&DAT_006b3f70;
              puVar19 = puStack_110;
              for (uVar13 = uVar12 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
                *puVar19 = *puVar16;
                puVar16 = puVar16 + 1;
                puVar19 = puVar19 + 1;
              }
              for (uVar13 = uVar12 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
                *(undefined1 *)puVar19 = *(undefined1 *)puVar16;
                puVar16 = (undefined4 *)((int)puVar16 + 1);
                puVar19 = (undefined4 *)((int)puVar19 + 1);
              }
              *(undefined1 *)((int)puStack_110 + uVar12) = 0;
              uStack_10c = uVar12;
            }
            local_4._0_1_ = 5;
            pcVar4 = (code *)FUN_005a07f0(s_false_0068d2d0,
                                          s_D__Work_RCHorror_AdamSource_Adam_00695d74,0xde,
                                          auStack_114);
            (*pcVar4)();
            local_4 = (uint)local_4._1_3_ << 8;
            if (puStack_110 != (undefined4 *)0x0) {
              cVar2 = *(char *)((int)puStack_110 + -1);
              if ((cVar2 == '\0') || (cVar2 == -1)) {
                FUN_005fe5f0((char *)((int)puStack_110 + -1));
              }
              else {
                *(char *)((int)puStack_110 + -1) = cVar2 + -1;
              }
            }
            puStack_110 = (undefined4 *)0x0;
            uStack_10c = 0;
            uStack_108 = 0;
            goto LAB_004a82c6;
          }
          puVar10 = &DAT_006b8fe0;
        }
        iVar14 = local_144;
        FUN_0058eeb0(puVar10,*(undefined4 *)(local_144 + 0xc4));
      }
      piStack_158 = (int *)FUN_004042e0(&iStack_128);
      local_4._0_1_ = 6;
      if (*piStack_158 == 0) {
        auStack_104[0] = uStack_15c._3_1_;
        uVar12 = 0xffffffff;
        pcVar18 = &DAT_006b3f70;
        do {
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          cVar2 = *pcVar18;
          pcVar18 = pcVar18 + 1;
        } while (cVar2 != '\0');
        iStack_100 = 0;
        uStack_fc = 0;
        fStack_f8 = 0.0;
        FUN_004040f0(&DAT_006b3f70,~uVar12 - 1);
        local_4._0_1_ = 7;
        pcVar4 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                      auStack_104);
        (*pcVar4)();
        local_4._0_1_ = 6;
        if (iStack_100 != 0) {
          cVar2 = *(char *)(iStack_100 + -1);
          if ((cVar2 == '\0') || (cVar2 == -1)) {
            FUN_005fe5f0((char *)(iStack_100 + -1));
          }
          else {
            *(char *)(iStack_100 + -1) = cVar2 + -1;
          }
        }
        iStack_100 = 0;
        uStack_fc = 0;
        fStack_f8 = 0.0;
      }
      FUN_004f41c0(piVar9);
      local_4 = (uint)local_4._1_3_ << 8;
      if (iStack_128 != 0) {
        iVar11 = *(int *)(iStack_128 + 0x14) + -1;
        *(int *)(iStack_128 + 0x14) = iVar11;
        if (iVar11 == 0) {
          FUN_005abfc0(0);
        }
        iStack_128 = 0;
      }
      iVar11 = FUN_0060a4a0();
      piStack_158 = (int *)(iVar11 % 10000);
      fStack_138 = (float)((int)fStack_138 + 1);
      fStack_134 = (float)(int)piStack_158 * 5e-06 + fStack_134 + 0.15;
    } while ((float)(int)fStack_138 < *(float *)(iVar14 + 0xb8));
  }
  local_4 = 0xffffffff;
  FUN_005ae770();
  ExceptionList = pvStack_c;
  return;
}

