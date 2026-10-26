/*
 * FUN_005ab770 at 005ab770
 * undefined FUN_005ab770(void)
 * Address ranges: 005ab770-005aba73;005abbfb-005abf82
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x005ab90a) */
/* WARNING: Removing unreachable block (ram,0x005ab911) */
/* WARNING: Removing unreachable block (ram,0x005ab916) */
/* WARNING: Removing unreachable block (ram,0x005abeb1) */
/* WARNING: Removing unreachable block (ram,0x005abebb) */
/* WARNING: Removing unreachable block (ram,0x005abec0) */
/* WARNING: Removing unreachable block (ram,0x005abee9) */
/* WARNING: Removing unreachable block (ram,0x005abef3) */
/* WARNING: Removing unreachable block (ram,0x005abefd) */
/* WARNING: Removing unreachable block (ram,0x005abef7) */

void FUN_005ab770(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  code *pcVar4;
  int *piVar5;
  char *pcVar6;
  char *pcVar7;
  int iVar8;
  undefined4 uVar9;
  undefined1 *puVar10;
  uint uVar11;
  uint uVar12;
  undefined1 local_8c [16];
  undefined1 local_7c [16];
  undefined1 local_6c [16];
  undefined1 local_5c [4];
  char *local_58;
  uint local_54;
  undefined1 local_4c;
  int local_48;
  int local_44;
  undefined4 local_40;
  int *local_3c;
  int *local_38;
  undefined1 local_34 [8];
  undefined1 local_2c [4];
  int local_28;
  uint local_24;
  int local_20;
  int local_1c;
  undefined1 local_15;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00645c20;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff68;
  local_3c = (int *)0x0;
  local_38 = (int *)0x0;
  local_8 = 0;
  ExceptionList = &local_10;
  FUN_004040a0(0);
  local_48 = 0;
  local_4c = param_1._3_1_;
  local_44 = 0;
  local_40 = 0;
  local_8._0_1_ = 2;
  FUN_005ab230();
  if (DAT_006cad74 != '\0') {
    local_34[0] = param_1._3_1_;
    FUN_004040a0(0);
    uVar11 = 0xffffffff;
    pcVar7 = &DAT_006b3f70;
    do {
      if (uVar11 == 0) break;
      uVar11 = uVar11 - 1;
      cVar3 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar3 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar11 - 1);
    local_8._0_1_ = 4;
    pcVar4 = (code *)FUN_005a07f0(s___MODULE_DaviObjectBusy_006a8c88,
                                  s_D__Work_RCHorror_AdamSource_Davi_006a8ca0,0xd2,local_34);
    (*pcVar4)();
    local_8._0_1_ = 2;
    FUN_004040a0(1);
  }
  DAT_006cad74 = 1;
  local_1c = 0;
  piVar5 = (int *)FUN_004fd0e0(local_2c);
  piVar1 = (int *)*piVar5;
  local_38 = (int *)piVar5[1];
  local_3c = piVar1;
  if (piVar1 == (int *)0x0) {
    local_34[0] = param_1._3_1_;
    FUN_004040a0(0);
    uVar11 = 0xffffffff;
    pcVar7 = &DAT_006b3f70;
    do {
      if (uVar11 == 0) break;
      uVar11 = uVar11 - 1;
      cVar3 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar3 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar11 - 1);
    local_8._0_1_ = 5;
    pcVar4 = (code *)FUN_005a07f0(s_m_List_00699eec,s___AdamSource_DaviLinkedList_h_00699ef4,0x51,
                                  local_34);
    (*pcVar4)();
    local_8._0_1_ = 2;
    FUN_004040a0(1);
  }
  local_38 = (int *)*piVar1;
  if (local_38 == (int *)0x0) {
    iVar8 = 0;
  }
  else {
    iVar8 = *local_38;
  }
  local_28 = 0;
  local_20 = 0;
  do {
    if (iVar8 == 0) {
      if (local_20 != DAT_006cad6c - DAT_006cad70) {
        uVar9 = FUN_005ae390(local_8c,s__d_<>__d_____d____d__006a8db0,local_20,
                             DAT_006cad6c - DAT_006cad70,DAT_006cad6c,DAT_006cad70);
        local_8._0_1_ = 0xf;
        pcVar4 = (code *)FUN_005a07f0(s_compareCount__MODULE_DaviObjectC_006a8d60,
                                      s_D__Work_RCHorror_AdamSource_Davi_006a8ca0,0x13c,uVar9);
        (*pcVar4)();
        local_8._0_1_ = 2;
        FUN_004040a0(1);
      }
      if ((char)param_1 == '\0') {
        FUN_005afe30(s___________MemReport__0069d690);
        local_28 = 0;
        local_1c = 0;
        for (local_24 = 0; (local_48 != 0 && (local_24 < (uint)(local_44 - local_48 >> 4)));
            local_24 = local_24 + 1) {
          local_20 = 0;
          if (local_3c == (int *)0x0) {
            local_6c[0] = param_1._3_1_;
            FUN_004040a0(0);
            uVar11 = 0xffffffff;
            pcVar7 = &DAT_006b3f70;
            do {
              if (uVar11 == 0) break;
              uVar11 = uVar11 - 1;
              cVar3 = *pcVar7;
              pcVar7 = pcVar7 + 1;
            } while (cVar3 != '\0');
            FUN_004040f0(&DAT_006b3f70,~uVar11 - 1);
            local_8._0_1_ = 0x10;
            pcVar4 = (code *)FUN_005a07f0(s_m_List_00699eec,s___AdamSource_DaviLinkedList_h_00699ef4
                                          ,0x51,local_6c);
            (*pcVar4)();
            local_8._0_1_ = 2;
            FUN_004040a0(1);
          }
          local_38 = (int *)*local_3c;
          if (local_38 != (int *)0x0) {
            iVar8 = *local_38;
            while (iVar8 != 0) {
              FUN_0060a613(iVar8);
              pcVar7 = (char *)FUN_0060b060();
              uVar11 = 0xffffffff;
              pcVar6 = pcVar7;
              do {
                if (uVar11 == 0) break;
                uVar11 = uVar11 - 1;
                cVar3 = *pcVar6;
                pcVar6 = pcVar6 + 1;
              } while (cVar3 != '\0');
              uVar11 = ~uVar11 - 1;
              cVar3 = FUN_00401940(uVar11,1);
              if (cVar3 != '\0') {
                pcVar6 = local_58;
                for (uVar12 = uVar11 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
                  *(undefined4 *)pcVar6 = *(undefined4 *)pcVar7;
                  pcVar7 = pcVar7 + 4;
                  pcVar6 = pcVar6 + 4;
                }
                for (uVar12 = uVar11 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
                  *pcVar6 = *pcVar7;
                  pcVar7 = pcVar7 + 1;
                  pcVar6 = pcVar6 + 1;
                }
                local_58[uVar11] = '\0';
                local_54 = uVar11;
              }
              pcVar7 = local_58;
              if (local_58 == (char *)0x0) {
                pcVar7 = "";
              }
              iVar8 = FUN_004251b0(0,*(undefined4 *)(local_48 + local_1c + 8),pcVar7,local_54);
              if (iVar8 == 0) {
                local_20 = local_20 + 1;
              }
              if (local_3c == (int *)0x0) {
                local_7c[0] = param_1._3_1_;
                FUN_004040a0(0);
                uVar11 = 0xffffffff;
                pcVar7 = &DAT_006b3f70;
                do {
                  if (uVar11 == 0) break;
                  uVar11 = uVar11 - 1;
                  cVar3 = *pcVar7;
                  pcVar7 = pcVar7 + 1;
                } while (cVar3 != '\0');
                FUN_004040f0(&DAT_006b3f70,~uVar11 - 1);
                local_8._0_1_ = 0x11;
                pcVar4 = (code *)FUN_005a07f0(s_m_List_00699eec,
                                              s___AdamSource_DaviLinkedList_h_00699ef4,0x5f,local_7c
                                             );
                (*pcVar4)();
                local_8._0_1_ = 2;
                FUN_004040a0(1);
              }
              piVar1 = local_38;
              if (local_38 == (int *)0x0) {
                FUN_00409810(&DAT_006b3f70,(int)&param_1 + 3);
                local_8._0_1_ = 0x12;
                pcVar4 = (code *)FUN_005a07f0(s_m_Node_00699ec4,
                                              s___AdamSource_DaviLinkedList_h_00699ef4,0x60,local_8c
                                             );
                (*pcVar4)();
                local_8._0_1_ = 2;
                FUN_004040a0(1);
              }
              piVar1 = (int *)piVar1[1];
              if (piVar1 == (int *)0x0) break;
              local_38 = piVar1;
              iVar8 = *piVar1;
            }
          }
          iVar8 = local_20;
          puVar10 = *(undefined1 **)(local_48 + 4 + local_1c);
          if (puVar10 == (undefined1 *)0x0) {
            puVar10 = &DAT_0064a3b4;
          }
          FUN_005afe30(s___4d_object_s__of_type__s_still_e_006a8d38,local_20,puVar10);
          local_28 = local_28 + iVar8;
          local_1c = local_1c + 0x10;
        }
        FUN_005afe30(s_Total_of__d_object_s__still_exis_006a8d14,local_28);
        FUN_005afe30(s___________006a8d08);
      }
      iVar2 = local_44;
      DAT_006cad74 = 0;
      local_8 = CONCAT31(local_8._1_3_,1);
      for (iVar8 = local_48; iVar8 != iVar2; iVar8 = iVar8 + 0x10) {
        FUN_004040a0(1);
      }
      FUN_005fe5f0(local_48);
      local_48 = 0;
      local_44 = 0;
      local_40 = 0;
      if (local_58 != (char *)0x0) {
        cVar3 = local_58[-1];
        if ((cVar3 != '\0') && (cVar3 != -1)) {
          local_58[-1] = cVar3 + -1;
          ExceptionList = local_10;
          return;
        }
        FUN_005fe5f0(local_58 + -1);
      }
      ExceptionList = local_10;
      return;
    }
    local_20 = local_20 + 1;
    local_8 = CONCAT31(local_8._1_3_,6);
    FUN_0060a613(iVar8);
    pcVar6 = (char *)FUN_0060b060();
    uVar11 = 0xffffffff;
    pcVar7 = pcVar6;
    do {
      if (uVar11 == 0) break;
      uVar11 = uVar11 - 1;
      cVar3 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar3 != '\0');
    FUN_004040f0(pcVar6,~uVar11 - 1);
    local_8._0_1_ = 2;
    local_8._1_3_ = 0;
    local_28 = local_28 + 1;
    local_1c = iVar8;
    if ((char)param_1 == '\0') {
      for (uVar11 = 0; (local_48 != 0 && (uVar11 < (uint)(local_44 - local_48 >> 4)));
          uVar11 = uVar11 + 1) {
        pcVar7 = local_58;
        if (local_58 == (char *)0x0) {
          pcVar7 = "";
        }
        iVar8 = FUN_004251b0(0,*(undefined4 *)(uVar11 * 0x10 + local_48 + 8),pcVar7,local_54);
        if (iVar8 == 0) goto LAB_005ab9b4;
      }
      FUN_00444d70(local_44,1,local_5c);
    }
LAB_005ab9b4:
    if (local_3c == (int *)0x0) {
      local_6c[0] = param_1._3_1_;
      FUN_004040a0(0);
      uVar11 = 0xffffffff;
      pcVar7 = &DAT_006b3f70;
      do {
        if (uVar11 == 0) break;
        uVar11 = uVar11 - 1;
        cVar3 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar3 != '\0');
      FUN_004040f0(&DAT_006b3f70,~uVar11 - 1);
      local_8._0_1_ = 0xd;
      pcVar4 = (code *)FUN_005a07f0(s_m_List_00699eec,s___AdamSource_DaviLinkedList_h_00699ef4,0x5f,
                                    local_6c);
      (*pcVar4)();
      local_8._0_1_ = 2;
      FUN_004040a0(1);
    }
    piVar1 = local_38;
    if (local_38 == (int *)0x0) {
      FUN_00409810(&DAT_006b3f70,&local_15);
      local_8._0_1_ = 0xe;
      pcVar4 = (code *)FUN_005a07f0(s_m_Node_00699ec4,s___AdamSource_DaviLinkedList_h_00699ef4,0x60,
                                    local_7c);
      (*pcVar4)();
      local_8._0_1_ = 2;
      FUN_004040a0(1);
    }
    piVar1 = (int *)piVar1[1];
    if (piVar1 == (int *)0x0) {
      iVar8 = 0;
    }
    else {
      iVar8 = *piVar1;
      local_38 = piVar1;
    }
  } while( true );
}

