/*
 * FUN_0047d2f0 at 0047d2f0
 * undefined FUN_0047d2f0(void)
 * Address ranges: 0047d2f0-0047d56a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_0047d2f0(int param_1,int param_2)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  code *pcVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  char *pcVar8;
  int local_34;
  int local_30;
  undefined1 local_2c [16];
  undefined1 local_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  iVar7 = param_2;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00628e70;
  pvStack_c = ExceptionList;
  piVar1 = (int *)(param_1 + 0x4b5c + param_2 * 0x18);
  if (*(int *)(param_1 + 0x4b5c + param_2 * 0x18) == 0) {
    iVar3 = DAT_006c8de0;
    ExceptionList = &pvStack_c;
    if (DAT_006c8de0 == 0) {
      ExceptionList = &pvStack_c;
      iVar3 = FUN_0055b280();
    }
    if (*(int *)(iVar3 + 0xfc) == 0) {
      param_2._0_1_ = (undefined1)iVar3;
      local_2c[0] = (undefined1)param_2;
      FUN_004040a0(0);
      uVar6 = 0xffffffff;
      pcVar8 = &DAT_006b3f70;
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        cVar2 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar2 != '\0');
      FUN_004040f0(&DAT_006b3f70,~uVar6 - 1);
      local_4 = 0;
      pcVar4 = (code *)FUN_005a07f0(s_m_SoundSystem_0068f8ec,s___AdamSource_AdamEngine_h_0068eb58,
                                    399,local_2c);
      (*pcVar4)();
      local_4 = 0xffffffff;
      FUN_004040a0(1);
    }
    piVar5 = (int *)FUN_0054ed80(&local_34,param_1 + (iVar7 * 3 + 0x96c) * 8,0,0x3f800000,0,0);
    iVar7 = *piVar1;
    local_4 = 1;
    if (iVar7 != *piVar5) {
      if ((iVar7 != 0) &&
         (iVar3 = *(int *)(iVar7 + 0x14) + -1, *(int *)(iVar7 + 0x14) = iVar3, iVar3 == 0)) {
        FUN_005abfc0(0);
      }
      iVar7 = *piVar5;
      *piVar1 = iVar7;
      if (iVar7 != 0) {
        *(int *)(iVar7 + 0x14) = *(int *)(iVar7 + 0x14) + 1;
      }
    }
    if (local_34 == 0) {
      ExceptionList = pvStack_c;
      return;
    }
    iVar7 = *(int *)(local_34 + 0x14) + -1;
    *(int *)(local_34 + 0x14) = iVar7;
  }
  else {
    ExceptionList = &pvStack_c;
    FUN_0047d1f0(param_2);
    iVar3 = DAT_006c8de0;
    if (DAT_006c8de0 == 0) {
      iVar3 = FUN_0055b280();
    }
    if (*(int *)(iVar3 + 0xfc) == 0) {
      param_2._0_1_ = (undefined1)iVar3;
      local_1c[0] = (undefined1)param_2;
      FUN_004040a0(0);
      uVar6 = 0xffffffff;
      pcVar8 = &DAT_006b3f70;
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        cVar2 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar2 != '\0');
      FUN_004040f0(&DAT_006b3f70,~uVar6 - 1);
      local_4 = 2;
      pcVar4 = (code *)FUN_005a07f0(s_m_SoundSystem_0068f8ec,s___AdamSource_AdamEngine_h_0068eb58,
                                    399,local_1c);
      (*pcVar4)();
      local_4 = 0xffffffff;
      FUN_004040a0(1);
    }
    piVar5 = (int *)FUN_0054ed80(&local_30,param_1 + (iVar7 * 3 + 0x96c) * 8,0,0x3f800000,0,0);
    iVar7 = *piVar1;
    local_4 = 3;
    if (iVar7 != *piVar5) {
      if ((iVar7 != 0) &&
         (iVar3 = *(int *)(iVar7 + 0x14) + -1, *(int *)(iVar7 + 0x14) = iVar3, iVar3 == 0)) {
        FUN_005abfc0(0);
      }
      iVar7 = *piVar5;
      *piVar1 = iVar7;
      if (iVar7 != 0) {
        *(int *)(iVar7 + 0x14) = *(int *)(iVar7 + 0x14) + 1;
      }
    }
    if (local_30 == 0) {
      ExceptionList = pvStack_c;
      return;
    }
    iVar7 = *(int *)(local_30 + 0x14) + -1;
    *(int *)(local_30 + 0x14) = iVar7;
  }
  if (iVar7 == 0) {
    local_4 = 0xffffffff;
    FUN_005abfc0(0);
  }
  ExceptionList = pvStack_c;
  return;
}

