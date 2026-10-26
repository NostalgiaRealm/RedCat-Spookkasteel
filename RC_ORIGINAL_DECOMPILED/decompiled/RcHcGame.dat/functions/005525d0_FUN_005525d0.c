/*
 * FUN_005525d0 at 005525d0
 * undefined FUN_005525d0(void)
 * Address ranges: 005525d0-00552b0d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_005525d0(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined4 uVar7;
  uint uVar8;
  char *pcVar9;
  undefined1 uStack_cd;
  int local_cc;
  undefined1 local_c5;
  undefined1 uStack_c4;
  undefined1 uStack_c3;
  undefined1 uStack_c2;
  undefined1 auStack_c1 [5];
  undefined1 auStack_bc [16];
  undefined1 auStack_ac [16];
  undefined1 auStack_9c [4];
  int iStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined1 auStack_8c [16];
  undefined1 auStack_7c [16];
  undefined1 auStack_6c [16];
  undefined1 auStack_5c [16];
  undefined1 auStack_4c [16];
  undefined1 local_3c [16];
  undefined1 auStack_2c [16];
  undefined1 auStack_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063e1df;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_005ae5f0(s_D__Work_RCHorror_AdamSource_Adam_006a1798,0x41e);
  local_4 = 0;
  FUN_00516fb0();
  iVar2 = FUN_004337e0();
  if (iVar2 != 0) {
    FUN_005afe30(s_CAdamSoundDefMgr__RemoveUnusedSo_006a1e7c);
  }
  iVar2 = 0;
  local_cc = 0;
  iVar3 = FUN_0044e4c0();
  if (0 < iVar3) {
    do {
      iVar3 = *(int *)(param_1 + 0x20);
      if (*(int *)(iVar3 + iVar2 * 4) == 0) {
        FUN_00409810(&DAT_006b3f70,&local_c5);
        local_4._0_1_ = 1;
        pcVar4 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                      local_3c);
        (*pcVar4)();
        local_4 = (uint)local_4._1_3_ << 8;
        FUN_004040a0(1);
      }
      iVar3 = *(int *)(*(int *)(iVar3 + iVar2 * 4) + 0x14);
      if (iVar3 < 1) {
        auStack_ac[0] = local_c5;
        FUN_004040a0(0);
        uVar8 = 0xffffffff;
        pcVar9 = &DAT_006b3f70;
        do {
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          cVar1 = *pcVar9;
          pcVar9 = pcVar9 + 1;
        } while (cVar1 != '\0');
        FUN_004040f0(&DAT_006b3f70,~uVar8 - 1);
        local_4._0_1_ = 2;
        pcVar4 = (code *)FUN_005a07f0(s_useCount_>__1_006a1bfc,
                                      s_D__Work_RCHorror_AdamSource_Adam_006a1798,0x427,auStack_ac);
        (*pcVar4)();
        local_4 = (uint)local_4._1_3_ << 8;
        FUN_004040a0(1);
        iVar2 = local_cc;
      }
      if (iVar3 < 2) {
        iVar3 = *(int *)(param_1 + 0x20);
        if (*(int *)(iVar3 + iVar2 * 4) == 0) {
          FUN_00409810(&DAT_006b3f70,&uStack_c2);
          local_4._0_1_ = 5;
          pcVar4 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                        auStack_8c);
          (*pcVar4)();
          local_4 = (uint)local_4._1_3_ << 8;
          FUN_004040a0(1);
        }
        if (*(char *)(*(int *)(iVar3 + iVar2 * 4) + 0x34) == '\0') {
          iVar5 = FUN_00516fb0();
          iVar3 = *(int *)(iVar5 + 100);
          if (iVar3 == -0x80000000) {
            puVar6 = *(undefined1 **)(iVar5 + 0x18);
            if (puVar6 == (undefined1 *)0x0) {
              puVar6 = &DAT_0064a3b4;
            }
            iVar3 = FUN_0060af10(puVar6);
            *(int *)(iVar5 + 100) = iVar3;
          }
          if (iVar3 != 0) {
            iVar3 = *(int *)(param_1 + 0x20);
            if (*(int *)(iVar3 + iVar2 * 4) == 0) {
              auStack_bc[0] = uStack_cd;
              FUN_004040a0(0);
              uVar8 = 0xffffffff;
              pcVar9 = &DAT_006b3f70;
              do {
                if (uVar8 == 0) break;
                uVar8 = uVar8 - 1;
                cVar1 = *pcVar9;
                pcVar9 = pcVar9 + 1;
              } while (cVar1 != '\0');
              FUN_004040f0(&DAT_006b3f70,~uVar8 - 1);
              local_4._0_1_ = 8;
              pcVar4 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,
                                            0xb6,auStack_bc);
              (*pcVar4)();
              local_4 = (uint)local_4._1_3_ << 8;
              FUN_004040a0(1);
              iVar2 = local_cc;
            }
            puVar6 = *(undefined1 **)(*(int *)(iVar3 + iVar2 * 4) + 0x24);
            if (puVar6 == (undefined1 *)0x0) {
              puVar6 = &DAT_0064a3b4;
            }
            uVar7 = FUN_005ae390(auStack_9c,s_CAdamSoundDefMgr__RemoveUnusedSo_006a1dcc,puVar6);
            local_4._0_1_ = 9;
            FUN_005aff00(uVar7);
            local_4 = (uint)local_4._1_3_ << 8;
            if (iStack_98 != 0) {
              cVar1 = *(char *)(iStack_98 + -1);
              if ((cVar1 == '\0') || (cVar1 == -1)) {
                FUN_005fe5f0((char *)(iStack_98 + -1));
              }
              else {
                *(char *)(iStack_98 + -1) = cVar1 + -1;
              }
            }
            iStack_98 = 0;
            uStack_94 = 0;
            uStack_90 = 0;
          }
          if ((iVar2 < 0) || (iVar3 = FUN_0044e4c0(), iVar3 <= iVar2)) {
            FUN_00409810(&DAT_006b3f70,&uStack_c4);
            local_4._0_1_ = 10;
            pcVar4 = (code *)FUN_005a07f0(s_a_Index>_0____a_Index<Count()_0068f470,
                                          s___AdamSource_DaviSortedList_h_00690798,0x6a,auStack_7c);
            (*pcVar4)();
            local_4 = (uint)local_4._1_3_ << 8;
            FUN_004040a0(1);
          }
          if (*(char *)(param_1 + 0x34) != '\0') {
            FUN_00409810(&DAT_006b3f70,&uStack_c3);
            local_4._0_1_ = 0xb;
            pcVar4 = (code *)FUN_005a07f0(s__GetIsLocked___00695180,
                                          s___AdamSource_DaviSortedList_h_00690798,0x6b,auStack_5c);
            (*pcVar4)();
            local_4 = (uint)local_4._1_3_ << 8;
            FUN_004040a0(1);
          }
          FUN_00553fd0(*(int *)(param_1 + 0x20) + iVar2 * 4);
        }
        else {
          FUN_00516fb0();
          iVar3 = FUN_004337e0();
          if (iVar3 != 0) {
            iVar3 = *(int *)(param_1 + 0x20);
            if (*(int *)(iVar3 + iVar2 * 4) == 0) {
              FUN_00409810(&DAT_006b3f70,&uStack_cd);
              local_4._0_1_ = 6;
              pcVar4 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,
                                            0xb6,auStack_4c);
              (*pcVar4)();
              local_4 = (uint)local_4._1_3_ << 8;
              FUN_004040a0(1);
            }
            puVar6 = *(undefined1 **)(*(int *)(iVar3 + iVar2 * 4) + 0x24);
            if (puVar6 == (undefined1 *)0x0) {
              puVar6 = &DAT_0064a3b4;
            }
            uVar7 = FUN_005ae390(auStack_1c,s_CAdamSoundDefMgr__RemoveUnusedSo_006a1e00,puVar6);
            local_4._0_1_ = 7;
            FUN_005aff00(uVar7);
            local_4 = (uint)local_4._1_3_ << 8;
            FUN_004040a0(1);
          }
          iVar2 = iVar2 + 1;
          local_cc = iVar2;
        }
      }
      else {
        FUN_00516fb0();
        iVar5 = FUN_004337e0();
        if (iVar5 != 0) {
          iVar2 = *(int *)(param_1 + 0x20);
          if (*(int *)(iVar2 + local_cc * 4) == 0) {
            FUN_00409810(&DAT_006b3f70,auStack_c1);
            local_4._0_1_ = 3;
            pcVar4 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6
                                          ,auStack_6c);
            (*pcVar4)();
            local_4 = (uint)local_4._1_3_ << 8;
            FUN_004040a0(1);
          }
          puVar6 = *(undefined1 **)(*(int *)(iVar2 + local_cc * 4) + 0x24);
          if (puVar6 == (undefined1 *)0x0) {
            puVar6 = &DAT_0064a3b4;
          }
          uVar7 = FUN_005ae390(auStack_2c,s_CAdamSoundDefMgr__RemoveUnusedSo_006a1e3c,puVar6,iVar3);
          local_4._0_1_ = 4;
          FUN_005aff00(uVar7);
          local_4 = (uint)local_4._1_3_ << 8;
          FUN_004040a0(1);
          iVar2 = local_cc;
        }
        iVar2 = iVar2 + 1;
        local_cc = iVar2;
      }
      iVar3 = FUN_0044e4c0();
    } while (iVar2 < iVar3);
  }
  local_4 = 0xffffffff;
  FUN_005ae770();
  ExceptionList = pvStack_c;
  return;
}

