/*
 * FUN_0057c0c0 at 0057c0c0
 * undefined FUN_0057c0c0(void)
 * Address ranges: 0057c0c0-0057c4a5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x0057c228) */
/* WARNING: Removing unreachable block (ram,0x0057c2dd) */
/* WARNING: Removing unreachable block (ram,0x0057c2ee) */

int FUN_0057c0c0(int param_1)

{
  char cVar1;
  void *pvVar2;
  undefined4 uVar3;
  int iVar4;
  code *pcVar5;
  int *piVar6;
  int iVar7;
  char *pcVar8;
  char *pcVar9;
  int local_5c;
  int local_58;
  int local_54;
  undefined1 local_50 [4];
  undefined1 local_4c [16];
  undefined1 local_3c [8];
  int iStack_34;
  undefined1 local_2c [16];
  undefined1 local_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00641f4a;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_005ae4b0(local_2c);
  local_4 = 0;
  FUN_005ae4b0(local_3c,*(undefined4 *)(param_1 + 0x24));
  local_4._0_1_ = 1;
  local_5c = 0;
  FUN_005844b0();
  local_4._0_1_ = 2;
  local_58 = 0;
  FUN_005844b0();
  local_4._0_1_ = 3;
  pvVar2 = operator_new(0x11c);
  local_4._0_1_ = 4;
  if (pvVar2 == (void *)0x0) {
    local_54 = 0;
  }
  else {
    uVar3 = FUN_005033f0(local_1c,*(undefined4 *)(param_1 + 0xc));
    local_4 = CONCAT31(local_4._1_3_,5);
    local_54 = FUN_0057ba10(uVar3);
  }
  local_4 = 3;
  if (pvVar2 != (void *)0x0) {
    FUN_004040a0();
  }
  iVar4 = DAT_006c8de0;
  if (DAT_006c8de0 == 0) {
    iVar4 = FUN_0055b280();
  }
  if (*(int *)(iVar4 + 0xd8) == 0) {
    FUN_00409810(&DAT_006b3f70);
    local_4._0_1_ = 7;
    pcVar5 = (code *)FUN_005a07f0(s_m_BitmapMgr_0068eb4c,s___AdamSource_AdamEngine_h_0068eb58,0x188)
    ;
    (*pcVar5)();
    local_4 = CONCAT31(local_4._1_3_,3);
    FUN_004040a0();
  }
  piVar6 = (int *)FUN_0050d980(local_50);
  if (*piVar6 != 0) {
    local_4._0_1_ = 8;
    local_5c = *piVar6;
    FUN_005844b0();
  }
  local_4 = CONCAT31(local_4._1_3_,3);
  FUN_0057d310();
  if (iStack_34 != 0) {
    iVar4 = DAT_006c8de0;
    if (DAT_006c8de0 == 0) {
      iVar4 = FUN_0055b280();
    }
    if (*(int *)(iVar4 + 0xd8) == 0) {
      FUN_00409810(&DAT_006b3f70);
      local_4._0_1_ = 9;
      pcVar5 = (code *)FUN_005a07f0(s_m_BitmapMgr_0068eb4c,s___AdamSource_AdamEngine_h_0068eb58,
                                    0x188);
      (*pcVar5)();
      local_4 = CONCAT31(local_4._1_3_,3);
      FUN_004040a0();
    }
    piVar6 = (int *)FUN_0050d980(local_50);
    if (*piVar6 != 0) {
      local_4._0_1_ = 10;
      local_58 = *piVar6;
      FUN_005844b0();
    }
    local_4 = CONCAT31(local_4._1_3_,3);
    FUN_0057d310();
  }
  if ((local_5c != 0) && (local_58 != 0)) {
    if (local_58 != 0) {
      *(int *)(local_58 + 0x14) = *(int *)(local_58 + 0x14) + 1;
    }
    local_4 = CONCAT31(local_4._1_3_,3);
    FUN_00412de0();
    FUN_0050aea0();
  }
  iVar4 = *(int *)(local_54 + 0x10c);
  if (iVar4 != local_5c) {
    if ((iVar4 != 0) &&
       (iVar7 = *(int *)(iVar4 + 0x14) + -1, *(int *)(iVar4 + 0x14) = iVar7, iVar7 == 0)) {
      FUN_005abfc0();
    }
    *(int *)(local_54 + 0x10c) = local_5c;
    FUN_005844b0();
  }
  FUN_00502350();
  pcVar9 = *(char **)(param_1 + 0xc);
  FUN_0044e4a0();
  local_4._0_1_ = 0xc;
  if (pcVar9 == (char *)0x0) {
    iVar4 = -1;
    pcVar9 = &DAT_006b3f70;
    do {
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar1 != '\0');
    pcVar9 = &DAT_006b3f70;
  }
  else {
    iVar4 = -1;
    pcVar8 = pcVar9;
    do {
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
  }
  FUN_004040f0(pcVar9);
  FUN_00503ae0();
  local_4._0_1_ = 3;
  FUN_004040a0();
  pcVar9 = *(char **)(param_1 + 0x10);
  FUN_0044e4a0();
  local_4._0_1_ = 0xd;
  if (pcVar9 != (char *)0x0) {
    iVar4 = -1;
    pcVar8 = pcVar9;
    do {
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(pcVar9);
  }
  FUN_0040cc00(local_4c,0);
  local_4._0_1_ = 3;
  FUN_004040a0();
  local_4._0_1_ = 2;
  FUN_0057d310();
  local_4._0_1_ = 1;
  FUN_0057d310();
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_004040a0();
  local_4 = 0xffffffff;
  FUN_004040a0();
  ExceptionList = pvStack_c;
  return local_54;
}

