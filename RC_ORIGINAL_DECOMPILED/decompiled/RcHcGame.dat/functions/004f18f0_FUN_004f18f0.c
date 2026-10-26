/*
 * FUN_004f18f0 at 004f18f0
 * undefined FUN_004f18f0(void)
 * Address ranges: 004f18f0-004f1be3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_004f18f0(undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  char *pcVar9;
  undefined1 local_5d;
  int local_5c;
  undefined4 *local_54;
  undefined4 *local_50;
  undefined1 local_4c [16];
  undefined1 auStack_3c [16];
  undefined1 auStack_2c [16];
  undefined1 auStack_1c [16];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00634269;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_0064f420;
  local_4 = 3;
  local_54 = param_1;
  FUN_005ae5f0(s_D__Work_RCHorror_AdamSource_Adam_0069c43c,0x12);
  local_4._0_1_ = 4;
  local_5c = 0;
  do {
    if (param_1[0xc] == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = (int)(param_1[0xd] - param_1[0xc]) >> 2;
    }
    if (iVar3 <= local_5c) {
      local_4._0_1_ = 3;
      FUN_005ae770();
      local_4._0_1_ = 2;
      FUN_004f2ef0();
      local_4._0_1_ = 9;
      local_50 = param_1 + 0xb;
      FUN_005ae5f0(s___AdamSource_DaviSortedList_h_00690798,0x2d);
      FUN_005ae770();
      iVar3 = param_1[0xd];
      iVar8 = param_1[0xc];
      local_4 = CONCAT31(local_4._1_3_,1);
      for (; iVar8 != iVar3; iVar8 = iVar8 + 4) {
        FUN_00554170(0);
      }
      FUN_005fe5f0(param_1[0xc]);
      param_1[0xc] = 0;
      param_1[0xd] = 0;
      param_1[0xe] = 0;
      iVar3 = param_1[8];
      if (iVar3 != 0) {
        cVar1 = *(char *)(iVar3 + -1);
        if ((cVar1 == '\0') || (cVar1 == -1)) {
          FUN_005fe5f0((char *)(iVar3 + -1));
        }
        else {
          *(char *)(iVar3 + -1) = cVar1 + -1;
        }
      }
      param_1[8] = 0;
      param_1[9] = 0;
      param_1[10] = 0;
      local_4 = 0xffffffff;
      *param_1 = &PTR_FUN_0064e794;
      FUN_005ab4d0();
      ExceptionList = local_c;
      return;
    }
    iVar3 = local_5c * 4;
    if (*(int *)(iVar3 + param_1[0xc]) != 0) {
      if (*(int *)(iVar3 + param_1[0xc]) == 0) {
        local_4c[0] = local_5d;
        FUN_004040a0(0);
        uVar7 = 0xffffffff;
        pcVar9 = &DAT_006b3f70;
        do {
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          cVar1 = *pcVar9;
          pcVar9 = pcVar9 + 1;
        } while (cVar1 != '\0');
        FUN_004040f0(&DAT_006b3f70,~uVar7 - 1);
        local_4._0_1_ = 5;
        pcVar4 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                      local_4c);
        (*pcVar4)();
        local_4._0_1_ = 4;
        FUN_004040a0(1);
      }
      FUN_004faab0();
      iVar8 = param_1[0xc];
      if (*(int *)(iVar3 + iVar8) == 0) {
        FUN_00409810(&DAT_006b3f70,&local_5d);
        local_4._0_1_ = 6;
        pcVar4 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                      auStack_2c);
        (*pcVar4)();
        local_4._0_1_ = 4;
        FUN_004040a0(1);
      }
      if (*(int *)(*(int *)(iVar3 + iVar8) + 0x14) != 1) {
        iVar8 = param_1[0xc];
        if (*(int *)(iVar3 + iVar8) == 0) {
          auStack_3c[0] = local_5d;
          FUN_004040a0(0);
          uVar7 = 0xffffffff;
          pcVar9 = &DAT_006b3f70;
          do {
            if (uVar7 == 0) break;
            uVar7 = uVar7 - 1;
            cVar1 = *pcVar9;
            pcVar9 = pcVar9 + 1;
          } while (cVar1 != '\0');
          FUN_004040f0(&DAT_006b3f70,~uVar7 - 1);
          local_4._0_1_ = 7;
          pcVar4 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                        auStack_3c);
          (*pcVar4)();
          local_4._0_1_ = 4;
          FUN_004040a0(1);
        }
        puVar5 = *(undefined1 **)(*(int *)(iVar3 + iVar8) + 0x20);
        if (puVar5 == (undefined1 *)0x0) {
          puVar5 = &DAT_0064a3b4;
        }
        uVar6 = FUN_005ae390(auStack_1c,s_sublevel__s_is_still_in_use_0069c48c,puVar5);
        local_4._0_1_ = 8;
        pcVar4 = (code *)FUN_005a07f0(s_m_SubLevels__i___>GetUseCount____0069c468,
                                      s_D__Work_RCHorror_AdamSource_Adam_0069c43c,0x1d,uVar6);
        (*pcVar4)();
        local_4._0_1_ = 4;
        FUN_004040a0(1);
      }
      iVar8 = param_1[0xc];
      iVar2 = *(int *)(iVar3 + iVar8);
      if (iVar2 != 0) {
        *(undefined4 *)(iVar2 + 0x14) = 0;
        FUN_005abfc0(1);
        *(int *)(iVar3 + iVar8) = 0;
      }
    }
    local_5c = local_5c + 1;
  } while( true );
}

