/*
 * FUN_00453950 at 00453950
 * undefined FUN_00453950(void)
 * Address ranges: 00453950-00453cd6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_00453950(int param_1,int param_2,undefined1 **param_3)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  char cVar3;
  int iVar4;
  code *pcVar5;
  int *piVar6;
  uint uVar7;
  char *pcVar8;
  undefined1 *puStack_50;
  undefined1 **local_4c;
  undefined1 local_36 [2];
  undefined1 *local_34;
  undefined1 *local_30;
  undefined1 local_2c [16];
  undefined1 *apuStack_1c [4];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00626550;
  pvStack_c = ExceptionList;
  local_34 = (undefined1 *)&local_4c;
  local_4 = 1;
  local_4c = param_3;
  puStack_50 = (undefined1 *)0x453989;
  ExceptionList = &pvStack_c;
  FUN_005844b0();
  local_30 = (undefined1 *)&puStack_50;
  local_4._0_1_ = 2;
  FUN_00449760(&param_2);
  local_4._0_1_ = 1;
  FUN_00456c70();
  if (param_2 != 0) {
    local_34 = (undefined1 *)0x0;
    local_4._0_1_ = 3;
    if (*(int *)(param_1 + 0x5c) != 0) {
      local_4c = (undefined1 **)0x4539cd;
      FUN_004098d0();
      *(undefined1 **)(param_1 + 0x5c) = local_34;
      local_4c = (undefined1 **)0x4539da;
      FUN_005844b0();
    }
    local_4._0_1_ = 1;
    local_4c = (undefined1 **)0x4539e7;
    FUN_0057d310();
    local_34 = (undefined1 *)0x0;
    local_4._0_1_ = 4;
    if (*(int *)(param_1 + 0x60) != 0) {
      local_4c = (undefined1 **)0x4539ff;
      FUN_004098d0();
      *(undefined1 **)(param_1 + 0x60) = local_34;
      local_4c = (undefined1 **)0x453a0c;
      FUN_005844b0();
    }
    local_4._0_1_ = 1;
    local_4c = (undefined1 **)0x453a19;
    FUN_0057d310();
  }
  if (param_3 != (undefined1 **)0x0) {
    iVar4 = DAT_006b915c;
    if (DAT_006b915c == 0) {
      local_4c = (undefined1 **)0x453a32;
      iVar4 = FUN_004bc480();
    }
    if (*(int *)(iVar4 + 0x3a4) == 0) {
      local_4c = (undefined1 **)local_36;
      puStack_50 = &DAT_006b3f70;
      FUN_00409810();
      local_4c = (undefined1 **)local_2c;
      local_4._0_1_ = 5;
      puStack_50 = (undefined1 *)0x130;
      pcVar5 = (code *)FUN_005a07f0(s_m_Game_0068e584,s___AdamSource_AdamApplication_h_0068e58c);
      (*pcVar5)();
      local_4._0_1_ = 1;
      local_4c = (undefined1 **)0x1;
      puStack_50 = (undefined1 *)0x453a80;
      FUN_004040a0();
    }
    local_4c = &local_34;
    puStack_50 = (undefined1 *)0x453a90;
    piVar6 = (int *)FUN_00453d40();
    local_4._0_1_ = 6;
    uVar2 = (undefined1)local_4;
    local_4._0_1_ = 6;
    if (*piVar6 == 0) {
      local_4c = (undefined1 **)(local_36 + 1);
      puStack_50 = &DAT_006b3f70;
      FUN_00409810();
      local_4c = apuStack_1c;
      local_4._0_1_ = 7;
      puStack_50 = (undefined1 *)0xb6;
      pcVar5 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638);
      (*pcVar5)();
      local_4._0_1_ = 6;
      local_4c = (undefined1 **)0x1;
      puStack_50 = (undefined1 *)0x453ae2;
      FUN_004040a0();
      uVar2 = (undefined1)local_4;
    }
    local_4._0_1_ = uVar2;
    local_4c = (undefined1 **)0x453ae9;
    FUN_004f2570();
    local_4._0_1_ = 1;
    local_4c = (undefined1 **)0x453af6;
    FUN_0057d310();
    local_4c = *(undefined1 ***)(param_1 + 0x5c);
    local_30 = (undefined1 *)&local_4c;
    if (local_4c != (undefined1 **)0x0) {
      local_4c[5] = local_4c[5] + 1;
    }
    local_4._0_1_ = 1;
    puStack_50 = (undefined1 *)0x453b16;
    FUN_00421430();
    puStack_50 = (undefined1 *)0x453b1d;
    cVar3 = FUN_004fbca0();
    if (cVar3 == '\0') {
      local_4c = *(undefined1 ***)(param_1 + 0x5c);
      if (local_4c != (undefined1 **)0x0) {
        local_4c[5] = local_4c[5] + 1;
      }
      local_4._0_1_ = 1;
      puStack_50 = (undefined1 *)0x453b45;
      local_30 = (undefined1 *)&local_4c;
      FUN_00421430();
      puStack_50 = (undefined1 *)0x453b4c;
      cVar3 = FUN_004fb310();
      if (cVar3 == '\0') {
        local_4c = (undefined1 **)0x0;
        local_2c[0] = param_3._0_1_;
        puStack_50 = (undefined1 *)0x453b62;
        FUN_004040a0();
        uVar7 = 0xffffffff;
        pcVar8 = &DAT_006b3f70;
        do {
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          cVar3 = *pcVar8;
          pcVar8 = pcVar8 + 1;
        } while (cVar3 != '\0');
        local_4c = (undefined1 **)(~uVar7 - 1);
        puStack_50 = &DAT_006b3f70;
        FUN_004040f0();
        local_4c = (undefined1 **)local_2c;
        local_4._0_1_ = 10;
        puStack_50 = (undefined1 *)0x1a8;
        pcVar5 = (code *)FUN_005a07f0(s_result_00691bc0,s_D__Work_RCHorror_RCSource_RCHud__00691b8c)
        ;
        (*pcVar5)();
        local_4._0_1_ = 1;
        local_4c = (undefined1 **)0x1;
        puStack_50 = (undefined1 *)0x453bb1;
        FUN_004040a0();
      }
    }
    local_4c = *(undefined1 ***)(param_1 + 0x60);
    local_30 = (undefined1 *)&local_4c;
    if (local_4c != (undefined1 **)0x0) {
      local_4c[5] = local_4c[5] + 1;
    }
    local_4._0_1_ = 1;
    puStack_50 = (undefined1 *)0x453bd1;
    FUN_00421430();
    puStack_50 = (undefined1 *)0x453bd8;
    cVar3 = FUN_004fbca0();
    if (cVar3 == '\0') {
      local_4c = *(undefined1 ***)(param_1 + 0x60);
      if (local_4c != (undefined1 **)0x0) {
        local_4c[5] = local_4c[5] + 1;
      }
      local_4._0_1_ = 1;
      puStack_50 = (undefined1 *)0x453c00;
      local_30 = (undefined1 *)&local_4c;
      FUN_00421430();
      puStack_50 = (undefined1 *)0x453c07;
      cVar3 = FUN_004fb310();
      if (cVar3 == '\0') {
        local_4c = (undefined1 **)0x0;
        local_2c[0] = param_3._0_1_;
        puStack_50 = (undefined1 *)0x453c1e;
        FUN_004040a0();
        uVar7 = 0xffffffff;
        pcVar8 = &DAT_006b3f70;
        do {
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          cVar3 = *pcVar8;
          pcVar8 = pcVar8 + 1;
        } while (cVar3 != '\0');
        local_4c = (undefined1 **)(~uVar7 - 1);
        puStack_50 = &DAT_006b3f70;
        FUN_004040f0();
        local_4c = (undefined1 **)local_2c;
        local_4._0_1_ = 0xd;
        puStack_50 = (undefined1 *)0x1ad;
        pcVar5 = (code *)FUN_005a07f0(s_result_00691bc0,s_D__Work_RCHorror_RCSource_RCHud__00691b8c)
        ;
        (*pcVar5)();
        local_4._0_1_ = 1;
        local_4c = (undefined1 **)0x1;
        puStack_50 = (undefined1 *)0x453c6d;
        FUN_004040a0();
      }
    }
  }
  local_4 = (uint)local_4._1_3_ << 8;
  if (param_2 != 0) {
    iVar4 = *(int *)(param_2 + 0x14) + -1;
    *(int *)(param_2 + 0x14) = iVar4;
    if (iVar4 == 0) {
      local_4c = (undefined1 **)0x0;
      puStack_50 = (undefined1 *)0x453c92;
      FUN_005abfc0();
    }
    param_2 = 0;
  }
  local_4 = 0xffffffff;
  if ((param_3 != (undefined1 **)0x0) &&
     (puVar1 = param_3[5], param_3[5] = puVar1 + -1, puVar1 + -1 == (undefined1 *)0x0)) {
    local_4c = (undefined1 **)0x0;
    puStack_50 = (undefined1 *)0x453cc2;
    FUN_005abfc0();
  }
  ExceptionList = pvStack_c;
  return;
}

