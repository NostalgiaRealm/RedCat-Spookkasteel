/*
 * FUN_004763c0 at 004763c0
 * undefined FUN_004763c0(void)
 * Address ranges: 004763c0-00476634
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_004763c0(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  char cVar1;
  int iVar2;
  code *pcVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  char *pcVar8;
  int local_30;
  undefined1 local_2c [16];
  undefined1 local_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006287f0;
  pvStack_c = ExceptionList;
  iVar7 = param_1 + param_2 * 0x18;
  if (*(int *)(param_1 + 0x14890 + param_2 * 0x18) == 0) {
    iVar2 = DAT_006c8de0;
    ExceptionList = &pvStack_c;
    if (DAT_006c8de0 == 0) {
      ExceptionList = &pvStack_c;
      iVar2 = FUN_0055b280();
    }
    if (*(int *)(iVar2 + 0xfc) == 0) {
      local_2c[0] = (undefined1)param_5;
      FUN_004040a0(0);
      uVar6 = 0xffffffff;
      pcVar8 = &DAT_006b3f70;
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 != '\0');
      FUN_004040f0(&DAT_006b3f70,~uVar6 - 1);
      local_4 = 0;
      pcVar3 = (code *)FUN_005a07f0(s_m_SoundSystem_0068f8ec,s___AdamSource_AdamEngine_h_0068eb58,
                                    399,local_2c);
      (*pcVar3)();
      local_4 = 0xffffffff;
      FUN_004040a0(1);
    }
    piVar4 = (int *)FUN_0054ed80(&param_2,iVar7 + 0x14894,param_3,param_4,param_5,0);
    iVar2 = *(int *)(iVar7 + 0x14890);
    local_4 = 1;
    if (iVar2 != *piVar4) {
      if ((iVar2 != 0) &&
         (iVar5 = *(int *)(iVar2 + 0x14) + -1, *(int *)(iVar2 + 0x14) = iVar5, iVar5 == 0)) {
        FUN_005abfc0(0);
      }
      iVar2 = *piVar4;
      *(int *)(iVar7 + 0x14890) = iVar2;
      if (iVar2 != 0) {
        *(int *)(iVar2 + 0x14) = *(int *)(iVar2 + 0x14) + 1;
      }
    }
    if (param_2 == 0) {
      ExceptionList = pvStack_c;
      return;
    }
    iVar7 = *(int *)(param_2 + 0x14) + -1;
    *(int *)(param_2 + 0x14) = iVar7;
  }
  else {
    ExceptionList = &pvStack_c;
    FUN_004762c0(param_2);
    iVar2 = DAT_006c8de0;
    if (DAT_006c8de0 == 0) {
      iVar2 = FUN_0055b280();
    }
    if (*(int *)(iVar2 + 0xfc) == 0) {
      local_1c[0] = (undefined1)param_5;
      FUN_004040a0(0);
      uVar6 = 0xffffffff;
      pcVar8 = &DAT_006b3f70;
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 != '\0');
      FUN_004040f0(&DAT_006b3f70,~uVar6 - 1);
      local_4 = 2;
      pcVar3 = (code *)FUN_005a07f0(s_m_SoundSystem_0068f8ec,s___AdamSource_AdamEngine_h_0068eb58,
                                    399,local_1c);
      (*pcVar3)();
      local_4 = 0xffffffff;
      FUN_004040a0(1);
    }
    piVar4 = (int *)FUN_0054ed80(&local_30,iVar7 + 0x14894,param_3,param_4,param_5,0);
    iVar2 = *(int *)(iVar7 + 0x14890);
    local_4 = 3;
    if (iVar2 != *piVar4) {
      if ((iVar2 != 0) &&
         (iVar5 = *(int *)(iVar2 + 0x14) + -1, *(int *)(iVar2 + 0x14) = iVar5, iVar5 == 0)) {
        FUN_005abfc0(0);
      }
      iVar2 = *piVar4;
      *(int *)(iVar7 + 0x14890) = iVar2;
      if (iVar2 != 0) {
        *(int *)(iVar2 + 0x14) = *(int *)(iVar2 + 0x14) + 1;
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

