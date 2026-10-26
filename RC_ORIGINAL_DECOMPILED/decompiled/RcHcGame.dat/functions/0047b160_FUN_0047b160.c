/*
 * FUN_0047b160 at 0047b160
 * undefined FUN_0047b160(void)
 * Address ranges: 0047b160-0047b7ba
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_0047b160(int param_1)

{
  float fVar1;
  char cVar2;
  int *piVar3;
  code *pcVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  float *pfVar9;
  int iVar10;
  char *pcVar11;
  undefined4 *puVar12;
  int *local_10c;
  undefined1 local_108 [4];
  undefined4 *puStack_104;
  uint uStack_100;
  undefined4 uStack_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float *pfStack_d4;
  int *piStack_d0;
  int iStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  float fStack_c0;
  undefined4 uStack_bc;
  undefined1 local_b8 [16];
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
  puStack_8 = &LAB_00628da2;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  piVar3 = (int *)FUN_004042e0(&local_10c);
  local_4 = 0;
  if (*piVar3 == 0) {
    FUN_004040a0(0);
    uVar6 = 0xffffffff;
    pcVar11 = &DAT_006b3f70;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar2 = *pcVar11;
      pcVar11 = pcVar11 + 1;
    } while (cVar2 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar6 - 1);
    local_4._0_1_ = 1;
    pcVar4 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                  local_108);
    (*pcVar4)();
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_004040a0(1);
  }
  iVar10 = *piVar3;
  if (*(int *)(iVar10 + 0x5c) == 0) {
    FUN_004040a0(0);
    uVar6 = 0xffffffff;
    pcVar11 = &DAT_006b3f70;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar2 = *pcVar11;
      pcVar11 = pcVar11 + 1;
    } while (cVar2 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar6 - 1);
    local_4._0_1_ = 2;
    pcVar4 = (code *)FUN_005a07f0(s_m_GenesisWorld_0068e1a8,s___AdamSource_AdamSubLevel_h_0068e1b8,
                                  0x144,local_b8);
    (*pcVar4)();
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_004040a0(1);
  }
  uStack_c8 = *(undefined4 *)(iVar10 + 0x5c);
  local_4 = 0xffffffff;
  if ((local_10c != (int *)0x0) &&
     (iVar10 = local_10c[5], local_10c[5] = iVar10 + -1, iVar10 + -1 == 0)) {
    FUN_005abfc0(0);
  }
  iVar10 = 4;
  puVar8 = auStack_90;
  do {
    uVar5 = *(undefined4 *)(param_1 + 0x120);
    puVar8[-1] = *(undefined4 *)(param_1 + 0x118);
    *puVar8 = 0x437f0000;
    puVar8[1] = uVar5;
    local_10c = (int *)FUN_005995d0();
    iVar10 = iVar10 + -1;
    puVar8[2] = (float)(int)local_10c;
    puVar8 = puVar8 + 9;
  } while (iVar10 != 0);
  if (DAT_006c8de0 == 0) {
    FUN_0055b280();
  }
  piVar3 = (int *)FUN_00421750(&pfStack_d4);
  local_4 = 3;
  local_10c = piVar3;
  if (*piVar3 == 0) {
    FUN_004040a0(0);
    uVar6 = 0xffffffff;
    pcVar11 = &DAT_006b3f70;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar2 = *pcVar11;
      pcVar11 = pcVar11 + 1;
    } while (cVar2 != '\0');
    uVar6 = ~uVar6 - 1;
    cVar2 = FUN_00401940(uVar6,1);
    if (cVar2 != '\0') {
      puVar8 = (undefined4 *)&DAT_006b3f70;
      puVar12 = puStack_104;
      for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *puVar12 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar12 = puVar12 + 1;
      }
      for (uVar7 = uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined1 *)puVar12 = *(undefined1 *)puVar8;
        puVar8 = (undefined4 *)((int)puVar8 + 1);
        puVar12 = (undefined4 *)((int)puVar12 + 1);
      }
      FUN_00404190(uVar6);
      piVar3 = local_10c;
    }
    local_4._0_1_ = 4;
    pcVar4 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                  local_108);
    (*pcVar4)();
    local_4 = CONCAT31(local_4._1_3_,3);
    FUN_004040a0(1);
  }
  iVar10 = *piVar3;
  local_4 = 0xffffffff;
  uStack_c4 = *(undefined4 *)(iVar10 + 0x210);
  fStack_c0 = *(float *)(iVar10 + 0x214);
  uStack_bc = *(undefined4 *)(iVar10 + 0x218);
  if ((pfStack_d4 != (float *)0x0) &&
     (fVar1 = pfStack_d4[5], pfStack_d4[5] = (float)((int)fVar1 + -1),
     (float)((int)fVar1 + -1) == 0.0)) {
    FUN_005abfc0(0);
  }
  uStack_9c = 0x3f800000;
  uStack_98 = 0;
  uStack_78 = 0;
  uStack_74 = 0;
  uStack_54 = 0;
  uStack_50 = 0x3f800000;
  piStack_d0 = (int *)(param_1 + 0x378);
  pfVar9 = (float *)(param_1 + 0x4494);
  uStack_30 = 0x3f800000;
  uStack_2c = 0x3f800000;
  local_10c = (int *)0x5;
  do {
    if (*(char *)(pfVar9 + 0x1a) != '\0') {
      fStack_f8 = *pfVar9;
      fStack_f4 = pfVar9[1];
      fStack_f0 = pfVar9[2];
      pfStack_d4 = pfVar9;
      FUN_005b2fe0(auStack_18);
      FUN_00477d50(auStack_18,&fStack_e0,&fStack_ec);
      FUN_005b2fa0(0x40400000);
      FUN_005b2fa0(0x40400000);
      if (fStack_f4 < fStack_c0) {
        FUN_005b3080();
        FUN_005b3080();
      }
      fStack_a8 = ((fStack_f8 + -0.5) - fStack_e0) + fStack_ec;
      fStack_a4 = ((fStack_f4 + 0.5) - fStack_dc) + fStack_e8;
      fStack_a0 = ((fStack_f0 + 0.0) - fStack_d8) + fStack_e4;
      fStack_84 = fStack_ec + 0.5 + fStack_e0 + fStack_f8;
      fStack_80 = fStack_e8 + fStack_dc + 0.5 + fStack_f4;
      fStack_7c = fStack_e4 + fStack_d8 + fStack_f0 + 0.0;
      fStack_60 = (fStack_e0 + 0.5 + fStack_f8) - fStack_ec;
      fStack_5c = (fStack_dc + -0.5 + fStack_f4) - fStack_e8;
      fStack_58 = (fStack_d8 + fStack_f0 + 0.0) - fStack_e4;
      fStack_3c = ((fStack_f8 + -0.5) - fStack_e0) - fStack_ec;
      fStack_38 = ((fStack_f4 + -0.5) - fStack_dc) - fStack_e8;
      fStack_34 = ((fStack_f0 + 0.0) - fStack_d8) - fStack_e4;
      iStack_cc = FUN_005995d0();
      fStack_88 = (float)iStack_cc;
      fStack_64 = fStack_88;
      fStack_40 = fStack_88;
      fStack_1c = fStack_88;
      if (*(int *)(param_1 + 0x108) == 0) {
        puStack_104 = (undefined4 *)0x0;
        uStack_100 = 0;
        uStack_fc = 0;
        uVar6 = 0xffffffff;
        pcVar11 = &DAT_006b3f70;
        do {
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          cVar2 = *pcVar11;
          pcVar11 = pcVar11 + 1;
        } while (cVar2 != '\0');
        uVar6 = ~uVar6 - 1;
        cVar2 = FUN_00401940(uVar6,1);
        if (cVar2 != '\0') {
          puVar8 = (undefined4 *)&DAT_006b3f70;
          puVar12 = puStack_104;
          for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
            *puVar12 = *puVar8;
            puVar8 = puVar8 + 1;
            puVar12 = puVar12 + 1;
          }
          for (uVar7 = uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
            *(undefined1 *)puVar12 = *(undefined1 *)puVar8;
            puVar8 = (undefined4 *)((int)puVar8 + 1);
            puVar12 = (undefined4 *)((int)puVar12 + 1);
          }
          *(undefined1 *)((int)puStack_104 + uVar6) = 0;
          pfVar9 = pfStack_d4;
          uStack_100 = uVar6;
        }
        local_4 = 5;
        pcVar4 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                      local_108);
        (*pcVar4)();
        local_4 = 0xffffffff;
        if (puStack_104 != (undefined4 *)0x0) {
          cVar2 = *(char *)((int)puStack_104 + -1);
          if ((cVar2 == '\0') || (cVar2 == -1)) {
            FUN_005fe5f0((char *)((int)puStack_104 + -1));
          }
          else {
            *(char *)((int)puStack_104 + -1) = cVar2 + -1;
          }
        }
        puStack_104 = (undefined4 *)0x0;
        uStack_100 = 0;
        uStack_fc = 0;
      }
      uVar5 = FUN_0050aa70(0,1,0);
      FUN_005b6e90(uStack_c8,&fStack_a8,4,uVar5);
      if (((int *)*piStack_d0 != (int *)0x0) && (*(char *)(param_1 + 0x4b54) != '\0')) {
        (**(code **)(*(int *)*piStack_d0 + 0xc))();
      }
    }
    piStack_d0 = piStack_d0 + 1;
    pfVar9 = pfVar9 + 0x51;
    local_10c = (int *)((int)local_10c + -1);
    if (local_10c == (int *)0x0) {
      ExceptionList = pvStack_c;
      return;
    }
  } while( true );
}

