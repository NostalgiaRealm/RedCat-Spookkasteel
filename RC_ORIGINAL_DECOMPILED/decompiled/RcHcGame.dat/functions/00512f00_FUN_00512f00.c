/*
 * FUN_00512f00 at 00512f00
 * undefined FUN_00512f00(void)
 * Address ranges: 00512f00-00513242
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_00512f00(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  code *pcVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  uint uVar6;
  char *pcVar7;
  int iStack_54;
  int local_50;
  undefined1 local_4c [16];
  undefined1 auStack_3c [16];
  undefined1 local_2c [16];
  undefined1 local_1c [4];
  int local_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006377b8;
  local_c = ExceptionList;
  local_50 = param_1;
  if (*(char *)(param_1 + 0x1db) != '\0') {
    puVar4 = *(undefined1 **)(param_2 + 4);
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &DAT_0064a3b4;
    }
    ExceptionList = &local_c;
    uVar5 = FUN_005ae390(local_1c,s_Trying_to_load_sound___d__after_i_0069ef48,puVar4);
    local_4 = 6;
    FUN_004c43e0(uVar5);
    if (local_18 != 0) {
      cVar1 = *(char *)(local_18 + -1);
      if ((cVar1 != '\0') && (cVar1 != -1)) {
        *(char *)(local_18 + -1) = cVar1 + -1;
        ExceptionList = local_c;
        return;
      }
      FUN_005fe5f0((char *)(local_18 + -1));
    }
    ExceptionList = local_c;
    return;
  }
  ExceptionList = &local_c;
  cVar1 = FUN_00553640();
  if (cVar1 != '\0') {
    iVar2 = DAT_006c8de0;
    if (DAT_006c8de0 == 0) {
      iVar2 = FUN_0055b280();
    }
    if (*(int *)(iVar2 + 0xfc) == 0) {
      local_4c[0] = (undefined1)param_2;
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
      local_4 = 0;
      pcVar3 = (code *)FUN_005a07f0(s_m_SoundSystem_0068f8ec,s___AdamSource_AdamEngine_h_0068eb58,
                                    399,local_4c);
      (*pcVar3)();
      local_4 = 0xffffffff;
      FUN_004040a0(1);
    }
    if (*(char *)(*(int *)(iVar2 + 0xfc) + 0x8c) != '\0') {
      iVar2 = DAT_006c8de0;
      if (DAT_006c8de0 == 0) {
        iVar2 = FUN_0055b280();
      }
      if (*(int *)(iVar2 + 0xfc) == 0) {
        local_4c[0] = (undefined1)param_2;
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
        local_4 = 1;
        pcVar3 = (code *)FUN_005a07f0(s_m_SoundSystem_0068f8ec,s___AdamSource_AdamEngine_h_0068eb58,
                                      399,local_4c);
        (*pcVar3)();
        local_4 = 0xffffffff;
        FUN_004040a0(1);
      }
      if (*(char *)(*(int *)(iVar2 + 0xfc) + 0x8c) == '\0') {
        auStack_3c[0] = (undefined1)param_2;
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
        local_4 = 2;
        pcVar3 = (code *)FUN_005a07f0(s_m_Initialized_00691bb0,s___AdamSource_AdamSound_h_00692cdc,
                                      0x14b,auStack_3c);
        (*pcVar3)();
        local_4 = 0xffffffff;
        FUN_004040a0(1);
      }
      FUN_005514e0(&iStack_54,param_2);
      local_4 = 3;
      if (iStack_54 == 0) {
        puVar4 = *(undefined1 **)(param_2 + 4);
        if (puVar4 == (undefined1 *)0x0) {
          puVar4 = &DAT_0064a3b4;
        }
        uVar5 = FUN_005ae390(local_2c,s_CAdamCommunicator__Cannot_preloa_0069efa8,puVar4);
        local_4._0_1_ = 4;
        FUN_004c43e0(uVar5);
        local_4 = CONCAT31(local_4._1_3_,3);
        FUN_004040a0(1);
      }
      FUN_004fdb90(*(undefined4 *)(local_50 + 0x1a0),&iStack_54);
      local_4 = 0xffffffff;
      if (iStack_54 == 0) {
        ExceptionList = local_c;
        return;
      }
      iVar2 = *(int *)(iStack_54 + 0x14) + -1;
      *(int *)(iStack_54 + 0x14) = iVar2;
      if (iVar2 != 0) {
        ExceptionList = local_c;
        return;
      }
      FUN_005abfc0(0);
      ExceptionList = local_c;
      return;
    }
  }
  uVar5 = FUN_005ae390(local_2c,s_CAdamCommunicator__Soundsystem_n_0069ef78);
  local_4 = 5;
  FUN_004c43e0(uVar5);
  local_4 = 0xffffffff;
  FUN_004040a0(1);
  ExceptionList = local_c;
  return;
}

