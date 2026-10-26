/*
 * FUN_0044d570 at 0044d570
 * undefined FUN_0044d570(void)
 * Address ranges: 0044d570-0044e228
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_0044d570(undefined4 param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  bool bVar20;
  bool bVar21;
  bool bVar22;
  undefined *puVar23;
  char cVar24;
  void *pvVar25;
  undefined4 uVar26;
  code *pcVar27;
  uint uVar28;
  uint uVar29;
  char *pcVar30;
  undefined4 *puVar31;
  int iVar32;
  char *pcVar33;
  undefined1 local_17c [4];
  char *local_178;
  uint local_174;
  undefined1 local_16c [4];
  int local_168;
  undefined4 local_164;
  undefined4 local_160;
  undefined1 local_15c [4];
  undefined4 *local_158;
  undefined1 local_14c [4];
  undefined4 *local_148;
  undefined1 local_13c [4];
  undefined4 *local_138;
  undefined1 local_12c [4];
  char *local_128;
  undefined1 local_11c [4];
  undefined4 *local_118;
  undefined1 local_10c [4];
  int local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined1 local_fc [4];
  undefined4 *local_f8;
  undefined1 local_ec [4];
  undefined4 *local_e8;
  undefined1 local_dc [4];
  int local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined1 local_cc [4];
  int local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined1 local_bc [16];
  undefined1 local_ac [16];
  undefined1 local_9c [16];
  undefined1 local_8c [16];
  undefined1 local_7c [16];
  undefined1 local_6c [16];
  undefined1 local_5c [16];
  undefined1 local_4c [16];
  undefined1 local_3c [16];
  undefined1 local_2c [16];
  undefined1 local_1c [4];
  int iStack_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00625cfc;
  local_c = ExceptionList;
  bVar22 = false;
  bVar21 = false;
  bVar20 = false;
  bVar19 = false;
  bVar18 = false;
  bVar17 = false;
  bVar16 = false;
  bVar15 = false;
  bVar14 = false;
  bVar13 = false;
  bVar12 = false;
  bVar11 = false;
  bVar10 = false;
  bVar9 = false;
  bVar8 = false;
  bVar7 = false;
  bVar6 = false;
  bVar5 = false;
  bVar4 = false;
  bVar3 = false;
  bVar2 = false;
  bVar1 = false;
  iVar32 = 0;
  ExceptionList = &local_c;
  switch(param_1) {
  case 1:
    ExceptionList = &local_c;
    pvVar25 = operator_new(0x24c);
    puVar23 = PTR_DAT_00691504;
    local_4 = 0;
    if (pvVar25 == (void *)0x0) {
      iVar32 = 0;
    }
    else {
      FUN_004040a0(0);
      uVar29 = 0xffffffff;
      pcVar30 = puVar23;
      do {
        if (uVar29 == 0) break;
        uVar29 = uVar29 - 1;
        cVar24 = *pcVar30;
        pcVar30 = pcVar30 + 1;
      } while (cVar24 != '\0');
      FUN_004040f0(puVar23,~uVar29 - 1);
      local_4 = CONCAT31(local_4._1_3_,1);
      uVar26 = FUN_005033a0(local_6c,local_bc);
      bVar2 = true;
      bVar1 = true;
      local_4 = 2;
      iVar32 = FUN_004426c0(uVar26);
    }
    local_4 = 3;
    if (bVar1) {
      FUN_004040a0(1);
    }
    local_4 = 0xffffffff;
    if (bVar2) {
      FUN_004040a0(1);
    }
    break;
  case 2:
    ExceptionList = &local_c;
    pvVar25 = operator_new(0x24c);
    puVar31 = (undefined4 *)PTR_s_RcEnemyShot_00691508;
    local_4 = 5;
    if (pvVar25 == (void *)0x0) {
      iVar32 = 0;
    }
    else {
      FUN_004040a0(0);
      uVar29 = 0xffffffff;
      pcVar30 = (char *)puVar31;
      do {
        if (uVar29 == 0) break;
        uVar29 = uVar29 - 1;
        cVar24 = *pcVar30;
        pcVar30 = pcVar30 + 1;
      } while (cVar24 != '\0');
      uVar29 = ~uVar29 - 1;
      cVar24 = FUN_00401940(uVar29,1);
      if (cVar24 != '\0') {
        for (uVar28 = uVar29 >> 2; uVar28 != 0; uVar28 = uVar28 - 1) {
          *local_e8 = *puVar31;
          puVar31 = puVar31 + 1;
          local_e8 = local_e8 + 1;
        }
        for (uVar28 = uVar29 & 3; uVar28 != 0; uVar28 = uVar28 - 1) {
          *(undefined1 *)local_e8 = *(undefined1 *)puVar31;
          puVar31 = (undefined4 *)((int)puVar31 + 1);
          local_e8 = (undefined4 *)((int)local_e8 + 1);
        }
        FUN_00404190(uVar29);
      }
      local_4 = CONCAT31(local_4._1_3_,6);
      uVar26 = FUN_005033a0(local_8c,local_ec);
      bVar4 = true;
      bVar3 = true;
      local_4 = 7;
      iVar32 = FUN_004437f0(uVar26);
    }
    local_4 = 8;
    if (bVar3) {
      FUN_004040a0(1);
    }
    local_4 = 0xffffffff;
    if (bVar4) {
      FUN_004040a0(1);
    }
    break;
  case 3:
    ExceptionList = &local_c;
    pvVar25 = operator_new(0x24c);
    puVar31 = (undefined4 *)PTR_DAT_0069150c;
    local_4 = 10;
    if (pvVar25 == (void *)0x0) {
      iVar32 = 0;
    }
    else {
      FUN_004040a0(0);
      uVar29 = 0xffffffff;
      pcVar30 = (char *)puVar31;
      do {
        if (uVar29 == 0) break;
        uVar29 = uVar29 - 1;
        cVar24 = *pcVar30;
        pcVar30 = pcVar30 + 1;
      } while (cVar24 != '\0');
      uVar29 = ~uVar29 - 1;
      cVar24 = FUN_00401940(uVar29,1);
      if (cVar24 != '\0') {
        for (uVar28 = uVar29 >> 2; uVar28 != 0; uVar28 = uVar28 - 1) {
          *local_118 = *puVar31;
          puVar31 = puVar31 + 1;
          local_118 = local_118 + 1;
        }
        for (uVar28 = uVar29 & 3; uVar28 != 0; uVar28 = uVar28 - 1) {
          *(undefined1 *)local_118 = *(undefined1 *)puVar31;
          puVar31 = (undefined4 *)((int)puVar31 + 1);
          local_118 = (undefined4 *)((int)local_118 + 1);
        }
        FUN_00404190(uVar29);
      }
      local_4 = CONCAT31(local_4._1_3_,0xb);
      uVar26 = FUN_005033a0(local_4c,local_11c);
      bVar6 = true;
      bVar5 = true;
      local_4 = 0xc;
      iVar32 = FUN_00444b50(uVar26);
    }
    local_4 = 0xd;
    if (bVar5) {
      FUN_004040a0(1);
    }
    local_4 = 0xffffffff;
    if (bVar6) {
      FUN_004040a0(1);
    }
    break;
  case 4:
    ExceptionList = &local_c;
    pvVar25 = operator_new(0x24c);
    puVar31 = (undefined4 *)PTR_s_RcJesterBall_00691510;
    local_4 = 0xf;
    if (pvVar25 == (void *)0x0) {
      iVar32 = 0;
    }
    else {
      FUN_004040a0(0);
      uVar29 = 0xffffffff;
      pcVar30 = (char *)puVar31;
      do {
        if (uVar29 == 0) break;
        uVar29 = uVar29 - 1;
        cVar24 = *pcVar30;
        pcVar30 = pcVar30 + 1;
      } while (cVar24 != '\0');
      uVar29 = ~uVar29 - 1;
      cVar24 = FUN_00401940(uVar29,1);
      if (cVar24 != '\0') {
        for (uVar28 = uVar29 >> 2; uVar28 != 0; uVar28 = uVar28 - 1) {
          *local_138 = *puVar31;
          puVar31 = puVar31 + 1;
          local_138 = local_138 + 1;
        }
        for (uVar28 = uVar29 & 3; uVar28 != 0; uVar28 = uVar28 - 1) {
          *(undefined1 *)local_138 = *(undefined1 *)puVar31;
          puVar31 = (undefined4 *)((int)puVar31 + 1);
          local_138 = (undefined4 *)((int)local_138 + 1);
        }
        FUN_00404190(uVar29);
      }
      local_4 = CONCAT31(local_4._1_3_,0x10);
      uVar26 = FUN_005033a0(local_ac,local_13c);
      bVar8 = true;
      bVar7 = true;
      local_4 = 0x11;
      iVar32 = FUN_004456c0(uVar26);
    }
    local_4 = 0x12;
    if (bVar7) {
      FUN_004040a0(1);
    }
    local_4 = 0xffffffff;
    if (bVar8) {
      FUN_004040a0(1);
    }
    break;
  case 5:
    ExceptionList = &local_c;
    pvVar25 = operator_new(0x24c);
    puVar31 = (undefined4 *)PTR_DAT_00691514;
    local_4 = 0x14;
    if (pvVar25 == (void *)0x0) {
      iVar32 = 0;
    }
    else {
      FUN_004040a0(0);
      uVar29 = 0xffffffff;
      pcVar30 = (char *)puVar31;
      do {
        if (uVar29 == 0) break;
        uVar29 = uVar29 - 1;
        cVar24 = *pcVar30;
        pcVar30 = pcVar30 + 1;
      } while (cVar24 != '\0');
      uVar29 = ~uVar29 - 1;
      cVar24 = FUN_00401940(uVar29,1);
      if (cVar24 != '\0') {
        for (uVar28 = uVar29 >> 2; uVar28 != 0; uVar28 = uVar28 - 1) {
          *local_f8 = *puVar31;
          puVar31 = puVar31 + 1;
          local_f8 = local_f8 + 1;
        }
        for (uVar28 = uVar29 & 3; uVar28 != 0; uVar28 = uVar28 - 1) {
          *(undefined1 *)local_f8 = *(undefined1 *)puVar31;
          puVar31 = (undefined4 *)((int)puVar31 + 1);
          local_f8 = (undefined4 *)((int)local_f8 + 1);
        }
        FUN_00404190(uVar29);
      }
      local_4 = CONCAT31(local_4._1_3_,0x15);
      uVar26 = FUN_005033a0(local_2c,local_fc);
      bVar10 = true;
      bVar9 = true;
      local_4 = 0x16;
      iVar32 = FUN_00447860(uVar26);
    }
    local_4 = 0x17;
    if (bVar9) {
      FUN_004040a0(1);
    }
    local_4 = 0xffffffff;
    if (bVar10) {
      FUN_004040a0(1);
    }
    break;
  case 6:
    ExceptionList = &local_c;
    pvVar25 = operator_new(0x250);
    puVar31 = (undefined4 *)PTR_s_RcMushRoom_00691518;
    local_4 = 0x19;
    if (pvVar25 == (void *)0x0) {
      iVar32 = 0;
    }
    else {
      FUN_004040a0(0);
      uVar29 = 0xffffffff;
      pcVar30 = (char *)puVar31;
      do {
        if (uVar29 == 0) break;
        uVar29 = uVar29 - 1;
        cVar24 = *pcVar30;
        pcVar30 = pcVar30 + 1;
      } while (cVar24 != '\0');
      uVar29 = ~uVar29 - 1;
      cVar24 = FUN_00401940(uVar29,1);
      if (cVar24 != '\0') {
        for (uVar28 = uVar29 >> 2; uVar28 != 0; uVar28 = uVar28 - 1) {
          *local_158 = *puVar31;
          puVar31 = puVar31 + 1;
          local_158 = local_158 + 1;
        }
        for (uVar28 = uVar29 & 3; uVar28 != 0; uVar28 = uVar28 - 1) {
          *(undefined1 *)local_158 = *(undefined1 *)puVar31;
          puVar31 = (undefined4 *)((int)puVar31 + 1);
          local_158 = (undefined4 *)((int)local_158 + 1);
        }
        FUN_00404190(uVar29);
      }
      local_4 = CONCAT31(local_4._1_3_,0x1a);
      uVar26 = FUN_005033a0(local_9c,local_15c);
      bVar12 = true;
      bVar11 = true;
      local_4 = 0x1b;
      iVar32 = FUN_00448a70(uVar26);
    }
    local_4 = 0x1c;
    if (bVar11) {
      FUN_004040a0(1);
    }
    local_4 = 0xffffffff;
    if (bVar12) {
      FUN_004040a0(1);
    }
    break;
  case 7:
    ExceptionList = &local_c;
    pvVar25 = operator_new(0x24c);
    puVar31 = (undefined4 *)PTR_DAT_0069151c;
    local_4 = 0x1e;
    if (pvVar25 == (void *)0x0) {
      iVar32 = 0;
    }
    else {
      FUN_004040a0(0);
      uVar29 = 0xffffffff;
      pcVar30 = (char *)puVar31;
      do {
        if (uVar29 == 0) break;
        uVar29 = uVar29 - 1;
        cVar24 = *pcVar30;
        pcVar30 = pcVar30 + 1;
      } while (cVar24 != '\0');
      uVar29 = ~uVar29 - 1;
      cVar24 = FUN_00401940(uVar29,1);
      if (cVar24 != '\0') {
        for (uVar28 = uVar29 >> 2; uVar28 != 0; uVar28 = uVar28 - 1) {
          *local_148 = *puVar31;
          puVar31 = puVar31 + 1;
          local_148 = local_148 + 1;
        }
        for (uVar28 = uVar29 & 3; uVar28 != 0; uVar28 = uVar28 - 1) {
          *(undefined1 *)local_148 = *(undefined1 *)puVar31;
          puVar31 = (undefined4 *)((int)puVar31 + 1);
          local_148 = (undefined4 *)((int)local_148 + 1);
        }
        FUN_00404190(uVar29);
      }
      local_4 = CONCAT31(local_4._1_3_,0x1f);
      uVar26 = FUN_005033a0(local_7c,local_14c);
      bVar14 = true;
      bVar13 = true;
      local_4 = 0x20;
      iVar32 = FUN_00444c70(uVar26);
    }
    local_4 = 0x21;
    if (bVar13) {
      FUN_004040a0(1);
    }
    local_4 = 0xffffffff;
    if (bVar14) {
      FUN_004040a0(1);
    }
    break;
  case 8:
    ExceptionList = &local_c;
    pvVar25 = operator_new(0x24c);
    local_4 = 0x23;
    if (pvVar25 == (void *)0x0) {
      iVar32 = 0;
    }
    else {
      FUN_004040a0(0);
      uVar29 = 0xffffffff;
      pcVar30 = s_RcPowershot_00691710;
      do {
        if (uVar29 == 0) break;
        uVar29 = uVar29 - 1;
        cVar24 = *pcVar30;
        pcVar30 = pcVar30 + 1;
      } while (cVar24 != '\0');
      uVar29 = ~uVar29 - 1;
      cVar24 = FUN_00401940(uVar29,1);
      if (cVar24 != '\0') {
        pcVar30 = s_RcPowershot_00691710;
        for (uVar28 = uVar29 >> 2; uVar28 != 0; uVar28 = uVar28 - 1) {
          *(undefined4 *)local_128 = *(undefined4 *)pcVar30;
          pcVar30 = pcVar30 + 4;
          local_128 = local_128 + 4;
        }
        for (uVar28 = uVar29 & 3; uVar28 != 0; uVar28 = uVar28 - 1) {
          *local_128 = *pcVar30;
          pcVar30 = pcVar30 + 1;
          local_128 = local_128 + 1;
        }
        FUN_00404190(uVar29);
      }
      local_4 = CONCAT31(local_4._1_3_,0x24);
      uVar26 = FUN_005033a0(local_5c,local_12c);
      bVar16 = true;
      bVar15 = true;
      local_4 = 0x25;
      iVar32 = FUN_0044a280(uVar26);
    }
    local_4 = 0x26;
    if (bVar15) {
      FUN_004040a0(1);
    }
    local_4 = 0xffffffff;
    if (bVar16) {
      FUN_004040a0(1);
    }
    break;
  case 9:
    ExceptionList = &local_c;
    pvVar25 = operator_new(0x24c);
    local_4 = 0x28;
    if (pvVar25 == (void *)0x0) {
      iVar32 = 0;
    }
    else {
      FUN_004040a0(0);
      uVar29 = 0xffffffff;
      pcVar30 = s_RcProjectile_00691700;
      do {
        if (uVar29 == 0) break;
        uVar29 = uVar29 - 1;
        cVar24 = *pcVar30;
        pcVar30 = pcVar30 + 1;
      } while (cVar24 != '\0');
      uVar29 = ~uVar29 - 1;
      cVar24 = FUN_00401940(uVar29,1);
      if (cVar24 != '\0') {
        pcVar30 = s_RcProjectile_00691700;
        pcVar33 = local_178;
        for (uVar28 = uVar29 >> 2; uVar28 != 0; uVar28 = uVar28 - 1) {
          *(undefined4 *)pcVar33 = *(undefined4 *)pcVar30;
          pcVar30 = pcVar30 + 4;
          pcVar33 = pcVar33 + 4;
        }
        for (uVar28 = uVar29 & 3; uVar28 != 0; uVar28 = uVar28 - 1) {
          *pcVar33 = *pcVar30;
          pcVar30 = pcVar30 + 1;
          pcVar33 = pcVar33 + 1;
        }
        local_178[uVar29] = '\0';
        local_174 = uVar29;
      }
      local_4 = CONCAT31(local_4._1_3_,0x29);
      uVar26 = FUN_005033a0(local_3c,local_17c);
      bVar18 = true;
      bVar17 = true;
      local_4 = 0x2a;
      iVar32 = FUN_0044e860(uVar26);
    }
    local_4 = 0x2b;
    if (bVar17) {
      FUN_004040a0(1);
    }
    local_4 = 0xffffffff;
    if (bVar18) {
      FUN_004040a0(1);
    }
    break;
  case 10:
    ExceptionList = &local_c;
    pvVar25 = operator_new(0x24c);
    local_4 = 0x2d;
    if (pvVar25 == (void *)0x0) {
      iVar32 = 0;
    }
    else {
      uVar29 = 0xffffffff;
      local_108 = 0;
      local_104 = 0;
      local_100 = 0;
      pcVar30 = PTR_DAT_00691528;
      do {
        if (uVar29 == 0) break;
        uVar29 = uVar29 - 1;
        cVar24 = *pcVar30;
        pcVar30 = pcVar30 + 1;
      } while (cVar24 != '\0');
      FUN_004040f0(PTR_DAT_00691528,~uVar29 - 1);
      local_4 = CONCAT31(local_4._1_3_,0x2e);
      uVar26 = FUN_005033a0(local_cc,local_10c);
      bVar20 = true;
      bVar19 = true;
      local_4 = 0x2f;
      iVar32 = FUN_0044fb60(uVar26);
    }
    if (bVar19) {
      if (local_c8 != 0) {
        cVar24 = *(char *)(local_c8 + -1);
        if ((cVar24 == '\0') || (cVar24 == -1)) {
          FUN_005fe5f0((char *)(local_c8 + -1));
        }
        else {
          *(char *)(local_c8 + -1) = cVar24 + -1;
        }
      }
      local_c8 = 0;
      local_c4 = 0;
      local_c0 = 0;
    }
    local_4 = 0xffffffff;
    if ((bVar20) && (local_108 != 0)) {
      pcVar30 = (char *)(local_108 + -1);
      cVar24 = *(char *)(local_108 + -1);
      if ((cVar24 == '\0') || (cVar24 == -1)) {
LAB_0044e195:
        local_4 = 0xffffffff;
        FUN_005fe5f0(pcVar30);
      }
      else {
        *pcVar30 = cVar24 + -1;
      }
    }
    break;
  case 0xb:
    ExceptionList = &local_c;
    pvVar25 = operator_new(0x24c);
    local_4 = 0x32;
    if (pvVar25 == (void *)0x0) {
      iVar32 = 0;
    }
    else {
      uVar29 = 0xffffffff;
      local_168 = 0;
      pcVar30 = s_RcSupershot_006916f4;
      do {
        if (uVar29 == 0) break;
        uVar29 = uVar29 - 1;
        cVar24 = *pcVar30;
        pcVar30 = pcVar30 + 1;
      } while (cVar24 != '\0');
      local_164 = 0;
      local_160 = 0;
      FUN_004040f0(s_RcSupershot_006916f4,~uVar29 - 1);
      local_4 = CONCAT31(local_4._1_3_,0x33);
      uVar26 = FUN_005033a0(local_dc,local_16c);
      bVar22 = true;
      bVar21 = true;
      local_4 = 0x34;
      iVar32 = FUN_004502c0(uVar26);
    }
    if (bVar21) {
      if (local_d8 != 0) {
        cVar24 = *(char *)(local_d8 + -1);
        if ((cVar24 == '\0') || (cVar24 == -1)) {
          FUN_005fe5f0((char *)(local_d8 + -1));
        }
        else {
          *(char *)(local_d8 + -1) = cVar24 + -1;
        }
      }
      local_d8 = 0;
      local_d4 = 0;
      local_d0 = 0;
    }
    local_4 = 0xffffffff;
    if ((bVar22) && (local_168 != 0)) {
      pcVar30 = (char *)(local_168 + -1);
      cVar24 = *(char *)(local_168 + -1);
      if ((cVar24 == '\0') || (cVar24 == -1)) goto LAB_0044e195;
      *pcVar30 = cVar24 + -1;
    }
    break;
  default:
    goto switchD_0044d5aa_default;
  }
  if (iVar32 == 0) {
switchD_0044d5aa_default:
    uVar26 = FUN_005ae390(local_1c,s_CRcWeaponProjectile__DoCreateIns_006916b4,param_1);
    local_4 = 0x37;
    pcVar27 = (code *)FUN_005a07f0(s_result____NULL_006916a4,
                                   s_D__Work_RCHorror_RCSource_RcWeap_006915fc,0x270,uVar26);
    (*pcVar27)();
    if (iStack_18 != 0) {
      cVar24 = *(char *)(iStack_18 + -1);
      if ((cVar24 == '\0') || (cVar24 == -1)) {
        FUN_005fe5f0((char *)(iStack_18 + -1));
      }
      else {
        *(char *)(iStack_18 + -1) = cVar24 + -1;
      }
    }
  }
  ExceptionList = local_c;
  return iVar32;
}

