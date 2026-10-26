/*
 * FUN_0045e270 at 0045e270
 * undefined FUN_0045e270(void)
 * Address ranges: 0045e270-0045ea00
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_0045e270(int param_1)

{
  float *pfVar1;
  char cVar2;
  float fVar3;
  int *piVar4;
  code *pcVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  float *pfVar10;
  undefined4 *puVar11;
  int iVar12;
  char *pcVar13;
  undefined4 *puVar14;
  bool bVar15;
  float10 fVar16;
  undefined1 local_175;
  undefined1 local_170 [4];
  undefined4 *puStack_16c;
  uint uStack_168;
  uint uStack_164;
  uint local_160;
  int local_15c;
  undefined1 auStack_158 [12];
  float fStack_14c;
  float fStack_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float fStack_138;
  float local_134;
  float fStack_130;
  float fStack_12c;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined1 auStack_114 [12];
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  undefined1 auStack_c0 [12];
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  undefined1 auStack_a8 [12];
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 auStack_84 [3];
  float fStack_78;
  float fStack_74;
  float fStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 auStack_3c [3];
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00627392;
  local_c = ExceptionList;
  if (*(char *)(param_1 + 0x7c) != '\0') {
    ExceptionList = &local_c;
    local_15c = param_1;
    piVar4 = (int *)FUN_004042e0(&local_160);
    local_4 = 0;
    if (*piVar4 == 0) {
      FUN_004040a0(0);
      uVar8 = 0xffffffff;
      pcVar13 = &DAT_006b3f70;
      do {
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        cVar2 = *pcVar13;
        pcVar13 = pcVar13 + 1;
      } while (cVar2 != '\0');
      FUN_004040f0(&DAT_006b3f70,~uVar8 - 1);
      local_4._0_1_ = 1;
      pcVar5 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                    local_170);
      (*pcVar5)();
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_004040a0(1);
    }
    iVar12 = *piVar4;
    if (*(int *)(iVar12 + 0x5c) == 0) {
      local_134 = (float)CONCAT31(local_134._1_3_,local_175);
      FUN_004040a0(0);
      uVar8 = 0xffffffff;
      pcVar13 = &DAT_006b3f70;
      do {
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        cVar2 = *pcVar13;
        pcVar13 = pcVar13 + 1;
      } while (cVar2 != '\0');
      FUN_004040f0(&DAT_006b3f70,~uVar8 - 1);
      local_4._0_1_ = 2;
      pcVar5 = (code *)FUN_005a07f0(s_m_GenesisWorld_0068e1a8,s___AdamSource_AdamSubLevel_h_0068e1b8
                                    ,0x144,&local_134);
      (*pcVar5)();
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_004040a0(1);
    }
    uStack_124 = *(undefined4 *)(iVar12 + 0x5c);
    local_4 = 0xffffffff;
    if ((local_160 != 0) &&
       (iVar12 = *(int *)(local_160 + 0x14) + -1, *(int *)(local_160 + 0x14) = iVar12, iVar12 == 0))
    {
      FUN_005abfc0(0);
    }
    if (DAT_006c8de0 == 0) {
      FUN_0055b280();
    }
    piVar4 = (int *)FUN_00421750(&local_160);
    local_4 = 3;
    if (*piVar4 == 0) {
      FUN_004040a0(0);
      uVar8 = 0xffffffff;
      pcVar13 = &DAT_006b3f70;
      do {
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        cVar2 = *pcVar13;
        pcVar13 = pcVar13 + 1;
      } while (cVar2 != '\0');
      FUN_004040f0(&DAT_006b3f70,~uVar8 - 1);
      local_4._0_1_ = 4;
      pcVar5 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                    local_170);
      (*pcVar5)();
      local_4 = CONCAT31(local_4._1_3_,3);
      FUN_004040a0(1);
    }
    iVar12 = *piVar4;
    local_4 = 0xffffffff;
    uStack_120 = *(undefined4 *)(iVar12 + 0x210);
    uStack_11c = *(undefined4 *)(iVar12 + 0x214);
    uStack_118 = *(undefined4 *)(iVar12 + 0x218);
    if ((local_160 != 0) &&
       (iVar12 = *(int *)(local_160 + 0x14) + -1, *(int *)(local_160 + 0x14) = iVar12, iVar12 == 0))
    {
      FUN_005abfc0(0);
    }
    pfVar10 = (float *)(param_1 + 0x10c);
    local_160 = 0;
    do {
      uVar8 = local_160;
      if (*(char *)(pfVar10 + 0x1a) != '\0') {
        pfVar1 = pfVar10 + 0x50;
        *pfVar1 = *(float *)(local_15c + 0x159c);
        pfVar10[0x51] = *(float *)(local_15c + 0x15a0);
        pfVar10[0x52] = *(float *)(local_15c + 0x15a4);
        fStack_108 = *pfVar10;
        fStack_104 = pfVar10[1];
        fStack_100 = pfVar10[2];
        FUN_005b2fe0(auStack_158);
        uVar8 = uVar8 & 0x80000001;
        bVar15 = uVar8 == 0;
        if ((int)uVar8 < 0) {
          bVar15 = (uVar8 - 1 | 0xfffffffe) == 0xffffffff;
        }
        if (bVar15) {
          FUN_005b2fe0(auStack_114);
        }
        else {
          fStack_e4 = *pfVar10;
          fStack_e0 = pfVar10[1];
          fStack_dc = pfVar10[2];
        }
        FUN_005b2fe0(auStack_114);
        fVar16 = (float10)FUN_005b2e40();
        FUN_005b2fa0((float)fVar16);
        FUN_005b2fe0(auStack_a8);
        FUN_005b2f20();
        FUN_005b2f20();
        FUN_005b2e60(auStack_c0);
        FUN_005b2f20();
        fVar3 = pfVar10[8] * 10.0 + (1.0 - pfVar10[8]) * 20.0;
        FUN_005b2fa0(fVar3);
        FUN_005b2fa0(fVar3 * 0.25);
        fStack_f0 = *pfVar10;
        fStack_ec = pfVar10[1];
        fStack_9c = fStack_f0 - fStack_140;
        fStack_e8 = pfVar10[2];
        fStack_b4 = *pfVar10;
        fStack_b0 = pfVar10[1];
        fStack_ac = pfVar10[2];
        fStack_d8 = *pfVar10;
        fStack_98 = fStack_b0 - fStack_13c;
        fStack_d4 = pfVar10[1];
        fStack_d0 = pfVar10[2];
        fStack_cc = *pfVar10;
        fStack_94 = fStack_d0 - fStack_138;
        fStack_c8 = pfVar10[1];
        fStack_78 = fStack_cc + fStack_140;
        fStack_c4 = pfVar10[2];
        fStack_fc = *pfVar10;
        uStack_24 = 0;
        fStack_f8 = pfVar10[1];
        fStack_f4 = pfVar10[2];
        uStack_20 = 0;
        local_134 = *pfVar10;
        fStack_74 = fStack_f8 + fStack_13c;
        fStack_130 = pfVar10[1];
        uStack_90 = 0;
        fStack_12c = pfVar10[2];
        uStack_8c = 0x3f800000;
        uStack_6c = 0x3f800000;
        fStack_70 = fStack_12c + fStack_138;
        uStack_68 = 0x3f800000;
        uStack_48 = 0x3f800000;
        uStack_44 = 0;
        iVar12 = 2;
        fStack_54 = fStack_14c + *pfVar1;
        fStack_50 = fStack_148 + pfVar10[0x51];
        fStack_4c = fStack_144 + pfVar10[0x52];
        fStack_30 = *pfVar1 - fStack_14c;
        fStack_2c = pfVar10[0x51] - fStack_148;
        fStack_28 = pfVar10[0x52] - fStack_144;
        puVar11 = auStack_84;
        do {
          puVar11[-1] = 0x437f0000;
          *puVar11 = 0x41c80000;
          puVar11[1] = 0x41c80000;
          iVar6 = FUN_005995d0();
          iVar12 = iVar12 + -1;
          puVar11[2] = (float)iVar6;
          puVar11 = puVar11 + 9;
        } while (iVar12 != 0);
        iVar12 = 2;
        puVar11 = auStack_3c;
        do {
          puVar11[-1] = 0x437f0000;
          *puVar11 = 0x437b0000;
          puVar11[1] = 0x42480000;
          iVar6 = FUN_005995d0();
          iVar12 = iVar12 + -1;
          puVar11[2] = (float)iVar6;
          puVar11 = puVar11 + 9;
        } while (iVar12 != 0);
      }
      if (*(int *)(local_15c + 0xf8) == 0) {
        uVar8 = 0xffffffff;
        pcVar13 = &DAT_006b3f70;
        do {
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          cVar2 = *pcVar13;
          pcVar13 = pcVar13 + 1;
        } while (cVar2 != '\0');
        uVar9 = ~uVar8 - 1;
        puStack_16c = (undefined4 *)0x0;
        uStack_168 = 0;
        uStack_164 = 0;
        uVar8 = FUN_0040ce00();
        if (uVar8 < uVar9) {
          FUN_005fe5fb();
        }
        if (((puStack_16c == (undefined4 *)0x0) ||
            (cVar2 = *(char *)((int)puStack_16c + -1), cVar2 == '\0')) || (cVar2 == -1)) {
          if (uVar9 != 0) {
            if ((0x1f < uStack_164) || (uStack_164 < uVar9)) {
              FUN_004040a0(1);
              goto LAB_0045e90f;
            }
            goto LAB_0045e91d;
          }
          FUN_004040a0(1);
        }
        else if (uVar9 == 0) {
          *(char *)((int)puStack_16c + -1) = cVar2 + -1;
          FUN_004040a0(0);
        }
        else {
LAB_0045e90f:
          FUN_00401a60(uVar9);
LAB_0045e91d:
          puVar11 = (undefined4 *)&DAT_006b3f70;
          puVar14 = puStack_16c;
          for (uVar8 = uVar9 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
            *puVar14 = *puVar11;
            puVar11 = puVar11 + 1;
            puVar14 = puVar14 + 1;
          }
          for (uVar8 = uVar9 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
            *(undefined1 *)puVar14 = *(undefined1 *)puVar11;
            puVar11 = (undefined4 *)((int)puVar11 + 1);
            puVar14 = (undefined4 *)((int)puVar14 + 1);
          }
          *(undefined1 *)((int)puStack_16c + uVar9) = 0;
          uStack_168 = uVar9;
        }
        local_4 = 5;
        pcVar5 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                      local_170);
        (*pcVar5)();
        local_4 = 0xffffffff;
        if (puStack_16c != (undefined4 *)0x0) {
          cVar2 = *(char *)((int)puStack_16c + -1);
          if ((cVar2 == '\0') || (cVar2 == -1)) {
            FUN_005fe5f0((char *)((int)puStack_16c + -1));
          }
          else {
            *(char *)((int)puStack_16c + -1) = cVar2 + -1;
          }
        }
        puStack_16c = (undefined4 *)0x0;
        uStack_168 = 0;
        uStack_164 = 0;
      }
      uVar7 = FUN_0050aa70(0,1,0);
      FUN_005b6e90(uStack_124,&fStack_9c,4,uVar7);
      local_160 = local_160 + 1;
      pfVar10 = pfVar10 + 0x57;
    } while ((int)local_160 < 0xf);
  }
  ExceptionList = local_c;
  return;
}

