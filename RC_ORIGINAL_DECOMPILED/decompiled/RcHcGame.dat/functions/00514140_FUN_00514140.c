/*
 * FUN_00514140 at 00514140
 * undefined FUN_00514140(void)
 * Address ranges: 00514140-00514420
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_00514140(void)

{
  char cVar1;
  int iVar2;
  code *pcVar3;
  undefined4 uVar4;
  uint uVar5;
  char *pcVar6;
  int iVar7;
  int local_30;
  undefined1 local_2c [16];
  undefined1 auStack_1c [4];
  int iStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006378f8;
  pvStack_c = ExceptionList;
  iVar2 = DAT_006b915c;
  ExceptionList = &pvStack_c;
  if (DAT_006b915c == 0) {
    ExceptionList = &pvStack_c;
    iVar2 = FUN_004bc480();
  }
  if (*(int *)(iVar2 + 0x3a4) == 0) {
    FUN_004040a0(0);
    uVar5 = 0xffffffff;
    pcVar6 = &DAT_006b3f70;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar5 - 1);
    local_4 = 0;
    pcVar3 = (code *)FUN_005a07f0(s_m_Game_0068e584,s___AdamSource_AdamApplication_h_0068e58c,0x130,
                                  local_2c);
    (*pcVar3)();
    local_4 = 0xffffffff;
    FUN_004040a0(1);
  }
  FUN_00453d20(&local_30);
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  if (local_30 == 0) {
    uVar4 = FUN_005ae390(auStack_1c,s_CAdamCommunicator__GetCommunicat_0069f120);
    local_4._0_1_ = 2;
    pcVar3 = (code *)FUN_005a07f0(s_subLevel_IsNotNull___0069f108,
                                  s_D__Work_RCHorror_AdamSource_Adam_0069ebac,0x517,uVar4);
    (*pcVar3)();
    local_4._0_1_ = 1;
    FUN_004040a0(1);
    if (local_30 == 0) {
      FUN_004040a0(0);
      uVar5 = 0xffffffff;
      pcVar6 = &DAT_006b3f70;
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      FUN_004040f0(&DAT_006b3f70,~uVar5 - 1);
      local_4._0_1_ = 3;
      pcVar3 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                    local_2c);
      (*pcVar3)();
      local_4._0_1_ = 1;
      FUN_004040a0(1);
    }
  }
  iVar2 = *(int *)(local_30 + 0x360);
  if (iVar2 == 0) {
    uVar4 = FUN_005ae390(auStack_1c,s_CAdamCommunicator__GetCommunicat_0069f0d0);
    local_4._0_1_ = 4;
    pcVar3 = (code *)FUN_005a07f0(s_player____NULL_0069f0c0,
                                  s_D__Work_RCHorror_AdamSource_Adam_0069ebac,0x51d,uVar4);
    (*pcVar3)();
    local_4._0_1_ = 1;
    if (iStack_18 != 0) {
      cVar1 = *(char *)(iStack_18 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_005fe5f0((char *)(iStack_18 + -1));
      }
      else {
        *(char *)(iStack_18 + -1) = cVar1 + -1;
      }
    }
  }
  if (*(int *)(iVar2 + 0x1f8) == 0) {
    FUN_004040a0(0);
    uVar5 = 0xffffffff;
    pcVar6 = &DAT_006b3f70;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar5 - 1);
    local_4._0_1_ = 5;
    pcVar3 = (code *)FUN_005a07f0(s_m_Communicator____0_006934bc,
                                  s_D__Work_RCHorror_AdamSource_Adam_0069888c,0x167,auStack_1c);
    (*pcVar3)();
    local_4._0_1_ = 1;
    FUN_004040a0(1);
  }
  iVar2 = *(int *)(iVar2 + 0x1f8);
  if (iVar2 == 0) {
    uVar4 = FUN_005ae390(auStack_1c,s_CAdamCommunicator__GetCommunicat_0069f084);
    local_4 = CONCAT31(local_4._1_3_,6);
    pcVar3 = (code *)FUN_005a07f0(s_communicator____NULL_0069f06c,
                                  s_D__Work_RCHorror_AdamSource_Adam_0069ebac,0x523,uVar4);
    (*pcVar3)();
    if (iStack_18 != 0) {
      cVar1 = *(char *)(iStack_18 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_005fe5f0((char *)(iStack_18 + -1));
      }
      else {
        *(char *)(iStack_18 + -1) = cVar1 + -1;
      }
    }
    iStack_18 = 0;
    uStack_14 = 0;
    uStack_10 = 0;
  }
  local_4 = 0xffffffff;
  if ((local_30 != 0) &&
     (iVar7 = *(int *)(local_30 + 0x14) + -1, *(int *)(local_30 + 0x14) = iVar7, iVar7 == 0)) {
    FUN_005abfc0(0);
  }
  ExceptionList = pvStack_c;
  return iVar2;
}

