/*
 * FUN_00572980 at 00572980
 * undefined FUN_00572980(void)
 * Address ranges: 00572980-0057315a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x00572e70) */
/* WARNING: Removing unreachable block (ram,0x00572e7f) */
/* WARNING: Removing unreachable block (ram,0x00572f48) */
/* WARNING: Removing unreachable block (ram,0x00572f57) */

int FUN_00572980(undefined4 *param_1)

{
  float fVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  code *pcVar7;
  int *piVar8;
  int iVar9;
  char *pcVar10;
  bool bVar11;
  char *pcVar12;
  undefined1 local_8d;
  int local_8c;
  int local_88;
  int local_84;
  int local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined1 local_70;
  undefined4 local_54;
  undefined1 *local_50;
  undefined1 local_4c;
  int iStack_44;
  undefined1 local_3c;
  int iStack_38;
  undefined1 local_2c [16];
  undefined1 local_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00641301;
  pvStack_c = ExceptionList;
  local_84 = 0;
  ExceptionList = &pvStack_c;
  local_50 = operator_new(0x250);
  local_4 = 0;
  bVar11 = local_50 == (undefined1 *)0x0;
  if (bVar11) {
    iVar5 = 0;
  }
  else {
    FUN_005033f0(local_2c,*param_1);
    local_84 = 1;
    local_4 = CONCAT31(local_4._1_3_,1);
    iVar5 = FUN_00571610();
  }
  local_4 = 0xffffffff;
  if (!bVar11) {
    FUN_004040a0();
  }
  pcVar12 = (char *)*param_1;
  local_80._0_1_ = 0;
  FUN_004040a0();
  local_4 = 3;
  if (pcVar12 == (char *)0x0) {
    iVar9 = -1;
    pcVar12 = &DAT_006b3f70;
    do {
      if (iVar9 == 0) break;
      iVar9 = iVar9 + -1;
      cVar2 = *pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (cVar2 != '\0');
    pcVar12 = &DAT_006b3f70;
  }
  else {
    iVar9 = -1;
    pcVar10 = pcVar12;
    do {
      if (iVar9 == 0) break;
      iVar9 = iVar9 + -1;
      cVar2 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar2 != '\0');
  }
  FUN_004040f0(pcVar12);
  FUN_00503ae0();
  local_4 = 0xffffffff;
  FUN_004040a0();
  pcVar12 = (char *)param_1[1];
  local_80 = (uint)local_80._1_3_ << 8;
  FUN_004040a0();
  local_4 = 4;
  if (pcVar12 != (char *)0x0) {
    iVar9 = -1;
    pcVar10 = pcVar12;
    do {
      if (iVar9 == 0) break;
      iVar9 = iVar9 + -1;
      cVar2 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar2 != '\0');
    FUN_004040f0(pcVar12);
  }
  FUN_0040cc00(&local_80,0);
  local_4 = 0xffffffff;
  FUN_004040a0();
  FUN_00502350();
  switch(param_1[9]) {
  case 0:
    if (param_1[10] == 0) {
      local_70 = 0;
      FUN_004040a0();
      iVar9 = -1;
      pcVar12 = s_Missing_OriginNormal_006a4870;
      do {
        if (iVar9 == 0) break;
        iVar9 = iVar9 + -1;
        cVar2 = *pcVar12;
        pcVar12 = pcVar12 + 1;
      } while (cVar2 != '\0');
      FUN_004040f0(s_Missing_OriginNormal_006a4870);
      local_4 = 5;
      FUN_005035a0();
      goto LAB_00572c0c;
    }
    FUN_005b2fe0();
    FUN_005b2f20();
    *(int *)(iVar5 + 0x1a8) = local_80;
    *(undefined4 *)(iVar5 + 0x1ac) = local_7c;
    *(undefined4 *)(iVar5 + 0x1b0) = local_78;
    FUN_005b2f20();
    *(undefined1 *)(iVar5 + 0x1bc) = 1;
    iVar9 = 0;
    break;
  case 2:
    iVar9 = 2;
    break;
  case 3:
    iVar9 = 3;
    break;
  default:
    FUN_005ae390(local_1c,s_Invalid_value_for_OriginPlacemen_006a4848);
    local_4 = 6;
    FUN_005035a0();
LAB_00572c0c:
    local_4 = 0xffffffff;
    FUN_004040a0();
  case 1:
    iVar9 = 1;
  }
  if ((*(int *)(iVar5 + 0x1a4) != iVar9) || (iVar6 = FUN_005b2ec0(), iVar6 == 0)) {
    *(int *)(iVar5 + 0x1a4) = iVar9;
    *(undefined4 *)(iVar5 + 0x198) = param_1[5];
    *(undefined4 *)(iVar5 + 0x19c) = param_1[6];
    uVar3 = param_1[7];
    *(undefined1 *)(iVar5 + 0x189) = 1;
    *(undefined4 *)(iVar5 + 0x1a0) = uVar3;
  }
  uVar3 = param_1[0xf];
  *(undefined1 *)(iVar5 + 0x1bc) = 1;
  *(undefined4 *)(iVar5 + 0x108) = uVar3;
  *(undefined4 *)(iVar5 + 0x10c) = param_1[0xe];
  *(undefined1 *)(iVar5 + 0x1bc) = 1;
  fVar1 = (float)param_1[0xc];
  *(undefined1 *)(iVar5 + 0x1bc) = 1;
  *(float *)(iVar5 + 0x1b4) = fVar1 * 0.083333336 * 6.2831855;
  uVar3 = param_1[0xb];
  *(undefined1 *)(iVar5 + 0x1bc) = 1;
  *(undefined4 *)(iVar5 + 0x1b8) = uVar3;
  uVar3 = param_1[0x12];
  uVar4 = param_1[0x13];
  local_54 = param_1[0x10];
  *(undefined4 *)(iVar5 + 0x174) = param_1[0x11];
  *(undefined4 *)(iVar5 + 0x178) = uVar3;
  *(undefined4 *)(iVar5 + 0x17c) = uVar4;
  *(undefined4 *)(iVar5 + 0x180) = local_54;
  FUN_00571990();
  if ((char *)param_1[2] != (char *)0x0) {
    iVar9 = -1;
    pcVar12 = (char *)param_1[2];
    do {
      if (iVar9 == 0) break;
      iVar9 = iVar9 + -1;
      cVar2 = *pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (cVar2 != '\0');
    if (iVar9 != -2) goto LAB_00572d5c;
  }
  local_70 = 0;
  FUN_004040a0();
  iVar9 = -1;
  pcVar12 = s_Invalid_bitmapfilename__NULL__006a4828;
  do {
    if (iVar9 == 0) break;
    iVar9 = iVar9 + -1;
    cVar2 = *pcVar12;
    pcVar12 = pcVar12 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_Invalid_bitmapfilename__NULL__006a4828);
  local_4 = 7;
  FUN_005035a0();
  local_4 = 0xffffffff;
  FUN_004040a0();
  param_1[2] = s_smoke_green_bmp_0069231c;
LAB_00572d5c:
  pcVar12 = (char *)param_1[2];
  local_3c = 0;
  FUN_004040a0();
  iVar9 = -1;
  pcVar10 = pcVar12;
  do {
    if (iVar9 == 0) break;
    iVar9 = iVar9 + -1;
    cVar2 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(pcVar12);
  pcVar12 = (char *)param_1[3];
  local_4 = 8;
  if (pcVar12 == (char *)0x0) {
    pcVar12 = &DAT_006b3f70;
  }
  local_4c = 0;
  FUN_004040a0();
  iVar9 = -1;
  pcVar10 = pcVar12;
  do {
    if (iVar9 == 0) break;
    iVar9 = iVar9 + -1;
    cVar2 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(pcVar12);
  local_8c = 0;
  local_88 = 0;
  local_4._0_1_ = 0xb;
  iVar9 = DAT_006c8de0;
  if (DAT_006c8de0 == 0) {
    iVar9 = FUN_0055b280();
  }
  if (*(int *)(iVar9 + 0xd8) == 0) {
    FUN_00409810(&DAT_006b3f70);
    local_4._0_1_ = 0xc;
    pcVar7 = (code *)FUN_005a07f0(s_m_BitmapMgr_0068eb4c,s___AdamSource_AdamEngine_h_0068eb58,0x188)
    ;
    (*pcVar7)();
    local_4._0_1_ = 0xb;
    FUN_004040a0();
  }
  piVar8 = (int *)FUN_0050d980(&local_84);
  if (*piVar8 != 0) {
    local_4._0_1_ = 0xd;
    local_8c = *piVar8;
    FUN_005844b0();
  }
  local_4._0_1_ = 0xb;
  if (local_84 != 0) {
    FUN_004098d0();
  }
  if (iStack_44 != 0) {
    iVar9 = DAT_006c8de0;
    if (DAT_006c8de0 == 0) {
      iVar9 = FUN_0055b280();
    }
    if (*(int *)(iVar9 + 0xd8) == 0) {
      FUN_00409810(&DAT_006b3f70);
      local_4._0_1_ = 0xe;
      pcVar7 = (code *)FUN_005a07f0(s_m_BitmapMgr_0068eb4c,s___AdamSource_AdamEngine_h_0068eb58,
                                    0x188);
      (*pcVar7)();
      local_4._0_1_ = 0xb;
      FUN_004040a0();
    }
    piVar8 = (int *)FUN_0050d980(&local_84);
    if (*piVar8 != 0) {
      local_4._0_1_ = 0xf;
      local_88 = *piVar8;
      FUN_005844b0();
    }
    local_4._0_1_ = 0xb;
    if (local_84 != 0) {
      FUN_004098d0();
    }
  }
  if ((local_8c == 0) || (local_88 == 0)) {
    bVar11 = false;
  }
  else {
    local_50 = &stack0xffffff5c;
    if (local_88 != 0) {
      *(int *)(local_88 + 0x14) = *(int *)(local_88 + 0x14) + 1;
    }
    local_4._0_1_ = 0xb;
    FUN_00412de0();
    FUN_0050aea0();
    bVar11 = true;
  }
  if (param_1[4] != 0) {
    if (bVar11) {
      local_70 = local_8d;
      FUN_004040a0();
      iVar9 = -1;
      pcVar12 = s_Can_t_have_both_alphabitmap_and_c_006a47fc;
      do {
        if (iVar9 == 0) break;
        iVar9 = iVar9 + -1;
        cVar2 = *pcVar12;
        pcVar12 = pcVar12 + 1;
      } while (cVar2 != '\0');
      FUN_004040f0(s_Can_t_have_both_alphabitmap_and_c_006a47fc);
      local_4._0_1_ = 0x11;
      FUN_005035a0();
      local_4._0_1_ = 0xb;
      FUN_004040a0();
    }
    else {
      if (local_8c == 0) {
        FUN_004040a0();
        iVar9 = -1;
        pcVar12 = &DAT_006b3f70;
        do {
          if (iVar9 == 0) break;
          iVar9 = iVar9 + -1;
          cVar2 = *pcVar12;
          pcVar12 = pcVar12 + 1;
        } while (cVar2 != '\0');
        FUN_004040f0(&DAT_006b3f70);
        local_4._0_1_ = 0x12;
        pcVar7 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6);
        (*pcVar7)();
        local_4._0_1_ = 0xb;
        FUN_004040a0();
      }
      FUN_0050b1e0(1,0xff);
    }
  }
  local_50 = &stack0xffffff5c;
  if (local_8c != 0) {
    *(int *)(local_8c + 0x14) = *(int *)(local_8c + 0x14) + 1;
  }
  FUN_00573170();
  local_4._0_1_ = 10;
  if (local_88 != 0) {
    FUN_004098d0();
  }
  local_4._0_1_ = 9;
  if (local_8c != 0) {
    FUN_004098d0();
  }
  local_4 = CONCAT31(local_4._1_3_,8);
  FUN_004040a0();
  if (iStack_38 != 0) {
    cVar2 = *(char *)(iStack_38 + -1);
    if ((cVar2 == '\0') || (cVar2 == -1)) {
      FUN_005fe5f0();
    }
    else {
      *(char *)(iStack_38 + -1) = cVar2 + -1;
    }
  }
  ExceptionList = pvStack_c;
  return iVar5;
}

