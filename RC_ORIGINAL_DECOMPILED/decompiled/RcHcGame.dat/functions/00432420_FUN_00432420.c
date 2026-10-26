/*
 * FUN_00432420 at 00432420
 * undefined FUN_00432420(void)
 * Address ranges: 00432420-00433757
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x00433428) */
/* WARNING: Removing unreachable block (ram,0x00433432) */
/* WARNING: Removing unreachable block (ram,0x0043343c) */
/* WARNING: Removing unreachable block (ram,0x00433436) */
/* WARNING: Removing unreachable block (ram,0x00433068) */
/* WARNING: Removing unreachable block (ram,0x00433072) */
/* WARNING: Removing unreachable block (ram,0x0043307c) */
/* WARNING: Removing unreachable block (ram,0x00433076) */
/* WARNING: Removing unreachable block (ram,0x004334d9) */
/* WARNING: Removing unreachable block (ram,0x004334e3) */
/* WARNING: Removing unreachable block (ram,0x004334ed) */
/* WARNING: Removing unreachable block (ram,0x004334e7) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00432420(int param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  char cVar2;
  int iVar3;
  code *pcVar4;
  float *pfVar5;
  undefined4 uVar6;
  int iVar7;
  byte *pbVar8;
  undefined4 *puVar9;
  uint uVar10;
  uint uVar11;
  undefined1 *puVar12;
  int iVar13;
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  int *piVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  undefined4 *puVar17;
  undefined4 *puVar18;
  undefined4 *puVar19;
  undefined4 *puVar20;
  undefined4 *puVar21;
  byte *pbVar22;
  char *pcVar23;
  bool bVar24;
  float10 fVar25;
  undefined4 unaff_retaddr;
  undefined1 uVar26;
  undefined1 uVar27;
  byte bVar29;
  undefined2 uVar28;
  undefined1 uStack_11f;
  undefined3 uStack_120;
  undefined1 auStack_114 [4];
  undefined4 *puStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  int *piStack_104;
  undefined4 uStack_100;
  float fStack_fc;
  undefined4 uStack_f8;
  float fStack_f4;
  undefined1 auStack_f0 [4];
  float fStack_ec;
  undefined1 auStack_e0 [4];
  undefined4 *puStack_dc;
  uint uStack_d8;
  undefined1 auStack_d0 [4];
  undefined4 *puStack_cc;
  uint uStack_c8;
  int iStack_c0;
  undefined1 auStack_bc [4];
  undefined4 *puStack_b8;
  uint uStack_b4;
  undefined1 auStack_ac [4];
  undefined4 *puStack_a8;
  uint uStack_a4;
  undefined1 auStack_98 [4];
  undefined4 *local_94;
  uint uStack_90;
  int *piStack_88;
  undefined1 auStack_84 [4];
  undefined4 *puStack_80;
  undefined1 auStack_74 [4];
  undefined4 *puStack_70;
  undefined1 auStack_64 [4];
  undefined4 *puStack_60;
  undefined1 uStack_54;
  byte *pbStack_50;
  undefined4 auStack_48 [13];
  void *pvStack_14;
  undefined1 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  bVar29 = (byte)((uint)unaff_EBX >> 0x18);
  uVar26 = (undefined1)((uint)unaff_ESI >> 8);
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00623b25;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_005ae5f0(s_D__Work_RCHorror_RCSource_RCPlay_00690328,0x1e8);
  local_4 = 0;
  if ((DAT_006b52cc & 1) == 0) {
    DAT_006b52cc = DAT_006b52cc | 1;
    fVar25 = (float10)(**(code **)(**(int **)(param_1 + 0x1f0) + 0x28))();
    _DAT_006b52c8 = (float)fVar25;
  }
  FUN_0060a6f2(*(undefined4 *)(param_1 + 0x1f0),0,&CAdamPlayerGameProperties::RTTI_Type_Descriptor,
               &CRcPlayerProperties::RTTI_Type_Descriptor,0);
  puStack_b8 = (undefined4 *)FUN_00439f30();
  fStack_fc = (float)FUN_0060a6f2(*(undefined4 *)(param_1 + 0xf8),0,
                                  &CAdamPlayerInput::RTTI_Type_Descriptor,
                                  &CRcPlayerInput::RTTI_Type_Descriptor,0);
  iVar3 = DAT_006b915c;
  if (DAT_006b915c == 0) {
    iVar3 = FUN_004bc480();
  }
  FUN_0060a6f2(iVar3,0,&CAdamApplication::RTTI_Type_Descriptor,&CRCApplication::RTTI_Type_Descriptor
               ,1);
  puStack_80 = (undefined4 *)FUN_00492360();
  FUN_00435440();
  FUN_004da970(param_2,param_3);
  FUN_004d6720();
  fVar25 = (float10)FUN_004d67f0();
  fStack_ec = (float)fVar25;
  if (*(int *)(param_1 + 0x10c) == 0) {
    uStack_10c = CONCAT31(uStack_10c._1_3_,uStack_11f);
    FUN_004040a0(0);
    uVar10 = 0xffffffff;
    pcVar23 = &DAT_006b3f70;
    do {
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      cVar1 = *pcVar23;
      pcVar23 = pcVar23 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar10 - 1);
    local_4._0_1_ = 1;
    pcVar4 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                  &uStack_10c);
    (*pcVar4)();
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_004040a0(1);
  }
  puVar9 = (undefined4 *)(*(int *)(param_1 + 0x10c) + 0x1e0);
  puVar18 = auStack_48 + 3;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar18 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar18 = puVar18 + 1;
  }
  iVar3 = FUN_00483780();
  if (-1 < iVar3) {
    FUN_00458e40(iVar3);
  }
  (**(code **)(*(int *)(param_1 + 600) + 4))(param_2,param_3);
  if (*(int *)(param_1 + 0x254) == 0) goto LAB_0043366e;
  fVar25 = (float10)(**(code **)(**(int **)(param_1 + 0x1f0) + 0x28))();
  uVar28 = (undefined2)(CONCAT13(bVar29,0x10000) >> 0x10);
  if ((float10)_DAT_006b52c8 <= fVar25) {
    uVar28 = (undefined2)(((uint)bVar29 << 0x18) >> 0x10);
  }
  cVar1 = (**(code **)(**(int **)(param_1 + 0x1f0) + 0x24))();
  iVar3 = *(int *)(param_1 + 0x254);
  uStack_54 = *(undefined1 *)(iVar3 + 0x1b4);
  iVar13 = (uint)CONCAT21(uVar28,(*(uint *)(param_1 + 0x108) & 0x10000) != 0) << 8;
  FUN_004040a0(0);
  FUN_0040cc00(iVar3 + 0x1b4,0,0xffffffff);
  pvStack_c._0_1_ = 2;
  cVar2 = (char)((uint)iVar13 >> 0x10);
  if ((((cVar1 == '\0') && (cVar2 == '\0')) && (*(char *)(param_1 + 0x104) != '\0')) &&
     (*(char *)(param_1 + 0x371) == '\0')) {
LAB_0043275c:
    cVar1 = (**(code **)(**(int **)(param_1 + 0xf8) + 0x30))();
    if (cVar1 == '\0') {
      if (DAT_006b5846 != '\0') {
        DAT_006b5846 = '\0';
      }
      cVar1 = (**(code **)(**(int **)(param_1 + 0xf8) + 0x34))();
      piVar14 = piStack_104;
      if (((cVar1 == '\0') || (cVar1 = (**(code **)(*piStack_104 + 0x3c))(), cVar1 != '\0')) ||
         (pfVar5 = (float *)(**(code **)(*piStack_104 + 0x24))(&stack0xfffffedc), *pfVar5 != 0.0)) {
        cVar1 = (**(code **)(*piStack_104 + 0x3c))();
        if ((cVar1 != '\0') || (*(int *)(param_1 + 0x354) != 0)) {
          pfVar5 = (float *)(**(code **)(*piStack_104 + 0x24))(&stack0xfffffedc);
          if (0.0 <= *pfVar5) {
            pfVar5 = (float *)(**(code **)(*piStack_104 + 0x24))(&stack0xfffffedc);
            if (0.0 < *pfVar5) {
              *(undefined4 *)(param_1 + 0x340) = 10;
            }
          }
          else {
            *(undefined4 *)(param_1 + 0x340) = 9;
          }
        }
      }
      else if (fStack_f4 == 0.0) {
        iVar3 = (**(code **)(*piStack_104 + 0x24))(&stack0xfffffedc);
        uVar6 = 4;
        if (0.0 <= *(float *)(iVar3 + 8)) {
          uVar6 = 5;
        }
        *(undefined4 *)(param_1 + 0x340) = uVar6;
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x340) = 6;
      *(undefined4 *)(param_1 + 0x344) = 6;
      piVar14 = piStack_104;
    }
    cVar1 = FUN_004363a0();
    iVar13 = CONCAT13(cVar1,(int3)iVar13);
    cVar2 = (**(code **)(*piVar14 + 0x34))();
    if ((cVar2 == '\0') && (DAT_006b5846 == '\0')) {
      if (*(int *)(param_1 + 0x340) == 0xe) {
LAB_004328c7:
        cVar2 = FUN_004a0d00();
        if (cVar2 != '\0') {
          *(undefined4 *)(param_1 + 0x340) = 1;
        }
      }
      else if (fStack_f4 == 0.0) {
        *(undefined4 *)(param_1 + 0x340) = 1;
        *(undefined4 *)(param_1 + 0x344) = 1;
      }
    }
    else if (*(int *)(param_1 + 0x340) == 0xe) goto LAB_004328c7;
    cVar2 = (**(code **)(*piStack_88 + 0xc))();
    if (((cVar2 == '\x01') && (*(int *)(param_1 + 0x340) != 0xe)) && (iStack_c0 != 0)) {
      if (*(char *)(param_1 + 0x394) != '\0') {
        if (*(int *)(param_1 + 0x390) != 0) {
          iVar3 = DAT_006b915c;
          if (DAT_006b915c == 0) {
            iVar3 = FUN_004bc480();
          }
          iVar7 = *(int *)(iVar3 + 0x4e8);
          if (iVar7 == -0x80000000) {
            puVar12 = *(undefined1 **)(iVar3 + 0x49c);
            if (puVar12 == (undefined1 *)0x0) {
              puVar12 = &DAT_0064a3b4;
            }
            iVar7 = FUN_0060af10(puVar12);
            *(int *)(iVar3 + 0x4e8) = iVar7;
          }
          if (iVar7 == 0) {
            FUN_004e2d60(0x42aa0000);
            FUN_00502e40(local_4,unaff_retaddr);
          }
        }
        if (*(int *)(param_1 + 0x330) != 0) {
          FUN_00502350(1);
          *(undefined1 *)(*(int *)(param_1 + 0x330) + 0xa8) = 1;
          *(undefined4 *)(*(int *)(param_1 + 0x330) + 0x130) = 0x3f333333;
        }
      }
      *(undefined4 *)(param_1 + 0x340) = 0xf;
    }
    if (((cVar1 != '\0') && (*(int *)(param_1 + 0x340) != 6)) && (DAT_006b5846 == '\0')) {
      *(undefined4 *)(param_1 + 0x340) = 0xd;
    }
  }
  else {
    if ((char)((uint)iVar13 >> 8) != '\0') {
      if (cVar2 != '\0') {
        fVar25 = (float10)(**(code **)(**(int **)(param_1 + 0x1f0) + 0x28))();
        _DAT_006b52c8 = (float)fVar25;
        DAT_006b5845 = '\0';
      }
      goto LAB_0043275c;
    }
    FUN_00431820();
    if (cVar1 == '\0') {
      if ((char)((uint)iVar13 >> 0x10) == '\0') {
        if ((*(char *)(param_1 + 0x104) == '\0') || (*(char *)(param_1 + 0x371) != '\0')) {
          *(undefined4 *)(param_1 + 0x340) = 1;
          *(undefined4 *)(param_1 + 0x344) = 1;
        }
      }
      else {
        fVar25 = (float10)(**(code **)(**(int **)(param_1 + 0x1f0) + 0x28))();
        _DAT_006b52c8 = (float)fVar25;
        DAT_006b5845 = '\0';
        *(undefined4 *)(param_1 + 0x340) = 0xe;
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x340) = 0xb;
      *(undefined4 *)(param_1 + 0x344) = 0xb;
    }
  }
  puVar16 = (undefined4 *)PTR_s_death_00690164;
  puVar15 = (undefined4 *)PTR_DAT_0069015c;
  puVar21 = (undefined4 *)PTR_s_strafer_0069019f_1_00690154;
  puVar20 = (undefined4 *)PTR_s_strafel_00690150;
  puVar19 = (undefined4 *)PTR_DAT_00690140;
  puVar17 = (undefined4 *)PTR_DAT_00690138;
  puVar18 = (undefined4 *)PTR_DAT_00690134;
  puVar9 = (undefined4 *)PTR_DAT_00690130;
  iVar3 = *(int *)(param_1 + 0x340);
  bVar24 = DAT_006b5864 == iVar3;
  DAT_006b5864 = iVar3;
  if (((bVar24) || (DAT_006b5845 != '\0')) || ((char)((uint)iVar13 >> 0x18) != '\0')) {
switchD_00432a46_caseD_3:
    if (*(char *)(param_1 + 0x372) != '\0') goto LAB_00433150;
  }
  else {
    if (*(char *)(param_1 + 0x372) == '\0') {
      uVar27 = (undefined1)((uint)iVar13 >> 8);
      switch(*(undefined4 *)(param_1 + 0x340)) {
      case 1:
        auStack_74[0] = uVar27;
        FUN_004040a0(0);
        uVar10 = 0xffffffff;
        pcVar23 = (char *)puVar9;
        do {
          if (uVar10 == 0) break;
          uVar10 = uVar10 - 1;
          cVar1 = *pcVar23;
          pcVar23 = pcVar23 + 1;
        } while (cVar1 != '\0');
        uVar10 = ~uVar10 - 1;
        cVar1 = FUN_00401940(uVar10,1);
        if (cVar1 != '\0') {
          for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
            *puStack_70 = *puVar9;
            puVar9 = puVar9 + 1;
            puStack_70 = puStack_70 + 1;
          }
          for (uVar11 = uVar10 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
            *(undefined1 *)puStack_70 = *(undefined1 *)puVar9;
            puVar9 = (undefined4 *)((int)puVar9 + 1);
            puStack_70 = (undefined4 *)((int)puStack_70 + 1);
          }
          FUN_00404190(uVar10);
        }
        pvStack_c._0_1_ = 5;
        FUN_004a0660(auStack_74,1,0x3f800000);
        pvStack_c._0_1_ = 2;
        FUN_004040a0(1);
        break;
      case 2:
      case 0xe:
        auStack_84[0] = uVar27;
        FUN_004040a0(0);
        uVar10 = 0xffffffff;
        pcVar23 = (char *)puVar15;
        do {
          if (uVar10 == 0) break;
          uVar10 = uVar10 - 1;
          cVar1 = *pcVar23;
          pcVar23 = pcVar23 + 1;
        } while (cVar1 != '\0');
        uVar10 = ~uVar10 - 1;
        cVar1 = FUN_00401940(uVar10,1);
        if (cVar1 != '\0') {
          puVar9 = puStack_80;
          for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
            *puVar9 = *puVar15;
            puVar15 = puVar15 + 1;
            puVar9 = puVar9 + 1;
          }
          for (uVar11 = uVar10 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
            *(undefined1 *)puVar9 = *(undefined1 *)puVar15;
            puVar15 = (undefined4 *)((int)puVar15 + 1);
            puVar9 = (undefined4 *)((int)puVar9 + 1);
          }
          FUN_00404190(uVar10);
        }
        pvStack_c._0_1_ = 3;
        FUN_0042e240(auStack_84,0,0x3fc00000);
        pvStack_c._0_1_ = 2;
        FUN_004040a0(1);
        break;
      case 4:
        auStack_e0[0] = uVar27;
        FUN_004040a0(0);
        uVar10 = 0xffffffff;
        pcVar23 = (char *)puVar18;
        do {
          if (uVar10 == 0) break;
          uVar10 = uVar10 - 1;
          cVar1 = *pcVar23;
          pcVar23 = pcVar23 + 1;
        } while (cVar1 != '\0');
        uVar10 = ~uVar10 - 1;
        cVar1 = FUN_00401940(uVar10,1);
        if (cVar1 != '\0') {
          puVar9 = puStack_dc;
          for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
            *puVar9 = *puVar18;
            puVar18 = puVar18 + 1;
            puVar9 = puVar9 + 1;
          }
          for (uVar11 = uVar10 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
            *(undefined1 *)puVar9 = *(undefined1 *)puVar18;
            puVar18 = (undefined4 *)((int)puVar18 + 1);
            puVar9 = (undefined4 *)((int)puVar9 + 1);
          }
          *(undefined1 *)((int)puStack_dc + uVar10) = 0;
          uStack_d8 = uVar10;
        }
        pvStack_c._0_1_ = 7;
        FUN_004a0660(auStack_e0,1,0x3f800000);
        pvStack_c._0_1_ = 2;
        FUN_004040a0(1);
        break;
      case 5:
        auStack_114[0] = uVar27;
        FUN_004040a0(0);
        uVar10 = 0xffffffff;
        pcVar23 = (char *)puVar17;
        do {
          if (uVar10 == 0) break;
          uVar10 = uVar10 - 1;
          cVar1 = *pcVar23;
          pcVar23 = pcVar23 + 1;
        } while (cVar1 != '\0');
        uVar10 = ~uVar10 - 1;
        cVar1 = FUN_00401940(uVar10,1);
        if (cVar1 != '\0') {
          puVar9 = puStack_110;
          for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
            *puVar9 = *puVar17;
            puVar17 = puVar17 + 1;
            puVar9 = puVar9 + 1;
          }
          for (uVar11 = uVar10 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
            *(undefined1 *)puVar9 = *(undefined1 *)puVar17;
            puVar17 = (undefined4 *)((int)puVar17 + 1);
            puVar9 = (undefined4 *)((int)puVar9 + 1);
          }
          FUN_00404190(uVar10);
        }
        pvStack_c._0_1_ = 6;
        FUN_004a0660(auStack_114,1,0x400ccccd);
        pvStack_c._0_1_ = 2;
        FUN_004040a0(1);
        break;
      case 6:
        auStack_98[0] = uVar27;
        FUN_004040a0(0);
        uVar10 = 0xffffffff;
        pcVar23 = (char *)puVar19;
        do {
          if (uVar10 == 0) break;
          uVar10 = uVar10 - 1;
          cVar1 = *pcVar23;
          pcVar23 = pcVar23 + 1;
        } while (cVar1 != '\0');
        uVar10 = ~uVar10 - 1;
        cVar1 = FUN_00401940(uVar10,1);
        if (cVar1 != '\0') {
          puVar9 = local_94;
          for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
            *puVar9 = *puVar19;
            puVar19 = puVar19 + 1;
            puVar9 = puVar9 + 1;
          }
          for (uVar11 = uVar10 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
            *(undefined1 *)puVar9 = *(undefined1 *)puVar19;
            puVar19 = (undefined4 *)((int)puVar19 + 1);
            puVar9 = (undefined4 *)((int)puVar9 + 1);
          }
          *(undefined1 *)((int)local_94 + uVar10) = 0;
          uStack_90 = uVar10;
        }
        pvStack_c._0_1_ = 8;
        FUN_004a0660(auStack_98,1,0x3fb33333);
        pvStack_c._0_1_ = 2;
        FUN_004040a0(1);
        puVar9 = (undefined4 *)PTR_DAT_00690148;
        DAT_006b5846 = '\x01';
        if (*(char *)(param_1 + 0x370) != '\0') {
          auStack_ac[0] = (undefined1)((uint)iVar13 >> 8);
          FUN_004040a0(0);
          uVar10 = 0xffffffff;
          pcVar23 = (char *)puVar9;
          do {
            if (uVar10 == 0) break;
            uVar10 = uVar10 - 1;
            cVar1 = *pcVar23;
            pcVar23 = pcVar23 + 1;
          } while (cVar1 != '\0');
          uVar10 = ~uVar10 - 1;
          cVar1 = FUN_00401940(uVar10,1);
          if (cVar1 != '\0') {
            puVar18 = puStack_a8;
            for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
              *puVar18 = *puVar9;
              puVar9 = puVar9 + 1;
              puVar18 = puVar18 + 1;
            }
            for (uVar11 = uVar10 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
              *(undefined1 *)puVar18 = *(undefined1 *)puVar9;
              puVar9 = (undefined4 *)((int)puVar9 + 1);
              puVar18 = (undefined4 *)((int)puVar18 + 1);
            }
            *(undefined1 *)((int)puStack_a8 + uVar10) = 0;
            uStack_a4 = uVar10;
          }
          pvStack_c._0_1_ = 9;
          FUN_0042e240(auStack_ac,1,0x3fa66666);
          pvStack_c._0_1_ = 2;
          FUN_004040a0(1);
          *(undefined1 *)(param_1 + 0x370) = 0;
        }
        break;
      case 9:
        auStack_d0[0] = uVar27;
        FUN_004040a0(0);
        uVar10 = 0xffffffff;
        pcVar23 = (char *)puVar20;
        do {
          if (uVar10 == 0) break;
          uVar10 = uVar10 - 1;
          cVar1 = *pcVar23;
          pcVar23 = pcVar23 + 1;
        } while (cVar1 != '\0');
        uVar10 = ~uVar10 - 1;
        cVar1 = FUN_00401940(uVar10,1);
        if (cVar1 != '\0') {
          puVar9 = puStack_cc;
          for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
            *puVar9 = *puVar20;
            puVar20 = puVar20 + 1;
            puVar9 = puVar9 + 1;
          }
          for (uVar11 = uVar10 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
            *(undefined1 *)puVar9 = *(undefined1 *)puVar20;
            puVar20 = (undefined4 *)((int)puVar20 + 1);
            puVar9 = (undefined4 *)((int)puVar9 + 1);
          }
          *(undefined1 *)((int)puStack_cc + uVar10) = 0;
          uStack_c8 = uVar10;
        }
        pvStack_c._0_1_ = 10;
        FUN_004a0660(auStack_d0,1,0x4019999a);
        pvStack_c._0_1_ = 2;
        FUN_004040a0(1);
        break;
      case 10:
        auStack_bc[0] = uVar27;
        FUN_004040a0(0);
        uVar10 = 0xffffffff;
        pcVar23 = (char *)puVar21;
        do {
          if (uVar10 == 0) break;
          uVar10 = uVar10 - 1;
          cVar1 = *pcVar23;
          pcVar23 = pcVar23 + 1;
        } while (cVar1 != '\0');
        uVar10 = ~uVar10 - 1;
        cVar1 = FUN_00401940(uVar10,1);
        if (cVar1 != '\0') {
          puVar9 = puStack_b8;
          for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
            *puVar9 = *puVar21;
            puVar21 = puVar21 + 1;
            puVar9 = puVar9 + 1;
          }
          for (uVar11 = uVar10 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
            *(undefined1 *)puVar9 = *(undefined1 *)puVar21;
            puVar21 = (undefined4 *)((int)puVar21 + 1);
            puVar9 = (undefined4 *)((int)puVar9 + 1);
          }
          *(undefined1 *)((int)puStack_b8 + uVar10) = 0;
          uStack_b4 = uVar10;
        }
        pvStack_c._0_1_ = 0xb;
        FUN_004a0660(auStack_bc,1,0x4019999a);
        pvStack_c._0_1_ = 2;
        FUN_004040a0(1);
        break;
      case 0xb:
        auStack_64[0] = uVar27;
        FUN_004040a0(0);
        uVar10 = 0xffffffff;
        pcVar23 = (char *)puVar16;
        do {
          if (uVar10 == 0) break;
          uVar10 = uVar10 - 1;
          cVar1 = *pcVar23;
          pcVar23 = pcVar23 + 1;
        } while (cVar1 != '\0');
        uVar10 = ~uVar10 - 1;
        cVar1 = FUN_00401940(uVar10,1);
        if (cVar1 != '\0') {
          for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
            *puStack_60 = *puVar16;
            puVar16 = puVar16 + 1;
            puStack_60 = puStack_60 + 1;
          }
          for (uVar11 = uVar10 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
            *(undefined1 *)puStack_60 = *(undefined1 *)puVar16;
            puVar16 = (undefined4 *)((int)puVar16 + 1);
            puStack_60 = (undefined4 *)((int)puStack_60 + 1);
          }
          FUN_00404190(uVar10);
        }
        pvStack_c._0_1_ = 4;
        FUN_0042e240(auStack_64,0,0x3fcccccd);
        pvStack_c._0_1_ = 2;
        FUN_004040a0(1);
        break;
      case 0xf:
        uVar10 = 0xffffffff;
        pcVar23 = PTR_s_shoot1_00690160;
        do {
          if (uVar10 == 0) break;
          uVar10 = uVar10 - 1;
          cVar1 = *pcVar23;
          pcVar23 = pcVar23 + 1;
        } while (cVar1 != '\0');
        FUN_004040f0(PTR_s_shoot1_00690160,~uVar10 - 1);
        pvStack_c._0_1_ = 0xc;
        FUN_004a0660(&stack0xfffffedc,0,0);
        pvStack_c._0_1_ = 2;
        iVar3 = FUN_00434e30();
        FUN_00431a00(iVar3);
        if (iVar3 == 0xb) {
          FUN_00436b40();
        }
        else {
          FUN_00436a30();
        }
        if (local_4 == -1) {
          auStack_f0[0] = (undefined1)((uint)iVar13 >> 8);
          FUN_004040a0(0);
          uVar10 = 0xffffffff;
          pcVar23 = &DAT_006b3f70;
          do {
            if (uVar10 == 0) break;
            uVar10 = uVar10 - 1;
            cVar1 = *pcVar23;
            pcVar23 = pcVar23 + 1;
          } while (cVar1 != '\0');
          FUN_004040f0(&DAT_006b3f70,~uVar10 - 1);
          pvStack_c._0_1_ = 0xd;
          pcVar4 = (code *)FUN_005a07f0(s_a_Time____ADAMTIME_NONE_0068e214,
                                        s___AdamSource_AdamClock_h_0068e22c,0x8a,auStack_f0);
          (*pcVar4)();
          pvStack_c._0_1_ = 2;
          FUN_004040a0(1);
        }
        *(undefined4 *)(param_1 + 0x36c) = 0;
        *(float *)(param_1 + 0x368) = (float)local_4;
        DAT_006b5845 = '\x01';
      }
      goto switchD_00432a46_caseD_3;
    }
LAB_00433150:
    pbVar8 = pbStack_50;
    pbVar22 = PTR_s_re_spawn_00690144;
    if (pbStack_50 == (byte *)0x0) {
      pbVar8 = &DAT_0064a3b4;
    }
    do {
      bVar29 = *pbVar8;
      bVar24 = bVar29 < *pbVar22;
      if (bVar29 != *pbVar22) {
LAB_0043318e:
        iVar3 = (1 - (uint)bVar24) - (uint)(bVar24 != 0);
        goto LAB_00433195;
      }
      if (bVar29 == 0) break;
      bVar29 = pbVar8[1];
      bVar24 = bVar29 < pbVar22[1];
      if (bVar29 != pbVar22[1]) goto LAB_0043318e;
      pbVar8 = pbVar8 + 2;
      pbVar22 = pbVar22 + 2;
    } while (bVar29 != 0);
    iVar3 = 0;
LAB_00433195:
    if (iVar3 == 0) {
      cVar1 = FUN_004a0d00();
      if (cVar1 != '\0') {
        auStack_114[0] = (undefined1)((uint)iVar13 >> 8);
        uVar10 = 0xffffffff;
        puStack_110 = (undefined4 *)0x0;
        uStack_10c = 0;
        uStack_108 = 0;
        pcVar23 = PTR_DAT_00690130;
        do {
          if (uVar10 == 0) break;
          uVar10 = uVar10 - 1;
          cVar1 = *pcVar23;
          pcVar23 = pcVar23 + 1;
        } while (cVar1 != '\0');
        FUN_004040f0(PTR_DAT_00690130,~uVar10 - 1);
        pvStack_c._0_1_ = 0xe;
        FUN_0042e240(auStack_114,1,0x3fd9999a);
        pvStack_c._0_1_ = 2;
        if (puStack_110 != (undefined4 *)0x0) {
          cVar1 = *(char *)((int)puStack_110 + -1);
          if ((cVar1 == '\0') || (cVar1 == -1)) {
            FUN_005fe5f0((char *)((int)puStack_110 + -1));
          }
          else {
            *(char *)((int)puStack_110 + -1) = cVar1 + -1;
          }
        }
        *(undefined1 *)(param_1 + 0x104) = 1;
        *(undefined4 *)(param_1 + 0x340) = 1;
        *(undefined1 *)(param_1 + 0x372) = 0;
      }
    }
    else {
      auStack_114[0] = (undefined1)((uint)iVar13 >> 8);
      uVar10 = 0xffffffff;
      puStack_110 = (undefined4 *)0x0;
      uStack_10c = 0;
      uStack_108 = 0;
      pcVar23 = PTR_s_re_spawn_00690144;
      do {
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        cVar1 = *pcVar23;
        pcVar23 = pcVar23 + 1;
      } while (cVar1 != '\0');
      FUN_004040f0(PTR_s_re_spawn_00690144,~uVar10 - 1);
      pvStack_c._0_1_ = 0xf;
      FUN_0042e240(auStack_114,0,0x3f800000);
      pvStack_c._0_1_ = 2;
      if (puStack_110 != (undefined4 *)0x0) {
        cVar1 = *(char *)((int)puStack_110 + -1);
        if ((cVar1 == '\0') || (cVar1 == -1)) {
          FUN_005fe5f0((char *)((int)puStack_110 + -1));
        }
        else {
          *(char *)((int)puStack_110 + -1) = cVar1 + -1;
        }
      }
    }
  }
  cVar1 = (char)((uint)iVar13 >> 0x18);
  if (((DAT_006b5845 == '\0') || (*(char *)(param_1 + 0x104) == '\0')) ||
     (*(char *)(param_1 + 0x371) != '\0')) {
    cVar2 = FUN_004341b0(local_4);
    if (cVar2 == '\0') {
      DAT_006b5845 = cVar2;
      *(undefined1 *)(param_1 + 0x364) = 0;
      FUN_00453ce0(0);
      if (DAT_006b5844 != '\0') {
        FUN_00458f90();
        DAT_006b5844 = '\0';
      }
    }
  }
  else {
    *(bool *)(param_1 + 0x364) = *(int *)(param_1 + 0x354) != 0;
    FUN_00434900(local_4);
    fVar25 = (float10)FUN_004a1060();
    if ((float10)0.8 <= fVar25) {
      FUN_00431820();
      DAT_006b5864 = 0;
      DAT_006b5845 = '\0';
    }
  }
  puVar9 = (undefined4 *)PTR_DAT_0069014c;
  if ((*(int *)(param_1 + 0x340) != 6) && (DAT_006b5846 == '\0')) {
    if (cVar1 != '\0') {
      uVar10 = 0xffffffff;
      pcVar23 = PTR_DAT_0069014c;
      do {
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        cVar1 = *pcVar23;
        pcVar23 = pcVar23 + 1;
      } while (cVar1 != '\0');
      uVar10 = ~uVar10 - 1;
      cVar1 = FUN_00401940(uVar10,1);
      if (cVar1 != '\0') {
        puVar18 = (undefined4 *)0x0;
        for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
          *puVar18 = *puVar9;
          puVar9 = puVar9 + 1;
          puVar18 = puVar18 + 1;
        }
        for (uVar11 = uVar10 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
          *(undefined1 *)puVar18 = *(undefined1 *)puVar9;
          puVar9 = (undefined4 *)((int)puVar9 + 1);
          puVar18 = (undefined4 *)((int)puVar18 + 1);
        }
        FUN_00404190(uVar10);
      }
      pvStack_c._0_1_ = 0x10;
      FUN_0042e240(&stack0xfffffedc,0,0x3fc00000);
      pvStack_c._0_1_ = 2;
    }
    puVar9 = (undefined4 *)PTR_DAT_00690168;
    if (*(int *)(param_1 + 0x34c) == 0xc) {
      uVar10 = 0xffffffff;
      pcVar23 = PTR_DAT_00690168;
      do {
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        cVar1 = *pcVar23;
        pcVar23 = pcVar23 + 1;
      } while (cVar1 != '\0');
      puVar12 = (undefined1 *)(~uVar10 - 1);
      cVar1 = FUN_00401940(puVar12,1);
      if (cVar1 != '\0') {
        puVar18 = (undefined4 *)0x0;
        for (uVar10 = (uint)puVar12 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
          *puVar18 = *puVar9;
          puVar9 = puVar9 + 1;
          puVar18 = puVar18 + 1;
        }
        for (uVar10 = (uint)puVar12 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
          *(undefined1 *)puVar18 = *(undefined1 *)puVar9;
          puVar9 = (undefined4 *)((int)puVar9 + 1);
          puVar18 = (undefined4 *)((int)puVar18 + 1);
        }
        *puVar12 = 0;
      }
      pvStack_c._0_1_ = 0x11;
      FUN_0042e240(&stack0xfffffedc,0,0x3fc00000);
      pvStack_c._0_1_ = 2;
    }
  }
  uStack_100 = *(undefined4 *)(param_1 + 0x198);
  fStack_fc = *(float *)(param_1 + 0x19c);
  uStack_f8 = *(undefined4 *)(param_1 + 0x1a0);
  iVar3 = FUN_00554a20();
  fStack_fc = *(float *)(iVar3 + 4) + *(float *)(param_1 + 0x19c);
  iVar3 = (**(code **)(**(int **)(param_1 + 0xf8) + 0x28))(&stack0xfffffedc);
  FUN_00430ac0(auStack_48,&piStack_104,*(undefined4 *)(iVar3 + 4));
  cVar1 = FUN_0042e550();
  if (cVar1 == '\0') {
    iVar3 = *(int *)(param_1 + 0x254);
    puVar9 = auStack_48;
    puVar18 = (undefined4 *)(iVar3 + 0x168);
    for (iVar13 = 0xc; iVar13 != 0; iVar13 = iVar13 + -1) {
      *puVar18 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar18 = puVar18 + 1;
    }
    FUN_0049d5e0(1);
    *(undefined1 *)(iVar3 + 0x198) = 1;
    if (*(int *)(iVar3 + 0x114) == 0) {
      fStack_f4 = (float)CONCAT31(fStack_f4._1_3_,uVar26);
      FUN_004040a0(0);
      uVar10 = 0xffffffff;
      pcVar23 = &DAT_006b3f70;
      do {
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        cVar1 = *pcVar23;
        pcVar23 = pcVar23 + 1;
      } while (cVar1 != '\0');
      FUN_004040f0(&DAT_006b3f70,~uVar10 - 1);
      uStack_10 = 0x12;
      pcVar4 = (code *)FUN_005a07f0(s_m_Actor____0_0068e768,s___AdamSource_AdamActor_h_0068e778,
                                    0x18d,&fStack_f4);
      (*pcVar4)();
      uStack_10 = 2;
      FUN_004040a0(1);
    }
    FUN_005b50a0(iVar3 + 0x168);
    FUN_004337a0(0);
  }
  (**(code **)(**(int **)(param_1 + 0x254) + 8))(puStack_8,local_4);
  pvStack_c = (void *)((uint)pvStack_c._1_3_ << 8);
  if (pbStack_50 != (byte *)0x0) {
    bVar29 = pbStack_50[-1];
    if ((bVar29 == 0) || (bVar29 == 0xff)) {
      FUN_005fe5f0(pbStack_50 + -1);
    }
    else {
      pbStack_50[-1] = bVar29 - 1;
    }
  }
LAB_0043366e:
  if (((*(int **)(param_1 + 0x334) != (int *)0x0) &&
      ((**(code **)(**(int **)(param_1 + 0x334) + 8))(local_4,unaff_retaddr),
      *(char *)(*(int *)(param_1 + 0x334) + 0x364) == '\0')) && (DAT_006b5844 != '\0')) {
    FUN_00458f90();
    DAT_006b5844 = '\0';
  }
  if (*(int *)(param_1 + 0x398) != 0) {
    puVar9 = (undefined4 *)FUN_0049bc80(&stack0xfffffedc);
    uStack_100 = *puVar9;
    fStack_fc = (float)puVar9[1] + 20.0;
    uStack_f8 = puVar9[2];
    (**(code **)(**(int **)(param_1 + 0x398) + 0x4c))(&uStack_100);
  }
  if (*(int **)(param_1 + 0x250) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x250) + 8))(local_4,unaff_retaddr);
  }
  pvStack_c = (void *)0xffffffff;
  FUN_005ae770();
  ExceptionList = pvStack_14;
  return;
}

