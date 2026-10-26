/*
 * FUN_00465c00 at 00465c00
 * undefined FUN_00465c00(void)
 * Address ranges: 00465c00-00466000
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x00465da4) */
/* WARNING: Removing unreachable block (ram,0x00465e59) */

int FUN_00465c00(undefined4 *param_1)

{
  char cVar1;
  undefined4 uVar2;
  code *pcVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  bool bVar8;
  char *pcVar9;
  int local_5c;
  int local_58;
  undefined4 local_54;
  undefined1 *local_50;
  undefined1 local_4c;
  int iStack_44;
  undefined1 local_3c [16];
  undefined1 local_2c;
  undefined1 local_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006277fa;
  pvStack_c = ExceptionList;
  iVar6 = 0;
  local_54 = 0;
  ExceptionList = &pvStack_c;
  local_50 = operator_new(0x6d0);
  bVar8 = local_50 != (undefined1 *)0x0;
  local_4 = 0;
  if (bVar8) {
    uVar2 = FUN_005033f0(local_1c,*param_1);
    local_54 = 1;
    local_4 = CONCAT31(local_4._1_3_,1);
    iVar6 = FUN_00464e10(uVar2);
  }
  local_4 = 0xffffffff;
  if (bVar8) {
    FUN_004040a0();
  }
  local_2c = param_1._0_1_;
  FUN_004040a0();
  iVar5 = -1;
  pcVar9 = s_kaboom2_bmp_00692900;
  do {
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_kaboom2_bmp_00692900);
  local_4 = 3;
  local_4c = param_1._0_1_;
  FUN_004040a0();
  iVar5 = -1;
  pcVar9 = s_kaboom2_a_bmp_006928f0;
  do {
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_kaboom2_a_bmp_006928f0);
  local_4._0_1_ = 4;
  local_5c = 0;
  FUN_005844b0();
  local_4._0_1_ = 5;
  local_58 = 0;
  FUN_005844b0();
  local_4._0_1_ = 6;
  iVar5 = DAT_006c8de0;
  if (DAT_006c8de0 == 0) {
    iVar5 = FUN_0055b280();
  }
  if (*(int *)(iVar5 + 0xd8) == 0) {
    FUN_00409810(&DAT_006b3f70);
    local_4._0_1_ = 7;
    pcVar3 = (code *)FUN_005a07f0(s_m_BitmapMgr_0068eb4c,s___AdamSource_AdamEngine_h_0068eb58,0x188)
    ;
    (*pcVar3)();
    local_4._0_1_ = 6;
    FUN_004040a0();
  }
  piVar4 = (int *)FUN_0050d980(&local_54);
  if (*piVar4 != 0) {
    local_4._0_1_ = 8;
    local_5c = *piVar4;
    FUN_005844b0();
  }
  local_4 = CONCAT31(local_4._1_3_,6);
  FUN_0057d310();
  if (iStack_44 != 0) {
    iVar5 = DAT_006c8de0;
    if (DAT_006c8de0 == 0) {
      iVar5 = FUN_0055b280();
    }
    if (*(int *)(iVar5 + 0xd8) == 0) {
      FUN_00409810(&DAT_006b3f70);
      local_4._0_1_ = 9;
      pcVar3 = (code *)FUN_005a07f0(s_m_BitmapMgr_0068eb4c,s___AdamSource_AdamEngine_h_0068eb58,
                                    0x188);
      (*pcVar3)();
      local_4 = CONCAT31(local_4._1_3_,6);
      FUN_004040a0();
    }
    piVar4 = (int *)FUN_0050d980(&local_54);
    if (*piVar4 != 0) {
      local_4._0_1_ = 10;
      local_58 = *piVar4;
      FUN_005844b0();
    }
    local_4 = CONCAT31(local_4._1_3_,6);
    FUN_0057d310();
  }
  if ((local_5c != 0) && (local_58 != 0)) {
    local_50 = &stack0xffffff8c;
    if (local_58 != 0) {
      *(int *)(local_58 + 0x14) = *(int *)(local_58 + 0x14) + 1;
    }
    local_4 = CONCAT31(local_4._1_3_,6);
    FUN_00412de0();
    FUN_0050aea0();
  }
  if (*(int *)(iVar6 + 0xf8) != local_5c) {
    if (*(int *)(iVar6 + 0xf8) != 0) {
      FUN_004098d0();
    }
    *(int *)(iVar6 + 0xf8) = local_5c;
    FUN_005844b0();
  }
  pcVar9 = (char *)*param_1;
  FUN_0044e4a0();
  local_4._0_1_ = 0xc;
  if (pcVar9 == (char *)0x0) {
    iVar5 = -1;
    pcVar9 = &DAT_006b3f70;
    do {
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar1 != '\0');
    pcVar9 = &DAT_006b3f70;
  }
  else {
    iVar5 = -1;
    pcVar7 = pcVar9;
    do {
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
  }
  FUN_004040f0(pcVar9);
  FUN_00503ae0();
  local_4._0_1_ = 6;
  FUN_004040a0();
  pcVar9 = (char *)param_1[1];
  FUN_0044e4a0();
  local_4._0_1_ = 0xd;
  if (pcVar9 != (char *)0x0) {
    iVar5 = -1;
    pcVar7 = pcVar9;
    do {
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(pcVar9);
  }
  FUN_0040cc00(local_3c,0);
  local_4._0_1_ = 6;
  FUN_004040a0();
  FUN_00502350();
  local_4._0_1_ = 5;
  FUN_0057d310();
  local_4._0_1_ = 4;
  FUN_0057d310();
  local_4 = CONCAT31(local_4._1_3_,3);
  FUN_004040a0();
  local_4 = 0xffffffff;
  FUN_004040a0();
  ExceptionList = pvStack_c;
  return iVar6;
}

