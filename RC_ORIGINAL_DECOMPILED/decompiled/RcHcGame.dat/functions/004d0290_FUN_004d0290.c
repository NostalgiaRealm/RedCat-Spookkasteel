/*
 * FUN_004d0290 at 004d0290
 * undefined FUN_004d0290(void)
 * Address ranges: 004d0290-004d056e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_004d0290(int param_1,undefined4 *param_2)

{
  char cVar1;
  int *piVar2;
  code *pcVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  int local_7c;
  int iStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined1 auStack_68 [12];
  undefined1 local_5c [16];
  undefined1 local_4c [16];
  undefined1 auStack_3c [48];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00631270;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  piVar2 = (int *)FUN_004042e0(&local_7c);
  local_4 = 0;
  if (*piVar2 == 0) {
    FUN_004040a0(0);
    uVar4 = 0xffffffff;
    pcVar6 = &DAT_006b3f70;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar4 - 1);
    local_4._0_1_ = 1;
    pcVar3 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                  local_5c);
    (*pcVar3)();
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_004040a0(1);
  }
  iVar5 = *piVar2;
  if (*(int *)(iVar5 + 0x5c) == 0) {
    FUN_004040a0(0);
    uVar4 = 0xffffffff;
    pcVar6 = &DAT_006b3f70;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar4 - 1);
    local_4._0_1_ = 2;
    pcVar3 = (code *)FUN_005a07f0(s_m_GenesisWorld_0068e1a8,s___AdamSource_AdamSubLevel_h_0068e1b8,
                                  0x144,local_4c);
    (*pcVar3)();
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_004040a0(1);
  }
  FUN_005b9810(*(undefined4 *)(iVar5 + 0x5c),*(undefined4 *)(param_1 + 0x138),auStack_3c);
  local_4 = 0xffffffff;
  if ((local_7c != 0) &&
     (iVar5 = *(int *)(local_7c + 0x14) + -1, *(int *)(local_7c + 0x14) = iVar5, iVar5 == 0)) {
    FUN_005abfc0(0);
  }
  piVar2 = (int *)FUN_004042e0(&iStack_78);
  local_4 = 3;
  if (*piVar2 == 0) {
    FUN_004040a0(0);
    uVar4 = 0xffffffff;
    pcVar6 = &DAT_006b3f70;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar4 - 1);
    local_4._0_1_ = 4;
    pcVar3 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                  local_4c);
    (*pcVar3)();
    local_4 = CONCAT31(local_4._1_3_,3);
    FUN_004040a0(1);
  }
  iVar5 = *piVar2;
  if (*(int *)(iVar5 + 0x5c) == 0) {
    FUN_004040a0(0);
    uVar4 = 0xffffffff;
    pcVar6 = &DAT_006b3f70;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar4 - 1);
    local_4._0_1_ = 5;
    pcVar3 = (code *)FUN_005a07f0(s_m_GenesisWorld_0068e1a8,s___AdamSource_AdamSubLevel_h_0068e1b8,
                                  0x144,local_5c);
    (*pcVar3)();
    local_4 = CONCAT31(local_4._1_3_,3);
    FUN_004040a0(1);
  }
  FUN_005b98a0(*(undefined4 *)(iVar5 + 0x5c),*(undefined4 *)(param_1 + 0x138),auStack_68);
  local_4 = 0xffffffff;
  if ((iStack_78 != 0) &&
     (iVar5 = *(int *)(iStack_78 + 0x14) + -1, *(int *)(iStack_78 + 0x14) = iVar5, iVar5 == 0)) {
    FUN_005abfc0(0);
  }
  FUN_005b3000(&uStack_74);
  *param_2 = uStack_74;
  param_2[1] = uStack_70;
  param_2[2] = uStack_6c;
  ExceptionList = pvStack_c;
  return;
}

