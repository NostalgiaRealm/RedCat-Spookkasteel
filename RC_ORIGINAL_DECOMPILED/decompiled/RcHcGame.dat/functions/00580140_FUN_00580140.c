/*
 * FUN_00580140 at 00580140
 * undefined FUN_00580140(void)
 * Address ranges: 00580140-0058038b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_00580140(int param_1,int param_2,int param_3)

{
  char cVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  char *pcVar7;
  undefined1 local_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00642380;
  pvStack_c = ExceptionList;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  ExceptionList = &pvStack_c;
  if (param_2 != 0) {
    piVar6 = (int *)(param_1 + 0x120);
    if (*(char *)(param_1 + 0x140) == '\0') {
      piVar6 = (int *)(param_1 + 0x130);
    }
    ExceptionList = &pvStack_c;
    if (*piVar6 != 0) {
      piVar6 = (int *)(param_1 + 0x120);
      if (*(char *)(param_1 + 0x140) == '\0') {
        piVar6 = (int *)(param_1 + 0x130);
      }
      ExceptionList = &pvStack_c;
      if (*piVar6 == 0) {
        local_1c[0] = (undefined1)param_2;
        ExceptionList = &pvStack_c;
        FUN_004040a0(0);
        uVar5 = 0xffffffff;
        pcVar7 = &DAT_006b3f70;
        do {
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          cVar1 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar1 != '\0');
        FUN_004040f0(&DAT_006b3f70,~uVar5 - 1);
        local_4._0_1_ = 2;
        pcVar2 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                      local_1c);
        (*pcVar2)();
        local_4._0_1_ = 1;
        FUN_004040a0(1);
      }
      FUN_00553130();
      local_4._0_1_ = 3;
      piVar6 = (int *)(param_1 + 0x120);
      if (*(char *)(param_1 + 0x140) == '\0') {
        piVar6 = (int *)(param_1 + 0x130);
      }
      iVar4 = *piVar6;
      if (iVar4 != 0) {
        iVar3 = *(int *)(iVar4 + 0x14) + -1;
        *(int *)(iVar4 + 0x14) = iVar3;
        if (iVar3 == 0) {
          FUN_005abfc0(0);
        }
        *piVar6 = 0;
        FUN_005844b0();
      }
    }
    local_4._0_1_ = 1;
    piVar6 = (int *)(param_1 + 0x120);
    if (*(char *)(param_1 + 0x140) != '\0') {
      piVar6 = (int *)(param_1 + 0x130);
    }
    if (*piVar6 != 0) {
      piVar6 = (int *)(param_1 + 0x120);
      if (*(char *)(param_1 + 0x140) != '\0') {
        piVar6 = (int *)(param_1 + 0x130);
      }
      if (*piVar6 == 0) {
        local_1c[0] = (undefined1)param_2;
        FUN_004040a0(0);
        uVar5 = 0xffffffff;
        pcVar7 = &DAT_006b3f70;
        do {
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          cVar1 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar1 != '\0');
        FUN_004040f0(&DAT_006b3f70,~uVar5 - 1);
        local_4._0_1_ = 4;
        pcVar2 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                      local_1c);
        (*pcVar2)();
        local_4._0_1_ = 1;
        FUN_004040a0(1);
      }
      FUN_00553130();
      local_4._0_1_ = 5;
      if (*(char *)(param_1 + 0x140) == '\0') {
        piVar6 = (int *)(param_1 + 0x120);
      }
      else {
        piVar6 = (int *)(param_1 + 0x130);
      }
      iVar4 = *piVar6;
      if (iVar4 != 0) {
        iVar3 = *(int *)(iVar4 + 0x14) + -1;
        *(int *)(iVar4 + 0x14) = iVar3;
        if (iVar3 == 0) {
          FUN_005abfc0(0);
        }
        *piVar6 = 0;
        FUN_005844b0();
      }
    }
  }
  local_4 = (uint)local_4._1_3_ << 8;
  if (param_2 != 0) {
    FUN_004098d0();
  }
  local_4 = 0xffffffff;
  if ((param_3 != 0) &&
     (iVar4 = *(int *)(param_3 + 0x14) + -1, *(int *)(param_3 + 0x14) = iVar4, iVar4 == 0)) {
    FUN_005abfc0(0);
  }
  ExceptionList = pvStack_c;
  return;
}

