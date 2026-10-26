/*
 * FUN_0047ab60 at 0047ab60
 * undefined FUN_0047ab60(void)
 * Address ranges: 0047ab60-0047b157
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0047ab60(void)

{
  char cVar1;
  int *piVar2;
  code *pcVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  float *pfVar9;
  char *pcVar10;
  undefined4 *puVar11;
  int local_10c;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  undefined1 local_e4 [4];
  undefined4 *puStack_e0;
  uint uStack_dc;
  undefined4 uStack_d8;
  int local_d4;
  float *pfStack_d0;
  undefined1 local_cc [16];
  int iStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  float fStack_b0;
  undefined4 uStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 auStack_90 [2];
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  float fStack_1c;
  undefined1 auStack_18 [12];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00628d52;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  piVar2 = (int *)FUN_004042e0(&local_10c);
  local_4 = 0;
  if (*piVar2 == 0) {
    FUN_004040a0(0);
    uVar5 = 0xffffffff;
    pcVar10 = &DAT_006b3f70;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar5 - 1);
    local_4._0_1_ = 1;
    pcVar3 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                  local_e4);
    (*pcVar3)();
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_004040a0(1);
  }
  iVar7 = *piVar2;
  if (*(int *)(iVar7 + 0x5c) == 0) {
    FUN_004040a0(0);
    uVar5 = 0xffffffff;
    pcVar10 = &DAT_006b3f70;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar5 - 1);
    local_4._0_1_ = 2;
    pcVar3 = (code *)FUN_005a07f0(s_m_GenesisWorld_0068e1a8,s___AdamSource_AdamSubLevel_h_0068e1b8,
                                  0x144,local_cc);
    (*pcVar3)();
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_004040a0(1);
  }
  uStack_b8 = *(undefined4 *)(iVar7 + 0x5c);
  local_4 = 0xffffffff;
  if ((local_10c != 0) &&
     (iVar7 = *(int *)(local_10c + 0x14) + -1, *(int *)(local_10c + 0x14) = iVar7, iVar7 == 0)) {
    FUN_005abfc0(0);
  }
  iVar7 = 4;
  puVar8 = auStack_90;
  do {
    uVar4 = *(undefined4 *)(local_d4 + 0x120);
    puVar8[-1] = *(undefined4 *)(local_d4 + 0x118);
    *puVar8 = 0x437f0000;
    puVar8[1] = uVar4;
    local_10c = FUN_005995d0();
    iVar7 = iVar7 + -1;
    puVar8[2] = (float)local_10c;
    puVar8 = puVar8 + 9;
  } while (iVar7 != 0);
  if (DAT_006c8de0 == 0) {
    FUN_0055b280();
  }
  piVar2 = (int *)FUN_00421750(&local_10c);
  local_4 = 3;
  if (*piVar2 == 0) {
    FUN_004040a0(0);
    uVar5 = 0xffffffff;
    pcVar10 = &DAT_006b3f70;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar5 - 1);
    local_4._0_1_ = 4;
    pcVar3 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                  local_cc);
    (*pcVar3)();
    local_4 = CONCAT31(local_4._1_3_,3);
    FUN_004040a0(1);
  }
  iVar7 = *piVar2;
  local_4 = 0xffffffff;
  uStack_b4 = *(undefined4 *)(iVar7 + 0x210);
  fStack_b0 = *(float *)(iVar7 + 0x214);
  uStack_ac = *(undefined4 *)(iVar7 + 0x218);
  if ((local_10c != 0) &&
     (iVar7 = *(int *)(local_10c + 0x14) + -1, *(int *)(local_10c + 0x14) = iVar7, iVar7 == 0)) {
    FUN_005abfc0(0);
  }
  uStack_9c = 0x3f800000;
  uStack_98 = 0;
  uStack_78 = 0;
  uStack_74 = 0;
  uStack_54 = 0;
  pfVar9 = (float *)(local_d4 + 0x54c);
  uStack_50 = 0x3f800000;
  uStack_30 = 0x3f800000;
  uStack_2c = 0x3f800000;
  local_10c = 0x32;
  iVar7 = local_d4;
  do {
    if (*(char *)(pfVar9 + 0x1a) != '\0') {
      fStack_108 = *pfVar9;
      fStack_104 = pfVar9[1];
      fStack_100 = pfVar9[2];
      pfStack_d0 = pfVar9;
      FUN_005b2fe0(auStack_18);
      FUN_00477d50(auStack_18,&fStack_f0,&fStack_fc);
      FUN_005b2fa0(0x40400000);
      FUN_005b2fa0(0x40400000);
      if (fStack_104 < fStack_b0) {
        FUN_005b3080();
        FUN_005b3080();
      }
      fStack_a8 = ((fStack_108 + -0.5) - fStack_f0) + fStack_fc;
      fStack_a4 = ((fStack_104 + 0.5) - fStack_ec) + fStack_f8;
      fStack_a0 = ((fStack_100 + 0.0) - fStack_e8) + fStack_f4;
      fStack_84 = fStack_fc + 0.5 + fStack_f0 + fStack_108;
      fStack_80 = fStack_f8 + fStack_ec + 0.5 + fStack_104;
      fStack_7c = fStack_f4 + fStack_e8 + fStack_100 + 0.0;
      fStack_60 = (fStack_f0 + 0.5 + fStack_108) - fStack_fc;
      fStack_5c = (fStack_ec + -0.5 + fStack_104) - fStack_f8;
      fStack_58 = (fStack_e8 + fStack_100 + 0.0) - fStack_f4;
      fStack_3c = ((fStack_108 + -0.5) - fStack_f0) - fStack_fc;
      fStack_38 = ((fStack_104 + -0.5) - fStack_ec) - fStack_f8;
      fStack_34 = ((fStack_100 + 0.0) - fStack_e8) - fStack_f4;
      iStack_bc = FUN_005995d0();
      fStack_88 = (float)iStack_bc;
      fStack_64 = fStack_88;
      fStack_40 = fStack_88;
      fStack_1c = fStack_88;
      if (*(int *)(iVar7 + 0x108) == 0) {
        uVar5 = 0xffffffff;
        pcVar10 = &DAT_006b3f70;
        do {
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          cVar1 = *pcVar10;
          pcVar10 = pcVar10 + 1;
        } while (cVar1 != '\0');
        uVar5 = ~uVar5 - 1;
        puStack_e0 = (undefined4 *)0x0;
        uStack_dc = 0;
        uStack_d8 = 0;
        cVar1 = FUN_00401940(uVar5,1);
        if (cVar1 != '\0') {
          puVar8 = (undefined4 *)&DAT_006b3f70;
          puVar11 = puStack_e0;
          for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
            *puVar11 = *puVar8;
            puVar8 = puVar8 + 1;
            puVar11 = puVar11 + 1;
          }
          for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
            *(undefined1 *)puVar11 = *(undefined1 *)puVar8;
            puVar8 = (undefined4 *)((int)puVar8 + 1);
            puVar11 = (undefined4 *)((int)puVar11 + 1);
          }
          *(undefined1 *)((int)puStack_e0 + uVar5) = 0;
          pfVar9 = pfStack_d0;
          uStack_dc = uVar5;
        }
        local_4 = 5;
        pcVar3 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                      local_e4);
        (*pcVar3)();
        local_4 = 0xffffffff;
        if (puStack_e0 != (undefined4 *)0x0) {
          cVar1 = *(char *)((int)puStack_e0 + -1);
          if ((cVar1 == '\0') || (cVar1 == -1)) {
            FUN_005fe5f0((char *)((int)puStack_e0 + -1));
          }
          else {
            *(char *)((int)puStack_e0 + -1) = cVar1 + -1;
          }
        }
        puStack_e0 = (undefined4 *)0x0;
        uStack_dc = 0;
        uStack_d8 = 0;
        iVar7 = local_d4;
      }
      uVar4 = FUN_0050aa70(0,1,0);
      FUN_005b6e90(uStack_b8,&fStack_a8,4,uVar4);
    }
    pfVar9 = pfVar9 + 0x51;
    local_10c = local_10c + -1;
    if (local_10c == 0) {
      ExceptionList = pvStack_c;
      return;
    }
  } while( true );
}

