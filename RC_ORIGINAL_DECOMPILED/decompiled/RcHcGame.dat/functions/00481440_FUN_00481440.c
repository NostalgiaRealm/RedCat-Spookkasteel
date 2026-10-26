/*
 * FUN_00481440 at 00481440
 * undefined FUN_00481440(void)
 * Address ranges: 00481440-00481661
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_00481440(int param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  uint uVar5;
  char *pcVar6;
  undefined1 *local_38;
  undefined1 local_21;
  undefined1 *local_20;
  undefined1 local_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_006293f0;
  pvStack_c = ExceptionList;
  local_4._1_3_ = 0;
  ExceptionList = &pvStack_c;
  if (param_2 != 0) {
    local_20 = (undefined1 *)0x0;
    iVar3 = *(int *)(param_1 + 0x4c);
    local_4._0_1_ = 2;
    local_4._1_3_ = 0;
    ExceptionList = &pvStack_c;
    if (iVar3 != 0) {
      iVar2 = *(int *)(iVar3 + 0x14) + -1;
      ExceptionList = &pvStack_c;
      *(int *)(iVar3 + 0x14) = iVar2;
      if (iVar2 == 0) {
        local_38 = (undefined1 *)0x0;
        FUN_005abfc0();
      }
      *(undefined4 *)(param_1 + 0x4c) = 0;
      local_38 = (undefined1 *)0x48149b;
      FUN_005844b0();
    }
    local_20 = (undefined1 *)0x0;
    iVar3 = *(int *)(param_1 + 0x48);
    local_4._0_1_ = 3;
    if (iVar3 != 0) {
      iVar2 = *(int *)(iVar3 + 0x14) + -1;
      *(int *)(iVar3 + 0x14) = iVar2;
      if (iVar2 == 0) {
        local_38 = (undefined1 *)0x0;
        FUN_005abfc0();
      }
      *(undefined1 **)(param_1 + 0x48) = local_20;
      local_38 = (undefined1 *)0x4814ca;
      FUN_005844b0();
    }
    local_4._0_1_ = 1;
    local_38 = (undefined1 *)0x4814d8;
    FUN_0057d310();
    iVar3 = DAT_006c8de0;
    if (DAT_006c8de0 == 0) {
      local_38 = (undefined1 *)0x4814e7;
      iVar3 = FUN_0055b280();
    }
    if (*(int *)(iVar3 + 0xfc) == 0) {
      local_38 = &local_21;
      FUN_00409810(&DAT_006b3f70);
      local_38 = local_1c;
      local_4._0_1_ = 4;
      pcVar4 = (code *)FUN_005a07f0(s_m_SoundSystem_0068f8ec,s___AdamSource_AdamEngine_h_0068eb58,
                                    399);
      (*pcVar4)();
      local_4._0_1_ = 1;
      local_38 = (undefined1 *)0x1;
      FUN_004040a0();
    }
    local_38 = (undefined1 *)0x1;
    FUN_00550330();
  }
  if (param_3 != 0) {
    local_38 = *(undefined1 **)(param_1 + 0x4c);
    local_20 = (undefined1 *)&local_38;
    if (local_38 != (undefined1 *)0x0) {
      *(int *)(local_38 + 0x14) = *(int *)(local_38 + 0x14) + 1;
    }
    local_4._0_1_ = 1;
    FUN_00421430();
    cVar1 = FUN_004fbca0();
    if (cVar1 == '\0') {
      local_38 = *(undefined1 **)(param_1 + 0x4c);
      if (local_38 != (undefined1 *)0x0) {
        *(int *)(local_38 + 0x14) = *(int *)(local_38 + 0x14) + 1;
      }
      local_4._0_1_ = 1;
      local_20 = (undefined1 *)&local_38;
      FUN_00421430();
      cVar1 = FUN_004fb310();
      if (cVar1 == '\0') {
        local_38 = (undefined1 *)0x0;
        local_1c[0] = (undefined1)param_3;
        FUN_004040a0();
        uVar5 = 0xffffffff;
        pcVar6 = &DAT_006b3f70;
        do {
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          cVar1 = *pcVar6;
          pcVar6 = pcVar6 + 1;
        } while (cVar1 != '\0');
        local_38 = (undefined1 *)(~uVar5 - 1);
        FUN_004040f0(&DAT_006b3f70);
        local_38 = local_1c;
        local_4._0_1_ = 7;
        pcVar4 = (code *)FUN_005a07f0(s_result_00691bc0,s_D__Work_RCHorror_RCSource_RcCutS_00693130,
                                      0x111);
        (*pcVar4)();
        local_4._0_1_ = 1;
        local_38 = (undefined1 *)0x1;
        FUN_004040a0();
      }
    }
  }
  local_4 = (uint)local_4._1_3_ << 8;
  if ((param_2 != 0) &&
     (iVar3 = *(int *)(param_2 + 0x14) + -1, *(int *)(param_2 + 0x14) = iVar3, iVar3 == 0)) {
    local_38 = (undefined1 *)0x0;
    FUN_005abfc0();
  }
  local_4 = 0xffffffff;
  if ((param_3 != 0) &&
     (iVar3 = *(int *)(param_3 + 0x14) + -1, *(int *)(param_3 + 0x14) = iVar3, iVar3 == 0)) {
    local_38 = (undefined1 *)0x0;
    FUN_005abfc0();
  }
  ExceptionList = pvStack_c;
  return;
}

