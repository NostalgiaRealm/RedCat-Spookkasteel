/*
 * FUN_0052e870 at 0052e870
 * undefined FUN_0052e870(void)
 * Address ranges: 0052e870-0052eaae
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_0052e870(int param_1)

{
  char cVar1;
  int iVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined4 uVar5;
  code *pcVar6;
  uint uVar7;
  char *pcVar8;
  undefined1 local_3d;
  undefined1 auStack_3c [4];
  int iStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined1 local_2c [16];
  undefined1 local_1c [4];
  int local_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063a410;
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
    uVar5 = FUN_005ae390(local_1c,s__s___d____SetCurrentState__GS_IN_006a0600,
                         s_D__Work_RCHorror_AdamSource_Adam_0069fb00,0x59a);
    local_4 = 0;
    FUN_005aff00(uVar5);
    local_4 = 0xffffffff;
    if (local_18 != 0) {
      cVar1 = *(char *)(local_18 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_005fe5f0((char *)(local_18 + -1));
      }
      else {
        *(char *)(local_18 + -1) = cVar1 + -1;
      }
    }
  }
  FUN_0052ab20(2);
  do {
    if (*(int *)(*(int *)(param_1 + 0x8c) + 8) == 0) {
      local_2c[0] = local_3d;
      FUN_004040a0(0);
      uVar7 = 0xffffffff;
      pcVar8 = &DAT_006b3f70;
      do {
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 != '\0');
      FUN_004040f0(&DAT_006b3f70,~uVar7 - 1);
      local_4 = 2;
      pcVar6 = (code *)FUN_005a07f0(s_m_States__a_State______0_00697c9c,
                                    s___AdamSource_AdamGame_h_00697ce0,0x1f6,local_2c);
      (*pcVar6)();
      local_4 = 0xffffffff;
      FUN_004040a0(1);
    }
    if (*(int *)(*(int *)(*(int *)(param_1 + 0x8c) + 8) + 0x24) != 2) {
      FUN_00409810(&DAT_006b3f70,&local_3d);
      local_4 = 3;
      pcVar6 = (code *)FUN_005a07f0(s_m_States__a_State___>GetState____00697c70,
                                    s___AdamSource_AdamGame_h_00697ce0,0x1f7,local_1c);
      (*pcVar6)();
      local_4 = 0xffffffff;
      FUN_004040a0(1);
    }
    cVar1 = (**(code **)(**(int **)(*(int *)(param_1 + 0x8c) + 8) + 0x18))();
    if (cVar1 != '\0') {
      ExceptionList = pvStack_c;
      return;
    }
    if (*(int *)(param_1 + 0x98) != 2) {
      auStack_3c[0] = local_3d;
      uVar7 = 0xffffffff;
      iStack_38 = 0;
      pcVar8 = &DAT_006b3f70;
      do {
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 != '\0');
      uStack_34 = 0;
      uStack_30 = 0;
      FUN_004040f0(&DAT_006b3f70,~uVar7 - 1);
      local_4 = 4;
      pcVar6 = (code *)FUN_005a07f0(s_GetCurrentState____GS_INTRO_006a05e4,
                                    s_D__Work_RCHorror_AdamSource_Adam_0069fb00,0x59e,auStack_3c);
      (*pcVar6)();
      local_4 = 0xffffffff;
      if (iStack_38 != 0) {
        cVar1 = *(char *)(iStack_38 + -1);
        if ((cVar1 == '\0') || (cVar1 == -1)) {
          FUN_005fe5f0((char *)(iStack_38 + -1));
        }
        else {
          *(char *)(iStack_38 + -1) = cVar1 + -1;
        }
      }
      iStack_38 = 0;
      uStack_34 = 0;
      uStack_30 = 0;
    }
    FUN_0052af50();
  } while( true );
}

