/*
 * FUN_00534d00 at 00534d00
 * undefined FUN_00534d00(void)
 * Address ranges: 00534d00-005351df
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64e594 slot 9 for .?AVCRCGame@@. Original bytes unchanged; names and types still inferred.
 */

/* WARNING: Removing unreachable block (ram,0x00534dd8) */
/* WARNING: Removing unreachable block (ram,0x00534df7) */
/* WARNING: Removing unreachable block (ram,0x00534df9) */
/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64e594 slot 9 for
   .?AVCRCGame@@. Original bytes unchanged; names and types still inferred. */

void __fastcall FUN_00534d00(int param_1)

{
  int iVar1;
  int *piVar2;
  char cVar3;
  code *pcVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  undefined1 local_75;
  undefined1 uStack_74;
  undefined1 uStack_73;
  undefined1 uStack_72;
  undefined1 uStack_71;
  int *piStack_70;
  undefined1 local_6c [4];
  char *local_68;
  undefined1 local_5c [16];
  undefined1 auStack_4c [16];
  undefined1 auStack_3c [16];
  undefined1 auStack_2c [16];
  undefined1 auStack_1c [16];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063b738;
  local_c = ExceptionList;
  if (*(int *)(param_1 + 0x98) == 3) {
    local_4 = 0xffffffff;
    puStack_8 = &LAB_0063b738;
    ExceptionList = &local_c;
    if (*(int *)(*(int *)(param_1 + 0x8c) + 0xc) == 0) {
      ExceptionList = &local_c;
      FUN_00409810(&DAT_006b3f70,&local_75);
      local_4 = 2;
      pcVar4 = (code *)FUN_005a07f0(s_m_States__a_State______0_00697c9c,
                                    s___AdamSource_AdamGame_h_00697ce0,0x1f6,local_5c);
      (*pcVar4)();
      local_4 = 0xffffffff;
      FUN_004040a0(1);
    }
    if (*(int *)(*(int *)(*(int *)(param_1 + 0x8c) + 0xc) + 0x24) != 3) {
      FUN_00409810(&DAT_006b3f70,&uStack_74);
      local_4 = 3;
      pcVar4 = (code *)FUN_005a07f0(s_m_States__a_State___>GetState____00697c70,
                                    s___AdamSource_AdamGame_h_00697ce0,0x1f7,auStack_4c);
      (*pcVar4)();
      local_4 = 0xffffffff;
      FUN_004040a0(1);
    }
    iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 0x8c) + 0xc) + 0x3c);
    if ((iVar1 != 1) && (iVar1 != 3)) {
      piStack_70 = (int *)FUN_0060a6f2(*(undefined4 *)(*(int *)(param_1 + 0x8c) + 0x18),0,
                                       &CAdamGameState::RTTI_Type_Descriptor,
                                       &CAdamGameState_GS_PAUSE::RTTI_Type_Descriptor,0);
      if (piStack_70 == (int *)0x0) {
        local_6c[0] = uStack_74;
        FUN_004040a0(0);
        uVar5 = 0xffffffff;
        pcVar7 = &DAT_006b3f70;
        do {
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          cVar3 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar3 != '\0');
        uVar5 = ~uVar5 - 1;
        cVar3 = FUN_00401940(uVar5,1);
        if (cVar3 != '\0') {
          pcVar7 = &DAT_006b3f70;
          for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
            *(undefined4 *)local_68 = *(undefined4 *)pcVar7;
            pcVar7 = pcVar7 + 4;
            local_68 = local_68 + 4;
          }
          for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
            *local_68 = *pcVar7;
            pcVar7 = pcVar7 + 1;
            local_68 = local_68 + 1;
          }
          FUN_00404190(uVar5);
        }
        local_4 = 5;
        pcVar4 = (code *)FUN_005a07f0(s_pState__0_006a0aac,
                                      s_D__Work_RCHorror_AdamSource_Adam_0069fb00,0x7cc,local_6c);
        (*pcVar4)();
        local_4 = 0xffffffff;
        FUN_004040a0(1);
      }
      iVar1 = *(int *)(param_1 + 0x98);
      if ((iVar1 < 0) || (7 < iVar1)) {
        FUN_00409810(&DAT_006b3f70,&uStack_73);
        local_4 = 6;
        pcVar4 = (code *)FUN_005a07f0(s_a_State_>__0____a_State_<_GS_NR__00697cb8,
                                      s___AdamSource_AdamGame_h_00697ce0,0x1f5,auStack_3c);
        (*pcVar4)();
        local_4 = 0xffffffff;
        FUN_004040a0(1);
      }
      if (*(int *)(*(int *)(param_1 + 0x8c) + iVar1 * 4) == 0) {
        FUN_00409810(&DAT_006b3f70,&uStack_72);
        local_4 = 7;
        pcVar4 = (code *)FUN_005a07f0(s_m_States__a_State______0_00697c9c,
                                      s___AdamSource_AdamGame_h_00697ce0,0x1f6,auStack_2c);
        (*pcVar4)();
        local_4 = 0xffffffff;
        FUN_004040a0(1);
      }
      if (*(int *)(*(int *)(*(int *)(param_1 + 0x8c) + iVar1 * 4) + 0x24) != iVar1) {
        FUN_00409810(&DAT_006b3f70,&uStack_71);
        local_4 = 8;
        pcVar4 = (code *)FUN_005a07f0(s_m_States__a_State___>GetState____00697c70,
                                      s___AdamSource_AdamGame_h_00697ce0,0x1f7,auStack_1c);
        (*pcVar4)();
        local_4 = 0xffffffff;
        FUN_004040a0(1);
      }
      piVar2 = piStack_70;
      FUN_0051d670(*(undefined4 *)(*(int *)(param_1 + 0x8c) + iVar1 * 4));
      FUN_0051ada0();
      do {
        FUN_0051abb0();
        cVar3 = (**(code **)(*piVar2 + 0x18))();
      } while (cVar3 == '\0');
      FUN_0051adc0();
      FUN_0051d670(0);
      ExceptionList = local_c;
      return;
    }
    local_6c[0] = uStack_74;
    FUN_004040a0(0);
    uVar5 = 0xffffffff;
    pcVar7 = s_CAdamGame__Pause____Pause_can_on_006a0ab8;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar3 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar3 != '\0');
    uVar5 = ~uVar5 - 1;
    cVar3 = FUN_00401940(uVar5,1);
    if (cVar3 != '\0') {
      pcVar7 = s_CAdamGame__Pause____Pause_can_on_006a0ab8;
      for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)local_68 = *(undefined4 *)pcVar7;
        pcVar7 = pcVar7 + 4;
        local_68 = local_68 + 4;
      }
      for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *local_68 = *pcVar7;
        pcVar7 = pcVar7 + 1;
        local_68 = local_68 + 1;
      }
      FUN_00404190(uVar5);
    }
    local_4 = 4;
    FUN_005aff20(s_D__Work_RCHorror_AdamSource_Adam_0069fb00,0x7c6,local_6c);
    local_4 = 0xffffffff;
    FUN_004040a0(1);
    ExceptionList = local_c;
    return;
  }
  ExceptionList = &local_c;
  FUN_004040a0(0);
  uVar5 = 0xffffffff;
  pcVar7 = s_CAdamGame__Pause____Pause_can_on_006a0afc;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar3 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar3 != '\0');
  uVar5 = ~uVar5 - 1;
  cVar3 = FUN_00401940(uVar5,1);
  if (cVar3 != '\0') {
    pcVar7 = s_CAdamGame__Pause____Pause_can_on_006a0afc;
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)local_68 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      local_68 = local_68 + 4;
    }
    for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *local_68 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      local_68 = local_68 + 1;
    }
    FUN_00404190(uVar5);
  }
  local_4 = 0;
  FUN_005aff20(s_D__Work_RCHorror_AdamSource_Adam_0069fb00,0x7be,local_6c);
  local_4 = 0xffffffff;
  FUN_004040a0(1);
  ExceptionList = local_c;
  return;
}

