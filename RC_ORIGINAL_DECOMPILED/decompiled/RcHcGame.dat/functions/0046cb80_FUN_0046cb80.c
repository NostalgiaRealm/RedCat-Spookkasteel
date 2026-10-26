/*
 * FUN_0046cb80 at 0046cb80
 * undefined FUN_0046cb80(void)
 * Address ranges: 0046cb80-0046ce04
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_0046cb80(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  code *pcVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  char *pcVar8;
  int local_34;
  int local_30;
  undefined1 local_2c [16];
  undefined1 local_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00627eb0;
  pvStack_c = ExceptionList;
  iVar3 = param_2 * 3 + 0x102;
  piVar1 = (int *)(param_1 + iVar3 * 8);
  if (*(int *)(param_1 + iVar3 * 8) == 0) {
    iVar3 = DAT_006c8de0;
    ExceptionList = &pvStack_c;
    if (DAT_006c8de0 == 0) {
      ExceptionList = &pvStack_c;
      iVar3 = FUN_0055b280();
    }
    if (*(int *)(iVar3 + 0xfc) == 0) {
      local_2c[0] = (undefined1)param_5;
      FUN_004040a0(0);
      uVar7 = 0xffffffff;
      pcVar8 = &DAT_006b3f70;
      do {
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        cVar2 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar2 != '\0');
      FUN_004040f0(&DAT_006b3f70,~uVar7 - 1);
      local_4 = 0;
      pcVar4 = (code *)FUN_005a07f0(s_m_SoundSystem_0068f8ec,s___AdamSource_AdamEngine_h_0068eb58,
                                    399,local_2c);
      (*pcVar4)();
      local_4 = 0xffffffff;
      FUN_004040a0(1);
    }
    piVar5 = (int *)FUN_0054ed80(&local_34,param_1 + 0x814 + param_2 * 0x18,param_3,param_4,param_5,
                                 0);
    iVar3 = *piVar1;
    local_4 = 1;
    if (iVar3 != *piVar5) {
      if ((iVar3 != 0) &&
         (iVar6 = *(int *)(iVar3 + 0x14) + -1, *(int *)(iVar3 + 0x14) = iVar6, iVar6 == 0)) {
        FUN_005abfc0(0);
      }
      iVar3 = *piVar5;
      *piVar1 = iVar3;
      if (iVar3 != 0) {
        *(int *)(iVar3 + 0x14) = *(int *)(iVar3 + 0x14) + 1;
      }
    }
    if (local_34 == 0) {
      ExceptionList = pvStack_c;
      return;
    }
    iVar3 = *(int *)(local_34 + 0x14) + -1;
    *(int *)(local_34 + 0x14) = iVar3;
  }
  else {
    ExceptionList = &pvStack_c;
    FUN_0046ca90(param_2);
    iVar3 = DAT_006c8de0;
    if (DAT_006c8de0 == 0) {
      iVar3 = FUN_0055b280();
    }
    if (*(int *)(iVar3 + 0xfc) == 0) {
      local_1c[0] = (undefined1)param_5;
      FUN_004040a0(0);
      uVar7 = 0xffffffff;
      pcVar8 = &DAT_006b3f70;
      do {
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        cVar2 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar2 != '\0');
      FUN_004040f0(&DAT_006b3f70,~uVar7 - 1);
      local_4 = 2;
      pcVar4 = (code *)FUN_005a07f0(s_m_SoundSystem_0068f8ec,s___AdamSource_AdamEngine_h_0068eb58,
                                    399,local_1c);
      (*pcVar4)();
      local_4 = 0xffffffff;
      FUN_004040a0(1);
    }
    piVar5 = (int *)FUN_0054ed80(&local_30,param_1 + 0x814 + param_2 * 0x18,param_3,param_4,param_5,
                                 0);
    iVar3 = *piVar1;
    local_4 = 3;
    if (iVar3 != *piVar5) {
      if ((iVar3 != 0) &&
         (iVar6 = *(int *)(iVar3 + 0x14) + -1, *(int *)(iVar3 + 0x14) = iVar6, iVar6 == 0)) {
        FUN_005abfc0(0);
      }
      iVar3 = *piVar5;
      *piVar1 = iVar3;
      if (iVar3 != 0) {
        *(int *)(iVar3 + 0x14) = *(int *)(iVar3 + 0x14) + 1;
      }
    }
    if (local_30 == 0) {
      ExceptionList = pvStack_c;
      return;
    }
    iVar3 = *(int *)(local_30 + 0x14) + -1;
    *(int *)(local_30 + 0x14) = iVar3;
  }
  if (iVar3 == 0) {
    local_4 = 0xffffffff;
    FUN_005abfc0(0);
  }
  ExceptionList = pvStack_c;
  return;
}

