/*
 * FUN_005789a0 at 005789a0
 * undefined FUN_005789a0(void)
 * Address ranges: 005789a0-0057970f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_005789a0(int param_1,float param_2)

{
  float *pfVar1;
  float fVar2;
  undefined1 *puVar3;
  char cVar4;
  int *piVar5;
  code *pcVar6;
  undefined4 uVar7;
  uint uVar8;
  float *pfVar9;
  uint uVar10;
  int iVar11;
  undefined4 *puVar12;
  int iVar13;
  char *pcVar14;
  undefined4 *puVar15;
  float10 fVar16;
  float *pfStack_188;
  char local_171;
  float local_16c;
  char local_168 [4];
  undefined4 *puStack_164;
  uint uStack_160;
  undefined4 uStack_15c;
  float fStack_158;
  int iStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  float fStack_148;
  float fStack_144;
  float fStack_140;
  int *piStack_13c;
  float fStack_138;
  float fStack_134;
  float fStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  float local_124 [4];
  float afStack_114 [17];
  undefined1 uStack_d0;
  undefined1 uStack_cf;
  undefined1 uStack_ce;
  undefined1 uStack_cd;
  undefined1 uStack_cc;
  undefined1 uStack_cb;
  undefined1 uStack_ca;
  int iStack_c4;
  char cStack_58;
  float afStack_54 [11];
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00641aaf;
  pvStack_c = ExceptionList;
  pfStack_188 = &local_16c;
  ExceptionList = &pvStack_c;
  piVar5 = (int *)FUN_004042e0();
  local_4 = 0;
  if (*piVar5 == 0) {
    pfStack_188 = (float *)0x0;
    local_168[0] = local_171;
    FUN_004040a0();
    uVar8 = 0xffffffff;
    pcVar14 = &DAT_006b3f70;
    do {
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      cVar4 = *pcVar14;
      pcVar14 = pcVar14 + 1;
    } while (cVar4 != '\0');
    pfStack_188 = (float *)(~uVar8 - 1);
    FUN_004040f0(&DAT_006b3f70);
    pfStack_188 = (float *)local_168;
    local_4._0_1_ = 1;
    pcVar6 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6);
    (*pcVar6)();
    local_4 = (uint)local_4._1_3_ << 8;
    pfStack_188 = (float *)0x1;
    FUN_004040a0();
  }
  iVar13 = *piVar5;
  if (*(int *)(iVar13 + 0x5c) == 0) {
    pfStack_188 = (float *)0x0;
    FUN_004040a0();
    uVar8 = 0xffffffff;
    pcVar14 = &DAT_006b3f70;
    do {
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      cVar4 = *pcVar14;
      pcVar14 = pcVar14 + 1;
    } while (cVar4 != '\0');
    pfStack_188 = (float *)(~uVar8 - 1);
    FUN_004040f0(&DAT_006b3f70);
    pfStack_188 = local_124;
    local_4._0_1_ = 2;
    pcVar6 = (code *)FUN_005a07f0(s_m_GenesisWorld_0068e1a8,s___AdamSource_AdamSubLevel_h_0068e1b8,
                                  0x144);
    (*pcVar6)();
    local_4 = (uint)local_4._1_3_ << 8;
    pfStack_188 = (float *)0x1;
    FUN_004040a0();
  }
  uStack_12c = *(undefined4 *)(iVar13 + 0x5c);
  local_4 = 0xffffffff;
  if ((local_16c != 0.0) &&
     (iVar13 = *(int *)((int)local_16c + 0x14) + -1, *(int *)((int)local_16c + 0x14) = iVar13,
     iVar13 == 0)) {
    pfStack_188 = (float *)0x0;
    FUN_005abfc0();
  }
  if (DAT_006c8de0 == 0) {
    pfStack_188 = (float *)0x578af6;
    FUN_0055b280();
  }
  pfStack_188 = &local_16c;
  piVar5 = (int *)FUN_00421750();
  local_4 = 3;
  if (*piVar5 == 0) {
    pfStack_188 = (float *)0x0;
    local_168[0] = local_171;
    FUN_004040a0();
    uVar8 = 0xffffffff;
    pcVar14 = &DAT_006b3f70;
    do {
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      cVar4 = *pcVar14;
      pcVar14 = pcVar14 + 1;
    } while (cVar4 != '\0');
    pfStack_188 = (float *)(~uVar8 - 1);
    FUN_004040f0(&DAT_006b3f70);
    pfStack_188 = (float *)local_168;
    local_4._0_1_ = 4;
    pcVar6 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6);
    (*pcVar6)();
    local_4 = CONCAT31(local_4._1_3_,3);
    pfStack_188 = (float *)0x1;
    FUN_004040a0();
  }
  pfStack_188 = (float *)0x578b87;
  uStack_128 = FUN_00556570();
  local_4 = 0xffffffff;
  if ((local_16c != 0.0) &&
     (iVar13 = *(int *)((int)local_16c + 0x14) + -1, *(int *)((int)local_16c + 0x14) = iVar13,
     iVar13 == 0)) {
    pfStack_188 = (float *)0x0;
    FUN_005abfc0();
  }
  if (*(int *)(param_1 + 0x10c) == 0) {
    uVar8 = 0xffffffff;
    iStack_154 = 0;
    pcVar14 = &DAT_006b3f70;
    do {
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      cVar4 = *pcVar14;
      pcVar14 = pcVar14 + 1;
    } while (cVar4 != '\0');
    pfStack_188 = (float *)(~uVar8 - 1);
    uStack_150 = 0;
    uStack_14c = 0;
    FUN_004040f0(&DAT_006b3f70);
    pfStack_188 = &fStack_158;
    local_4 = 5;
    pcVar6 = (code *)FUN_005a07f0(s_m_Bolt____0_006a4ee8,s_D__Work_RCHorror_AdamSource_Adam_006a4ce4
                                  ,0xc9);
    (*pcVar6)();
    local_4 = 0xffffffff;
    if (iStack_154 != 0) {
      pfStack_188 = (float *)(iStack_154 + -1);
      cVar4 = *(char *)(iStack_154 + -1);
      if ((cVar4 == '\0') || (cVar4 == -1)) {
        FUN_005fe5f0();
      }
      else {
        *(char *)pfStack_188 = cVar4 + -1;
      }
    }
  }
  if (**(int **)(param_1 + 0x10c) == 0) {
    uVar8 = 0xffffffff;
    iStack_154 = 0;
    pcVar14 = &DAT_006b3f70;
    do {
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      cVar4 = *pcVar14;
      pcVar14 = pcVar14 + 1;
    } while (cVar4 != '\0');
    pfStack_188 = (float *)(~uVar8 - 1);
    uStack_150 = 0;
    uStack_14c = 0;
    FUN_004040f0(&DAT_006b3f70);
    pfStack_188 = &fStack_158;
    local_4 = 6;
    pcVar6 = (code *)FUN_005a07f0(s_m_Bolt_>ReservedData____0_006a4ecc,
                                  s_D__Work_RCHorror_AdamSource_Adam_006a4ce4,0xca);
    (*pcVar6)();
    local_4 = 0xffffffff;
    if (iStack_154 != 0) {
      pfStack_188 = (float *)(iStack_154 + -1);
      cVar4 = *(char *)(iStack_154 + -1);
      if ((cVar4 == '\0') || (cVar4 == -1)) {
        FUN_005fe5f0();
      }
      else {
        *(char *)pfStack_188 = cVar4 + -1;
      }
    }
  }
  piVar5 = *(int **)(param_1 + 0x10c);
  pfVar1 = (float *)*piVar5;
  if ((float)piVar5[1] <= 0.0) {
LAB_00578d27:
    iVar13 = 0;
    if (0 < piVar5[0xb]) {
      do {
        if ((*(int *)(*(int *)(*piVar5 + 0xd4) + iVar13 * 4) != 0) &&
           (*(float *)((int)pfVar1[0x36] + iVar13 * 4) =
                 *(float *)((int)pfVar1[0x36] + iVar13 * 4) - param_2,
           *(float *)((int)pfVar1[0x36] + iVar13 * 4) <= 0.0)) {
          pfStack_188 = *(float **)((int)pfVar1[0x35] + iVar13 * 4);
          FUN_005b6ee0(uStack_12c);
          *(undefined4 *)((int)pfVar1[0x35] + iVar13 * 4) = 0;
          *(undefined4 *)((int)pfVar1[0x36] + iVar13 * 4) = 0;
          pfVar1[0x33] = (float)((int)pfVar1[0x33] + -1);
        }
        piVar5 = *(int **)(param_1 + 0x10c);
        iVar13 = iVar13 + 1;
      } while (iVar13 < piVar5[0xb]);
    }
    fVar2 = pfVar1[0x33];
    if ((int)fVar2 < 0) {
      uVar8 = 0xffffffff;
      iStack_154 = 0;
      pcVar14 = &DAT_006b3f70;
      do {
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        cVar4 = *pcVar14;
        pcVar14 = pcVar14 + 1;
      } while (cVar4 != '\0');
      pfStack_188 = (float *)(~uVar8 - 1);
      uStack_150 = 0;
      uStack_14c = 0;
      FUN_004040f0(&DAT_006b3f70);
      pfStack_188 = &fStack_158;
      local_4 = 7;
      pcVar6 = (code *)FUN_005a07f0(s_ReservedData_>BoltCount_>__0_006a4eac,
                                    s_D__Work_RCHorror_AdamSource_Adam_006a4ce4,0xea);
      (*pcVar6)();
      local_4 = 0xffffffff;
      if (iStack_154 != 0) {
        pfStack_188 = (float *)(iStack_154 + -1);
        cVar4 = *(char *)(iStack_154 + -1);
        if ((cVar4 == '\0') || (cVar4 == -1)) {
          FUN_005fe5f0();
        }
        else {
          *(char *)pfStack_188 = cVar4 + -1;
        }
      }
      fVar2 = pfVar1[0x33];
    }
    if ((fVar2 == 0.0) && (pfVar1[0x38] == 1.4013e-45)) {
      if (*(int *)(*(int *)(param_1 + 0x10c) + 0x38) != 1) goto LAB_00578d20;
      pfStack_188 = (float *)0x578e73;
      FUN_005b3050();
      pfVar1[0x38] = 0.0;
      pfVar1[0x37] = 0.0;
    }
    if (*(char *)(*(int *)(param_1 + 0x10c) + 0x60) != '\0') {
      puVar3 = *(undefined1 **)(*(int *)(param_1 + 0x10c) + 0x58);
      if ((puVar3 != &DAT_006b3f70) && (puVar3 != (undefined1 *)0x0)) {
        pfStack_188 = (float *)&DAT_006b9690;
        FUN_00505400();
      }
      *(undefined1 *)(*(int *)(param_1 + 0x10c) + 0x54) = 1;
      *(undefined1 *)(*(int *)(param_1 + 0x10c) + 0x60) = 0;
      *(undefined4 *)(param_1 + 0x114) = 1;
    }
    local_171 = '\x01';
    pfVar1[0x37] = param_2 + pfVar1[0x37];
    *(float *)(*(int *)(param_1 + 0x10c) + 0x40) =
         *(float *)(*(int *)(param_1 + 0x10c) + 0x40) - param_2;
    iVar13 = *(int *)(param_1 + 0x10c);
    if (*(float *)(iVar13 + 0x40) <= 0.0) {
      local_171 = '\0';
      *(float *)(iVar13 + 0x50) = *(float *)(iVar13 + 0x44) + *(float *)(iVar13 + 0x40);
      iVar13 = *(int *)(param_1 + 0x10c);
      if (0.0 < *(float *)(iVar13 + 0x50)) {
        if ((*(int *)(param_1 + 0x114) < 1) && (*(char *)(iVar13 + 0x54) != '\0')) {
          if ((*(undefined1 **)(iVar13 + 0x5c) != &DAT_006b3f70) &&
             (*(undefined1 **)(iVar13 + 0x5c) != (undefined1 *)0x0)) {
            pfStack_188 = (float *)&DAT_006b9748;
            FUN_00505400();
          }
          *(undefined1 *)(*(int *)(param_1 + 0x10c) + 0x54) = 0;
        }
      }
      else {
        fVar2 = *(float *)(iVar13 + 0x4c);
        local_16c = *(float *)(iVar13 + 0x48);
        local_171 = '\x01';
        pfStack_188 = (float *)0x578f41;
        iVar13 = FUN_0060a4a0();
        piStack_13c = (int *)(iVar13 % 10000);
        *(float *)(*(int *)(param_1 + 0x10c) + 0x44) =
             (fVar2 - local_16c) * (float)(int)piStack_13c * 0.0001 + local_16c;
        *(undefined4 *)(*(int *)(param_1 + 0x10c) + 0x50) =
             *(undefined4 *)(*(int *)(param_1 + 0x10c) + 0x44);
        *(undefined4 *)(*(int *)(param_1 + 0x10c) + 0x40) =
             *(undefined4 *)(*(int *)(param_1 + 0x10c) + 0x3c);
        if (*(char *)(*(int *)(param_1 + 0x10c) + 0x54) == '\0') {
          *(undefined1 *)(*(int *)(param_1 + 0x10c) + 0x60) = 1;
        }
      }
    }
    pfStack_188 = (float *)(*(int *)(param_1 + 0x114) + -1);
    *(float **)(param_1 + 0x114) = pfStack_188;
    if ((pfVar1[0x38] == 0.0) && (local_171 != '\0')) {
      FUN_004042e0(&pfStack_188);
      FUN_00565c30();
      local_4 = 8;
      uStack_d0 = 0;
      pfStack_188 = (float *)(*(int *)(param_1 + 0x10c) + 0x14);
      uStack_cf = 0;
      uStack_ce = 0;
      uStack_cd = 0;
      uStack_cc = 0;
      uStack_cb = 0;
      uStack_ca = 1;
      FUN_00565e10(*(int *)(param_1 + 0x10c) + 8);
      if (cStack_58 != '\0') {
        pfStack_188 = &local_16c;
        piVar5 = (int *)FUN_004042e0();
        local_4._0_1_ = 9;
        piStack_13c = piVar5;
        if (*piVar5 == 0) {
          pfStack_188 = (float *)0x0;
          local_168[0] = local_171;
          FUN_004040a0();
          uVar8 = 0xffffffff;
          pfStack_188 = (float *)0x1;
          pcVar14 = &DAT_006b3f70;
          do {
            if (uVar8 == 0) break;
            uVar8 = uVar8 - 1;
            cVar4 = *pcVar14;
            pcVar14 = pcVar14 + 1;
          } while (cVar4 != '\0');
          pfVar9 = (float *)(~uVar8 - 1);
          cVar4 = FUN_00401940(pfVar9);
          if (cVar4 != '\0') {
            puVar12 = (undefined4 *)&DAT_006b3f70;
            puVar15 = puStack_164;
            for (uVar8 = (uint)pfVar9 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
              *puVar15 = *puVar12;
              puVar12 = puVar12 + 1;
              puVar15 = puVar15 + 1;
            }
            for (uVar8 = (uint)pfVar9 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
              *(undefined1 *)puVar15 = *(undefined1 *)puVar12;
              puVar12 = (undefined4 *)((int)puVar12 + 1);
              puVar15 = (undefined4 *)((int)puVar15 + 1);
            }
            pfStack_188 = pfVar9;
            FUN_00404190();
            piVar5 = piStack_13c;
          }
          pfStack_188 = (float *)local_168;
          local_4._0_1_ = 10;
          pcVar6 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6);
          (*pcVar6)();
          local_4._0_1_ = 9;
          pfStack_188 = (float *)0x1;
          FUN_004040a0();
        }
        local_4 = CONCAT31(local_4._1_3_,8);
        iVar13 = *(int *)(*piVar5 + 0x360);
        if ((local_16c != 0.0) &&
           (iVar11 = *(int *)((int)local_16c + 0x14) + -1, *(int *)((int)local_16c + 0x14) = iVar11,
           iVar11 == 0)) {
          pfStack_188 = (float *)0x0;
          FUN_005abfc0();
        }
        if (iVar13 != 0) {
          pfStack_188 = afStack_54;
          FUN_00503fc0(param_2 * *(float *)(*(int *)(param_1 + 0x10c) + 100),param_1);
        }
      }
      fVar2 = pfVar1[0x37];
      while (0.0 < fVar2) {
        pfVar9 = pfVar1 + 0x24;
        pfVar1[0x37] = pfVar1[0x37] - *(float *)(*(int *)(param_1 + 0x10c) + 0x34);
        pfStack_188 = (float *)0x5791d5;
        fVar16 = (float10)FUN_005b30a0();
        if ((float10)*(int *)(*(int *)(param_1 + 0x10c) + 0x20) <= fVar16) {
          pfStack_188 = &fStack_158;
          FUN_005b2fe0();
          pfStack_188 = (float *)0x57923c;
          FUN_005b2f20();
          pfStack_188 = (float *)(float)*(int *)(*(int *)(param_1 + 0x10c) + 0x20);
          FUN_005b2fa0();
          pfStack_188 = &fStack_138;
          FUN_005b3000();
          pfStack_188 = afStack_114;
          FUN_005aae70(pfVar9,&fStack_138,0);
          iVar13 = FUN_0060a4a0();
          pfStack_188 = (float *)(((float)(iVar13 % 10000) * 0.000628318 - 3.14159) *
                                 *(float *)(*(int *)(param_1 + 0x10c) + 0x28));
          FUN_005b31f0();
          pfStack_188 = (float *)0x5792b7;
          iVar13 = FUN_0060a4a0();
          pfStack_188 = (float *)(((float)(iVar13 % 10000) * 0.000628318 - 3.14159) *
                                 *(float *)(*(int *)(param_1 + 0x10c) + 0x28));
          FUN_005b3220();
          pfStack_188 = (float *)0x5792ee;
          iVar13 = FUN_0060a4a0();
          pfStack_188 = (float *)(((float)(iVar13 % 10000) * 0.000628318 - 3.14159) *
                                 *(float *)(*(int *)(param_1 + 0x10c) + 0x28));
          FUN_005b3250();
          pfStack_188 = (float *)0x57932d;
          FUN_005b3670();
          pfStack_188 = (float *)(float)*(int *)(*(int *)(param_1 + 0x10c) + 0x20);
          FUN_005b2fa0();
          pfStack_188 = &fStack_138;
          FUN_005b3000();
        }
        else {
          pfVar1[0x37] = 0.0;
          pfVar1[0x38] = 1.4013e-45;
          pfStack_188 = (float *)0x57920b;
          FUN_005b3050();
          pfStack_188 = afStack_114;
          FUN_005aae70(pfVar9,&fStack_138,0);
        }
        pfStack_188 = (float *)0x579360;
        FUN_005c9470();
        pfStack_188 = (float *)0x57936b;
        FUN_005b3670();
        pfStack_188 = &fStack_148;
        FUN_005b2fe0();
        pfStack_188 = &fStack_148;
        FUN_005b2e60();
        pfStack_188 = (float *)0x579396;
        FUN_005b2f20();
        pfStack_188 = (float *)(*(float *)(*(int *)(param_1 + 0x10c) + 0x24) * 0.5);
        FUN_005b2fa0();
        local_16c = fStack_138 - fStack_148;
        pfVar1[9] = local_16c;
        piStack_13c = (int *)(fStack_134 - fStack_144);
        pfVar1[10] = (float)piStack_13c;
        pfStack_188 = (float *)(fStack_130 - fStack_140);
        pfVar1[0xb] = (float)pfStack_188;
        pfVar1[0x12] = fStack_148 + fStack_138;
        pfVar1[0x13] = fStack_144 + fStack_134;
        pfVar1[0x14] = fStack_140 + fStack_130;
        if (pfVar1[0x33] == 0.0) {
          *pfVar1 = *pfVar9 - fStack_148;
          pfVar1[1] = pfVar1[0x25] - fStack_144;
          pfVar1[2] = pfVar1[0x26] - fStack_140;
          pfVar1[0x1b] = fStack_148 + *pfVar9;
          pfVar1[0x1c] = fStack_144 + pfVar1[0x25];
          pfVar1[0x1d] = fStack_140 + pfVar1[0x26];
        }
        else {
          *pfVar1 = pfVar1[0x27];
          pfVar1[1] = pfVar1[0x28];
          pfVar1[2] = pfVar1[0x29];
          pfVar1[0x1b] = pfVar1[0x2d];
          pfVar1[0x1c] = pfVar1[0x2e];
          pfVar1[0x1d] = pfVar1[0x2f];
        }
        FUN_005b2e20(local_16c,piStack_13c);
        pfStack_188 = (float *)pfVar1[0x14];
        FUN_005b2e20(pfVar1[0x12],pfVar1[0x13]);
        if (*(int *)(param_1 + 0x110) == 0) {
          uVar8 = 0xffffffff;
          pcVar14 = &DAT_006b3f70;
          do {
            if (uVar8 == 0) break;
            uVar8 = uVar8 - 1;
            cVar4 = *pcVar14;
            pcVar14 = pcVar14 + 1;
          } while (cVar4 != '\0');
          uVar8 = ~uVar8 - 1;
          pfStack_188 = (float *)0x1;
          local_168[0] = local_171;
          puStack_164 = (undefined4 *)0x0;
          uStack_160 = 0;
          uStack_15c = 0;
          cVar4 = FUN_00401940(uVar8);
          if (cVar4 != '\0') {
            puVar12 = (undefined4 *)&DAT_006b3f70;
            puVar15 = puStack_164;
            for (uVar10 = uVar8 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
              *puVar15 = *puVar12;
              puVar12 = puVar12 + 1;
              puVar15 = puVar15 + 1;
            }
            for (uVar10 = uVar8 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
              *(undefined1 *)puVar15 = *(undefined1 *)puVar12;
              puVar12 = (undefined4 *)((int)puVar12 + 1);
              puVar15 = (undefined4 *)((int)puVar15 + 1);
            }
            *(undefined1 *)((int)puStack_164 + uVar8) = 0;
            uStack_160 = uVar8;
          }
          pfStack_188 = (float *)local_168;
          local_4._0_1_ = 0xb;
          pcVar6 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6);
          (*pcVar6)();
          local_4 = CONCAT31(local_4._1_3_,8);
          if (puStack_164 != (undefined4 *)0x0) {
            pfStack_188 = (float *)((int)puStack_164 + -1);
            cVar4 = *(char *)((int)puStack_164 + -1);
            if ((cVar4 == '\0') || (cVar4 == -1)) {
              FUN_005fe5f0();
            }
            else {
              *(char *)pfStack_188 = cVar4 + -1;
            }
          }
          puStack_164 = (undefined4 *)0x0;
          uStack_160 = 0;
          uStack_15c = 0;
        }
        pfStack_188 = (float *)0x3f800000;
        uVar7 = FUN_0050aa70(0,8);
        uVar7 = FUN_005b6d60(uStack_12c,pfVar1,4,uVar7);
        pfStack_188 = *(float **)((int)pfVar1[0x35] + (int)pfVar1[0x34] * 4);
        if (pfStack_188 != (float *)0x0) {
          FUN_005b6ee0(uStack_12c);
          pfVar1[0x33] = (float)((int)pfVar1[0x33] + -1);
        }
        *(undefined4 *)((int)pfVar1[0x35] + (int)pfVar1[0x34] * 4) = uVar7;
        *(undefined4 *)((int)pfVar1[0x36] + (int)pfVar1[0x34] * 4) =
             *(undefined4 *)(*(int *)(param_1 + 0x10c) + 0x30);
        fVar2 = pfVar1[0x34];
        pfVar1[0x33] = (float)((int)pfVar1[0x33] + 1);
        pfVar1[0x34] = (float)((int)fVar2 + 1);
        if (*(int *)(*(int *)(param_1 + 0x10c) + 0x2c) <= (int)fVar2 + 1) {
          pfVar1[0x34] = 0.0;
        }
        pfStack_188 = (float *)0x579643;
        FUN_005b3050();
        fVar2 = pfVar1[0x37];
      }
      local_4 = 0xc;
      FUN_005fe5f0();
      uStack_18 = 0;
      uStack_14 = 0;
      uStack_10 = 0;
      FUN_005fe5f0(uStack_28);
      uStack_28 = 0;
      uStack_24 = 0;
      uStack_20 = 0;
      if (iStack_c4 != 0) {
        iVar13 = *(int *)(iStack_c4 + 0x14) + -1;
        *(int *)(iStack_c4 + 0x14) = iVar13;
        if (iVar13 == 0) {
          pfStack_188 = (float *)0x0;
          FUN_005abfc0();
        }
        iStack_c4 = 0;
      }
      local_4 = 0xffffffff;
      pfStack_188 = (float *)0x5796ee;
      FUN_005ab4d0();
    }
    uVar7 = 1;
  }
  else {
    piVar5[1] = (int)((float)piVar5[1] - param_2);
    piVar5 = *(int **)(param_1 + 0x10c);
    if (0.0 < (float)piVar5[1]) goto LAB_00578d27;
LAB_00578d20:
    uVar7 = 0;
  }
  ExceptionList = pvStack_c;
  return uVar7;
}

