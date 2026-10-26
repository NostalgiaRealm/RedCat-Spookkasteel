/*
 * FUN_004742c0 at 004742c0
 * undefined FUN_004742c0(void)
 * Address ranges: 004742c0-00474901
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_004742c0(int param_1)

{
  float fVar1;
  char cVar2;
  int *piVar3;
  code *pcVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  float *pfVar10;
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
  float *pfStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  undefined4 uStack_d8;
  int iStack_d4;
  undefined4 uStack_d0;
  float fStack_cc;
  undefined4 uStack_c8;
  undefined1 local_c4 [16];
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  undefined4 uStack_a8;
  float fStack_a4;
  undefined4 auStack_9c [2];
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  undefined4 uStack_84;
  float fStack_80;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  undefined4 uStack_60;
  float fStack_5c;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  undefined4 uStack_3c;
  float fStack_38;
  float fStack_28;
  undefined1 auStack_24 [12];
  undefined1 auStack_18 [12];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00628722;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  piVar3 = (int *)FUN_004042e0(&local_10c);
  local_4 = 0;
  if (*piVar3 == 0) {
    FUN_004040a0(0);
    uVar7 = 0xffffffff;
    pcVar11 = &DAT_006b3f70;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar2 = *pcVar11;
      pcVar11 = pcVar11 + 1;
    } while (cVar2 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar7 - 1);
    local_4._0_1_ = 1;
    pcVar4 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                  local_108);
    (*pcVar4)();
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_004040a0(1);
  }
  iVar8 = *piVar3;
  if (*(int *)(iVar8 + 0x5c) == 0) {
    FUN_004040a0(0);
    uVar7 = 0xffffffff;
    pcVar11 = &DAT_006b3f70;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar2 = *pcVar11;
      pcVar11 = pcVar11 + 1;
    } while (cVar2 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar7 - 1);
    local_4._0_1_ = 2;
    pcVar4 = (code *)FUN_005a07f0(s_m_GenesisWorld_0068e1a8,s___AdamSource_AdamSubLevel_h_0068e1b8,
                                  0x144,local_c4);
    (*pcVar4)();
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_004040a0(1);
  }
  uStack_d8 = *(undefined4 *)(iVar8 + 0x5c);
  local_4 = 0xffffffff;
  if ((local_10c != (int *)0x0) &&
     (iVar8 = local_10c[5], local_10c[5] = iVar8 + -1, iVar8 + -1 == 0)) {
    FUN_005abfc0(0);
  }
  puVar5 = auStack_9c;
  iVar8 = 4;
  do {
    puVar5[-1] = 0x43520000;
    *puVar5 = 0x43520000;
    puVar5[1] = 0x437f0000;
    puVar5[2] = 0x43340000;
    puVar5 = puVar5 + 9;
    iVar8 = iVar8 + -1;
  } while (iVar8 != 0);
  if (DAT_006c8de0 == 0) {
    FUN_0055b280();
  }
  piVar3 = (int *)FUN_00421750(&pfStack_ec);
  local_4 = 3;
  local_10c = piVar3;
  if (*piVar3 == 0) {
    FUN_004040a0(0);
    uVar7 = 0xffffffff;
    pcVar11 = &DAT_006b3f70;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar2 = *pcVar11;
      pcVar11 = pcVar11 + 1;
    } while (cVar2 != '\0');
    uVar7 = ~uVar7 - 1;
    cVar2 = FUN_00401940(uVar7,1);
    if (cVar2 != '\0') {
      puVar5 = (undefined4 *)&DAT_006b3f70;
      puVar12 = puStack_104;
      for (uVar9 = uVar7 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *puVar12 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar12 = puVar12 + 1;
      }
      for (uVar9 = uVar7 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined1 *)puVar12 = *(undefined1 *)puVar5;
        puVar5 = (undefined4 *)((int)puVar5 + 1);
        puVar12 = (undefined4 *)((int)puVar12 + 1);
      }
      FUN_00404190(uVar7);
      piVar3 = local_10c;
    }
    local_4._0_1_ = 4;
    pcVar4 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                  local_108);
    (*pcVar4)();
    local_4 = CONCAT31(local_4._1_3_,3);
    FUN_004040a0(1);
  }
  iVar8 = *piVar3;
  local_4 = 0xffffffff;
  uStack_d0 = *(undefined4 *)(iVar8 + 0x210);
  fStack_cc = *(float *)(iVar8 + 0x214);
  uStack_c8 = *(undefined4 *)(iVar8 + 0x218);
  if ((pfStack_ec != (float *)0x0) &&
     (fVar1 = pfStack_ec[5], pfStack_ec[5] = (float)((int)fVar1 + -1),
     (float)((int)fVar1 + -1) == 0.0)) {
    FUN_005abfc0(0);
  }
  if (*(char *)(param_1 + 0x149b0) == '\x01') {
    fVar1 = *(float *)(param_1 + 0x149ac) + 0.01;
  }
  else {
    fVar1 = *(float *)(param_1 + 0x149ac) - 0.01;
  }
  *(float *)(param_1 + 0x149ac) = fVar1;
  if (0.03 <= *(float *)(param_1 + 0x149ac)) {
    *(undefined1 *)(param_1 + 0x149b0) = 0;
  }
  fStack_a4 = *(float *)(param_1 + 0x149ac) + 0.03;
  uStack_a8 = 0x3f800000;
  uStack_84 = 0;
  fStack_5c = *(float *)(param_1 + 0x149ac) + 0.97;
  uStack_3c = 0x3f800000;
  uStack_60 = 0;
  if (*(char *)(param_1 + 0x14994) == '\0') {
    if (*(float *)(param_1 + 0x14980) <= *(float *)(param_1 + 0x1480c)) {
      fStack_e8 = *(float *)(param_1 + 0x1480c);
    }
    else {
      fStack_e8 = *(float *)(param_1 + 0x14980);
      *(undefined1 *)(param_1 + 0x14994) = 1;
      *(undefined1 *)(param_1 + 0x149a8) = 1;
    }
  }
  else {
    fStack_e8 = *(float *)(param_1 + 0x14980);
  }
  pfVar10 = (float *)(param_1 + 0x141a0);
  local_10c = (int *)0x5;
  fStack_80 = fStack_a4;
  fStack_38 = fStack_5c;
  do {
    if (*(char *)(pfVar10 + 0x1a) != '\0') {
      fStack_e4 = *pfVar10;
      fStack_e0 = pfVar10[1];
      fStack_dc = pfVar10[2];
      pfStack_ec = pfVar10;
      FUN_005b2fe0(auStack_24);
      FUN_00477d50(auStack_24,&fStack_f8,auStack_18);
      FUN_005b2fa0(0x41a00000);
      if (fStack_e0 < fStack_cc) {
        FUN_005b3080();
      }
      fStack_b4 = (fStack_e4 + -0.5) - fStack_f8;
      fStack_b0 = (*(float *)(param_1 + 0x14974) + 0.5) - fStack_f4;
      fStack_ac = (fStack_dc + 0.0) - fStack_f0;
      fStack_90 = fStack_f8 + 0.5 + fStack_e4;
      fStack_8c = fStack_f4 + *(float *)(param_1 + 0x14974) + 0.5;
      fStack_88 = fStack_f0 + fStack_dc + 0.0;
      fStack_6c = fStack_f8 + 0.5 + fStack_e4;
      fStack_68 = fStack_f4 + -0.5 + fStack_e8;
      fStack_64 = fStack_f0 + fStack_dc + 0.0;
      fStack_48 = (fStack_e4 + -0.5) - fStack_f8;
      fStack_44 = (fStack_e8 + -0.5) - fStack_f4;
      fStack_40 = (fStack_dc + 0.0) - fStack_f0;
      iStack_d4 = FUN_005995d0();
      fStack_94 = (float)iStack_d4;
      fStack_70 = fStack_94;
      fStack_4c = fStack_94;
      fStack_28 = fStack_94;
      if (*(int *)(param_1 + 0x104) == 0) {
        uVar7 = 0xffffffff;
        puStack_104 = (undefined4 *)0x0;
        pcVar11 = &DAT_006b3f70;
        do {
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          cVar2 = *pcVar11;
          pcVar11 = pcVar11 + 1;
        } while (cVar2 != '\0');
        uVar7 = ~uVar7 - 1;
        uStack_100 = 0;
        uStack_fc = 0;
        cVar2 = FUN_00401940(uVar7,1);
        if (cVar2 != '\0') {
          puVar5 = (undefined4 *)&DAT_006b3f70;
          puVar12 = puStack_104;
          for (uVar9 = uVar7 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
            *puVar12 = *puVar5;
            puVar5 = puVar5 + 1;
            puVar12 = puVar12 + 1;
          }
          for (uVar9 = uVar7 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
            *(undefined1 *)puVar12 = *(undefined1 *)puVar5;
            puVar5 = (undefined4 *)((int)puVar5 + 1);
            puVar12 = (undefined4 *)((int)puVar12 + 1);
          }
          *(undefined1 *)((int)puStack_104 + uVar7) = 0;
          pfVar10 = pfStack_ec;
          uStack_100 = uVar7;
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
      uVar6 = FUN_0050aa70(0,1,0);
      FUN_005b6e90(uStack_d8,&fStack_b4,4,uVar6);
    }
    pfVar10 = pfVar10 + 0x51;
    local_10c = (int *)((int)local_10c + -1);
    if (local_10c == (int *)0x0) {
      ExceptionList = pvStack_c;
      return;
    }
  } while( true );
}

