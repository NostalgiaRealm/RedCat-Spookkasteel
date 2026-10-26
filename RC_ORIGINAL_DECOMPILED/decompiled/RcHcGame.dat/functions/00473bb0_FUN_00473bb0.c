/*
 * FUN_00473bb0 at 00473bb0
 * undefined FUN_00473bb0(void)
 * Address ranges: 00473bb0-004742bb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_00473bb0(int param_1)

{
  float fVar1;
  char cVar2;
  int *piVar3;
  code *pcVar4;
  float *pfVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  char *pcVar12;
  undefined4 *puVar13;
  bool bVar14;
  float *local_108;
  undefined1 local_104 [4];
  undefined4 *puStack_100;
  undefined4 uStack_fc;
  uint uStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  uint uStack_d0;
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
  puStack_8 = &LAB_006286d2;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  piVar3 = (int *)FUN_004042e0(&local_108);
  local_4 = 0;
  if (*piVar3 == 0) {
    FUN_004040a0(0);
    uVar8 = 0xffffffff;
    pcVar12 = &DAT_006b3f70;
    do {
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      cVar2 = *pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (cVar2 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar8 - 1);
    local_4._0_1_ = 1;
    pcVar4 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                  local_104);
    (*pcVar4)();
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_004040a0(1);
  }
  iVar11 = *piVar3;
  if (*(int *)(iVar11 + 0x5c) == 0) {
    FUN_004040a0(0);
    uVar8 = 0xffffffff;
    pcVar12 = &DAT_006b3f70;
    do {
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      cVar2 = *pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (cVar2 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar8 - 1);
    local_4._0_1_ = 2;
    pcVar4 = (code *)FUN_005a07f0(s_m_GenesisWorld_0068e1a8,s___AdamSource_AdamSubLevel_h_0068e1b8,
                                  0x144,local_b8);
    (*pcVar4)();
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_004040a0(1);
  }
  uStack_c8 = *(undefined4 *)(iVar11 + 0x5c);
  local_4 = 0xffffffff;
  if ((local_108 != (float *)0x0) &&
     (fVar1 = local_108[5], local_108[5] = (float)((int)fVar1 + -1), (float)((int)fVar1 + -1) == 0.0
     )) {
    FUN_005abfc0(0);
  }
  iVar11 = 4;
  puVar6 = auStack_90;
  do {
    uVar7 = *(undefined4 *)(param_1 + 0x120);
    puVar6[-1] = *(undefined4 *)(param_1 + 0x118);
    *puVar6 = 0x41a00000;
    puVar6[1] = uVar7;
    local_108 = (float *)FUN_005995d0();
    iVar11 = iVar11 + -1;
    puVar6[2] = (float)(int)local_108;
    puVar6 = puVar6 + 9;
  } while (iVar11 != 0);
  if (DAT_006c8de0 == 0) {
    FUN_0055b280();
  }
  pfVar5 = (float *)FUN_00421750(&uStack_d0);
  local_4 = 3;
  local_108 = pfVar5;
  if (*pfVar5 == 0.0) {
    FUN_004040a0(0);
    uVar8 = 0xffffffff;
    pcVar12 = &DAT_006b3f70;
    do {
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      cVar2 = *pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (cVar2 != '\0');
    uVar8 = ~uVar8 - 1;
    cVar2 = FUN_00401940(uVar8,1);
    if (cVar2 != '\0') {
      puVar6 = (undefined4 *)&DAT_006b3f70;
      puVar13 = puStack_100;
      for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *puVar13 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar13 = puVar13 + 1;
      }
      for (uVar9 = uVar8 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined1 *)puVar13 = *(undefined1 *)puVar6;
        puVar6 = (undefined4 *)((int)puVar6 + 1);
        puVar13 = (undefined4 *)((int)puVar13 + 1);
      }
      FUN_00404190(uVar8);
      pfVar5 = local_108;
    }
    local_4._0_1_ = 4;
    pcVar4 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                  local_104);
    (*pcVar4)();
    local_4 = CONCAT31(local_4._1_3_,3);
    FUN_004040a0(1);
  }
  fVar1 = *pfVar5;
  local_4 = 0xffffffff;
  uStack_c4 = *(undefined4 *)((int)fVar1 + 0x210);
  fStack_c0 = *(float *)((int)fVar1 + 0x214);
  uStack_bc = *(undefined4 *)((int)fVar1 + 0x218);
  if ((uStack_d0 != 0) &&
     (iVar11 = *(int *)(uStack_d0 + 0x14) + -1, *(int *)(uStack_d0 + 0x14) = iVar11, iVar11 == 0)) {
    FUN_005abfc0(0);
  }
  uStack_9c = 0x3f800000;
  uStack_98 = 0;
  uStack_78 = 0;
  uStack_74 = 0;
  uStack_54 = 0;
  pfVar5 = (float *)(param_1 + 0x538);
  uStack_50 = 0x3f800000;
  uStack_30 = 0x3f800000;
  uStack_2c = 0x3f800000;
  uStack_d0 = 0;
  do {
    uVar8 = uStack_d0;
    if (*(char *)(pfVar5 + 0x1a) != '\0') {
      uVar9 = uStack_d0 & 0x80000001;
      bVar14 = uVar9 == 0;
      if ((int)uVar9 < 0) {
        bVar14 = (uVar9 - 1 | 0xfffffffe) == 0xffffffff;
      }
      if (bVar14) {
        if ((int)uStack_d0 % 3 == 0) {
          puVar6 = auStack_90;
          iVar11 = 4;
          do {
            puVar6[-1] = 0x41a00000;
            *puVar6 = *(undefined4 *)(param_1 + 0x11c);
            puVar6[1] = *(undefined4 *)(param_1 + 0x120);
            puVar6 = puVar6 + 9;
            iVar11 = iVar11 + -1;
          } while (iVar11 != 0);
        }
      }
      else if ((int)uStack_d0 % 3 == 0) {
        puVar6 = auStack_90;
        iVar11 = 4;
        do {
          puVar6[-1] = 0x41a00000;
          *puVar6 = *(undefined4 *)(param_1 + 0x120);
          puVar6[1] = *(undefined4 *)(param_1 + 0x11c);
          puVar6 = puVar6 + 9;
          iVar11 = iVar11 + -1;
        } while (iVar11 != 0);
      }
      fStack_f4 = *pfVar5;
      fStack_f0 = pfVar5[1];
      fStack_ec = pfVar5[2];
      local_108 = pfVar5;
      FUN_005b2fe0(auStack_18);
      FUN_00477d50(auStack_18,&fStack_e8,&fStack_dc);
      FUN_005b2fa0(0x40800000);
      FUN_005b2fa0(0x40800000);
      if (fStack_f0 < fStack_c0) {
        FUN_005b3080();
        FUN_005b3080();
      }
      fStack_a8 = ((fStack_f4 + -0.5) - fStack_e8) + fStack_dc;
      fStack_a4 = ((fStack_f0 + 0.5) - fStack_e4) + fStack_d8;
      fStack_a0 = ((fStack_ec + 0.0) - fStack_e0) + fStack_d4;
      fStack_84 = fStack_dc + 0.5 + fStack_e8 + fStack_f4;
      fStack_80 = fStack_d8 + fStack_e4 + 0.5 + fStack_f0;
      fStack_7c = fStack_d4 + fStack_e0 + fStack_ec + 0.0;
      fStack_60 = (fStack_e8 + 0.5 + fStack_f4) - fStack_dc;
      fStack_5c = (fStack_e4 + -0.5 + fStack_f0) - fStack_d8;
      fStack_58 = (fStack_e0 + fStack_ec + 0.0) - fStack_d4;
      fStack_3c = ((fStack_f4 + -0.5) - fStack_e8) - fStack_dc;
      fStack_38 = ((fStack_f0 + -0.5) - fStack_e4) - fStack_d8;
      fStack_34 = ((fStack_ec + 0.0) - fStack_e0) - fStack_d4;
      iStack_cc = FUN_005995d0();
      fStack_88 = (float)iStack_cc;
      fStack_64 = fStack_88;
      fStack_40 = fStack_88;
      fStack_1c = fStack_88;
      if (*(int *)(param_1 + 0x108) == 0) {
        puStack_100 = (undefined4 *)0x0;
        uStack_fc = 0;
        uStack_f8 = 0;
        uVar9 = 0xffffffff;
        pcVar12 = &DAT_006b3f70;
        do {
          if (uVar9 == 0) break;
          uVar9 = uVar9 - 1;
          cVar2 = *pcVar12;
          pcVar12 = pcVar12 + 1;
        } while (cVar2 != '\0');
        uVar10 = ~uVar9 - 1;
        uVar9 = FUN_0040ce00();
        if (uVar9 < uVar10) {
          FUN_005fe5fb();
        }
        if (((puStack_100 == (undefined4 *)0x0) ||
            (cVar2 = *(char *)((int)puStack_100 + -1), cVar2 == '\0')) || (cVar2 == -1)) {
          if (uVar10 != 0) {
            if ((0x1f < uStack_f8) || (uStack_f8 < uVar10)) {
              FUN_004040a0(1);
              goto LAB_004741c1;
            }
            goto LAB_004741cf;
          }
          FUN_004040a0(1);
        }
        else if (uVar10 == 0) {
          *(char *)((int)puStack_100 + -1) = cVar2 + -1;
          FUN_004040a0(0);
        }
        else {
LAB_004741c1:
          FUN_00401a60(uVar10);
LAB_004741cf:
          puVar6 = (undefined4 *)&DAT_006b3f70;
          puVar13 = puStack_100;
          for (uVar8 = uVar10 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
            *puVar13 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar13 = puVar13 + 1;
          }
          for (uVar8 = uVar10 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
            *(undefined1 *)puVar13 = *(undefined1 *)puVar6;
            puVar6 = (undefined4 *)((int)puVar6 + 1);
            puVar13 = (undefined4 *)((int)puVar13 + 1);
          }
          FUN_00404190(uVar10);
          uVar8 = uStack_d0;
        }
        local_4 = 5;
        pcVar4 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                      local_104);
        (*pcVar4)();
        local_4 = 0xffffffff;
        if (puStack_100 != (undefined4 *)0x0) {
          cVar2 = *(char *)((int)puStack_100 + -1);
          if ((cVar2 == '\0') || (cVar2 == -1)) {
            FUN_005fe5f0((char *)((int)puStack_100 + -1));
          }
          else {
            *(char *)((int)puStack_100 + -1) = cVar2 + -1;
          }
        }
        puStack_100 = (undefined4 *)0x0;
        uStack_fc = 0;
        uStack_f8 = 0;
        pfVar5 = local_108;
      }
      uVar7 = FUN_0050aa70(0,1,0);
      FUN_005b6e90(uStack_c8,&fStack_a8,4,uVar7);
    }
    uStack_d0 = uVar8 + 1;
    pfVar5 = pfVar5 + 0x51;
    if (0xf9 < (int)uStack_d0) {
      ExceptionList = pvStack_c;
      return;
    }
  } while( true );
}

