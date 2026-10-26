/*
 * FUN_004c0170 at 004c0170
 * undefined FUN_004c0170(void)
 * Address ranges: 004c0170-004c0a31
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char __thiscall FUN_004c0170(int param_1,int param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  code *pcVar3;
  undefined4 uVar4;
  DWORD DVar5;
  undefined1 *puVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  undefined4 *puVar10;
  char *pcVar11;
  undefined4 uVar12;
  char local_f9;
  int local_f8;
  undefined1 uStack_ee;
  undefined1 uStack_ed;
  int local_ec;
  undefined1 uStack_e5;
  undefined1 local_e4 [4];
  undefined4 *puStack_e0;
  undefined1 local_d4 [4];
  int local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  int local_c0;
  undefined1 local_bc [16];
  undefined1 auStack_ac [16];
  undefined1 auStack_9c [16];
  undefined1 auStack_8c [16];
  undefined1 auStack_7c [16];
  undefined1 auStack_6c [16];
  undefined1 auStack_5c [16];
  undefined1 auStack_4c [16];
  undefined1 auStack_3c [16];
  undefined1 auStack_2c [16];
  undefined1 auStack_1c [16];
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062fe96;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005ae5f0(s_D__Work_RCHorror_AdamSource_Adam_006975f0,0x361);
  local_4 = 0;
  local_f9 = '\0';
  local_ec = 0;
  local_f8 = 0;
  do {
    iVar7 = local_ec;
    if (*(int *)(param_1 + 0x4c) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(param_1 + 0x50) - *(int *)(param_1 + 0x4c) >> 6;
    }
    if (iVar2 <= local_ec) goto LAB_004c0959;
    if ((local_f8 < 0) || (iVar2 = FUN_004c4a60(), iVar2 <= iVar7)) {
      local_bc[0] = 0;
      FUN_004040a0(0);
      uVar8 = 0xffffffff;
      pcVar11 = &DAT_006b3f70;
      do {
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        cVar1 = *pcVar11;
        pcVar11 = pcVar11 + 1;
      } while (cVar1 != '\0');
      FUN_004040f0(&DAT_006b3f70,~uVar8 - 1);
      local_4._0_1_ = 1;
      pcVar3 = (code *)FUN_005a07f0(s_a_Index>_0____a_Index<Count()_0068f470,
                                    s___AdamSource_DaviList_h_0068f458,0x97,local_bc);
      (*pcVar3)();
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_004040a0(1);
    }
    iVar7 = *(int *)(param_1 + 0x4c);
    local_c0 = iVar7;
    if (*(int *)(local_f8 + 0x38 + iVar7) != 1) {
      if (((param_2 == 0) || (*(int *)(param_2 + 4) != 0x102)) ||
         (*(int *)(param_2 + 8) != *(int *)(local_f8 + iVar7))) goto LAB_004c080d;
      break;
    }
    if (*(int *)(param_1 + 0x3a8) == 0) {
      local_e4[0] = 0;
      FUN_004040a0(0);
      uVar8 = 0xffffffff;
      pcVar11 = &DAT_006b3f70;
      do {
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        cVar1 = *pcVar11;
        pcVar11 = pcVar11 + 1;
      } while (cVar1 != '\0');
      FUN_004040f0(&DAT_006b3f70,~uVar8 - 1);
      local_4._0_1_ = 2;
      pcVar3 = (code *)FUN_005a07f0(s_m_Input____0_00693a28,
                                    s___AdamSource_AdamApplication_h_0068e58c,0x136,local_e4);
      (*pcVar3)();
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_004040a0(1);
    }
    iVar2 = *(int *)(param_1 + 0x3a8);
    if (*(int *)(iVar2 + 0x3c) == 0) {
      uVar4 = FUN_005ae390(auStack_2c,s_You_probably_forgot_to_call_CAda_00693308);
      local_4._0_1_ = 3;
      pcVar3 = (code *)FUN_005a07f0(s_m_InputHandle____NULL_006932d4,
                                    s___AdamSource_AdamInput_h_006932ec,0xbc,uVar4);
      (*pcVar3)();
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_004040a0(1);
    }
    cVar1 = FUN_005a9bb0(*(undefined4 *)(local_f8 + iVar7),*(undefined4 *)(iVar2 + 0x3c));
    if (cVar1 == '\0') {
      *(undefined1 *)(local_f8 + 4 + iVar7) = 1;
      goto LAB_004c080d;
    }
    switch(*(undefined4 *)(local_f8 + 8 + iVar7)) {
    case 0:
      goto switchD_004c0368_caseD_0;
    case 1:
      if (*(int *)(param_1 + 0x3a8) == 0) {
        auStack_9c[0] = 0;
        FUN_004040a0(0);
        uVar8 = 0xffffffff;
        pcVar11 = &DAT_006b3f70;
        do {
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          cVar1 = *pcVar11;
          pcVar11 = pcVar11 + 1;
        } while (cVar1 != '\0');
        FUN_004040f0(&DAT_006b3f70,~uVar8 - 1);
        local_4._0_1_ = 4;
        pcVar3 = (code *)FUN_005a07f0(s_m_Input____0_00693a28,
                                      s___AdamSource_AdamApplication_h_0068e58c,0x136,auStack_9c);
        (*pcVar3)();
        local_4 = (uint)local_4._1_3_ << 8;
        FUN_004040a0(1);
      }
      iVar2 = *(int *)(param_1 + 0x3a8);
      if (*(int *)(iVar2 + 0x3c) == 0) {
        uVar4 = FUN_005ae390(auStack_5c,s_You_probably_forgot_to_call_CAda_00693308);
        local_4._0_1_ = 5;
        pcVar3 = (code *)FUN_005a07f0(s_m_InputHandle____NULL_006932d4,
                                      s___AdamSource_AdamInput_h_006932ec,0xbc,uVar4);
        (*pcVar3)();
        local_4 = (uint)local_4._1_3_ << 8;
        FUN_004040a0(1);
      }
      cVar1 = FUN_005a9bb0(0x10,*(undefined4 *)(iVar2 + 0x3c));
      if (cVar1 == '\0') {
        if (*(int *)(param_1 + 0x3a8) == 0) {
          auStack_ac[0] = 0;
          FUN_004040a0(0);
          uVar8 = 0xffffffff;
          pcVar11 = &DAT_006b3f70;
          do {
            if (uVar8 == 0) break;
            uVar8 = uVar8 - 1;
            cVar1 = *pcVar11;
            pcVar11 = pcVar11 + 1;
          } while (cVar1 != '\0');
          FUN_004040f0(&DAT_006b3f70,~uVar8 - 1);
          local_4._0_1_ = 6;
          pcVar3 = (code *)FUN_005a07f0(s_m_Input____0_00693a28,
                                        s___AdamSource_AdamApplication_h_0068e58c,0x136,auStack_ac);
          (*pcVar3)();
          local_4 = (uint)local_4._1_3_ << 8;
          FUN_004040a0(1);
        }
        iVar2 = *(int *)(param_1 + 0x3a8);
        if (*(int *)(iVar2 + 0x3c) == 0) {
          uVar4 = FUN_005ae390(auStack_4c,s_You_probably_forgot_to_call_CAda_00693308);
          local_4._0_1_ = 7;
          pcVar3 = (code *)FUN_005a07f0(s_m_InputHandle____NULL_006932d4,
                                        s___AdamSource_AdamInput_h_006932ec,0xbc,uVar4);
          (*pcVar3)();
          local_4 = (uint)local_4._1_3_ << 8;
          FUN_004040a0(1);
        }
        cVar1 = FUN_005a9bb0(0x11,*(undefined4 *)(iVar2 + 0x3c));
        if (cVar1 == '\0') goto switchD_004c0368_caseD_0;
      }
      goto LAB_004c080d;
    case 2:
      if (*(int *)(param_1 + 0x3a8) == 0) {
        FUN_00409810(&DAT_006b3f70,&uStack_e5);
        local_4._0_1_ = 8;
        pcVar3 = (code *)FUN_005a07f0(s_m_Input____0_00693a28,
                                      s___AdamSource_AdamApplication_h_0068e58c,0x136,auStack_6c);
        (*pcVar3)();
        local_4 = (uint)local_4._1_3_ << 8;
        FUN_004040a0(1);
      }
      iVar2 = *(int *)(param_1 + 0x3a8);
      if (*(int *)(iVar2 + 0x3c) == 0) {
        uVar4 = FUN_005ae390(auStack_3c,s_You_probably_forgot_to_call_CAda_00693308);
        local_4._0_1_ = 9;
        pcVar3 = (code *)FUN_005a07f0(s_m_InputHandle____NULL_006932d4,
                                      s___AdamSource_AdamInput_h_006932ec,0xbc,uVar4);
        (*pcVar3)();
        local_4 = (uint)local_4._1_3_ << 8;
        FUN_004040a0(1);
      }
      uVar4 = *(undefined4 *)(iVar2 + 0x3c);
      uVar12 = 0x10;
      goto LAB_004c06c7;
    case 3:
      if (*(int *)(param_1 + 0x3a8) == 0) {
        FUN_00409810(&DAT_006b3f70,&uStack_ee);
        local_4._0_1_ = 10;
        pcVar3 = (code *)FUN_005a07f0(s_m_Input____0_00693a28,
                                      s___AdamSource_AdamApplication_h_0068e58c,0x136,auStack_7c);
        (*pcVar3)();
        local_4 = (uint)local_4._1_3_ << 8;
        FUN_004040a0(1);
      }
      iVar2 = *(int *)(param_1 + 0x3a8);
      if (*(int *)(iVar2 + 0x3c) == 0) {
        uVar4 = FUN_005ae390(auStack_1c,s_You_probably_forgot_to_call_CAda_00693308);
        local_4._0_1_ = 0xb;
        pcVar3 = (code *)FUN_005a07f0(s_m_InputHandle____NULL_006932d4,
                                      s___AdamSource_AdamInput_h_006932ec,0xbc,uVar4);
        (*pcVar3)();
        local_4 = (uint)local_4._1_3_ << 8;
        FUN_004040a0(1);
      }
      uVar4 = *(undefined4 *)(iVar2 + 0x3c);
      uVar12 = 0x11;
LAB_004c06c7:
      cVar1 = FUN_005a9bb0(uVar12,uVar4);
      if (cVar1 != '\0') goto switchD_004c0368_caseD_0;
      goto LAB_004c080d;
    }
    local_d4[0] = uStack_ee;
    FUN_004040a0(0);
    uVar8 = 0xffffffff;
    pcVar11 = &DAT_006b3f70;
    do {
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      cVar1 = *pcVar11;
      pcVar11 = pcVar11 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar8 - 1);
    local_4._0_1_ = 0xc;
    pcVar3 = (code *)FUN_005a07f0(s_false_0068d2d0,s_D__Work_RCHorror_AdamSource_Adam_006975f0,899,
                                  local_d4);
    (*pcVar3)();
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_004040a0(1);
switchD_004c0368_caseD_0:
    if (*(char *)(local_f8 + 0x20 + iVar7) == '\0') {
      if (*(char *)(local_f8 + 4 + iVar7) != '\0') break;
    }
    else {
      if ((*(int *)(local_f8 + 0x1c + iVar7) == -1) || (*(char *)(local_f8 + 4 + iVar7) != '\0'))
      break;
      DVar5 = timeGetTime();
      iVar2 = *(int *)(local_f8 + 0x1c + iVar7);
      if ((DVar5 != 0xffffffff) && (iVar2 != -1)) {
        if ((int)DVar5 < iVar2) {
          FUN_00409810(&DAT_006b3f70,&uStack_ed);
          local_4._0_1_ = 0xd;
          pcVar3 = (code *)FUN_005a07f0(s_a_Now_>__a_Then_006934d0,
                                        s___AdamSource_AdamClock_h_0068e22c,0x7d,auStack_8c);
          (*pcVar3)();
          local_4 = (uint)local_4._1_3_ << 8;
          FUN_004040a0(1);
        }
        if (99 < (int)(DVar5 - iVar2)) break;
      }
    }
LAB_004c080d:
    local_ec = local_ec + 1;
    local_f8 = local_f8 + 0x40;
  } while( true );
  FUN_005ae5f0(s_D__Work_RCHorror_AdamSource_Adam_006975f0,0x3ad);
  local_4 = CONCAT31(local_4._1_3_,0xe);
  pcVar3 = *(code **)(local_f8 + 0x24 + iVar7);
  if (pcVar3 == (code *)0x0) {
    pcVar3 = *(code **)(local_f8 + 0x28 + iVar7);
    if (pcVar3 == (code *)0x0) {
      local_e4[0] = uStack_ed;
      FUN_004040a0(0);
      uVar8 = 0xffffffff;
      pcVar11 = &DAT_006b3f70;
      do {
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        cVar1 = *pcVar11;
        pcVar11 = pcVar11 + 1;
      } while (cVar1 != '\0');
      uVar8 = ~uVar8 - 1;
      cVar1 = FUN_00401940(uVar8,1);
      if (cVar1 != '\0') {
        puVar10 = (undefined4 *)&DAT_006b3f70;
        for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
          *puStack_e0 = *puVar10;
          puVar10 = puVar10 + 1;
          puStack_e0 = puStack_e0 + 1;
        }
        for (uVar9 = uVar8 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
          *(undefined1 *)puStack_e0 = *(undefined1 *)puVar10;
          puVar10 = (undefined4 *)((int)puVar10 + 1);
          puStack_e0 = (undefined4 *)((int)puStack_e0 + 1);
        }
        FUN_00404190(uVar8);
      }
      local_4._0_1_ = 0xf;
      pcVar3 = (code *)FUN_005a07f0(s_false_0068d2d0,s_D__Work_RCHorror_AdamSource_Adam_006975f0,
                                    0x3bb,local_e4);
      (*pcVar3)();
      local_4 = CONCAT31(local_4._1_3_,0xe);
      FUN_004040a0(1);
      iVar7 = local_c0;
    }
    else {
      local_f9 = (*pcVar3)(param_3);
    }
  }
  else {
    local_f9 = (*pcVar3)(param_3);
  }
  if (*(int *)(local_f8 + 0x38 + iVar7) == 1) {
    DVar5 = timeGetTime();
    *(DWORD *)(local_f8 + 0x1c + iVar7) = DVar5;
    *(undefined1 *)(local_f8 + 4 + iVar7) = 0;
  }
  local_4 = local_4 & 0xffffff00;
  FUN_005ae770();
LAB_004c0959:
  if (((param_2 != 0) && (*(int *)(param_2 + 4) == 0x102)) && (local_f9 == '\0')) {
    iVar2 = FUN_00518ab0();
    iVar7 = *(int *)(iVar2 + 100);
    if (iVar7 == -0x80000000) {
      puVar6 = *(undefined1 **)(iVar2 + 0x18);
      if (puVar6 == (undefined1 *)0x0) {
        puVar6 = &DAT_0064a3b4;
      }
      iVar7 = FUN_0060af10(puVar6);
      *(int *)(iVar2 + 100) = iVar7;
    }
    if (iVar7 != 0) {
      uVar4 = *(undefined4 *)(param_2 + 8);
      uVar4 = FUN_005ae390(local_d4,s_unknown_keypress__c__d___X__00697cf8,(int)(char)uVar4,uVar4,
                           uVar4);
      local_4 = CONCAT31(local_4._1_3_,0x10);
      FUN_005aff00(uVar4);
      if (local_d0 != 0) {
        cVar1 = *(char *)(local_d0 + -1);
        if ((cVar1 == '\0') || (cVar1 == -1)) {
          FUN_005fe5f0((char *)(local_d0 + -1));
        }
        else {
          *(char *)(local_d0 + -1) = cVar1 + -1;
        }
      }
      local_d0 = 0;
      local_cc = 0;
      local_c8 = 0;
    }
  }
  local_4 = 0xffffffff;
  FUN_005ae770();
  ExceptionList = local_c;
  return local_f9;
}

