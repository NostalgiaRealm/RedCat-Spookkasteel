/*
 * FUN_0052c5f0 at 0052c5f0
 * undefined FUN_0052c5f0(void)
 * Address ranges: 0052c5f0-0052c966
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_0052c5f0(int param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  undefined1 *puVar4;
  int iVar5;
  code *pcVar6;
  undefined4 uVar7;
  uint uVar8;
  char *pcVar9;
  undefined1 local_5e;
  undefined1 local_5d;
  undefined1 local_5c [16];
  undefined1 local_4c [4];
  int iStack_48;
  undefined1 local_3c [16];
  undefined1 auStack_2c [16];
  undefined1 auStack_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063a040;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_004040a0(0);
  local_4 = 0;
  iVar3 = FUN_005168f0();
  iVar5 = *(int *)(iVar3 + 100);
  if (iVar5 == -0x80000000) {
    puVar4 = *(undefined1 **)(iVar3 + 0x18);
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &DAT_0064a3b4;
    }
    iVar5 = FUN_0060af10(puVar4);
    *(int *)(iVar3 + 100) = iVar5;
  }
  if (iVar5 != 0) {
    iVar5 = *(int *)(param_1 + 0x98);
    if ((iVar5 < 0) || (7 < iVar5)) {
      local_5c[0] = local_5e;
      FUN_004040a0(0);
      uVar8 = 0xffffffff;
      pcVar9 = &DAT_006b3f70;
      do {
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        cVar2 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar2 != '\0');
      FUN_004040f0(&DAT_006b3f70,~uVar8 - 1);
      local_4._0_1_ = 1;
      pcVar6 = (code *)FUN_005a07f0(s_a_State_>__0____a_State_<_GS_NR__00697cb8,
                                    s___AdamSource_AdamGame_h_00697ce0,0x1f5,local_5c);
      (*pcVar6)();
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_004040a0(1);
    }
    if (*(int *)(*(int *)(param_1 + 0x8c) + iVar5 * 4) == 0) {
      FUN_00409810(&DAT_006b3f70,&local_5e);
      local_4._0_1_ = 2;
      pcVar6 = (code *)FUN_005a07f0(s_m_States__a_State______0_00697c9c,
                                    s___AdamSource_AdamGame_h_00697ce0,0x1f6,local_3c);
      (*pcVar6)();
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_004040a0(1);
    }
    if (*(int *)(*(int *)(*(int *)(param_1 + 0x8c) + iVar5 * 4) + 0x24) != iVar5) {
      FUN_00409810(&DAT_006b3f70,&local_5d);
      local_4._0_1_ = 3;
      pcVar6 = (code *)FUN_005a07f0(s_m_States__a_State___>GetState____00697c70,
                                    s___AdamSource_AdamGame_h_00697ce0,0x1f7,auStack_2c);
      (*pcVar6)();
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_004040a0(1);
    }
    puVar4 = *(undefined1 **)(*(int *)(*(int *)(param_1 + 0x8c) + iVar5 * 4) + 0x18);
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &DAT_0064a3b4;
    }
    uVar7 = FUN_005ae390(auStack_1c,s_FadeInCurrentState_____must_fade_006a0574,puVar4);
    local_4._0_1_ = 4;
    FUN_005aff00(uVar7);
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_004040a0(1);
  }
  iVar5 = *(int *)(param_1 + 0x98);
  if ((iVar5 < 0) || (7 < iVar5)) {
    local_5c[0] = local_5d;
    FUN_004040a0(0);
    uVar8 = 0xffffffff;
    pcVar9 = &DAT_006b3f70;
    do {
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      cVar2 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar2 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar8 - 1);
    local_4._0_1_ = 5;
    pcVar6 = (code *)FUN_005a07f0(s_a_State_>__0____a_State_<_GS_NR__00697cb8,
                                  s___AdamSource_AdamGame_h_00697ce0,0x1f5,local_5c);
    (*pcVar6)();
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_004040a0(1);
  }
  if (*(int *)(*(int *)(param_1 + 0x8c) + iVar5 * 4) == 0) {
    FUN_00409810(&DAT_006b3f70,&local_5d);
    local_4._0_1_ = 6;
    pcVar6 = (code *)FUN_005a07f0(s_m_States__a_State______0_00697c9c,
                                  s___AdamSource_AdamGame_h_00697ce0,0x1f6,auStack_2c);
    (*pcVar6)();
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_004040a0(1);
  }
  if (*(int *)(*(int *)(*(int *)(param_1 + 0x8c) + iVar5 * 4) + 0x24) != iVar5) {
    FUN_00409810(&DAT_006b3f70,&local_5d);
    local_4._0_1_ = 7;
    pcVar6 = (code *)FUN_005a07f0(s_m_States__a_State___>GetState____00697c70,
                                  s___AdamSource_AdamGame_h_00697ce0,0x1f7,auStack_2c);
    (*pcVar6)();
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_004040a0(1);
  }
  piVar1 = *(int **)(*(int *)(param_1 + 0x8c) + iVar5 * 4);
  cVar2 = (**(code **)(*piVar1 + 0x14))();
  if (cVar2 == '\0') {
    FUN_0051ab20(2);
  }
  else {
    iVar5 = piVar1[0xf];
    while (iVar5 != 2) {
      if (iVar5 != 1) {
        FUN_0051ab20(1);
      }
      FUN_0051abb0();
      if (DAT_006b915c == 0) {
        FUN_004bc480();
      }
      FUN_004bef70(0,local_4c);
      iVar5 = piVar1[0xf];
    }
  }
  if (iStack_48 != 0) {
    cVar2 = *(char *)(iStack_48 + -1);
    if ((cVar2 != '\0') && (cVar2 != -1)) {
      *(char *)(iStack_48 + -1) = cVar2 + -1;
      ExceptionList = pvStack_c;
      return;
    }
    FUN_005fe5f0(iStack_48 + -1);
  }
  ExceptionList = pvStack_c;
  return;
}

