/*
 * FUN_00587550 at 00587550
 * undefined FUN_00587550(void)
 * Address ranges: 00587550-00587d40
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_00587550(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  char cVar3;
  code *pcVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  undefined4 *puVar8;
  float *pfVar9;
  float *pfVar10;
  int iVar11;
  uint uVar12;
  float *pfVar13;
  float fVar14;
  undefined4 uVar15;
  char *pcVar16;
  float *pfStack_13c;
  char cStack_125;
  float fStack_120;
  int iStack_11c;
  float *pfStack_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  char acStack_108 [4];
  undefined4 *puStack_104;
  undefined1 *puStack_f8;
  int local_f4;
  int iStack_f0;
  int local_ec;
  float *pfStack_e8;
  undefined1 local_e4 [16];
  char acStack_d4 [16];
  char acStack_c4 [16];
  float afStack_b4 [6];
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 auStack_84 [2];
  float fStack_7c;
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
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00642d79;
  pvStack_c = ExceptionList;
  local_ec = (*(char *)(param_1 + 0x38) != '\0') + 1;
  local_f4 = -1;
  ExceptionList = &pvStack_c;
  if (*(int *)(param_1 + 0x34) == 0) {
    pfStack_13c = *(float **)(param_1 + 0x28);
    if (pfStack_13c == (float *)0x0) {
      pfStack_13c = (float *)&DAT_0064a3b4;
    }
    ExceptionList = &pvStack_c;
    pfStack_13c = (float *)FUN_005ae390(local_e4,s_CAdamEffectTexturedTrail__DoOnRe_006a6074);
    local_4 = 0;
    pcVar4 = (code *)FUN_005a07f0(s_m_SubLevel_IsNotNull___0068d76c,
                                  s_D__Work_RCHorror_AdamSource_Adam_006a5ef4,0xd7);
    (*pcVar4)();
    local_4 = 0xffffffff;
    pfStack_13c = (float *)0x1;
    FUN_004040a0();
  }
  pfStack_13c = (float *)0x5875ec;
  iVar5 = FUN_00586d70();
  if (1 < iVar5) {
    if (*(int *)(param_1 + 0x5c) == 0) {
      iVar5 = DAT_006c8de0;
      if (DAT_006c8de0 == 0) {
        pfStack_13c = (float *)0x58760f;
        iVar5 = FUN_0055b280();
      }
      if (*(int *)(iVar5 + 0xd8) == 0) {
        pfStack_13c = (float *)0x0;
        acStack_108[0] = cStack_125;
        FUN_004040a0();
        uVar12 = 0xffffffff;
        pcVar16 = &DAT_006b3f70;
        do {
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          cVar3 = *pcVar16;
          pcVar16 = pcVar16 + 1;
        } while (cVar3 != '\0');
        pfStack_13c = (float *)(~uVar12 - 1);
        FUN_004040f0(&DAT_006b3f70);
        pfStack_13c = (float *)acStack_108;
        local_4 = 1;
        pcVar4 = (code *)FUN_005a07f0(s_m_BitmapMgr_0068eb4c,s___AdamSource_AdamEngine_h_0068eb58,
                                      0x188);
        (*pcVar4)();
        local_4 = 0xffffffff;
        pfStack_13c = (float *)0x1;
        FUN_004040a0();
      }
      pfStack_13c = (float *)&DAT_006c91e0;
      piVar6 = (int *)FUN_0050d730(&fStack_120);
      iVar5 = *(int *)(param_1 + 0x5c);
      local_4 = 2;
      if (iVar5 != *piVar6) {
        if ((iVar5 != 0) &&
           (iVar7 = *(int *)(iVar5 + 0x14) + -1, *(int *)(iVar5 + 0x14) = iVar7, iVar7 == 0)) {
          pfStack_13c = (float *)0x0;
          FUN_005abfc0();
        }
        iVar5 = *piVar6;
        *(int *)(param_1 + 0x5c) = iVar5;
        if (iVar5 != 0) {
          *(int *)(iVar5 + 0x14) = *(int *)(iVar5 + 0x14) + 1;
        }
      }
      local_4 = 0xffffffff;
      if (fStack_120 != 0.0) {
        pfStack_13c = (float *)0x5876ee;
        FUN_004098d0();
      }
    }
    pfStack_13c = *(float **)(param_1 + 0x5c);
    if (pfStack_13c != (float *)0x0) {
      puStack_f8 = (undefined1 *)&pfStack_13c;
      pfStack_13c[5] = (float)((int)pfStack_13c[5] + 1);
      local_4 = 0xffffffff;
      FUN_00421430();
      cVar3 = FUN_004fbca0();
      if (cVar3 == '\0') {
        pfStack_13c = *(float **)(param_1 + 0x5c);
        if (pfStack_13c != (float *)0x0) {
          pfStack_13c[5] = (float)((int)pfStack_13c[5] + 1);
        }
        local_4 = 0xffffffff;
        puStack_f8 = (undefined1 *)&pfStack_13c;
        FUN_00421430();
        cVar3 = FUN_004fb310();
        if (cVar3 == '\0') {
          pfStack_13c = (float *)0x0;
          acStack_108[0] = cStack_125;
          FUN_004040a0();
          uVar12 = 0xffffffff;
          pfStack_13c = (float *)0x1;
          pcVar16 = &DAT_006b3f70;
          do {
            if (uVar12 == 0) break;
            uVar12 = uVar12 - 1;
            cVar3 = *pcVar16;
            pcVar16 = pcVar16 + 1;
          } while (cVar3 != '\0');
          pfVar13 = (float *)(~uVar12 - 1);
          cVar3 = FUN_00401940(pfVar13);
          if (cVar3 != '\0') {
            puVar8 = (undefined4 *)&DAT_006b3f70;
            for (uVar12 = (uint)pfVar13 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
              *puStack_104 = *puVar8;
              puVar8 = puVar8 + 1;
              puStack_104 = puStack_104 + 1;
            }
            for (uVar12 = (uint)pfVar13 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *(undefined1 *)puStack_104 = *(undefined1 *)puVar8;
              puVar8 = (undefined4 *)((int)puVar8 + 1);
              puStack_104 = (undefined4 *)((int)puStack_104 + 1);
            }
            pfStack_13c = pfVar13;
            FUN_00404190();
          }
          pfStack_13c = (float *)acStack_108;
          local_4 = 5;
          pcVar4 = (code *)FUN_005a07f0(s_result_00691bc0,
                                        s_D__Work_RCHorror_AdamSource_Adam_006a5ef4,0xeb);
          (*pcVar4)();
          local_4 = 0xffffffff;
          pfStack_13c = (float *)0x1;
          FUN_004040a0();
        }
      }
    }
    iStack_11c = 0;
    local_4 = 6;
    if (DAT_006c8de0 == 0) {
      pfStack_13c = (float *)0x58780e;
      FUN_0055b280();
    }
    pfStack_13c = &fStack_120;
    piVar6 = (int *)FUN_00421750();
    iVar5 = *piVar6;
    iVar7 = 0;
    if (iVar5 != 0) {
      *(int *)(iVar5 + 0x14) = *(int *)(iVar5 + 0x14) + 1;
      iVar7 = iVar5;
      iStack_11c = iVar5;
    }
    local_4 = CONCAT31(local_4._1_3_,6);
    if ((fStack_120 != 0.0) &&
       (iVar5 = *(int *)((int)fStack_120 + 0x14) + -1, *(int *)((int)fStack_120 + 0x14) = iVar5,
       iVar5 == 0)) {
      pfStack_13c = (float *)0x0;
      FUN_005abfc0();
    }
    if (iVar7 != 0) {
      pfStack_13c = (float *)0x58786f;
      FUN_005b3670();
      pfStack_13c = (float *)0x587876;
      iVar5 = FUN_00586e90();
      iStack_f0 = *(int *)(iVar5 + 0xc);
      uStack_90 = 0x3f800000;
      uStack_8c = 0x3f800000;
      uStack_6c = 0x3f800000;
      uStack_68 = 0;
      uStack_48 = 0;
      uStack_44 = 0;
      uStack_24 = 0;
      uStack_20 = 0x3f800000;
      puVar8 = auStack_84;
      iVar5 = 4;
      do {
        puVar8[-1] = *(undefined4 *)(param_1 + 0x40);
        *puVar8 = *(undefined4 *)(param_1 + 0x44);
        puVar8[1] = *(undefined4 *)(param_1 + 0x48);
        puVar8 = puVar8 + 9;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
      pfVar13 = (float *)0x1;
      pfStack_118 = (float *)0x1;
      pfStack_13c = (float *)0x587908;
      iVar5 = FUN_00586d70();
      if (1 < iVar5) {
        do {
          pfStack_13c = (float *)((int)pfVar13 + -1);
          pfVar9 = (float *)FUN_00586d90();
          pfStack_13c = pfVar13;
          pfVar10 = (float *)FUN_00586d90();
          pfStack_13c = afStack_b4;
          FUN_005b2fe0();
          pfStack_13c = &fStack_114;
          FUN_005b2e60();
          pfStack_13c = (float *)0x587959;
          FUN_005b2f20();
          pfStack_13c = *(float **)(param_1 + 0x3c);
          FUN_005b2fa0();
          fStack_9c = *pfVar10 - fStack_114;
          pfStack_e8 = &fStack_7c;
          cStack_125 = '\0';
          fStack_120 = 5.60519e-45;
          fStack_98 = pfVar10[1] - fStack_110;
          fStack_94 = pfVar10[2] - fStack_10c;
          fStack_78 = fStack_114 + *pfVar10;
          fStack_74 = fStack_110 + pfVar10[1];
          fStack_70 = fStack_10c + pfVar10[2];
          fStack_54 = fStack_114 + *pfVar9;
          fStack_50 = fStack_110 + pfVar9[1];
          fStack_4c = fStack_10c + pfVar9[2];
          fStack_30 = *pfVar9 - fStack_114;
          fStack_2c = pfVar9[1] - fStack_110;
          fStack_28 = pfVar9[2] - fStack_10c;
          do {
            if ((*(int *)(param_1 + 0x58) == -1) || (*(int *)(param_1 + 0x58) == 0)) {
              fVar14 = 255.0;
            }
            else {
              if ((int)pfVar13 < 2) {
                fVar14 = pfVar10[3];
              }
              else {
                fVar14 = pfVar9[3];
              }
              if ((iStack_f0 == -1) || (fVar14 == -NAN)) {
                iVar5 = 0;
              }
              else {
                if (iStack_f0 < (int)fVar14) {
                  pfStack_13c = (float *)0x0;
                  acStack_108[0] = cStack_125;
                  FUN_004040a0();
                  uVar12 = 0xffffffff;
                  pcVar16 = &DAT_006b3f70;
                  do {
                    if (uVar12 == 0) break;
                    uVar12 = uVar12 - 1;
                    cVar3 = *pcVar16;
                    pcVar16 = pcVar16 + 1;
                  } while (cVar3 != '\0');
                  pfStack_13c = (float *)(~uVar12 - 1);
                  FUN_004040f0(&DAT_006b3f70);
                  pfStack_13c = (float *)acStack_108;
                  local_4._0_1_ = 9;
                  pcVar4 = (code *)FUN_005a07f0(s_a_Now_>__a_Then_006934d0,
                                                s___AdamSource_AdamClock_h_0068e22c,0x7d);
                  (*pcVar4)();
                  local_4 = CONCAT31(local_4._1_3_,6);
                  pfStack_13c = (float *)0x1;
                  FUN_004040a0();
                  pfVar13 = pfStack_118;
                }
                iVar5 = iStack_f0 - (int)fVar14;
              }
              puStack_f8 = *(undefined1 **)(param_1 + 0x58);
              if ((int)puStack_f8 < iVar5) {
                fVar14 = 0.0;
              }
              else {
                fVar14 = (1.0 - (float)iVar5 / (float)(int)puStack_f8) * 255.0;
              }
            }
            fVar14 = fVar14 * *(float *)(param_1 + 0x60) * 0.003921569;
            if (5.0 < fVar14) {
              cStack_125 = '\x01';
            }
            *pfStack_e8 = fVar14;
            pfStack_e8 = pfStack_e8 + 9;
            fStack_120 = (float)((int)fStack_120 + -1);
          } while (fStack_120 != 0.0);
          if (cStack_125 != '\0') {
            if (*(int *)(param_1 + 0x5c) == 0) {
              uVar15 = 0;
            }
            else {
              pfStack_13c = (float *)0x587b6d;
              uVar15 = FUN_0050aa70();
            }
            if (*(int *)(param_1 + 0x34) == 0) {
              pfStack_13c = (float *)0x0;
              acStack_c4[0] = cStack_125;
              FUN_004040a0();
              uVar12 = 0xffffffff;
              pcVar16 = &DAT_006b3f70;
              do {
                if (uVar12 == 0) break;
                uVar12 = uVar12 - 1;
                cVar3 = *pcVar16;
                pcVar16 = pcVar16 + 1;
              } while (cVar3 != '\0');
              pfStack_13c = (float *)(~uVar12 - 1);
              FUN_004040f0(&DAT_006b3f70);
              pfStack_13c = (float *)acStack_c4;
              local_4._0_1_ = 0xb;
              pcVar4 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,
                                            0xb6);
              (*pcVar4)();
              local_4 = CONCAT31(local_4._1_3_,6);
              pfStack_13c = (float *)0x1;
              FUN_004040a0();
              pfVar13 = pfStack_118;
            }
            iVar5 = *(int *)(param_1 + 0x34);
            if (*(int *)(iVar5 + 0x5c) == 0) {
              pfStack_13c = (float *)0x0;
              acStack_d4[0] = cStack_125;
              FUN_004040a0();
              uVar12 = 0xffffffff;
              pcVar16 = &DAT_006b3f70;
              do {
                if (uVar12 == 0) break;
                uVar12 = uVar12 - 1;
                cVar3 = *pcVar16;
                pcVar16 = pcVar16 + 1;
              } while (cVar3 != '\0');
              pfStack_13c = (float *)(~uVar12 - 1);
              FUN_004040f0(&DAT_006b3f70);
              pfStack_13c = (float *)acStack_d4;
              local_4._0_1_ = 0xc;
              pcVar4 = (code *)FUN_005a07f0(s_m_GenesisWorld_0068e1a8,
                                            s___AdamSource_AdamSubLevel_h_0068e1b8,0x144);
              (*pcVar4)();
              local_4 = CONCAT31(local_4._1_3_,6);
              pfStack_13c = (float *)0x1;
              FUN_004040a0();
              pfVar13 = pfStack_118;
            }
            pfStack_13c = (float *)0x3f800000;
            FUN_005b6e90(*(undefined4 *)(iVar5 + 0x5c),&fStack_9c,4,uVar15,
                         *(int *)(param_1 + 0x5c) == 0,local_ec);
            if (local_f4 == -1) {
              local_f4 = (int)pfVar13 + -1;
            }
          }
          pfVar13 = (float *)((int)pfVar13 + 1);
          pfStack_13c = (float *)0x587ca4;
          pfStack_118 = pfVar13;
          iVar5 = FUN_00586d70();
          iVar7 = iStack_11c;
        } while ((int)pfVar13 < iVar5);
      }
      iVar5 = local_f4;
      if (0 < local_f4) {
        pfStack_13c = (float *)0x587cc1;
        iVar11 = FUN_00586d70();
        if (2 < iVar11 - iVar5) {
          puVar1 = *(undefined4 **)(param_1 + 0x1c);
          puVar2 = *(undefined4 **)(param_1 + 0x18);
          for (puVar8 = *(undefined4 **)(param_1 + 0x18) + iVar5 * 4 + -4; puVar8 != puVar1;
              puVar8 = puVar8 + 4) {
            *puVar2 = *puVar8;
            puVar2[1] = puVar8[1];
            puVar2[2] = puVar8[2];
            puVar2[3] = puVar8[3];
            puVar2 = puVar2 + 4;
            iVar7 = iStack_11c;
          }
          local_ec = *(int *)(param_1 + 0x1c);
          *(undefined4 **)(param_1 + 0x1c) = puVar2;
        }
      }
      local_4 = 0xffffffff;
      iVar5 = *(int *)(iVar7 + 0x14) + -1;
      *(int *)(iVar7 + 0x14) = iVar5;
      if (iVar5 == 0) {
        pfStack_13c = (float *)0x0;
        FUN_005abfc0();
      }
    }
  }
  ExceptionList = pvStack_c;
  return;
}

