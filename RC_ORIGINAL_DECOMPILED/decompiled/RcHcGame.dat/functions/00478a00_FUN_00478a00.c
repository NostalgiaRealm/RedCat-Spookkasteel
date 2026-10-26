/*
 * FUN_00478a00 at 00478a00
 * undefined FUN_00478a00(void)
 * Address ranges: 00478a00-004793ce
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x00479231) */
/* WARNING: Removing unreachable block (ram,0x0047909d) */
/* WARNING: Removing unreachable block (ram,0x00479165) */
/* WARNING: Removing unreachable block (ram,0x00479301) */

undefined4 * __thiscall FUN_00478a00(undefined4 *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  bool bVar2;
  bool bVar3;
  undefined4 uVar4;
  char cVar5;
  undefined4 *puVar6;
  int iVar7;
  code *pcVar8;
  void *pvVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int *piVar13;
  int iVar14;
  char *pcVar15;
  char *pcVar16;
  undefined4 *puVar17;
  undefined1 *puVar18;
  undefined *puVar19;
  char *local_28;
  undefined1 auStack_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  uVar4 = param_2;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00628a8b;
  pvStack_c = ExceptionList;
  bVar3 = false;
  bVar2 = false;
  ExceptionList = &pvStack_c;
  FUN_00501cb0();
  param_1[0x3e] = param_3;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  local_4 = 4;
  puVar6 = (undefined4 *)FUN_00479510();
  piVar13 = param_1 + 0xdd;
  param_1[0x43] = *puVar6;
  param_1[0x44] = puVar6[1];
  uVar1 = puVar6[2];
  *piVar13 = 0;
  param_1[0x45] = uVar1;
  FUN_0047d950(param_2);
  iVar14 = 0x32;
  do {
    FUN_0047d9b0();
    iVar14 = iVar14 + -1;
  } while (iVar14 != 0);
  iVar14 = 5;
  do {
    FUN_0047d9b0();
    iVar14 = iVar14 + -1;
  } while (iVar14 != 0);
  FUN_004041b0();
  FUN_004041b0();
  FUN_004041b0();
  param_1[0x12cb] = 0x3f800000;
  param_1[0x12cc] = 0x3f800000;
  param_1[0x12c5] = 0xfa;
  param_1[0x12c6] = 0x9c4;
  param_1[0x12c7] = 0x42200000;
  *(undefined1 *)(param_1 + 0x12cd) = 1;
  param_1[0x12ce] = 0x41700000;
  param_1[0x12cf] = 0x42480000;
  param_1[0x12d0] = 0;
  *(undefined1 *)(param_1 + 0x12d1) = 0;
  param_1[0x12d2] = 0x3f333333;
  *(undefined1 *)(param_1 + 0x12d3) = 1;
  param_1[0x12d4] = 0;
  *(undefined1 *)(param_1 + 0x12d5) = 0;
  FUN_0060b1db(param_1 + 0x12d6,0x18,6,&LAB_0046ada0);
  local_4._0_1_ = 5;
  *(undefined1 *)(param_1 + 0x12fa) = 0;
  *param_1 = &PTR_FUN_0064e294;
  puVar6 = param_1 + 0x47;
  iVar14 = 4;
  do {
    puVar6[-1] = 0x41a00000;
    *puVar6 = 0x437f0000;
    puVar6[1] = 0x41a00000;
    puVar6 = puVar6 + 3;
    iVar14 = iVar14 + -1;
  } while (iVar14 != 0);
  FUN_005b3070();
  iVar14 = DAT_006b915c;
  if (DAT_006b915c == 0) {
    iVar14 = FUN_004bc480();
  }
  iVar7 = *(int *)(iVar14 + 0x4e8);
  if (iVar7 == -0x80000000) {
    iVar7 = FUN_0060af10();
    *(int *)(iVar14 + 0x4e8) = iVar7;
  }
  if (iVar7 == 0) {
    param_3 = 0x32;
    do {
      FUN_0047db50(param_2);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
    param_2 = 5;
    do {
      FUN_0047db50(uVar4);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
    if (*piVar13 != 0) {
      FUN_004040a0();
      uVar11 = 0xffffffff;
      pcVar15 = &DAT_006b3f70;
      do {
        if (uVar11 == 0) break;
        uVar11 = uVar11 - 1;
        cVar5 = *pcVar15;
        pcVar15 = pcVar15 + 1;
      } while (cVar5 != '\0');
      uVar11 = ~uVar11 - 1;
      cVar5 = FUN_00401940(uVar11);
      if (cVar5 != '\0') {
        pcVar15 = &DAT_006b3f70;
        pcVar16 = local_28;
        for (uVar12 = uVar11 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
          *(undefined4 *)pcVar16 = *(undefined4 *)pcVar15;
          pcVar15 = pcVar15 + 4;
          pcVar16 = pcVar16 + 4;
        }
        for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
          *pcVar16 = *pcVar15;
          pcVar15 = pcVar15 + 1;
          pcVar16 = pcVar16 + 1;
        }
        FUN_00404190();
      }
      local_4._0_1_ = 6;
      pcVar8 = (code *)FUN_005a07f0(s_m_DynamicLight__0_00692e54,
                                    s_D__Work_RCHorror_RCSource_RCFair_00693010,0x88);
      (*pcVar8)();
      local_4._0_1_ = 5;
      FUN_004040a0();
    }
    pvVar9 = operator_new(500);
    local_4 = CONCAT31(local_4._1_3_,7);
    if (pvVar9 == (void *)0x0) {
      iVar14 = 0;
    }
    else {
      FUN_004040a0();
      uVar11 = 0xffffffff;
      pcVar15 = s_Fairylight_00693004;
      do {
        if (uVar11 == 0) break;
        uVar11 = uVar11 - 1;
        cVar5 = *pcVar15;
        pcVar15 = pcVar15 + 1;
      } while (cVar5 != '\0');
      uVar11 = ~uVar11 - 1;
      cVar5 = FUN_00401940(uVar11);
      if (cVar5 != '\0') {
        pcVar15 = s_Fairylight_00693004;
        pcVar16 = local_28;
        for (uVar12 = uVar11 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
          *(undefined4 *)pcVar16 = *(undefined4 *)pcVar15;
          pcVar15 = pcVar15 + 4;
          pcVar16 = pcVar16 + 4;
        }
        for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
          *pcVar16 = *pcVar15;
          pcVar15 = pcVar15 + 1;
          pcVar16 = pcVar16 + 1;
        }
        FUN_00404190();
      }
      local_4 = CONCAT31(local_4._1_3_,8);
      FUN_005033a0(auStack_1c);
      bVar3 = true;
      bVar2 = true;
      local_4 = 9;
      iVar14 = FUN_004e22a0();
    }
    *piVar13 = iVar14;
    local_4 = 10;
    if (bVar2) {
      FUN_004040a0();
    }
    local_4._0_1_ = 5;
    local_4._1_3_ = 0;
    if (bVar3) {
      FUN_004040a0();
    }
    bVar2 = false;
    FUN_004e3140();
    FUN_004e3160();
    FUN_004e2d60();
    FUN_004e3090();
    FUN_004e30d0();
    FUN_004e3120();
    FUN_004e3100();
    FUN_00502350();
    FUN_00509a90(*piVar13);
    piVar13 = param_1 + 0xde;
    param_2 = 5;
    do {
      pvVar9 = operator_new(100);
      local_4 = CONCAT31(local_4._1_3_,0xc);
      if (pvVar9 == (void *)0x0) {
        iVar14 = 0;
      }
      else {
        FUN_004040a0();
        uVar11 = 0xffffffff;
        pcVar15 = s_FairyTrail_00692ff8;
        do {
          if (uVar11 == 0) break;
          uVar11 = uVar11 - 1;
          cVar5 = *pcVar15;
          pcVar15 = pcVar15 + 1;
        } while (cVar5 != '\0');
        uVar11 = ~uVar11 - 1;
        cVar5 = FUN_00401940(uVar11);
        if (cVar5 != '\0') {
          pcVar15 = s_FairyTrail_00692ff8;
          pcVar16 = local_28;
          for (uVar12 = uVar11 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
            *(undefined4 *)pcVar16 = *(undefined4 *)pcVar15;
            pcVar15 = pcVar15 + 4;
            pcVar16 = pcVar16 + 4;
          }
          for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
            *pcVar16 = *pcVar15;
            pcVar15 = pcVar15 + 1;
            pcVar16 = pcVar16 + 1;
          }
          FUN_00404190();
        }
        bVar2 = true;
        local_4 = CONCAT31(local_4._1_3_,0xd);
        iVar14 = FUN_00586b40();
      }
      *piVar13 = iVar14;
      local_4._0_1_ = 5;
      local_4._1_3_ = 0;
      if (bVar2) {
        bVar2 = false;
        FUN_004040a0();
      }
      if (*piVar13 != 0) {
        puVar18 = &stack0xffffffa4;
        puVar19 = &DAT_006b87d8;
        FUN_00454200(&stack0xffffffa4,&DAT_006b87d8);
        FUN_0047d800();
        FUN_0050d730(puVar18,puVar19);
        FUN_00587100();
        iVar14 = *piVar13;
        *(undefined4 *)(iVar14 + 0x40) = 0x437f0000;
        *(undefined4 *)(iVar14 + 0x44) = 0x437f0000;
        *(undefined4 *)(iVar14 + 0x48) = 0x41c80000;
        *(undefined4 *)(iVar14 + 0x4c) = 0x437f0000;
        *(undefined4 *)(*piVar13 + 0x60) = 0x42c80000;
        *(undefined4 *)(*piVar13 + 0x50) = 0x3fcccccd;
        *(undefined4 *)(*piVar13 + 0x3c) = 0x3f75c28f;
        *(undefined4 *)(*piVar13 + 0x58) = 800;
        *(undefined1 *)(*piVar13 + 0x39) = 1;
      }
      piVar13 = piVar13 + 1;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  else {
    *piVar13 = 0;
    param_1[0xde] = 0;
    param_1[0xdf] = 0;
    param_1[0xe0] = 0;
    param_1[0xe1] = 0;
    param_1[0xe2] = 0;
  }
  iVar14 = 6;
  do {
    iVar7 = param_1[0x12d6];
    local_4._0_1_ = 0xf;
    if (iVar7 != 0) {
      iVar10 = *(int *)(iVar7 + 0x14) + -1;
      *(int *)(iVar7 + 0x14) = iVar10;
      if (iVar10 == 0) {
        FUN_005abfc0();
      }
      param_1[0x12d6] = 0;
    }
    iVar7 = param_1[0x12d7];
    local_4._0_1_ = 0x10;
    if (iVar7 != 0) {
      iVar10 = *(int *)(iVar7 + 0x14) + -1;
      *(int *)(iVar7 + 0x14) = iVar10;
      if (iVar10 == 0) {
        FUN_005abfc0();
      }
      param_1[0x12d7] = 0;
    }
    iVar14 = iVar14 + -1;
    local_4._0_1_ = 5;
  } while (iVar14 != 0);
  FUN_0040cc00(&DAT_006b87c8,0);
  FUN_0040cc00(&DAT_006b87b8,0);
  uVar11 = DAT_006b87b0;
  if (param_1 == (undefined4 *)0x6b3c18) {
    FUN_0040c9b0(DAT_006b87b0);
    FUN_0040c9b0(0);
  }
  else {
    if (DAT_006b87b0 != 0) {
      puVar6 = DAT_006b87ac;
      if (DAT_006b87ac == (undefined4 *)0x0) {
        puVar6 = (undefined4 *)&DAT_0064a3b4;
      }
      if (*(byte *)((int)puVar6 + -1) < 0xfe) {
        FUN_004040a0();
        puVar6 = DAT_006b87ac;
        if (DAT_006b87ac == (undefined4 *)0x0) {
          puVar6 = (undefined4 *)&DAT_0064a3b4;
        }
        param_1[0x12e5] = puVar6;
        param_1[0x12e6] = DAT_006b87b0;
        param_1[0x12e7] = DAT_006b87b4;
        *(char *)((int)puVar6 + -1) = *(char *)((int)puVar6 + -1) + '\x01';
        goto LAB_0047914e;
      }
    }
    cVar5 = FUN_00401940(DAT_006b87b0);
    if (cVar5 != '\0') {
      puVar6 = DAT_006b87ac;
      if (DAT_006b87ac == (undefined4 *)0x0) {
        puVar6 = (undefined4 *)&DAT_0064a3b4;
      }
      puVar17 = (undefined4 *)param_1[0x12e5];
      for (uVar12 = uVar11 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
        *puVar17 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar17 = puVar17 + 1;
      }
      for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
        *(undefined1 *)puVar17 = *(undefined1 *)puVar6;
        puVar6 = (undefined4 *)((int)puVar6 + 1);
        puVar17 = (undefined4 *)((int)puVar17 + 1);
      }
      FUN_00404190();
    }
  }
LAB_0047914e:
  uVar11 = DAT_006b87a0;
  if (param_1 == (undefined4 *)0x6b3bf0) {
    FUN_0040c9b0(DAT_006b87a0);
    FUN_0040c9b0(0);
  }
  else {
    if (DAT_006b87a0 != 0) {
      puVar6 = DAT_006b879c;
      if (DAT_006b879c == (undefined4 *)0x0) {
        puVar6 = (undefined4 *)&DAT_0064a3b4;
      }
      if (*(byte *)((int)puVar6 + -1) < 0xfe) {
        FUN_004040a0();
        puVar6 = DAT_006b879c;
        if (DAT_006b879c == (undefined4 *)0x0) {
          puVar6 = (undefined4 *)&DAT_0064a3b4;
        }
        param_1[0x12eb] = puVar6;
        param_1[0x12ec] = DAT_006b87a0;
        param_1[0x12ed] = DAT_006b87a4;
        *(char *)((int)puVar6 + -1) = *(char *)((int)puVar6 + -1) + '\x01';
        goto LAB_0047921a;
      }
    }
    cVar5 = FUN_00401940(DAT_006b87a0);
    if (cVar5 != '\0') {
      puVar6 = DAT_006b879c;
      if (DAT_006b879c == (undefined4 *)0x0) {
        puVar6 = (undefined4 *)&DAT_0064a3b4;
      }
      puVar17 = (undefined4 *)param_1[0x12eb];
      for (uVar12 = uVar11 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
        *puVar17 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar17 = puVar17 + 1;
      }
      for (uVar12 = uVar11 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
        *(undefined1 *)puVar17 = *(undefined1 *)puVar6;
        puVar6 = (undefined4 *)((int)puVar6 + 1);
        puVar17 = (undefined4 *)((int)puVar17 + 1);
      }
      param_1[0x12ec] = uVar11;
      *(undefined1 *)(uVar11 + param_1[0x12eb]) = 0;
    }
  }
LAB_0047921a:
  uVar11 = DAT_006b8790;
  if (param_1 == (undefined4 *)0x6b3bc8) {
    FUN_0040c9b0(DAT_006b8790);
    FUN_0040c9b0(0);
  }
  else {
    if (DAT_006b8790 != 0) {
      puVar6 = DAT_006b878c;
      if (DAT_006b878c == (undefined4 *)0x0) {
        puVar6 = (undefined4 *)&DAT_0064a3b4;
      }
      if (*(byte *)((int)puVar6 + -1) < 0xfe) {
        FUN_004040a0();
        puVar6 = DAT_006b878c;
        if (DAT_006b878c == (undefined4 *)0x0) {
          puVar6 = (undefined4 *)&DAT_0064a3b4;
        }
        param_1[0x12f1] = puVar6;
        param_1[0x12f2] = DAT_006b8790;
        param_1[0x12f3] = DAT_006b8794;
        *(char *)((int)puVar6 + -1) = *(char *)((int)puVar6 + -1) + '\x01';
        goto LAB_004792e6;
      }
    }
    cVar5 = FUN_00401940(DAT_006b8790);
    if (cVar5 != '\0') {
      puVar6 = DAT_006b878c;
      if (DAT_006b878c == (undefined4 *)0x0) {
        puVar6 = (undefined4 *)&DAT_0064a3b4;
      }
      puVar17 = (undefined4 *)param_1[0x12f1];
      for (uVar12 = uVar11 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
        *puVar17 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar17 = puVar17 + 1;
      }
      for (uVar12 = uVar11 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
        *(undefined1 *)puVar17 = *(undefined1 *)puVar6;
        puVar6 = (undefined4 *)((int)puVar6 + 1);
        puVar17 = (undefined4 *)((int)puVar17 + 1);
      }
      param_1[0x12f2] = uVar11;
      *(undefined1 *)(uVar11 + param_1[0x12f1]) = 0;
    }
  }
LAB_004792e6:
  uVar11 = DAT_006b8780;
  if (param_1 == (undefined4 *)0x6b3ba0) {
    FUN_0040c9b0(DAT_006b8780);
    FUN_0040c9b0(0);
  }
  else {
    if (DAT_006b8780 != 0) {
      puVar6 = DAT_006b877c;
      if (DAT_006b877c == (undefined4 *)0x0) {
        puVar6 = (undefined4 *)&DAT_0064a3b4;
      }
      if (*(byte *)((int)puVar6 + -1) < 0xfe) {
        FUN_004040a0();
        puVar6 = DAT_006b877c;
        if (DAT_006b877c == (undefined4 *)0x0) {
          puVar6 = (undefined4 *)&DAT_0064a3b4;
        }
        param_1[0x12f7] = puVar6;
        param_1[0x12f8] = DAT_006b8780;
        param_1[0x12f9] = DAT_006b8784;
        *(char *)((int)puVar6 + -1) = *(char *)((int)puVar6 + -1) + '\x01';
        ExceptionList = pvStack_c;
        return param_1;
      }
    }
    cVar5 = FUN_00401940(DAT_006b8780);
    if (cVar5 != '\0') {
      puVar6 = DAT_006b877c;
      if (DAT_006b877c == (undefined4 *)0x0) {
        puVar6 = (undefined4 *)&DAT_0064a3b4;
      }
      puVar17 = (undefined4 *)param_1[0x12f7];
      for (uVar12 = uVar11 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
        *puVar17 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar17 = puVar17 + 1;
      }
      for (uVar12 = uVar11 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
        *(undefined1 *)puVar17 = *(undefined1 *)puVar6;
        puVar6 = (undefined4 *)((int)puVar6 + 1);
        puVar17 = (undefined4 *)((int)puVar17 + 1);
      }
      param_1[0x12f8] = uVar11;
      *(undefined1 *)(uVar11 + param_1[0x12f7]) = 0;
    }
  }
  ExceptionList = pvStack_c;
  return param_1;
}

