/*
 * FUN_0052af50 at 0052af50
 * undefined FUN_0052af50(void)
 * Address ranges: 0052af50-0052b460
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_0052af50(int param_1)

{
  char cVar1;
  int iVar2;
  code *pcVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined1 *puVar7;
  char *pcVar8;
  undefined1 uStack_91;
  undefined1 uStack_90;
  undefined1 local_8f;
  undefined1 uStack_8e;
  undefined1 uStack_8d;
  undefined1 auStack_8c [16];
  undefined1 auStack_7c [16];
  undefined1 auStack_6c [16];
  undefined1 auStack_5c [16];
  undefined1 local_4c [16];
  undefined1 local_3c [16];
  undefined1 auStack_2c [16];
  undefined1 auStack_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00639dee;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (*(int *)(param_1 + 0x9c) != *(int *)(param_1 + 0x98)) {
    ExceptionList = &pvStack_c;
    FUN_005168f0();
    iVar2 = FUN_004337e0();
    if (iVar2 != 0) {
      iVar2 = *(int *)(param_1 + 0x9c);
      if ((iVar2 < 0) || (7 < iVar2)) {
        local_4c[0] = local_8f;
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
        pcVar3 = (code *)FUN_005a07f0(s_a_State_>__0____a_State_<_GS_NR__00697cb8,
                                      s___AdamSource_AdamGame_h_00697ce0,0x1f5,local_4c);
        (*pcVar3)();
        local_4 = 0xffffffff;
        FUN_004040a0(1);
      }
      if (*(int *)(*(int *)(param_1 + 0x8c) + iVar2 * 4) == 0) {
        FUN_00409810(&DAT_006b3f70,&local_8f);
        local_4 = 1;
        pcVar3 = (code *)FUN_005a07f0(s_m_States__a_State______0_00697c9c,
                                      s___AdamSource_AdamGame_h_00697ce0,0x1f6,local_3c);
        (*pcVar3)();
        local_4 = 0xffffffff;
        FUN_004040a0(1);
      }
      if (*(int *)(*(int *)(*(int *)(param_1 + 0x8c) + iVar2 * 4) + 0x24) != iVar2) {
        FUN_00409810(&DAT_006b3f70,&uStack_8d);
        local_4 = 2;
        pcVar3 = (code *)FUN_005a07f0(s_m_States__a_State___>GetState____00697c70,
                                      s___AdamSource_AdamGame_h_00697ce0,0x1f7,auStack_2c);
        (*pcVar3)();
        local_4 = 0xffffffff;
        FUN_004040a0(1);
      }
      puVar4 = *(undefined1 **)(*(int *)(*(int *)(param_1 + 0x8c) + iVar2 * 4) + 0x18);
      puVar7 = &DAT_0064a3b4;
      if (puVar4 != (undefined1 *)0x0) {
        puVar7 = puVar4;
      }
      iVar2 = *(int *)(param_1 + 0x98);
      if ((iVar2 < 0) || (7 < iVar2)) {
        FUN_00409810(&DAT_006b3f70,&uStack_8e);
        local_4 = 3;
        pcVar3 = (code *)FUN_005a07f0(s_a_State_>__0____a_State_<_GS_NR__00697cb8,
                                      s___AdamSource_AdamGame_h_00697ce0,0x1f5,auStack_8c);
        (*pcVar3)();
        local_4 = 0xffffffff;
        FUN_004040a0(1);
      }
      if (*(int *)(*(int *)(param_1 + 0x8c) + iVar2 * 4) == 0) {
        FUN_00409810(&DAT_006b3f70,&uStack_90);
        local_4 = 4;
        pcVar3 = (code *)FUN_005a07f0(s_m_States__a_State______0_00697c9c,
                                      s___AdamSource_AdamGame_h_00697ce0,0x1f6,auStack_6c);
        (*pcVar3)();
        local_4 = 0xffffffff;
        FUN_004040a0(1);
      }
      if (*(int *)(*(int *)(*(int *)(param_1 + 0x8c) + iVar2 * 4) + 0x24) != iVar2) {
        FUN_00409810(&DAT_006b3f70,&uStack_91);
        local_4 = 5;
        pcVar3 = (code *)FUN_005a07f0(s_m_States__a_State___>GetState____00697c70,
                                      s___AdamSource_AdamGame_h_00697ce0,0x1f7,auStack_7c);
        (*pcVar3)();
        local_4 = 0xffffffff;
        FUN_004040a0(1);
      }
      puVar4 = *(undefined1 **)(*(int *)(*(int *)(param_1 + 0x8c) + iVar2 * 4) + 0x18);
      if (puVar4 == (undefined1 *)0x0) {
        puVar4 = &DAT_0064a3b4;
      }
      uVar5 = FUN_005ae390(auStack_1c,s_HandleCurrentState_____about_to_c_006a0458,puVar4,puVar7);
      local_4 = 6;
      FUN_005aff00(uVar5);
      local_4 = 0xffffffff;
      FUN_004040a0(1);
    }
    FUN_0052c270();
    iVar2 = *(int *)(param_1 + 0x98);
    if ((iVar2 < 0) || (7 < iVar2)) {
      FUN_00409810(&DAT_006b3f70,&uStack_91);
      local_4 = 7;
      pcVar3 = (code *)FUN_005a07f0(s_a_State_>__0____a_State_<_GS_NR__00697cb8,
                                    s___AdamSource_AdamGame_h_00697ce0,0x1f5,auStack_7c);
      (*pcVar3)();
      local_4 = 0xffffffff;
      FUN_004040a0(1);
    }
    if (*(int *)(*(int *)(param_1 + 0x8c) + iVar2 * 4) == 0) {
      FUN_00409810(&DAT_006b3f70,&uStack_90);
      local_4 = 8;
      pcVar3 = (code *)FUN_005a07f0(s_m_States__a_State______0_00697c9c,
                                    s___AdamSource_AdamGame_h_00697ce0,0x1f6,auStack_6c);
      (*pcVar3)();
      local_4 = 0xffffffff;
      FUN_004040a0(1);
    }
    if (*(int *)(*(int *)(*(int *)(param_1 + 0x8c) + iVar2 * 4) + 0x24) != iVar2) {
      FUN_00409810(&DAT_006b3f70,&uStack_8e);
      local_4 = 9;
      pcVar3 = (code *)FUN_005a07f0(s_m_States__a_State___>GetState____00697c70,
                                    s___AdamSource_AdamGame_h_00697ce0,0x1f7,auStack_8c);
      (*pcVar3)();
      local_4 = 0xffffffff;
      FUN_004040a0(1);
    }
    FUN_0051adc0();
    *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_1 + 0x98);
    *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(param_1 + 0x9c);
    FUN_0051c250(*(undefined4 *)(param_1 + 0x9c));
    FUN_0051ada0();
    FUN_0052c5f0();
  }
  FUN_0051c250(*(undefined4 *)(param_1 + 0x98));
  FUN_0051abb0();
  iVar2 = DAT_006c8de0;
  if (DAT_006c8de0 == 0) {
    iVar2 = FUN_0055b280();
  }
  if (*(int *)(iVar2 + 0xfc) == 0) {
    auStack_5c[0] = uStack_91;
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
    local_4 = 10;
    pcVar3 = (code *)FUN_005a07f0(s_m_SoundSystem_0068f8ec,s___AdamSource_AdamEngine_h_0068eb58,399,
                                  auStack_5c);
    (*pcVar3)();
    local_4 = 0xffffffff;
    FUN_004040a0(1);
  }
  FUN_00550260();
  ExceptionList = pvStack_c;
  return;
}

