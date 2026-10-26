/*
 * FUN_005351e0 at 005351e0
 * undefined FUN_005351e0(void)
 * Address ranges: 005351e0-00535698
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x0053528b) */

void __fastcall FUN_005351e0(int param_1)

{
  char cVar1;
  code *pcVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  char *pcVar7;
  undefined1 local_43;
  undefined1 local_42;
  undefined1 auStack_41 [5];
  undefined1 local_3c [16];
  undefined1 local_2c [16];
  undefined1 auStack_1c [16];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063b7b0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005ae5f0(s_D__Work_RCHorror_AdamSource_Adam_0069fb00,0x7dd);
  local_4 = 0;
  if (*(int *)(param_1 + 0x98) == 3) {
    local_4 = 0;
    if (*(int *)(*(int *)(param_1 + 0x8c) + 0xc) == 0) {
      FUN_00409810(&DAT_006b3f70,&local_42);
      local_4._0_1_ = 3;
      pcVar2 = (code *)FUN_005a07f0(s_m_States__a_State______0_00697c9c,
                                    s___AdamSource_AdamGame_h_00697ce0,0x1f6,local_3c);
      (*pcVar2)();
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_004040a0(1);
    }
    if (*(int *)(*(int *)(*(int *)(param_1 + 0x8c) + 0xc) + 0x24) != 3) {
      FUN_00409810(&DAT_006b3f70,auStack_41);
      local_4._0_1_ = 4;
      pcVar2 = (code *)FUN_005a07f0(s_m_States__a_State___>GetState____00697c70,
                                    s___AdamSource_AdamGame_h_00697ce0,0x1f7,auStack_1c);
      (*pcVar2)();
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_004040a0(1);
    }
    iVar4 = *(int *)(*(int *)(*(int *)(param_1 + 0x8c) + 0xc) + 0x3c);
    if ((iVar4 == 1) || (iVar4 == 3)) {
      local_3c[0] = auStack_41[0];
      FUN_004040a0(0);
      uVar6 = 0xffffffff;
      pcVar7 = s_CAdamGame__Pause____Restart_can_o_006a0b54;
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      FUN_004040f0(s_CAdamGame__Pause____Restart_can_o_006a0b54,~uVar6 - 1);
      local_4._0_1_ = 5;
      FUN_005aff20(s_D__Work_RCHorror_AdamSource_Adam_0069fb00,0x7ea,local_3c);
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_004040a0(1);
    }
    else {
      piVar3 = (int *)FUN_0060a6f2(*(undefined4 *)(*(int *)(param_1 + 0x8c) + 0x1c),0,
                                   &CAdamGameState::RTTI_Type_Descriptor,
                                   &CAdamGameState_GS_RESTART::RTTI_Type_Descriptor,0);
      if (piVar3 == (int *)0x0) {
        local_3c[0] = auStack_41[0];
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
        local_4._0_1_ = 6;
        pcVar2 = (code *)FUN_005a07f0(s_pState__0_006a0aac,
                                      s_D__Work_RCHorror_AdamSource_Adam_0069fb00,0x7f1,local_3c);
        (*pcVar2)();
        local_4 = (uint)local_4._1_3_ << 8;
        FUN_004040a0(1);
      }
      iVar4 = *(int *)(param_1 + 0x98);
      if ((iVar4 < 0) || (7 < iVar4)) {
        FUN_00409810(&DAT_006b3f70,auStack_41);
        local_4._0_1_ = 7;
        pcVar2 = (code *)FUN_005a07f0(s_a_State_>__0____a_State_<_GS_NR__00697cb8,
                                      s___AdamSource_AdamGame_h_00697ce0,0x1f5,auStack_1c);
        (*pcVar2)();
        local_4 = (uint)local_4._1_3_ << 8;
        FUN_004040a0(1);
      }
      if (*(int *)(*(int *)(param_1 + 0x8c) + iVar4 * 4) == 0) {
        FUN_00409810(&DAT_006b3f70,&local_42);
        local_4._0_1_ = 8;
        pcVar2 = (code *)FUN_005a07f0(s_m_States__a_State______0_00697c9c,
                                      s___AdamSource_AdamGame_h_00697ce0,0x1f6,local_2c);
        (*pcVar2)();
        local_4 = (uint)local_4._1_3_ << 8;
        FUN_004040a0(1);
      }
      if (*(int *)(*(int *)(*(int *)(param_1 + 0x8c) + iVar4 * 4) + 0x24) != iVar4) {
        FUN_00409810(&DAT_006b3f70,&local_43);
        local_4._0_1_ = 9;
        pcVar2 = (code *)FUN_005a07f0(s_m_States__a_State___>GetState____00697c70,
                                      s___AdamSource_AdamGame_h_00697ce0,0x1f7,local_3c);
        (*pcVar2)();
        local_4 = (uint)local_4._1_3_ << 8;
        FUN_004040a0(1);
      }
      FUN_0051d670(*(undefined4 *)(*(int *)(param_1 + 0x8c) + iVar4 * 4));
      FUN_0051ada0();
      do {
        FUN_0051abb0();
        cVar1 = (**(code **)(*piVar3 + 0x18))();
      } while (cVar1 == '\0');
      FUN_0051adc0();
      FUN_0051d670(0);
      iVar4 = FUN_0051d710();
      if (iVar4 == 0) {
        FUN_0052c270();
        if (DAT_006b915c == 0) {
          FUN_004bc480();
        }
        FUN_004c4440(1);
      }
      else if (iVar4 == 1) {
        local_2c[0] = auStack_41[0];
        FUN_004040a0(0);
        uVar6 = 0xffffffff;
        pcVar7 = s_restart_00694a60;
        do {
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          cVar1 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar1 != '\0');
        FUN_004040f0(s_restart_00694a60,~uVar6 - 1);
        local_4._0_1_ = 10;
        FUN_0040cc00(local_2c,0,0xffffffff);
        local_4 = (uint)local_4._1_3_ << 8;
        FUN_004040a0(1);
      }
      else {
        uVar5 = FUN_0051d710();
        uVar5 = FUN_005ae390(auStack_1c,s_Unknown_Modal_Code__i_006a0b3c,uVar5);
        local_4._0_1_ = 0xb;
        pcVar2 = (code *)FUN_005a07f0(s_false_0068d2d0,s_D__Work_RCHorror_AdamSource_Adam_0069fb00,
                                      0x807,uVar5);
        (*pcVar2)();
        local_4 = (uint)local_4._1_3_ << 8;
        FUN_004040a0(1);
      }
      *(undefined1 *)(param_1 + 0xa4) = 0;
    }
  }
  else {
    local_3c[0] = local_43;
    FUN_004040a0(0);
    uVar6 = 0xffffffff;
    pcVar7 = s_CAdamGame__Pause____Pause_can_on_006a0afc;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(s_CAdamGame__Pause____Pause_can_on_006a0afc,~uVar6 - 1);
    local_4._0_1_ = 1;
    FUN_005aff20(s_D__Work_RCHorror_AdamSource_Adam_0069fb00,0x7e3,local_3c);
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_004040a0(1);
  }
  local_4 = 0xffffffff;
  FUN_005ae770();
  ExceptionList = local_c;
  return;
}

