/*
 * FUN_00485840 at 00485840
 * undefined FUN_00485840(void)
 * Address ranges: 00485840-00486364
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_00485840(int param_1)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  code *pcVar4;
  int *piVar5;
  int iVar6;
  undefined1 *puVar7;
  int iVar8;
  uint uVar9;
  char *pcVar10;
  undefined1 uStack_105;
  undefined1 local_104 [19];
  undefined1 local_f1;
  undefined1 auStack_f0 [16];
  undefined1 local_e0 [4];
  undefined1 auStack_dc [16];
  int iStack_cc;
  undefined1 auStack_c8 [16];
  undefined1 local_b8 [4];
  int iStack_b4;
  undefined1 auStack_a8 [16];
  undefined1 local_98 [16];
  undefined1 auStack_88 [124];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00629cf5;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00536050(local_b8);
  local_4 = 0;
  FUN_0043b0a0(local_98);
  local_4._0_1_ = 1;
  iVar3 = DAT_006b915c;
  if (DAT_006b915c == 0) {
    iVar3 = FUN_004bc480();
  }
  if (*(int *)(iVar3 + 0x3a4) == 0) {
    FUN_00409810(&DAT_006b3f70,&local_f1);
    local_4._0_1_ = 2;
    pcVar4 = (code *)FUN_005a07f0(s_m_Game_0068e584,s___AdamSource_AdamApplication_h_0068e58c,0x130,
                                  local_104);
    (*pcVar4)();
    local_4._0_1_ = 1;
    FUN_004040a0(1);
  }
  piVar5 = (int *)FUN_00453d20(local_e0);
  local_4._0_1_ = 3;
  uVar2 = (undefined1)local_4;
  local_4._0_1_ = 3;
  if (*piVar5 == 0) {
    FUN_00409810(&DAT_006b3f70,&local_f1);
    local_4._0_1_ = 4;
    pcVar4 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                  local_104);
    (*pcVar4)();
    local_4._0_1_ = 3;
    FUN_004040a0(1);
    uVar2 = (undefined1)local_4;
  }
  local_4._0_1_ = uVar2;
  iVar3 = *piVar5;
  piVar5 = (int *)FUN_00453d40(&iStack_cc);
  local_4._0_1_ = 5;
  uVar2 = (undefined1)local_4;
  local_4._0_1_ = 5;
  if (*piVar5 == 0) {
    FUN_00409810(&DAT_006b3f70,&uStack_105);
    local_4._0_1_ = 6;
    pcVar4 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                  auStack_dc);
    (*pcVar4)();
    local_4._0_1_ = 5;
    FUN_004040a0(1);
    uVar2 = (undefined1)local_4;
  }
  local_4._0_1_ = uVar2;
  iVar3 = FUN_004f2090(iVar3 + 0x1c);
  local_4._0_1_ = 3;
  FUN_0057d310();
  local_4._0_1_ = 1;
  FUN_0057d310();
  auStack_c8[0] = uStack_105;
  FUN_004040a0(0);
  uVar9 = 0xffffffff;
  pcVar10 = s_General_00690810;
  do {
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    cVar1 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_General_00690810,~uVar9 - 1);
  local_4._0_1_ = 7;
  auStack_f0[0] = uStack_105;
  FUN_004040a0(0);
  uVar9 = 0xffffffff;
  pcVar10 = &DAT_00690804;
  do {
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    cVar1 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(&DAT_00690804,~uVar9 - 1);
  local_4 = CONCAT31(local_4._1_3_,8);
  iVar6 = FUN_005ac9d0(auStack_f0,auStack_c8,0,local_98,0);
  iVar8 = *(int *)(iVar6 + 100);
  if (iVar8 == -0x80000000) {
    puVar7 = *(undefined1 **)(iVar6 + 0x18);
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &DAT_0064a3b4;
    }
    iVar8 = FUN_0060af10(puVar7);
    *(int *)(iVar6 + 100) = iVar8;
  }
  FUN_005acca0();
  local_4._0_1_ = 7;
  FUN_004040a0(1);
  local_4._0_1_ = 1;
  FUN_004040a0(1);
  FUN_005ae390(auStack_a8,s_LevelName_d_006935b4,iVar3 + 1);
  local_4._0_1_ = 9;
  FUN_005ae390(auStack_88,s_GameType_d_msg_006935a4,iVar8);
  local_4._0_1_ = 10;
  local_104[0] = uStack_105;
  FUN_004040a0(0);
  uVar9 = 0xffffffff;
  pcVar10 = s_General_00690810;
  do {
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    cVar1 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_General_00690810,~uVar9 - 1);
  local_4._0_1_ = 0xb;
  auStack_dc[0] = uStack_105;
  FUN_004040a0(0);
  uVar9 = 0xffffffff;
  pcVar10 = s_WaitText_00693598;
  do {
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    cVar1 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_WaitText_00693598,~uVar9 - 1);
  local_4._0_1_ = 0xc;
  iVar3 = FUN_005acaf0(auStack_dc,local_104,s_<No_Value>_0069358c,local_b8,0);
  auStack_f0[0] = *(undefined1 *)(iVar3 + 0x14);
  local_4._0_1_ = 0xd;
  FUN_004040a0(0);
  FUN_0040cc00(iVar3 + 0x14,0,0xffffffff);
  local_4._0_1_ = 0xe;
  auStack_c8[0] = auStack_f0[0];
  FUN_004040a0(0);
  FUN_0040cc00(auStack_f0,0,0xffffffff);
  local_4._0_1_ = 0xf;
  FUN_0040cc00(auStack_c8,0,0xffffffff);
  local_4._0_1_ = 0xe;
  FUN_004040a0(1);
  local_4._0_1_ = 0xd;
  FUN_004040a0(1);
  local_4._0_1_ = 0xc;
  FUN_005acca0();
  local_4._0_1_ = 0xb;
  FUN_004040a0(1);
  local_4._0_1_ = 10;
  FUN_004040a0(1);
  auStack_c8[0] = uStack_105;
  FUN_004040a0(0);
  uVar9 = 0xffffffff;
  pcVar10 = s_General_00690810;
  do {
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    cVar1 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_General_00690810,~uVar9 - 1);
  auStack_dc[0] = uStack_105;
  local_4._0_1_ = 0x10;
  FUN_004040a0(0);
  uVar9 = 0xffffffff;
  pcVar10 = s_LoadingTXT_00693580;
  do {
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    cVar1 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_LoadingTXT_00693580,~uVar9 - 1);
  local_4._0_1_ = 0x11;
  iVar3 = FUN_005acaf0(auStack_dc,auStack_c8,s_<No_Value>_0069358c,local_b8,0);
  auStack_f0[0] = *(undefined1 *)(iVar3 + 0x14);
  local_4._0_1_ = 0x12;
  FUN_004040a0(0);
  FUN_0040cc00(iVar3 + 0x14,0,0xffffffff);
  local_104[0] = auStack_f0[0];
  local_4._0_1_ = 0x13;
  FUN_004040a0(0);
  FUN_0040cc00(auStack_f0,0,0xffffffff);
  local_4._0_1_ = 0x14;
  FUN_0040cc00(local_104,0,0xffffffff);
  local_4._0_1_ = 0x13;
  FUN_004040a0(1);
  local_4._0_1_ = 0x12;
  FUN_004040a0(1);
  local_4._0_1_ = 0x11;
  FUN_005acca0();
  local_4._0_1_ = 0x10;
  FUN_004040a0(1);
  local_4._0_1_ = 10;
  FUN_004040a0(1);
  auStack_dc[0] = uStack_105;
  FUN_004040a0(0);
  uVar9 = 0xffffffff;
  pcVar10 = s_General_00690810;
  do {
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    cVar1 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_General_00690810,~uVar9 - 1);
  local_4._0_1_ = 0x15;
  iVar3 = FUN_005acaf0(auStack_88,auStack_dc,s_<No_Value>_0069358c,local_b8,0);
  auStack_f0[0] = *(undefined1 *)(iVar3 + 0x14);
  local_4._0_1_ = 0x16;
  FUN_004040a0(0);
  FUN_0040cc00(iVar3 + 0x14,0,0xffffffff);
  local_4._0_1_ = 0x17;
  local_104[0] = auStack_f0[0];
  FUN_004040a0(0);
  FUN_0040cc00(auStack_f0,0,0xffffffff);
  local_4._0_1_ = 0x18;
  FUN_0040cc00(local_104,0,0xffffffff);
  local_4._0_1_ = 0x17;
  FUN_004040a0(1);
  local_4._0_1_ = 0x16;
  FUN_004040a0(1);
  local_4._0_1_ = 0x15;
  FUN_005acca0();
  local_4._0_1_ = 10;
  FUN_004040a0(1);
  auStack_dc[0] = uStack_105;
  FUN_004040a0(0);
  uVar9 = 0xffffffff;
  pcVar10 = s_General_00690810;
  do {
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    cVar1 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_General_00690810,~uVar9 - 1);
  local_4._0_1_ = 0x19;
  iVar3 = FUN_005acaf0(auStack_a8,auStack_dc,s_<No_Value>_0069358c,local_b8,0);
  auStack_f0[0] = *(undefined1 *)(iVar3 + 0x14);
  local_4._0_1_ = 0x1a;
  FUN_004040a0(0);
  FUN_0040cc00(iVar3 + 0x14,0,0xffffffff);
  local_4._0_1_ = 0x1b;
  local_104[0] = auStack_f0[0];
  FUN_004040a0(0);
  FUN_0040cc00(auStack_f0,0,0xffffffff);
  local_4._0_1_ = 0x1c;
  FUN_0040cc00(local_104,0,0xffffffff);
  local_4._0_1_ = 0x1b;
  FUN_004040a0(1);
  local_4._0_1_ = 0x1a;
  FUN_004040a0(1);
  local_4._0_1_ = 0x19;
  FUN_005acca0();
  local_4._0_1_ = 10;
  FUN_004040a0(1);
  uVar9 = 0xffffffff;
  pcVar10 = (char *)&DAT_00693460;
  do {
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    cVar1 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar1 != '\0');
  FUN_00484c30(&DAT_00693460,~uVar9 - 1);
  FUN_0045db40(param_1 + 0x114,0,0xffffffff);
  if (*(int *)(param_1 + 0xa8) == 0) {
    local_104[0] = uStack_105;
    FUN_004040a0(0);
    uVar9 = 0xffffffff;
    pcVar10 = s_Message_00693578;
    do {
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(s_Message_00693578,~uVar9 - 1);
    local_4._0_1_ = 0x1d;
    piVar5 = (int *)FUN_00486370(local_e0,local_104,param_1 + 0xc4,param_1 + 0x104);
    iVar3 = *(int *)(param_1 + 0xa8);
    local_4._0_1_ = 0x1e;
    if (iVar3 != *piVar5) {
      if (iVar3 != 0) {
        FUN_004098d0();
      }
      *(int *)(param_1 + 0xa8) = *piVar5;
      FUN_005844b0();
    }
    local_4._0_1_ = 0x1d;
    FUN_0057d310();
    local_4._0_1_ = 10;
    FUN_004040a0(1);
  }
  if (*(int *)(param_1 + 0xb0) == 0) {
    local_104[0] = uStack_105;
    FUN_004040a0(0);
    uVar9 = 0xffffffff;
    pcVar10 = &DAT_00693570;
    do {
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(&DAT_00693570,~uVar9 - 1);
    local_4._0_1_ = 0x1f;
    piVar5 = (int *)FUN_00486370(local_e0,local_104,param_1 + 0xd4,param_1 + 0xf4);
    iVar3 = *(int *)(param_1 + 0xb0);
    local_4._0_1_ = 0x20;
    if (iVar3 != *piVar5) {
      if ((iVar3 != 0) &&
         (iVar8 = *(int *)(iVar3 + 0x14) + -1, *(int *)(iVar3 + 0x14) = iVar8, iVar8 == 0)) {
        FUN_005abfc0(0);
      }
      *(int *)(param_1 + 0xb0) = *piVar5;
      FUN_005844b0();
    }
    local_4._0_1_ = 0x1f;
    FUN_0057d310();
    local_4._0_1_ = 10;
    FUN_004040a0(1);
  }
  if (*(int *)(param_1 + 0xac) == 0) {
    local_104[0] = uStack_105;
    FUN_004040a0(0);
    uVar9 = 0xffffffff;
    pcVar10 = s_Title_00693568;
    do {
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(s_Title_00693568,~uVar9 - 1);
    local_4._0_1_ = 0x21;
    piVar5 = (int *)FUN_00486370(&iStack_cc,local_104,param_1 + 0xb4,param_1 + 0xe4);
    iVar3 = *(int *)(param_1 + 0xac);
    local_4._0_1_ = 0x22;
    if (iVar3 != *piVar5) {
      if ((iVar3 != 0) &&
         (iVar8 = *(int *)(iVar3 + 0x14) + -1, *(int *)(iVar3 + 0x14) = iVar8, iVar8 == 0)) {
        FUN_005abfc0(0);
      }
      *(int *)(param_1 + 0xac) = *piVar5;
      FUN_005844b0();
    }
    local_4._0_1_ = 0x21;
    if (iStack_cc != 0) {
      FUN_004098d0();
      iStack_cc = 0;
    }
    local_4._0_1_ = 10;
    FUN_004040a0(1);
  }
  local_4._0_1_ = 9;
  FUN_004040a0(1);
  local_4._0_1_ = 1;
  FUN_004040a0(1);
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_004040a0(1);
  if (iStack_b4 != 0) {
    cVar1 = *(char *)(iStack_b4 + -1);
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      *(char *)(iStack_b4 + -1) = cVar1 + -1;
      ExceptionList = pvStack_c;
      return;
    }
    FUN_005fe5f0(iStack_b4 + -1);
  }
  ExceptionList = pvStack_c;
  return;
}

