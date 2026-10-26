/*
 * FUN_004e2a30 at 004e2a30
 * undefined FUN_004e2a30(void)
 * Address ranges: 004e2a30-004e2c61
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_004e2a30(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int *piVar3;
  code *pcVar4;
  int iVar5;
  uint uVar6;
  char *pcVar7;
  int *local_30;
  undefined1 local_2c [4];
  int iStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined1 local_1c [16];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006328f0;
  local_c = ExceptionList;
  uVar2 = 1;
  if ((*(int *)(param_1 + 0x140) != 0) && (*(int *)(param_1 + 0x18) != 0)) {
    ExceptionList = &local_c;
    piVar3 = (int *)FUN_004042e0(&local_30);
    local_4 = 0;
    if (*piVar3 == 0) {
      FUN_004040a0(0);
      uVar6 = 0xffffffff;
      pcVar7 = &DAT_006b3f70;
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      FUN_004040f0(&DAT_006b3f70,~uVar6 - 1);
      local_4._0_1_ = 1;
      pcVar4 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                    local_2c);
      (*pcVar4)();
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_004040a0(1);
    }
    iVar5 = *piVar3;
    if (*(int *)(iVar5 + 0x5c) == 0) {
      FUN_004040a0(0);
      uVar6 = 0xffffffff;
      pcVar7 = &DAT_006b3f70;
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      FUN_004040f0(&DAT_006b3f70,~uVar6 - 1);
      local_4._0_1_ = 2;
      pcVar4 = (code *)FUN_005a07f0(s_m_GenesisWorld_0068e1a8,s___AdamSource_AdamSubLevel_h_0068e1b8
                                    ,0x144,local_1c);
      (*pcVar4)();
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_004040a0(1);
    }
    iVar5 = FUN_005b7d20(*(undefined4 *)(iVar5 + 0x5c),*(undefined4 *)(param_1 + 0x140),
                         param_1 + 0x154,param_1 + 0x130,*(undefined4 *)(param_1 + 0x160),
                         *(undefined1 *)(param_1 + 0x12d));
    local_4 = 0xffffffff;
    local_2c[0] = iVar5 == 0;
    if (local_30 != (int *)0x0) {
      iVar5 = local_30[5];
      local_30[5] = iVar5 + -1;
      if (iVar5 + -1 == 0) {
        FUN_005abfc0(0);
      }
    }
    if (!(bool)local_2c[0]) {
      *(undefined1 *)(param_1 + 0x1f0) = 1;
      ExceptionList = local_c;
      return 1;
    }
    uVar6 = 0xffffffff;
    iStack_28 = 0;
    pcVar7 = s_geWorld_SetLightAttributes___fai_0069a2a0;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    uStack_24 = 0;
    uStack_20 = 0;
    FUN_004040f0(s_geWorld_SetLightAttributes___fai_0069a2a0,~uVar6 - 1);
    local_4 = 3;
    FUN_005aff20(s_D__Work_RCHorror_AdamSource_Adam_0069a274,0xeb,local_2c);
    if (iStack_28 != 0) {
      cVar1 = *(char *)(iStack_28 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_005fe5f0((char *)(iStack_28 + -1));
      }
      else {
        *(char *)(iStack_28 + -1) = cVar1 + -1;
      }
    }
    uVar2 = 0;
  }
  *(undefined1 *)(param_1 + 0x1f0) = 1;
  ExceptionList = local_c;
  return uVar2;
}

