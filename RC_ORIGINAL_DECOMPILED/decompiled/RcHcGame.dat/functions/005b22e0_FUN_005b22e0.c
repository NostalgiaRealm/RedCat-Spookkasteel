/*
 * FUN_005b22e0 at 005b22e0
 * undefined FUN_005b22e0(void)
 * Address ranges: 005b22e0-005b2971
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall
FUN_005b22e0(int param_1,undefined4 *param_2,undefined4 param_3,int param_4,int param_5)

{
  char cVar1;
  bool bVar2;
  undefined1 uVar3;
  int *piVar4;
  code *pcVar5;
  int iVar6;
  char *_Str1;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  uint uVar12;
  char *pcVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  int iVar16;
  undefined1 local_66;
  undefined1 uStack_65;
  int local_64;
  undefined1 *puStack_60;
  undefined1 *puStack_5c;
  undefined4 local_58;
  int *local_54;
  int *piStack_50;
  undefined1 local_4c [8];
  undefined4 uStack_44;
  undefined1 auStack_3c [16];
  undefined1 auStack_2c [16];
  undefined1 auStack_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00646350;
  pvStack_c = ExceptionList;
  iVar8 = param_1 + 0x20;
  local_58 = 0;
  bVar2 = false;
  ExceptionList = &pvStack_c;
  local_64 = iVar8;
  piVar4 = (int *)FUN_005b2c70(&local_58);
  local_4 = 0;
  if (*piVar4 == 0) {
    FUN_00409810(&DAT_006b3f70,&local_66);
    local_4._0_1_ = 1;
    pcVar5 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                  local_4c);
    (*pcVar5)();
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_004040a0(1);
  }
  FUN_004f4940(&local_54);
  local_4._0_1_ = 3;
  FUN_0057d310();
  iVar16 = param_5;
  uVar12 = 0xffffffff;
  pcVar13 = s_GetOne_0069e1c4;
  do {
    if (uVar12 == 0) break;
    uVar12 = uVar12 - 1;
    cVar1 = *pcVar13;
    pcVar13 = pcVar13 + 1;
  } while (cVar1 != '\0');
  iVar6 = FUN_004251b0(0,*(undefined4 *)(param_5 + 8),s_GetOne_0069e1c4,~uVar12 - 1);
  if (iVar6 == 0) {
    FUN_0044e4a0(&param_5);
    local_4._0_1_ = 9;
    FUN_00514e80(0);
    local_4._0_1_ = 10;
    uVar3 = (undefined1)local_4;
    local_4._0_1_ = 10;
    if (local_54 == (int *)0x0) {
      FUN_00409810(&DAT_006b3f70,&uStack_65);
      local_4._0_1_ = 0xb;
      pcVar5 = (code *)FUN_005a07f0(s_m_List_00699eec,s___AdamSource_DaviLinkedList_h_00699ef4,0x51,
                                    auStack_3c);
      (*pcVar5)();
      local_4._0_1_ = 10;
      FUN_004040a0(1);
      uVar3 = (undefined1)local_4;
    }
    local_4._0_1_ = uVar3;
    piStack_50 = (int *)*local_54;
    if (piStack_50 == (int *)0x0) {
      puStack_5c = (undefined1 *)0x0;
    }
    else {
      puStack_5c = (undefined1 *)*piStack_50;
    }
    if (puStack_5c != (undefined1 *)0x0) {
      do {
        puVar10 = *(undefined1 **)(puStack_5c + 0x94);
        if (puVar10 == (undefined1 *)0x0) {
          puVar10 = &DAT_0064a3b4;
        }
        iVar6 = FUN_004251b0(0,*(undefined4 *)(param_1 + 0x28),puVar10,
                             *(undefined4 *)(puStack_5c + 0x98));
        if (iVar6 == 0) {
          FUN_004f15f0(uStack_44,&puStack_5c);
          bVar2 = true;
        }
        if (local_54 == (int *)0x0) {
          FUN_00409810(&DAT_006b3f70,&uStack_65);
          local_4._0_1_ = 0xc;
          pcVar5 = (code *)FUN_005a07f0(s_m_List_00699eec,s___AdamSource_DaviLinkedList_h_00699ef4,
                                        0x5f,auStack_3c);
          (*pcVar5)();
          local_4._0_1_ = 10;
          FUN_004040a0(1);
        }
        if (piStack_50 == (int *)0x0) {
          FUN_00409810(&DAT_006b3f70,&local_66);
          local_4._0_1_ = 0xd;
          pcVar5 = (code *)FUN_005a07f0(s_m_Node_00699ec4,s___AdamSource_DaviLinkedList_h_00699ef4,
                                        0x60,auStack_2c);
          (*pcVar5)();
          local_4._0_1_ = 10;
          FUN_004040a0(1);
        }
        piVar4 = (int *)piStack_50[1];
        if (piVar4 == (int *)0x0) {
          puStack_5c = (undefined1 *)0x0;
        }
        else {
          puStack_5c = (undefined1 *)*piVar4;
          piStack_50 = piVar4;
        }
      } while (puStack_5c != (undefined1 *)0x0);
      if ((bVar2) && (iVar6 = FUN_0044e4c0(), 0 < iVar6)) {
        iVar8 = FUN_0044e4c0();
        iVar16 = iVar8 + -1;
        if (iVar16 < 1) {
          if (iVar16 < 0) {
            iVar8 = FUN_0060a4a0();
            iVar16 = iVar8 % (1 - iVar16) + iVar16;
            goto LAB_005b27cc;
          }
          iVar16 = 0;
LAB_005b27d0:
          iVar8 = FUN_0044e4c0();
          if (iVar16 < iVar8) goto LAB_005b2825;
        }
        else {
          iVar16 = FUN_0060a4a0();
          iVar16 = iVar16 % iVar8;
LAB_005b27cc:
          if (-1 < iVar16) goto LAB_005b27d0;
        }
        FUN_00409810(&DAT_006b3f70,&param_3);
        local_4._0_1_ = 0xe;
        pcVar5 = (code *)FUN_005a07f0(s_a_Index>_0____a_Index<Count()_0068f470,
                                      s___AdamSource_DaviList_h_0068f458,0x97,auStack_2c);
        (*pcVar5)();
        local_4._0_1_ = 10;
        FUN_004040a0(1);
LAB_005b2825:
        uVar9 = FUN_00504670();
        local_4 = CONCAT31(local_4._1_3_,3);
        *param_2 = &PTR_FUN_0064f00c;
        param_2[2] = 4;
        param_2[4] = uVar9;
        FUN_00514430();
        ExceptionList = pvStack_c;
        return param_2;
      }
    }
    local_4._0_1_ = 3;
    FUN_00514430();
LAB_005b25fa:
    if (bVar2) goto LAB_005b294c;
  }
  else {
    if (local_54 == (int *)0x0) {
      FUN_00409810(&DAT_006b3f70,&local_66);
      local_4._0_1_ = 4;
      pcVar5 = (code *)FUN_005a07f0(s_m_List_00699eec,s___AdamSource_DaviLinkedList_h_00699ef4,0x51,
                                    local_4c);
      (*pcVar5)();
      local_4._0_1_ = 3;
      FUN_004040a0(1);
    }
    piStack_50 = (int *)*local_54;
    if ((piStack_50 != (int *)0x0) && (iVar6 = *piStack_50, iVar8 = local_64, iVar6 != 0)) {
      do {
        iVar8 = local_64;
        pcVar13 = "";
        if (*(char **)(iVar6 + 0x94) != (char *)0x0) {
          pcVar13 = *(char **)(iVar6 + 0x94);
        }
        _Str1 = *(char **)(local_64 + 4);
        if (_Str1 == (char *)0x0) {
          _Str1 = "";
        }
        iVar7 = __strcmpi(_Str1,pcVar13);
        if (iVar7 == 0) {
          FUN_00515db0();
          iVar7 = FUN_004337e0();
          if (iVar7 != 0) {
            puStack_60 = &DAT_0064a3b4;
            if (*(undefined1 **)(iVar6 + 0x70) != (undefined1 *)0x0) {
              puStack_60 = *(undefined1 **)(iVar6 + 0x70);
            }
            puStack_5c = &DAT_0064a3b4;
            if (*(undefined1 **)(iVar8 + 4) != (undefined1 *)0x0) {
              puStack_5c = *(undefined1 **)(iVar8 + 4);
            }
            iVar8 = FUN_005b18a0(auStack_1c,param_3);
            local_4._0_1_ = 5;
            puVar10 = &DAT_0064a3b4;
            if (*(undefined1 **)(iVar8 + 4) != (undefined1 *)0x0) {
              puVar10 = *(undefined1 **)(iVar8 + 4);
            }
            puVar15 = *(undefined1 **)(iVar16 + 4);
            if (puVar15 == (undefined1 *)0x0) {
              puVar15 = &DAT_0064a3b4;
            }
            puVar14 = *(undefined1 **)(param_4 + 4);
            if (puVar14 == (undefined1 *)0x0) {
              puVar14 = &DAT_0064a3b4;
            }
            FUN_0060a613(iVar6);
            uVar9 = FUN_0060b060();
            uVar9 = FUN_005ae390(auStack_2c,s_Script_call__s___s___s___to_grou_006a9334,puVar14,
                                 puVar15,puVar10,puStack_5c,puStack_60,uVar9);
            local_4._0_1_ = 6;
            FUN_005aff00(uVar9);
            local_4._0_1_ = 5;
            FUN_004040a0(1);
            local_4._0_1_ = 3;
            FUN_004040a0(1);
            iVar16 = param_5;
          }
          FUN_00503c30(iVar16,0,param_3);
          bVar2 = true;
        }
        if (local_54 == (int *)0x0) {
          FUN_00409810(&DAT_006b3f70,&local_66);
          local_4._0_1_ = 7;
          pcVar5 = (code *)FUN_005a07f0(s_m_List_00699eec,s___AdamSource_DaviLinkedList_h_00699ef4,
                                        0x5f,local_4c);
          (*pcVar5)();
          local_4._0_1_ = 3;
          FUN_004040a0(1);
        }
        if (piStack_50 == (int *)0x0) {
          FUN_00409810(&DAT_006b3f70,&uStack_65);
          local_4._0_1_ = 8;
          pcVar5 = (code *)FUN_005a07f0(s_m_Node_00699ec4,s___AdamSource_DaviLinkedList_h_00699ef4,
                                        0x60,auStack_3c);
          (*pcVar5)();
          local_4._0_1_ = 3;
          FUN_004040a0(1);
        }
        piVar4 = (int *)piStack_50[1];
        iVar8 = local_64;
      } while ((piVar4 != (int *)0x0) && (iVar6 = *piVar4, piStack_50 = piVar4, iVar6 != 0));
      goto LAB_005b25fa;
    }
  }
  puVar10 = &DAT_0064a3b4;
  if (*(undefined1 **)(iVar8 + 4) != (undefined1 *)0x0) {
    puVar10 = *(undefined1 **)(iVar8 + 4);
  }
  iVar8 = FUN_005b18a0(auStack_1c,param_3);
  local_4._0_1_ = 0xf;
  puVar15 = &DAT_0064a3b4;
  if (*(undefined1 **)(iVar8 + 4) != (undefined1 *)0x0) {
    puVar15 = *(undefined1 **)(iVar8 + 4);
  }
  puVar14 = &DAT_0064a3b4;
  if (*(undefined1 **)(iVar16 + 4) != (undefined1 *)0x0) {
    puVar14 = *(undefined1 **)(iVar16 + 4);
  }
  puVar11 = *(undefined1 **)(param_4 + 4);
  if (puVar11 == (undefined1 *)0x0) {
    puVar11 = &DAT_0064a3b4;
  }
  FUN_005ae390(auStack_2c,s_Script_call__s___s___s___FAILS_o_006a92f0,puVar11,puVar14,puVar15,
               puVar10);
  local_4 = CONCAT31(local_4._1_3_,0x11);
  FUN_004040a0(1);
  FUN_00515db0();
  iVar8 = FUN_004337e0();
  if (iVar8 != 0) {
    FUN_005aff00(auStack_2c);
  }
  local_4 = CONCAT31(local_4._1_3_,3);
  FUN_004040a0(1);
LAB_005b294c:
  *param_2 = &PTR_FUN_0064f00c;
  param_2[2] = 0;
  ExceptionList = pvStack_c;
  return param_2;
}

