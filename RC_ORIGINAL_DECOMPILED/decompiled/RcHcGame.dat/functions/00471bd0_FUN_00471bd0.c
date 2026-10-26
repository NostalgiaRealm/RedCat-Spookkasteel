/*
 * FUN_00471bd0 at 00471bd0
 * undefined FUN_00471bd0(void)
 * Address ranges: 00471bd0-0047254e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x0047232e) */
/* WARNING: Removing unreachable block (ram,0x00472199) */
/* WARNING: Removing unreachable block (ram,0x00472266) */
/* WARNING: Removing unreachable block (ram,0x004723f6) */

char * __thiscall FUN_00471bd0(char *param_1,int param_2,int param_3)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  undefined4 *puVar5;
  code *pcVar6;
  void *pvVar7;
  undefined4 uVar8;
  int iVar9;
  char *pcVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  char *pcVar14;
  undefined4 *puVar15;
  undefined1 local_3c [4];
  char *local_38;
  uint local_34;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 auStack_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  uVar8 = param_2;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00628439;
  pvStack_c = ExceptionList;
  bVar3 = false;
  bVar2 = false;
  ExceptionList = &pvStack_c;
  FUN_00501cb0(param_2);
  *(int *)(param_1 + 0xf8) = param_3;
  param_1[0xfc] = '\0';
  param_1[0xfd] = '\0';
  param_1[0xfe] = '\0';
  param_1[0xff] = '\0';
  param_1[0x100] = '\0';
  param_1[0x101] = '\0';
  param_1[0x102] = '\0';
  param_1[0x103] = '\0';
  param_1[0x104] = '\0';
  param_1[0x105] = '\0';
  param_1[0x106] = '\0';
  param_1[0x107] = '\0';
  param_1[0x108] = '\0';
  param_1[0x109] = '\0';
  param_1[0x10a] = '\0';
  param_1[0x10b] = '\0';
  local_4 = 4;
  puVar5 = (undefined4 *)FUN_00479510(local_3c);
  *(undefined4 *)(param_1 + 0x10c) = *puVar5;
  *(undefined4 *)(param_1 + 0x110) = puVar5[1];
  *(undefined4 *)(param_1 + 0x114) = puVar5[2];
  param_1[0x374] = '\0';
  param_1[0x375] = '\0';
  param_1[0x376] = '\0';
  param_1[0x377] = '\0';
  FUN_0047d950(param_2,param_1);
  iVar13 = 0xfa;
  do {
    FUN_0047d9b0();
    iVar13 = iVar13 + -1;
  } while (iVar13 != 0);
  iVar13 = 5;
  do {
    FUN_0047d9b0();
    iVar13 = iVar13 + -1;
  } while (iVar13 != 0);
  param_1[0x14814] = '\x01';
  param_1[0x14818] = '\0';
  param_1[0x14819] = '\0';
  param_1[0x1481a] = '\0';
  param_1[0x1481b] = '\0';
  FUN_004041b0(0xffffffff);
  param_1[0x1482c] = -1;
  param_1[0x1482d] = -1;
  param_1[0x1482e] = -1;
  param_1[0x1482f] = -1;
  param_1[0x14830] = -1;
  param_1[0x14831] = -1;
  param_1[0x14832] = -1;
  param_1[0x14833] = -1;
  param_1[0x14834] = '\0';
  param_1[0x14835] = '\0';
  param_1[0x14836] = -0x80;
  param_1[0x14837] = '?';
  param_1[0x14838] = '\x01';
  param_1[0x1483c] = -1;
  param_1[0x1483d] = -1;
  param_1[0x1483e] = -1;
  param_1[0x1483f] = -1;
  param_1[0x14840] = -1;
  param_1[0x14841] = -1;
  param_1[0x14842] = -1;
  param_1[0x14843] = -1;
  param_1[0x14844] = '\0';
  param_1[0x14845] = '\0';
  param_1[0x14846] = -0x80;
  param_1[0x14847] = '?';
  param_1[0x14848] = '\x01';
  param_1[0x1484c] = -0x12;
  param_1[0x1484d] = '\x02';
  param_1[0x1484e] = '\0';
  param_1[0x1484f] = '\0';
  param_1[0x14850] = -0x3c;
  param_1[0x14851] = '\t';
  param_1[0x14852] = '\0';
  param_1[0x14853] = '\0';
  param_1[0x14854] = '\0';
  param_1[0x14855] = '\0';
  param_1[0x14856] = ' ';
  param_1[0x14857] = 'B';
  param_1[0x14864] = '\0';
  param_1[0x14865] = '\0';
  param_1[0x14866] = -0x80;
  param_1[0x14867] = '?';
  param_1[0x14868] = '\0';
  param_1[0x14869] = '\0';
  param_1[0x1486a] = -0x80;
  param_1[0x1486b] = '?';
  param_1[0x1486c] = '\x01';
  param_1[0x14870] = '\0';
  param_1[0x14871] = '\0';
  param_1[0x14872] = 'H';
  param_1[0x14873] = 'B';
  param_1[0x14874] = '\0';
  param_1[0x14875] = '\0';
  param_1[0x14876] = 'H';
  param_1[0x14877] = 'B';
  param_1[0x14878] = '\0';
  param_1[0x14879] = '\0';
  param_1[0x1487a] = '\0';
  param_1[0x1487b] = '\0';
  param_1[0x1487c] = '\0';
  param_1[0x14880] = '3';
  param_1[0x14881] = '3';
  param_1[0x14882] = '3';
  param_1[0x14883] = '?';
  param_1[0x14884] = '\x01';
  param_1[0x14888] = '\0';
  param_1[0x14889] = '\0';
  param_1[0x1488a] = '\0';
  param_1[0x1488b] = '\0';
  FUN_0060b1db(param_1 + 0x1488c,0x18,6,&LAB_0046ada0,FUN_0046ace0);
  param_1[0x1491c] = '\0';
  param_1[0x14950] = '\0';
  param_1[0x14951] = '\0';
  param_1[0x14952] = '\0';
  param_1[0x14953] = '\0';
  param_1[0x14954] = '\0';
  param_1[0x14955] = '\0';
  param_1[0x14956] = '\0';
  param_1[0x14957] = '\0';
  param_1[0x14994] = '\0';
  param_1[0x14998] = -1;
  param_1[0x14999] = -1;
  param_1[0x1499a] = -1;
  param_1[0x1499b] = -1;
  param_1[0x1499c] = -1;
  param_1[0x1499d] = -1;
  param_1[0x1499e] = -1;
  param_1[0x1499f] = -1;
  param_1[0x149a0] = '\0';
  param_1[0x149a1] = '\0';
  param_1[0x149a2] = -0x80;
  param_1[0x149a3] = '?';
  param_1[0x149a4] = '\x01';
  param_1[0x149a8] = '\0';
  param_1[0x149ac] = '\0';
  param_1[0x149ad] = '\0';
  param_1[0x149ae] = '\0';
  param_1[0x149af] = '\0';
  param_1[0x149b0] = '\x01';
  param_1[0x149b4] = -1;
  param_1[0x149b5] = -1;
  param_1[0x149b6] = -1;
  param_1[0x149b7] = -1;
  param_1[0x149b8] = -1;
  param_1[0x149b9] = -1;
  param_1[0x149ba] = -1;
  param_1[0x149bb] = -1;
  param_1[0x149bc] = '\0';
  param_1[0x149bd] = '\0';
  param_1[0x149be] = -0x80;
  param_1[0x149bf] = '?';
  param_1[0x149c0] = '\x01';
  local_4 = CONCAT31(local_4._1_3_,7);
  param_1[0x149c4] = '\0';
  param_1[0x149c8] = '\0';
  param_1[0x149c9] = '\0';
  param_1[0x149ca] = '\0';
  param_1[0x149cb] = '\0';
  *(undefined ***)param_1 = &PTR_FUN_0064e040;
  pcVar10 = param_1 + 0x11c;
  iVar13 = 4;
  do {
    pcVar10[-0xffffffff00000004] = '\0';
    pcVar10[-0xffffffff00000003] = '\0';
    pcVar10[-0xffffffff00000002] = -0x60;
    pcVar10[-0xffffffff00000001] = 'A';
    pcVar10[0] = '\0';
    pcVar10[1] = '\0';
    pcVar10[2] = '\x7f';
    pcVar10[3] = 'C';
    pcVar10[4] = '\0';
    pcVar10[5] = '\0';
    pcVar10[6] = -0x60;
    pcVar10[7] = 'A';
    pcVar10 = pcVar10 + 0xc;
    iVar13 = iVar13 + -1;
  } while (iVar13 != 0);
  FUN_005b3070();
  FUN_005b3070();
  FUN_005b3070();
  FUN_005b3070();
  FUN_005b3070();
  iVar13 = 2;
  do {
    FUN_005b3070();
    iVar13 = iVar13 + -1;
  } while (iVar13 != 0);
  FUN_005b3070();
  iVar13 = 4;
  do {
    FUN_005b3070();
    iVar13 = iVar13 + -1;
  } while (iVar13 != 0);
  FUN_005b3070();
  param_3 = 0xfa;
  do {
    FUN_0047db50(param_2,param_1);
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  param_2 = 5;
  do {
    FUN_0047db50(uVar8,param_1);
    param_2 = param_2 + -1;
  } while (param_2 != 0);
  local_2c = 0x437f0000;
  local_28 = 0x437f0000;
  local_24 = 0x41c80000;
  local_20 = 0x437f0000;
  if (*(int *)(param_1 + 0x374) != 0) {
    local_3c[0] = 0;
    FUN_004040a0(0);
    uVar11 = 0xffffffff;
    pcVar10 = &DAT_006b3f70;
    do {
      if (uVar11 == 0) break;
      uVar11 = uVar11 - 1;
      cVar4 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar4 != '\0');
    uVar11 = ~uVar11 - 1;
    cVar4 = FUN_00401940(uVar11,1);
    if (cVar4 != '\0') {
      pcVar10 = &DAT_006b3f70;
      pcVar14 = local_38;
      for (uVar12 = uVar11 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
        *(undefined4 *)pcVar14 = *(undefined4 *)pcVar10;
        pcVar10 = pcVar10 + 4;
        pcVar14 = pcVar14 + 4;
      }
      for (uVar12 = uVar11 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
        *pcVar14 = *pcVar10;
        pcVar10 = pcVar10 + 1;
        pcVar14 = pcVar14 + 1;
      }
      local_38[uVar11] = '\0';
      local_34 = uVar11;
    }
    local_4._0_1_ = 10;
    pcVar6 = (code *)FUN_005a07f0(s_m_DynamicLight__0_00692e54,
                                  s_D__Work_RCHorror_RCSource_RCTele_00692e68,0xbb,local_3c);
    (*pcVar6)();
    local_4 = CONCAT31(local_4._1_3_,7);
    FUN_004040a0(1);
  }
  pvVar7 = operator_new(500);
  local_4._0_1_ = 0xb;
  if (pvVar7 == (void *)0x0) {
    uVar8 = 0;
  }
  else {
    param_2._0_1_ = SUB41(pvVar7,0);
    local_3c[0] = (undefined1)param_2;
    FUN_004040a0(0);
    uVar11 = 0xffffffff;
    pcVar10 = s_TeleporterFXlight_00692e40;
    do {
      if (uVar11 == 0) break;
      uVar11 = uVar11 - 1;
      cVar4 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar4 != '\0');
    uVar11 = ~uVar11 - 1;
    cVar4 = FUN_00401940(uVar11,1);
    if (cVar4 != '\0') {
      pcVar10 = s_TeleporterFXlight_00692e40;
      pcVar14 = local_38;
      for (uVar12 = uVar11 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
        *(undefined4 *)pcVar14 = *(undefined4 *)pcVar10;
        pcVar10 = pcVar10 + 4;
        pcVar14 = pcVar14 + 4;
      }
      for (uVar12 = uVar11 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
        *pcVar14 = *pcVar10;
        pcVar10 = pcVar10 + 1;
        pcVar14 = pcVar14 + 1;
      }
      local_38[uVar11] = '\0';
      local_34 = uVar11;
    }
    local_4 = CONCAT31(local_4._1_3_,0xc);
    uVar8 = FUN_005033a0(auStack_1c,local_3c);
    bVar3 = true;
    bVar2 = true;
    local_4 = 0xd;
    uVar8 = FUN_004e22a0(uVar8);
  }
  pcVar10 = param_1 + 0x374;
  *(undefined4 *)pcVar10 = uVar8;
  local_4 = 0xe;
  if (bVar3) {
    FUN_004040a0(1);
  }
  local_4._0_1_ = 7;
  local_4._1_3_ = 0;
  if (bVar2) {
    FUN_004040a0(1);
  }
  FUN_004e3140(0xffffffff);
  FUN_004e3160(0);
  FUN_004e2d60(0);
  FUN_004e3090(&local_2c);
  FUN_004e30d0(0);
  FUN_004e3120(0);
  FUN_004e3100(0);
  FUN_00502350(0);
  FUN_00509a90(*(undefined4 *)pcVar10,pcVar10);
  iVar13 = 6;
  do {
    iVar1 = *(int *)(param_1 + 0x1488c);
    local_4._0_1_ = 0x10;
    if (iVar1 != 0) {
      iVar9 = *(int *)(iVar1 + 0x14) + -1;
      *(int *)(iVar1 + 0x14) = iVar9;
      if (iVar9 == 0) {
        FUN_005abfc0(0);
      }
      param_1[0x1488c] = '\0';
      param_1[0x1488d] = '\0';
      param_1[0x1488e] = '\0';
      param_1[0x1488f] = '\0';
    }
    iVar1 = *(int *)(param_1 + 0x14890);
    local_4._0_1_ = 0x11;
    if (iVar1 != 0) {
      iVar9 = *(int *)(iVar1 + 0x14) + -1;
      *(int *)(iVar1 + 0x14) = iVar9;
      if (iVar9 == 0) {
        FUN_005abfc0(0);
      }
      param_1[0x14890] = '\0';
      param_1[0x14891] = '\0';
      param_1[0x14892] = '\0';
      param_1[0x14893] = '\0';
    }
    iVar13 = iVar13 + -1;
    local_4._0_1_ = 7;
  } while (iVar13 != 0);
  FUN_0040cc00(&DAT_006b86f8,0,0xffffffff);
  FUN_0040cc00(&DAT_006b86e8,0,0xffffffff);
  uVar11 = DAT_006b86e0;
  if (param_1 == s_D__Work_RCHorror_AdamSource_Adam_006a3df0 + 0x24) {
    FUN_0040c9b0(DAT_006b86e0,0xffffffff);
    FUN_0040c9b0(0,0);
  }
  else {
    if (DAT_006b86e0 != 0) {
      puVar5 = DAT_006b86dc;
      if (DAT_006b86dc == (undefined4 *)0x0) {
        puVar5 = (undefined4 *)&DAT_0064a3b4;
      }
      if (*(byte *)((int)puVar5 + -1) < 0xfe) {
        FUN_004040a0(1);
        puVar5 = DAT_006b86dc;
        if (DAT_006b86dc == (undefined4 *)0x0) {
          puVar5 = (undefined4 *)&DAT_0064a3b4;
        }
        *(undefined4 **)(param_1 + 0x148c8) = puVar5;
        *(uint *)(param_1 + 0x148cc) = DAT_006b86e0;
        *(undefined4 *)(param_1 + 0x148d0) = DAT_006b86e4;
        *(char *)((int)puVar5 + -1) = *(char *)((int)puVar5 + -1) + '\x01';
        goto LAB_0047224f;
      }
    }
    cVar4 = FUN_00401940(DAT_006b86e0,1);
    if (cVar4 != '\0') {
      puVar5 = DAT_006b86dc;
      if (DAT_006b86dc == (undefined4 *)0x0) {
        puVar5 = (undefined4 *)&DAT_0064a3b4;
      }
      puVar15 = *(undefined4 **)(param_1 + 0x148c8);
      for (uVar12 = uVar11 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
        *puVar15 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar15 = puVar15 + 1;
      }
      for (uVar12 = uVar11 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
        *(undefined1 *)puVar15 = *(undefined1 *)puVar5;
        puVar5 = (undefined4 *)((int)puVar5 + 1);
        puVar15 = (undefined4 *)((int)puVar15 + 1);
      }
      FUN_00404190(uVar11);
    }
  }
LAB_0047224f:
  uVar11 = DAT_006b86d0;
  if (param_1 == s_m_World____0_006a3de0 + 0xc) {
    FUN_0040c9b0(DAT_006b86d0,0xffffffff);
    FUN_0040c9b0(0,0);
  }
  else {
    if (DAT_006b86d0 != 0) {
      puVar5 = DAT_006b86cc;
      if (DAT_006b86cc == (undefined4 *)0x0) {
        puVar5 = (undefined4 *)&DAT_0064a3b4;
      }
      if (*(byte *)((int)puVar5 + -1) < 0xfe) {
        FUN_004040a0(1);
        puVar5 = DAT_006b86cc;
        if (DAT_006b86cc == (undefined4 *)0x0) {
          puVar5 = (undefined4 *)&DAT_0064a3b4;
        }
        *(undefined4 **)(param_1 + 0x148e0) = puVar5;
        *(uint *)(param_1 + 0x148e4) = DAT_006b86d0;
        *(undefined4 *)(param_1 + 0x148e8) = DAT_006b86d4;
        *(char *)((int)puVar5 + -1) = *(char *)((int)puVar5 + -1) + '\x01';
        goto LAB_00472317;
      }
    }
    cVar4 = FUN_00401940(DAT_006b86d0,1);
    if (cVar4 != '\0') {
      puVar5 = DAT_006b86cc;
      if (DAT_006b86cc == (undefined4 *)0x0) {
        puVar5 = (undefined4 *)&DAT_0064a3b4;
      }
      puVar15 = *(undefined4 **)(param_1 + 0x148e0);
      for (uVar12 = uVar11 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
        *puVar15 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar15 = puVar15 + 1;
      }
      for (uVar12 = uVar11 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
        *(undefined1 *)puVar15 = *(undefined1 *)puVar5;
        puVar5 = (undefined4 *)((int)puVar5 + 1);
        puVar15 = (undefined4 *)((int)puVar15 + 1);
      }
      FUN_00404190(uVar11);
    }
  }
LAB_00472317:
  uVar11 = DAT_006b86c0;
  if (param_1 == s_D__Work_RCHorror_AdamSource_Adam_006a3db0 + 0x14) {
    FUN_0040c9b0(DAT_006b86c0,0xffffffff);
    FUN_0040c9b0(0,0);
  }
  else {
    if (DAT_006b86c0 != 0) {
      puVar5 = DAT_006b86bc;
      if (DAT_006b86bc == (undefined4 *)0x0) {
        puVar5 = (undefined4 *)&DAT_0064a3b4;
      }
      if (*(byte *)((int)puVar5 + -1) < 0xfe) {
        FUN_004040a0(1);
        puVar5 = DAT_006b86bc;
        if (DAT_006b86bc == (undefined4 *)0x0) {
          puVar5 = (undefined4 *)&DAT_0064a3b4;
        }
        *(undefined4 **)(param_1 + 0x148f8) = puVar5;
        *(uint *)(param_1 + 0x148fc) = DAT_006b86c0;
        *(undefined4 *)(param_1 + 0x14900) = DAT_006b86c4;
        *(char *)((int)puVar5 + -1) = *(char *)((int)puVar5 + -1) + '\x01';
        goto LAB_004723df;
      }
    }
    cVar4 = FUN_00401940(DAT_006b86c0,1);
    if (cVar4 != '\0') {
      puVar5 = DAT_006b86bc;
      if (DAT_006b86bc == (undefined4 *)0x0) {
        puVar5 = (undefined4 *)&DAT_0064a3b4;
      }
      puVar15 = *(undefined4 **)(param_1 + 0x148f8);
      for (uVar12 = uVar11 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
        *puVar15 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar15 = puVar15 + 1;
      }
      for (uVar12 = uVar11 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
        *(undefined1 *)puVar15 = *(undefined1 *)puVar5;
        puVar5 = (undefined4 *)((int)puVar5 + 1);
        puVar15 = (undefined4 *)((int)puVar15 + 1);
      }
      FUN_00404190(uVar11);
    }
  }
LAB_004723df:
  uVar11 = DAT_006b86b0;
  if (param_1 == s___AVCAdamCollision___006a3d98 + 4) {
    FUN_0040c9b0(DAT_006b86b0,0xffffffff);
    FUN_0040c9b0(0,0);
  }
  else {
    if (DAT_006b86b0 != 0) {
      puVar5 = DAT_006b86ac;
      if (DAT_006b86ac == (undefined4 *)0x0) {
        puVar5 = (undefined4 *)&DAT_0064a3b4;
      }
      if (*(byte *)((int)puVar5 + -1) < 0xfe) {
        FUN_004040a0(1);
        puVar5 = DAT_006b86ac;
        if (DAT_006b86ac == (undefined4 *)0x0) {
          puVar5 = (undefined4 *)&DAT_0064a3b4;
        }
        *(undefined4 **)(param_1 + 0x14910) = puVar5;
        *(uint *)(param_1 + 0x14914) = DAT_006b86b0;
        *(undefined4 *)(param_1 + 0x14918) = DAT_006b86b4;
        *(char *)((int)puVar5 + -1) = *(char *)((int)puVar5 + -1) + '\x01';
        goto LAB_004724a7;
      }
    }
    cVar4 = FUN_00401940(DAT_006b86b0,1);
    if (cVar4 != '\0') {
      puVar5 = DAT_006b86ac;
      if (DAT_006b86ac == (undefined4 *)0x0) {
        puVar5 = (undefined4 *)&DAT_0064a3b4;
      }
      puVar15 = *(undefined4 **)(param_1 + 0x14910);
      for (uVar12 = uVar11 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
        *puVar15 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar15 = puVar15 + 1;
      }
      for (uVar12 = uVar11 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
        *(undefined1 *)puVar15 = *(undefined1 *)puVar5;
        puVar5 = (undefined4 *)((int)puVar5 + 1);
        puVar15 = (undefined4 *)((int)puVar15 + 1);
      }
      FUN_00404190(uVar11);
    }
  }
LAB_004724a7:
  param_1[0x1cc] = '\0';
  param_1[0x1cd] = '\0';
  param_1[0x1ce] = -0x80;
  param_1[0x1cf] = '?';
  param_1[0x1d0] = '\0';
  param_1[0x1d1] = '\0';
  param_1[0x1d2] = '\0';
  param_1[0x1d3] = '\0';
  param_1[0x1f0] = '\0';
  param_1[0x1f1] = '\0';
  param_1[0x1f2] = '\0';
  param_1[499] = '\0';
  param_1[500] = '\0';
  param_1[0x1f5] = '\0';
  param_1[0x1f6] = '\0';
  param_1[0x1f7] = '\0';
  param_1[0x214] = '\0';
  param_1[0x215] = '\0';
  param_1[0x216] = '\0';
  param_1[0x217] = '\0';
  param_1[0x218] = '\0';
  param_1[0x219] = '\0';
  param_1[0x21a] = -0x80;
  param_1[0x21b] = '?';
  param_1[0x238] = '\0';
  param_1[0x239] = '\0';
  param_1[0x23a] = -0x80;
  param_1[0x23b] = '?';
  param_1[0x23c] = '\0';
  param_1[0x23d] = '\0';
  param_1[0x23e] = -0x80;
  param_1[0x23f] = '?';
  pcVar10 = param_1 + 0x1d8;
  iVar13 = 4;
  do {
    pcVar10[-0xffffffff00000004] = '\0';
    pcVar10[-0xffffffff00000003] = '\0';
    pcVar10[-0xffffffff00000002] = '\x7f';
    pcVar10[-0xffffffff00000001] = 'C';
    pcVar10[0] = '\0';
    pcVar10[1] = '\0';
    pcVar10[2] = '\x7f';
    pcVar10[3] = 'C';
    pcVar10[4] = '\0';
    pcVar10[5] = '\0';
    pcVar10[6] = '\x7f';
    pcVar10[7] = 'C';
    pcVar10[8] = '\0';
    pcVar10[9] = '\0';
    pcVar10[10] = '\x7f';
    pcVar10[0xb] = 'C';
    pcVar10 = pcVar10 + 0x24;
    iVar13 = iVar13 + -1;
  } while (iVar13 != 0);
  ExceptionList = pvStack_c;
  return param_1;
}

