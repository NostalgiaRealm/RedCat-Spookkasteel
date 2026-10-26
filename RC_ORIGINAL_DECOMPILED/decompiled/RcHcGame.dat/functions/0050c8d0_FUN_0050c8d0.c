/*
 * FUN_0050c8d0 at 0050c8d0
 * undefined FUN_0050c8d0(void)
 * Address ranges: 0050c8d0-0050cb5a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_0050c8d0(int param_1)

{
  char cVar1;
  int iVar2;
  code *pcVar3;
  undefined1 *puVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  undefined1 auStack_1c [4];
  int iStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_00636b40;
  local_c = ExceptionList;
  local_4 = 0;
  iVar6 = 0;
  ExceptionList = &local_c;
  while( true ) {
    if (*(int *)(param_1 + 0x18) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18) >> 2;
    }
    if (iVar2 <= iVar6) break;
    local_4 = local_4 & 0xffffff00;
    FUN_004fd0d0(iVar6);
    FUN_00412de0();
    FUN_0050aea0();
    iVar6 = iVar6 + 1;
  }
  iVar6 = 0;
  do {
    if (*(int *)(param_1 + 0x18) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18) >> 2;
    }
    if (iVar2 <= iVar6) {
      *(undefined1 *)(param_1 + 0x30) = 0;
      ExceptionList = local_c;
      return;
    }
    iVar2 = *(int *)(param_1 + 0x18);
    if (*(int *)(iVar2 + iVar6 * 4) == 0) {
      FUN_004040a0();
      iVar5 = -1;
      pcVar7 = &DAT_006b3f70;
      do {
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      FUN_004040f0(&DAT_006b3f70);
      local_4._0_1_ = 2;
      pcVar3 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6);
      (*pcVar3)();
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_004040a0();
    }
    if (*(int *)(*(int *)(iVar2 + iVar6 * 4) + 0x14) != 1) {
      if (*(int *)(*(int *)(param_1 + 0x18) + iVar6 * 4) == 0) {
        FUN_004040a0();
        iVar2 = -1;
        pcVar7 = &DAT_006b3f70;
        do {
          if (iVar2 == 0) break;
          iVar2 = iVar2 + -1;
          cVar1 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar1 != '\0');
        FUN_004040f0(&DAT_006b3f70);
        local_4._0_1_ = 3;
        pcVar3 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6);
        (*pcVar3)();
        local_4 = (uint)local_4._1_3_ << 8;
        FUN_004040a0();
      }
      if (*(int *)(*(int *)(param_1 + 0x18) + iVar6 * 4) == 0) {
        FUN_004040a0();
        iVar2 = -1;
        pcVar7 = &DAT_006b3f70;
        do {
          if (iVar2 == 0) break;
          iVar2 = iVar2 + -1;
          cVar1 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar1 != '\0');
        FUN_004040f0(&DAT_006b3f70);
        local_4._0_1_ = 4;
        pcVar3 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6);
        (*pcVar3)();
        local_4 = (uint)local_4._1_3_ << 8;
        FUN_004040a0();
      }
      iVar2 = FUN_00556560();
      puVar4 = *(undefined1 **)(iVar2 + 4);
      if (puVar4 == (undefined1 *)0x0) {
        puVar4 = &DAT_0064a3b4;
      }
      FUN_005ae390(auStack_1c,s_bitmap__s_is_still_in_use__d__0069e944,puVar4);
      local_4._0_1_ = 5;
      pcVar3 = (code *)FUN_005a07f0(s_m_Bitmaps__i___>GetUseCount____1_0069e920,
                                    s_D__Work_RCHorror_AdamSource_Adam_0069e8f0,0x2d);
      (*pcVar3)();
      local_4 = (uint)local_4._1_3_ << 8;
      if (iStack_18 != 0) {
        cVar1 = *(char *)(iStack_18 + -1);
        if ((cVar1 == '\0') || (cVar1 == -1)) {
          FUN_005fe5f0();
        }
        else {
          *(char *)(iStack_18 + -1) = cVar1 + -1;
        }
      }
      iStack_18 = 0;
      uStack_14 = 0;
      uStack_10 = 0;
    }
    iVar6 = iVar6 + 1;
  } while( true );
}

