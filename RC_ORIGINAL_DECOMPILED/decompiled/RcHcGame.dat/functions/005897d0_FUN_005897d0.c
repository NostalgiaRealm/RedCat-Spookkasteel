/*
 * FUN_005897d0 at 005897d0
 * undefined FUN_005897d0(void)
 * Address ranges: 005897d0-00589ed8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_005897d0(int param_1)

{
  float fVar1;
  char cVar2;
  int *piVar3;
  code *pcVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  char *pcVar10;
  undefined4 *puVar11;
  float *pfVar12;
  float fStack_108;
  int *local_104;
  undefined1 local_100 [4];
  undefined4 *puStack_fc;
  uint uStack_f8;
  undefined4 uStack_f4;
  float *pfStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  undefined1 local_e0 [4];
  undefined4 *puStack_dc;
  uint uStack_d8;
  undefined4 uStack_d4;
  float fStack_d0;
  float fStack_cc;
  int local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  float afStack_b4 [2];
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  undefined4 uStack_9c;
  float fStack_98;
  undefined4 auStack_90 [3];
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  undefined4 uStack_78;
  float fStack_74;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  undefined4 uStack_54;
  float fStack_50;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  undefined4 uStack_30;
  float fStack_2c;
  float fStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00642fbd;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  local_c8 = param_1;
  piVar3 = (int *)FUN_004042e0(&local_104);
  local_4 = 0;
  if (*piVar3 == 0) {
    FUN_004040a0(0);
    uVar7 = 0xffffffff;
    pcVar10 = &DAT_006b3f70;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar2 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar2 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar7 - 1);
    local_4._0_1_ = 1;
    pcVar4 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                  local_100);
    (*pcVar4)();
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_004040a0(1);
  }
  iVar9 = *piVar3;
  if (*(int *)(iVar9 + 0x5c) == 0) {
    FUN_004040a0(0);
    uVar7 = 0xffffffff;
    pcVar10 = &DAT_006b3f70;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar2 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar2 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar7 - 1);
    local_4._0_1_ = 2;
    pcVar4 = (code *)FUN_005a07f0(s_m_GenesisWorld_0068e1a8,s___AdamSource_AdamSubLevel_h_0068e1b8,
                                  0x144,local_e0);
    (*pcVar4)();
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_004040a0(1);
  }
  uStack_c4 = *(undefined4 *)(iVar9 + 0x5c);
  local_4 = 0xffffffff;
  if ((local_104 != (int *)0x0) &&
     (iVar9 = local_104[5], local_104[5] = iVar9 + -1, iVar9 + -1 == 0)) {
    FUN_005abfc0(0);
  }
  if (DAT_006c8de0 == 0) {
    FUN_0055b280();
  }
  piVar3 = (int *)FUN_00421750(&fStack_108);
  local_4 = 3;
  local_104 = piVar3;
  if (*piVar3 == 0) {
    FUN_004040a0(0);
    uVar7 = 0xffffffff;
    pcVar10 = &DAT_006b3f70;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar2 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar2 != '\0');
    uVar7 = ~uVar7 - 1;
    cVar2 = FUN_00401940(uVar7,1);
    if (cVar2 != '\0') {
      puVar5 = (undefined4 *)&DAT_006b3f70;
      puVar11 = puStack_fc;
      for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *puVar11 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar11 = puVar11 + 1;
      }
      for (uVar8 = uVar7 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined1 *)puVar11 = *(undefined1 *)puVar5;
        puVar5 = (undefined4 *)((int)puVar5 + 1);
        puVar11 = (undefined4 *)((int)puVar11 + 1);
      }
      *(undefined1 *)((int)puStack_fc + uVar7) = 0;
      piVar3 = local_104;
      uStack_f8 = uVar7;
    }
    local_4._0_1_ = 4;
    pcVar4 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                  local_100);
    (*pcVar4)();
    local_4 = CONCAT31(local_4._1_3_,3);
    FUN_004040a0(1);
    param_1 = local_c8;
  }
  iVar9 = *piVar3;
  local_4 = 0xffffffff;
  uStack_c0 = *(undefined4 *)(iVar9 + 0x210);
  uStack_bc = *(undefined4 *)(iVar9 + 0x214);
  uStack_b8 = *(undefined4 *)(iVar9 + 0x218);
  if ((fStack_108 != 0.0) &&
     (iVar9 = *(int *)((int)fStack_108 + 0x14) + -1, *(int *)((int)fStack_108 + 0x14) = iVar9,
     iVar9 == 0)) {
    FUN_005abfc0(0);
  }
  puVar5 = auStack_90;
  iVar9 = 4;
  do {
    puVar5[-1] = 0x437f0000;
    *puVar5 = 0x437f0000;
    puVar5[1] = 0x437f0000;
    puVar5[2] = 0x437f0000;
    puVar5 = puVar5 + 9;
    iVar9 = iVar9 + -1;
  } while (iVar9 != 0);
  local_104 = (int *)0x0;
  if (0 < *(int *)(param_1 + 0x22e0) * *(int *)(param_1 + 0x22e4) * *(int *)(param_1 + 0x22e8)) {
    pfStack_f0 = (float *)(param_1 + 0x114);
    do {
      if (*(char *)(pfStack_f0 + 10) != '\0') {
        fStack_d0 = pfStack_f0[0xb];
        fStack_108 = (float)(((int)fStack_d0 + 1) * ((int)fStack_d0 + 1));
        fStack_cc = (float)(int)fStack_108 * 3.0;
        if (*(int *)(param_1 + 0xfc + (int)fStack_d0 * 4) == 0) {
          uVar7 = 0xffffffff;
          pcVar10 = &DAT_006b3f70;
          do {
            if (uVar7 == 0) break;
            uVar7 = uVar7 - 1;
            cVar2 = *pcVar10;
            pcVar10 = pcVar10 + 1;
          } while (cVar2 != '\0');
          uVar7 = ~uVar7 - 1;
          puStack_fc = (undefined4 *)0x0;
          uStack_f8 = 0;
          uStack_f4 = 0;
          cVar2 = FUN_00401940(uVar7,1);
          if (cVar2 != '\0') {
            puVar5 = (undefined4 *)&DAT_006b3f70;
            puVar11 = puStack_fc;
            for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
              *puVar11 = *puVar5;
              puVar5 = puVar5 + 1;
              puVar11 = puVar11 + 1;
            }
            for (uVar8 = uVar7 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
              *(undefined1 *)puVar11 = *(undefined1 *)puVar5;
              puVar5 = (undefined4 *)((int)puVar5 + 1);
              puVar11 = (undefined4 *)((int)puVar11 + 1);
            }
            FUN_00404190(uVar7);
          }
          local_4 = 5;
          pcVar4 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                        local_100);
          (*pcVar4)();
          local_4 = 0xffffffff;
          if (puStack_fc != (undefined4 *)0x0) {
            cVar2 = *(char *)((int)puStack_fc + -1);
            if ((cVar2 == '\0') || (cVar2 == -1)) {
              FUN_005fe5f0((char *)((int)puStack_fc + -1));
            }
            else {
              *(char *)((int)puStack_fc + -1) = cVar2 + -1;
            }
          }
          puStack_fc = (undefined4 *)0x0;
          uStack_f8 = 0;
          uStack_f4 = 0;
          param_1 = local_c8;
        }
        uVar6 = FUN_0050aa70();
        pfVar12 = pfStack_f0;
        FUN_005b2fe0(afStack_b4);
        fStack_e4 = -afStack_b4[0];
        fStack_ec = fStack_ac;
        fStack_e8 = 0.0;
        FUN_005b2f20();
        FUN_005b2fa0(fStack_cc);
        fVar1 = fStack_cc * *(float *)(param_1 + 0x22ec);
        fStack_14 = fVar1;
        if (*(char *)(param_1 + 0x2300) != '\0') {
          if (*(int *)(param_1 + 0x110) == 0) {
            uVar7 = 0xffffffff;
            pcVar10 = &DAT_006b3f70;
            do {
              if (uVar7 == 0) break;
              uVar7 = uVar7 - 1;
              cVar2 = *pcVar10;
              pcVar10 = pcVar10 + 1;
            } while (cVar2 != '\0');
            uVar7 = ~uVar7 - 1;
            puStack_dc = (undefined4 *)0x0;
            uStack_d8 = 0;
            uStack_d4 = 0;
            cVar2 = FUN_00401940(uVar7,1);
            if (cVar2 != '\0') {
              puVar5 = (undefined4 *)&DAT_006b3f70;
              puVar11 = puStack_dc;
              for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
                *puVar11 = *puVar5;
                puVar5 = puVar5 + 1;
                puVar11 = puVar11 + 1;
              }
              for (uVar8 = uVar7 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
                *(undefined1 *)puVar11 = *(undefined1 *)puVar5;
                puVar5 = (undefined4 *)((int)puVar5 + 1);
                puVar11 = (undefined4 *)((int)puVar11 + 1);
              }
              *(undefined1 *)((int)puStack_dc + uVar7) = 0;
              uStack_d8 = uVar7;
            }
            local_4 = 6;
            pcVar4 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6
                                          ,local_e0);
            (*pcVar4)();
            local_4 = 0xffffffff;
            if (puStack_dc != (undefined4 *)0x0) {
              cVar2 = *(char *)((int)puStack_dc + -1);
              if ((cVar2 == '\0') || (cVar2 == -1)) {
                FUN_005fe5f0((char *)((int)puStack_dc + -1));
              }
              else {
                *(char *)((int)puStack_dc + -1) = cVar2 + -1;
              }
            }
            puStack_dc = (undefined4 *)0x0;
            uStack_d8 = 0;
            uStack_d4 = 0;
            param_1 = local_c8;
            pfVar12 = pfStack_f0;
          }
          uVar6 = FUN_0050aa70();
          fVar1 = fStack_14 * 8.0;
        }
        fStack_a8 = fStack_ec + *pfVar12;
        uStack_9c = 0;
        uStack_78 = 0x3f800000;
        fStack_74 = 0.0;
        uStack_54 = 0x3f800000;
        uStack_30 = 0;
        fStack_2c = 1.0;
        fStack_a4 = fVar1 + fStack_e8 + pfVar12[1];
        fStack_a0 = fStack_e4 + pfVar12[2];
        fStack_84 = *pfVar12 - fStack_ec;
        fStack_108 = pfVar12[1] - fStack_e8;
        fStack_80 = fStack_108 + fVar1;
        fStack_d0 = pfVar12[2] - fStack_e4;
        fStack_5c = fStack_108 - fVar1;
        fStack_3c = fStack_ec + *pfVar12;
        fStack_38 = (fStack_e8 + pfVar12[1]) - fVar1;
        fStack_34 = fStack_e4 + pfVar12[2];
        if (fStack_5c < pfVar12[9]) {
          fVar1 = (fStack_5c - pfVar12[9]) / (fStack_cc * 4.0);
          if (fVar1 < 0.0) {
            fVar1 = fVar1 * -1.0;
          }
          fStack_5c = pfVar12[9];
          fStack_2c = 1.0 - fVar1;
          fStack_38 = fStack_5c;
          if (*(char *)(param_1 + 0x2300) != '\0') {
            fStack_2c = 1.0;
            fStack_74 = fVar1;
          }
        }
        fStack_98 = fStack_74;
        fStack_7c = fStack_d0;
        fStack_60 = fStack_84;
        fStack_58 = fStack_d0;
        fStack_50 = fStack_2c;
        FUN_005b6e90(uStack_c4,&fStack_a8,4,uVar6,0,1,0x3f800000);
      }
      local_104 = (int *)((int)local_104 + 1);
      pfStack_f0 = pfStack_f0 + 0xc;
    } while ((int)local_104 <
             *(int *)(param_1 + 0x22e0) * *(int *)(param_1 + 0x22e4) * *(int *)(param_1 + 0x22e8));
  }
  *(undefined1 *)(param_1 + 0x2300) = 0;
  ExceptionList = pvStack_c;
  return;
}

