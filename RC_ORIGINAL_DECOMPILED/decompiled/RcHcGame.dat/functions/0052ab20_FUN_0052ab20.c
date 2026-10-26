/*
 * FUN_0052ab20 at 0052ab20
 * undefined FUN_0052ab20(void)
 * Address ranges: 0052ab20-0052af42
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_0052ab20(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined1 *puVar3;
  int iVar4;
  code *pcVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *puVar9;
  char *pcVar10;
  undefined4 *puVar11;
  undefined1 local_95;
  undefined1 local_94;
  undefined1 uStack_93;
  undefined1 uStack_92;
  undefined1 uStack_91;
  undefined1 *puStack_90;
  undefined1 local_8c [4];
  undefined4 *puStack_88;
  uint uStack_84;
  undefined4 uStack_80;
  undefined1 local_7c [16];
  undefined1 auStack_6c [16];
  undefined1 auStack_5c [16];
  undefined1 auStack_4c [16];
  undefined1 auStack_3c [16];
  undefined1 local_2c [16];
  undefined1 auStack_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00639d83;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  iVar2 = FUN_005168f0();
  iVar4 = *(int *)(iVar2 + 100);
  if (iVar4 == -0x80000000) {
    puVar3 = *(undefined1 **)(iVar2 + 0x18);
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = &DAT_0064a3b4;
    }
    iVar4 = FUN_0060af10(puVar3);
    *(int *)(iVar2 + 100) = iVar4;
  }
  if (iVar4 != 0) {
    if ((param_2 < 0) || (7 < param_2)) {
      local_7c[0] = local_94;
      FUN_004040a0(0);
      uVar7 = 0xffffffff;
      pcVar10 = &DAT_006b3f70;
      do {
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        cVar1 = *pcVar10;
        pcVar10 = pcVar10 + 1;
      } while (cVar1 != '\0');
      FUN_004040f0(&DAT_006b3f70,~uVar7 - 1);
      local_4 = 0;
      pcVar5 = (code *)FUN_005a07f0(s_a_State_>__0____a_State_<_GS_NR__00697cb8,
                                    s___AdamSource_AdamGame_h_00697ce0,0x1f5,local_7c);
      (*pcVar5)();
      local_4 = 0xffffffff;
      FUN_004040a0(1);
    }
    if (*(int *)(*(int *)(param_1 + 0x8c) + param_2 * 4) == 0) {
      FUN_00409810(&DAT_006b3f70,&local_94);
      local_4 = 1;
      pcVar5 = (code *)FUN_005a07f0(s_m_States__a_State______0_00697c9c,
                                    s___AdamSource_AdamGame_h_00697ce0,0x1f6,local_2c);
      (*pcVar5)();
      local_4 = 0xffffffff;
      FUN_004040a0(1);
    }
    if (*(int *)(*(int *)(*(int *)(param_1 + 0x8c) + param_2 * 4) + 0x24) != param_2) {
      FUN_00409810(&DAT_006b3f70,&uStack_92);
      local_4 = 2;
      pcVar5 = (code *)FUN_005a07f0(s_m_States__a_State___>GetState____00697c70,
                                    s___AdamSource_AdamGame_h_00697ce0,0x1f7,auStack_4c);
      (*pcVar5)();
      local_4 = 0xffffffff;
      FUN_004040a0(1);
    }
    puStack_90 = &DAT_0064a3b4;
    puVar3 = *(undefined1 **)(*(int *)(*(int *)(param_1 + 0x8c) + param_2 * 4) + 0x18);
    if (puVar3 != (undefined1 *)0x0) {
      puStack_90 = puVar3;
    }
    iVar4 = *(int *)(param_1 + 0x98);
    if ((iVar4 < 0) || (7 < iVar4)) {
      FUN_00409810(&DAT_006b3f70,&uStack_93);
      local_4 = 3;
      pcVar5 = (code *)FUN_005a07f0(s_a_State_>__0____a_State_<_GS_NR__00697cb8,
                                    s___AdamSource_AdamGame_h_00697ce0,0x1f5,auStack_6c);
      (*pcVar5)();
      local_4 = 0xffffffff;
      FUN_004040a0(1);
    }
    if (*(int *)(*(int *)(param_1 + 0x8c) + iVar4 * 4) == 0) {
      FUN_00409810(&DAT_006b3f70,&uStack_91);
      local_4 = 4;
      pcVar5 = (code *)FUN_005a07f0(s_m_States__a_State______0_00697c9c,
                                    s___AdamSource_AdamGame_h_00697ce0,0x1f6,auStack_5c);
      (*pcVar5)();
      local_4 = 0xffffffff;
      FUN_004040a0(1);
    }
    if (*(int *)(*(int *)(*(int *)(param_1 + 0x8c) + iVar4 * 4) + 0x24) != iVar4) {
      FUN_00409810(&DAT_006b3f70,&local_95);
      local_4 = 5;
      pcVar5 = (code *)FUN_005a07f0(s_m_States__a_State___>GetState____00697c70,
                                    s___AdamSource_AdamGame_h_00697ce0,0x1f7,auStack_3c);
      (*pcVar5)();
      local_4 = 0xffffffff;
      FUN_004040a0(1);
    }
    puVar3 = *(undefined1 **)(*(int *)(*(int *)(param_1 + 0x8c) + iVar4 * 4) + 0x18);
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = &DAT_0064a3b4;
    }
    uVar6 = FUN_005ae390(auStack_1c,s_SetCurrentState_____must_change_f_006a0428,puVar3,puStack_90);
    local_4 = 6;
    FUN_005aff00(uVar6);
    local_4 = 0xffffffff;
    FUN_004040a0(1);
  }
  if (param_2 != *(int *)(param_1 + 0x9c)) {
    if (*(int *)(param_1 + 0x9c) != *(int *)(param_1 + 0x98)) {
      local_8c[0] = local_95;
      FUN_004040a0(0);
      uVar7 = 0xffffffff;
      pcVar10 = &DAT_006b3f70;
      do {
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        cVar1 = *pcVar10;
        pcVar10 = pcVar10 + 1;
      } while (cVar1 != '\0');
      uVar7 = ~uVar7 - 1;
      cVar1 = FUN_00401940(uVar7,1);
      if (cVar1 != '\0') {
        puVar9 = (undefined4 *)&DAT_006b3f70;
        puVar11 = puStack_88;
        for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
          *puVar11 = *puVar9;
          puVar9 = puVar9 + 1;
          puVar11 = puVar11 + 1;
        }
        for (uVar8 = uVar7 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *(undefined1 *)puVar11 = *(undefined1 *)puVar9;
          puVar9 = (undefined4 *)((int)puVar9 + 1);
          puVar11 = (undefined4 *)((int)puVar11 + 1);
        }
        *(undefined1 *)((int)puStack_88 + uVar7) = 0;
        uStack_84 = uVar7;
      }
      local_4 = 7;
      pcVar5 = (code *)FUN_005a07f0(s_m_NextState____m_CurrentState_006a0408,
                                    s_D__Work_RCHorror_AdamSource_Adam_0069fb00,0x390,local_8c);
      (*pcVar5)();
      local_4 = 0xffffffff;
      if (puStack_88 != (undefined4 *)0x0) {
        cVar1 = *(char *)((int)puStack_88 + -1);
        if ((cVar1 == '\0') || (cVar1 == -1)) {
          FUN_005fe5f0((char *)((int)puStack_88 + -1));
        }
        else {
          *(char *)((int)puStack_88 + -1) = cVar1 + -1;
        }
      }
      puStack_88 = (undefined4 *)0x0;
      uStack_84 = 0;
      uStack_80 = 0;
    }
    *(int *)(param_1 + 0x9c) = param_2;
    FUN_0052af50();
  }
  ExceptionList = pvStack_c;
  return;
}

