/*
 * FUN_00550330 at 00550330
 * undefined FUN_00550330(void)
 * Address ranges: 00550330-00550891
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_00550330(int param_1,char param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  code *pcVar5;
  int iVar6;
  int iVar7;
  undefined1 *puVar8;
  uint uVar9;
  char *pcVar10;
  undefined1 local_ad;
  int local_ac;
  undefined1 local_a5;
  int local_a4;
  undefined1 local_9c [16];
  undefined1 auStack_8c [16];
  undefined1 auStack_7c [16];
  undefined1 auStack_6c [16];
  undefined1 auStack_5c [16];
  undefined1 local_4c [16];
  undefined1 auStack_3c [16];
  undefined1 auStack_2c [16];
  undefined1 auStack_1c [16];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063dd8f;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_ac = param_1;
  cVar1 = FUN_00553640();
  if ((cVar1 == '\0') || (*(char *)(param_1 + 0x8c) == '\0')) {
    ExceptionList = local_c;
    return;
  }
  FUN_005ae5f0(s_D__Work_RCHorror_AdamSource_Adam_006a1798,0x2bd);
  local_4 = 0;
  FUN_00516fb0();
  iVar2 = FUN_004337e0();
  if (iVar2 != 0) {
    if (*(int *)(param_1 + 0x58) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(param_1 + 0x5c) - *(int *)(param_1 + 0x58) >> 2;
    }
    uVar3 = FUN_005ae390(local_9c,s_CAdamSoundSystem__RemoveUnusedSo_006a1c0c,iVar2);
    local_4._0_1_ = 1;
    FUN_005aff00(uVar3);
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_004040a0(1);
  }
  iVar2 = 0;
  local_a4 = 0;
LAB_005503e8:
  do {
    if (*(int *)(param_1 + 0x58) == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(param_1 + 0x5c) - *(int *)(param_1 + 0x58) >> 2;
    }
    if (iVar4 <= iVar2) {
      if (*(char *)(param_1 + 0x8c) == '\0') {
        FUN_00409810(&DAT_006b3f70,&local_a5);
        local_4._0_1_ = 0xb;
        pcVar5 = (code *)FUN_005a07f0(s_m_Initialized_00691bb0,s___AdamSource_AdamSound_h_00692cdc,
                                      0x14b,local_9c);
        (*pcVar5)();
        local_4 = (uint)local_4._1_3_ << 8;
        FUN_004040a0(1);
      }
      FUN_005525d0();
      local_4 = 0xffffffff;
      FUN_005ae770();
      ExceptionList = local_c;
      return;
    }
    iVar4 = *(int *)(param_1 + 0x58);
    if (*(int *)(iVar4 + iVar2 * 4) == 0) {
      FUN_00409810(&DAT_006b3f70,&local_ad);
      local_4._0_1_ = 2;
      pcVar5 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                    local_4c);
      (*pcVar5)();
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_004040a0(1);
    }
    iVar4 = *(int *)(*(int *)(iVar4 + iVar2 * 4) + 0x14);
    if (iVar4 < 1) {
      auStack_7c[0] = local_ad;
      FUN_004040a0(0);
      uVar9 = 0xffffffff;
      pcVar10 = &DAT_006b3f70;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        cVar1 = *pcVar10;
        pcVar10 = pcVar10 + 1;
      } while (cVar1 != '\0');
      FUN_004040f0(&DAT_006b3f70,~uVar9 - 1);
      local_4._0_1_ = 3;
      pcVar5 = (code *)FUN_005a07f0(s_useCount_>__1_006a1bfc,
                                    s_D__Work_RCHorror_AdamSource_Adam_006a1798,0x2c9,auStack_7c);
      (*pcVar5)();
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_004040a0(1);
      iVar2 = local_a4;
    }
    if (iVar4 < 2) {
      if (*(int *)(*(int *)(local_ac + 0x58) + iVar2 * 4) == 0) {
        auStack_8c[0] = local_ad;
        FUN_004040a0(0);
        uVar9 = 0xffffffff;
        pcVar10 = &DAT_006b3f70;
        do {
          if (uVar9 == 0) break;
          uVar9 = uVar9 - 1;
          cVar1 = *pcVar10;
          pcVar10 = pcVar10 + 1;
        } while (cVar1 != '\0');
        FUN_004040f0(&DAT_006b3f70,~uVar9 - 1);
        local_4._0_1_ = 5;
        pcVar5 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                      auStack_8c);
        (*pcVar5)();
        local_4 = (uint)local_4._1_3_ << 8;
        FUN_004040a0(1);
        iVar2 = local_a4;
      }
      cVar1 = FUN_005530e0();
      if (cVar1 != '\0') {
        if (param_2 != '\0') {
          iVar7 = FUN_00516fb0();
          iVar6 = *(int *)(iVar7 + 100);
          if (iVar6 == -0x80000000) {
            puVar8 = *(undefined1 **)(iVar7 + 0x18);
            if (puVar8 == (undefined1 *)0x0) {
              puVar8 = &DAT_0064a3b4;
            }
            iVar6 = FUN_0060af10(puVar8);
            *(int *)(iVar7 + 100) = iVar6;
          }
          if (iVar6 != 0) {
            uVar3 = FUN_005ae390(auStack_2c,s_CAdamSoundSystem__RemoveUnusedSo_006a1b78,iVar2,iVar4)
            ;
            local_4._0_1_ = 6;
            FUN_005aff00(uVar3);
            local_4 = (uint)local_4._1_3_ << 8;
            FUN_004040a0(1);
          }
          iVar2 = iVar2 + 1;
          param_1 = local_ac;
          local_a4 = iVar2;
          goto LAB_005503e8;
        }
        if (*(int *)(*(int *)(local_ac + 0x58) + iVar2 * 4) == 0) {
          auStack_6c[0] = local_ad;
          FUN_004040a0(0);
          uVar9 = 0xffffffff;
          pcVar10 = &DAT_006b3f70;
          do {
            if (uVar9 == 0) break;
            uVar9 = uVar9 - 1;
            cVar1 = *pcVar10;
            pcVar10 = pcVar10 + 1;
          } while (cVar1 != '\0');
          FUN_004040f0(&DAT_006b3f70,~uVar9 - 1);
          local_4._0_1_ = 7;
          pcVar5 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                        auStack_6c);
          (*pcVar5)();
          local_4 = (uint)local_4._1_3_ << 8;
          FUN_004040a0(1);
          iVar2 = local_a4;
        }
        FUN_00553130();
      }
      iVar6 = FUN_00516fb0();
      iVar4 = *(int *)(iVar6 + 100);
      if (iVar4 == -0x80000000) {
        puVar8 = *(undefined1 **)(iVar6 + 0x18);
        if (puVar8 == (undefined1 *)0x0) {
          puVar8 = &DAT_0064a3b4;
        }
        iVar4 = FUN_0060af10(puVar8);
        *(int *)(iVar6 + 100) = iVar4;
      }
      if (iVar4 != 0) {
        uVar3 = FUN_005ae390(auStack_1c,s_CAdamSoundSystem__RemoveUnusedSo_006a1b40,iVar2);
        local_4._0_1_ = 8;
        FUN_005aff00(uVar3);
        local_4 = (uint)local_4._1_3_ << 8;
        FUN_004040a0(1);
      }
      if ((iVar2 < 0) || (iVar4 = FUN_0044e4c0(), iVar4 <= iVar2)) {
        auStack_5c[0] = local_ad;
        FUN_004040a0(0);
        uVar9 = 0xffffffff;
        pcVar10 = &DAT_006b3f70;
        do {
          if (uVar9 == 0) break;
          uVar9 = uVar9 - 1;
          cVar1 = *pcVar10;
          pcVar10 = pcVar10 + 1;
        } while (cVar1 != '\0');
        FUN_004040f0(&DAT_006b3f70,~uVar9 - 1);
        local_4._0_1_ = 9;
        pcVar5 = (code *)FUN_005a07f0(s_a_Index>_0____a_Index<Count()_0068f470,
                                      s___AdamSource_DaviSortedList_h_00690798,0x6a,auStack_5c);
        (*pcVar5)();
        local_4 = (uint)local_4._1_3_ << 8;
        FUN_004040a0(1);
        iVar2 = local_a4;
      }
      iVar4 = local_ac;
      if (*(char *)(local_ac + 0x6c) != '\0') {
        FUN_00409810(&DAT_006b3f70,&local_a5);
        local_4._0_1_ = 10;
        pcVar5 = (code *)FUN_005a07f0(s__GetIsLocked___00695180,
                                      s___AdamSource_DaviSortedList_h_00690798,0x6b,local_9c);
        (*pcVar5)();
        local_4 = (uint)local_4._1_3_ << 8;
        FUN_004040a0(1);
      }
      FUN_00553fd0(*(int *)(iVar4 + 0x58) + iVar2 * 4);
      param_1 = local_ac;
      goto LAB_005503e8;
    }
    FUN_00516fb0();
    iVar6 = FUN_004337e0();
    if (iVar6 != 0) {
      uVar3 = FUN_005ae390(auStack_3c,s_CAdamSoundSystem__RemoveUnusedSo_006a1bb8,iVar2,iVar4);
      local_4._0_1_ = 4;
      FUN_005aff00(uVar3);
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_004040a0(1);
    }
    iVar2 = iVar2 + 1;
    param_1 = local_ac;
    local_a4 = iVar2;
  } while( true );
}

