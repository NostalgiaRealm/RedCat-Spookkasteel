/*
 * FUN_00550900 at 00550900
 * undefined FUN_00550900(void)
 * Address ranges: 00550900-00550be7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_00550900(undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  code *pcVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  char *pcVar8;
  int local_5c;
  undefined1 local_4c [16];
  undefined1 auStack_3c [16];
  undefined1 auStack_2c [16];
  undefined1 auStack_1c [4];
  int iStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_0063dde3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_0064f810;
  local_4 = 1;
  FUN_005ae5f0(s_D__Work_RCHorror_AdamSource_Adam_006a1798,0x301);
  local_4._0_1_ = 2;
  local_5c = 0;
  do {
    if (param_1[8] == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (int)(param_1[9] - param_1[8]) >> 2;
    }
    if (iVar2 <= local_5c) {
      local_4._0_1_ = 1;
      FUN_005ae770();
      local_4._0_1_ = 7;
      FUN_005ae5f0(s___AdamSource_DaviSortedList_h_00690798,0x2d);
      FUN_005ae770();
      iVar2 = param_1[9];
      iVar7 = param_1[8];
      local_4 = (uint)local_4._1_3_ << 8;
      for (; iVar7 != iVar2; iVar7 = iVar7 + 4) {
        FUN_00554170(0);
      }
      FUN_005fe5f0(param_1[8]);
      param_1[8] = 0;
      param_1[9] = 0;
      param_1[10] = 0;
      local_4 = 0xffffffff;
      *param_1 = &PTR_FUN_0064e794;
      FUN_005ab4d0();
      ExceptionList = local_c;
      return;
    }
    iVar2 = param_1[8];
    if (*(int *)(iVar2 + local_5c * 4) == 0) {
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
      local_4._0_1_ = 3;
      pcVar3 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                    local_4c);
      (*pcVar3)();
      local_4._0_1_ = 2;
      FUN_004040a0(1);
    }
    if (*(int *)(*(int *)(iVar2 + local_5c * 4) + 0x14) != 1) {
      iVar2 = param_1[8];
      if (*(int *)(iVar2 + local_5c * 4) == 0) {
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
        local_4._0_1_ = 4;
        pcVar3 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                      auStack_3c);
        (*pcVar3)();
        local_4._0_1_ = 2;
        FUN_004040a0(1);
      }
      uVar5 = *(undefined4 *)(*(int *)(iVar2 + local_5c * 4) + 0x14);
      iVar2 = param_1[8];
      if (*(int *)(iVar2 + local_5c * 4) == 0) {
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
        local_4._0_1_ = 5;
        pcVar3 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                      auStack_2c);
        (*pcVar3)();
        local_4._0_1_ = 2;
        FUN_004040a0(1);
      }
      puVar4 = *(undefined1 **)(*(int *)(iVar2 + local_5c * 4) + 0x24);
      if (puVar4 == (undefined1 *)0x0) {
        puVar4 = &DAT_0064a3b4;
      }
      uVar5 = FUN_005ae390(auStack_1c,s_Sound_definition__s_is_still_use_006a1c84,puVar4,uVar5);
      local_4._0_1_ = 6;
      pcVar3 = (code *)FUN_005a07f0(s_m_SoundDefs__i___>GetUseCount____006a1c60,
                                    s_D__Work_RCHorror_AdamSource_Adam_006a1798,0x30a,uVar5);
      (*pcVar3)();
      local_4._0_1_ = 2;
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
    local_5c = local_5c + 1;
  } while( true );
}

