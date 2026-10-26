/*
 * FUN_004e1150 at 004e1150
 * undefined FUN_004e1150(void)
 * Address ranges: 004e1150-004e13c1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004e1150(int *param_1,int param_2,int param_3)

{
  char cVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  char *pcVar7;
  undefined1 auStack_24 [4];
  undefined1 auStack_20 [4];
  undefined1 local_1c;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  iVar6 = param_3;
  puStack_8 = &LAB_00632708;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (param_3 != 0) {
    ExceptionList = &pvStack_c;
    *(int *)(param_3 + 0x14) = *(int *)(param_3 + 0x14) + 1;
  }
  local_4._0_1_ = 2;
  local_4._1_3_ = 0;
  FUN_00449760(&param_2);
  local_4._0_1_ = 1;
  FUN_0049c1b0();
  if (param_2 != 0) {
    if (param_1[0xbd] != 0) {
      if (param_1[0xbd] == 0) {
        local_1c = (undefined1)param_2;
        FUN_004040a0();
        iVar6 = -1;
        pcVar7 = &DAT_006b3f70;
        do {
          if (iVar6 == 0) break;
          iVar6 = iVar6 + -1;
          cVar1 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar1 != '\0');
        FUN_004040f0();
        local_4._0_1_ = 3;
        pcVar2 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638);
        (*pcVar2)();
        local_4._0_1_ = 1;
        FUN_004040a0();
        iVar6 = param_3;
      }
      FUN_00553130();
      iVar4 = param_1[0xbd];
      local_4._0_1_ = 4;
      if (iVar4 != 0) {
        iVar3 = *(int *)(iVar4 + 0x14) + -1;
        *(int *)(iVar4 + 0x14) = iVar3;
        if (iVar3 == 0) {
          FUN_005abfc0();
        }
        param_1[0xbd] = 0;
        FUN_005844b0();
      }
      local_4._0_1_ = 1;
    }
    *(undefined1 *)(param_1 + 0xbc) = 0;
  }
  iVar4 = 0;
  if (iVar6 != 0) {
    if (param_1[0xbd] != 0) {
      if (param_1[0xbd] == 0) {
        local_1c = (undefined1)param_2;
        FUN_004040a0();
        iVar6 = -1;
        pcVar7 = &DAT_006b3f70;
        do {
          if (iVar6 == 0) break;
          iVar6 = iVar6 + -1;
          cVar1 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar1 != '\0');
        FUN_004040f0();
        local_4._0_1_ = 5;
        pcVar2 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638);
        (*pcVar2)();
        local_4._0_1_ = 1;
        FUN_004040a0();
      }
      FUN_00553130();
      iVar6 = param_1[0xbd];
      local_4._0_1_ = 6;
      if (iVar6 != 0) {
        iVar4 = *(int *)(iVar6 + 0x14) + -1;
        *(int *)(iVar6 + 0x14) = iVar4;
        if (iVar4 == 0) {
          FUN_005abfc0();
        }
        param_1[0xbd] = 0;
        FUN_005844b0();
      }
      local_4._0_1_ = 1;
      FUN_0057d310();
    }
    iVar6 = *param_1;
    *(undefined1 *)(param_1 + 0xbc) = 0;
    uVar5 = (**(code **)(iVar6 + 0x48))();
    FUN_0049d020(auStack_20,uVar5);
    (**(code **)(iVar6 + 0x4c))();
    iVar6 = (**(code **)(*param_1 + 0x48))(auStack_24);
    param_1[0xb4] = (int)(_DAT_006b9400 + *(float *)(iVar6 + 4));
    iVar4 = param_3;
  }
  local_4 = (uint)local_4._1_3_ << 8;
  if (param_2 != 0) {
    FUN_004098d0();
    param_2 = 0;
  }
  local_4 = 0xffffffff;
  if ((iVar4 != 0) &&
     (iVar6 = *(int *)(iVar4 + 0x14) + -1, *(int *)(iVar4 + 0x14) = iVar6, iVar6 == 0)) {
    FUN_005abfc0();
  }
  ExceptionList = pvStack_c;
  return;
}

