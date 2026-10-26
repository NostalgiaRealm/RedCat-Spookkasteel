/*
 * FUN_004cffe0 at 004cffe0
 * undefined FUN_004cffe0(void)
 * Address ranges: 004cffe0-004d0280
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_004cffe0(int param_1,undefined4 *param_2)

{
  char cVar1;
  int *piVar2;
  code *pcVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  int local_60;
  undefined1 local_5c [16];
  undefined1 local_4c [16];
  undefined1 auStack_3c [36];
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00631230;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  piVar2 = (int *)FUN_004042e0(&local_60);
  local_4 = 0;
  if (*piVar2 == 0) {
    local_5c[0] = param_2._0_1_;
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
    local_4c[0] = param_2._0_1_;
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
  if ((local_60 != 0) &&
     (iVar5 = *(int *)(local_60 + 0x14) + -1, *(int *)(local_60 + 0x14) = iVar5, iVar5 == 0)) {
    FUN_005abfc0(0);
  }
  uStack_18 = *param_2;
  uStack_14 = param_2[1];
  uStack_10 = param_2[2];
  piVar2 = (int *)FUN_004042e0(&param_2);
  local_4 = 3;
  if (*piVar2 == 0) {
    local_4c[0] = param_2._0_1_;
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
    local_5c[0] = param_2._0_1_;
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
  FUN_005b96a0(*(undefined4 *)(iVar5 + 0x5c),*(undefined4 *)(param_1 + 0x138),auStack_3c);
  local_4 = 0xffffffff;
  if ((param_2 != (undefined4 *)0x0) &&
     (iVar5 = param_2[5], param_2[5] = iVar5 + -1, iVar5 + -1 == 0)) {
    FUN_005abfc0(0);
  }
  ExceptionList = pvStack_c;
  return;
}

