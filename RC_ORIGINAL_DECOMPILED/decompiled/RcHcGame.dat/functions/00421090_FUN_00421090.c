/*
 * FUN_00421090 at 00421090
 * undefined FUN_00421090(void)
 * Address ranges: 00421090-004213de
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x004211f5) */
/* WARNING: Removing unreachable block (ram,0x004212aa) */

int FUN_00421090(int param_1)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  code *pcVar6;
  int *piVar7;
  uint uVar8;
  char *pcVar9;
  code *pcStack_64;
  int local_50;
  code *local_4c;
  undefined1 local_44 [4];
  undefined1 *puStack_40;
  undefined1 local_3c [8];
  int iStack_34;
  undefined1 local_2c [16];
  undefined1 local_1c [16];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  iVar3 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00622248;
  local_c = ExceptionList;
  pcStack_64 = FUN_00421020;
  ExceptionList = &local_c;
  iVar4 = FUN_004a87e0(param_1);
  if (((*(int *)(iVar3 + 0x5c) == 0) || (*(int *)(iVar3 + 0x54) == 0)) ||
     (*(int *)(iVar3 + 0x58) == 0)) {
    *(undefined1 *)(iVar4 + 0x30d) = 0;
    ExceptionList = local_c;
    return iVar4;
  }
  *(undefined1 *)(iVar4 + 0x30d) = 1;
  pcVar2 = *(char **)(iVar3 + 0x54);
  pcStack_64 = (code *)0x0;
  local_2c[0] = (undefined1)param_1;
  FUN_004040a0();
  uVar8 = 0xffffffff;
  pcVar9 = pcVar2;
  do {
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  pcStack_64 = (code *)(~uVar8 - 1);
  FUN_004040f0(pcVar2);
  pcVar2 = *(char **)(iVar3 + 0x58);
  local_3c[0] = (undefined1)param_1;
  pcStack_64 = (code *)0x0;
  local_4 = 0;
  FUN_004040a0();
  uVar8 = 0xffffffff;
  pcVar9 = pcVar2;
  do {
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  pcStack_64 = (code *)(~uVar8 - 1);
  FUN_004040f0(pcVar2);
  local_4._0_1_ = 1;
  local_50 = 0;
  pcStack_64 = (code *)0x421156;
  FUN_005844b0();
  local_4._0_1_ = 2;
  local_4c = (code *)0x0;
  pcStack_64 = (code *)0x421168;
  FUN_005844b0();
  local_4._0_1_ = 3;
  iVar5 = DAT_006c8de0;
  if (DAT_006c8de0 == 0) {
    pcStack_64 = (code *)0x42117b;
    iVar5 = FUN_0055b280();
  }
  if (*(int *)(iVar5 + 0xd8) == 0) {
    pcStack_64 = (code *)&param_1;
    FUN_00409810(&DAT_006b3f70);
    pcStack_64 = (code *)local_1c;
    local_4._0_1_ = 4;
    pcVar6 = (code *)FUN_005a07f0(s_m_BitmapMgr_0068eb4c,s___AdamSource_AdamEngine_h_0068eb58,0x188)
    ;
    (*pcVar6)();
    local_4._0_1_ = 3;
    pcStack_64 = (code *)0x1;
    FUN_004040a0();
  }
  pcStack_64 = (code *)local_2c;
  piVar7 = (int *)FUN_0050d980(local_44);
  if (*piVar7 != 0) {
    local_4._0_1_ = 5;
    local_50 = *piVar7;
    pcStack_64 = (code *)0x421209;
    FUN_005844b0();
  }
  local_4 = CONCAT31(local_4._1_3_,3);
  pcStack_64 = (code *)0x421217;
  FUN_0057d310();
  if (iStack_34 != 0) {
    iVar5 = DAT_006c8de0;
    if (DAT_006c8de0 == 0) {
      pcStack_64 = (code *)0x421230;
      iVar5 = FUN_0055b280();
    }
    if (*(int *)(iVar5 + 0xd8) == 0) {
      pcStack_64 = (code *)&param_1;
      FUN_00409810(&DAT_006b3f70);
      pcStack_64 = (code *)local_1c;
      local_4._0_1_ = 6;
      pcVar6 = (code *)FUN_005a07f0(s_m_BitmapMgr_0068eb4c,s___AdamSource_AdamEngine_h_0068eb58,
                                    0x188);
      (*pcVar6)();
      local_4 = CONCAT31(local_4._1_3_,3);
      pcStack_64 = (code *)0x1;
      FUN_004040a0();
    }
    pcStack_64 = (code *)local_3c;
    piVar7 = (int *)FUN_0050d980(local_44);
    if (*piVar7 != 0) {
      local_4._0_1_ = 7;
      local_4c = (code *)*piVar7;
      pcStack_64 = (code *)0x4212be;
      FUN_005844b0();
    }
    local_4 = CONCAT31(local_4._1_3_,3);
    pcStack_64 = (code *)0x4212cc;
    FUN_0057d310();
  }
  if ((local_50 == 0) || (local_4c == (code *)0x0)) {
    *(undefined1 *)(iVar4 + 0x30d) = 0;
  }
  else {
    puStack_40 = (undefined1 *)&pcStack_64;
    pcStack_64 = local_4c;
    if (local_4c != (code *)0x0) {
      *(int *)(local_4c + 0x14) = *(int *)(local_4c + 0x14) + 1;
    }
    local_4 = CONCAT31(local_4._1_3_,3);
    FUN_00412de0();
    FUN_0050aea0();
  }
  *(undefined4 *)(iVar4 + 0x314) = *(undefined4 *)(iVar3 + 0x60);
  *(undefined4 *)(iVar4 + 0x318) = *(undefined4 *)(iVar3 + 100);
  *(undefined4 *)(iVar4 + 0x31c) = *(undefined4 *)(iVar3 + 0x68);
  iVar3 = *(int *)(iVar4 + 0x310);
  if (iVar3 != local_50) {
    if ((iVar3 != 0) &&
       (iVar5 = *(int *)(iVar3 + 0x14) + -1, *(int *)(iVar3 + 0x14) = iVar5, iVar5 == 0)) {
      pcStack_64 = (code *)0x0;
      FUN_005abfc0();
    }
    *(int *)(iVar4 + 0x310) = local_50;
    pcStack_64 = (code *)0x421363;
    FUN_005844b0();
  }
  local_4._0_1_ = 2;
  if (local_4c != (code *)0x0) {
    pcStack_64 = (code *)0x421375;
    FUN_004098d0();
  }
  local_4._0_1_ = 1;
  if (local_50 != 0) {
    pcStack_64 = (code *)0x42138b;
    FUN_004098d0();
  }
  pcStack_64 = (code *)0x1;
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_004040a0();
  pcStack_64 = (code *)0x1;
  local_4 = 0xffffffff;
  FUN_004040a0();
  ExceptionList = local_c;
  return iVar4;
}

