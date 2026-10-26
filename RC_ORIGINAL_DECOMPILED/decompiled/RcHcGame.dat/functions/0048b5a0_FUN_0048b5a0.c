/*
 * FUN_0048b5a0 at 0048b5a0
 * undefined FUN_0048b5a0(void)
 * Address ranges: 0048b5a0-0048c164
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_0048b5a0(int param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  char *pcVar9;
  undefined1 local_d1;
  int local_d0;
  undefined1 local_cc [16];
  undefined1 local_bc [4];
  char *local_b8;
  uint local_b4;
  undefined1 local_ac [16];
  undefined1 local_9c [16];
  uint local_8c;
  undefined1 local_88 [4];
  int local_84;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062ab3d;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00536050(local_88);
  local_4 = 0;
  FUN_00519ef0();
  iVar2 = FUN_004337e0();
  if (iVar2 != 0) {
    FUN_005181b0();
    iVar2 = FUN_004337e0();
    if (iVar2 != 0) {
      FUN_005afe30(s_CRcGStateRESULTS__HandleOneFrame_0069382c);
    }
  }
  FUN_004040a0(0);
  uVar6 = 0xffffffff;
  pcVar8 = s_General_00690810;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_General_00690810,~uVar6 - 1);
  local_4._0_1_ = 1;
  FUN_004040a0(0);
  uVar6 = 0xffffffff;
  pcVar8 = s_DebriefTXT_00693820;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_DebriefTXT_00693820,~uVar6 - 1);
  local_4._0_1_ = 2;
  iVar2 = FUN_005acaf0(local_9c,local_cc,s_<No_Value>_0069358c,local_88,0);
  local_4._0_1_ = 3;
  local_bc[0] = *(undefined1 *)(iVar2 + 0x14);
  FUN_004040a0(0);
  FUN_0040cc00((undefined1 *)(iVar2 + 0x14),0,0xffffffff);
  local_4._0_1_ = 4;
  local_ac[0] = local_bc[0];
  FUN_004040a0(0);
  FUN_0040cc00(local_bc,0,0xffffffff);
  local_4._0_1_ = 5;
  FUN_0040cc00(local_ac,0,0xffffffff);
  local_4._0_1_ = 4;
  FUN_004040a0(1);
  local_4._0_1_ = 3;
  FUN_004040a0(1);
  local_4._0_1_ = 2;
  FUN_005acca0();
  local_4._0_1_ = 1;
  FUN_004040a0(1);
  local_4._0_1_ = 0;
  FUN_004040a0(1);
  if (*(int *)(param_1 + 0xc0) == 0) {
    FUN_004040a0(0);
    uVar6 = 0xffffffff;
    pcVar8 = s_Title_00693568;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(s_Title_00693568,~uVar6 - 1);
    local_4._0_1_ = 6;
    piVar3 = (int *)FUN_0048c170(&local_d0,local_cc,param_1 + 0xd4,param_1 + 0xc4);
    iVar2 = *(int *)(param_1 + 0xc0);
    local_4._0_1_ = 7;
    if (iVar2 != *piVar3) {
      if (iVar2 != 0) {
        FUN_004098d0();
      }
      *(int *)(param_1 + 0xc0) = *piVar3;
      FUN_005844b0();
    }
    local_4._0_1_ = 6;
    FUN_0057d310();
    local_4._0_1_ = 0;
    FUN_004040a0(1);
  }
  FUN_004040a0(0);
  uVar6 = 0xffffffff;
  pcVar8 = s_General_00690810;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_General_00690810,~uVar6 - 1);
  local_4._0_1_ = 8;
  FUN_004040a0(0);
  uVar6 = 0xffffffff;
  pcVar8 = s_ContinueTXT_00693814;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_ContinueTXT_00693814,~uVar6 - 1);
  local_4._0_1_ = 9;
  iVar2 = FUN_005acaf0(local_9c,local_ac,s_<No_Value>_0069358c,local_88,0);
  local_bc[0] = *(undefined1 *)(iVar2 + 0x14);
  local_4._0_1_ = 10;
  FUN_004040a0(0);
  FUN_0040cc00(iVar2 + 0x14,0,0xffffffff);
  local_cc[0] = local_bc[0];
  local_4._0_1_ = 0xb;
  FUN_004040a0(0);
  FUN_0040cc00(local_bc,0,0xffffffff);
  local_4._0_1_ = 0xc;
  FUN_0040cc00(local_cc,0,0xffffffff);
  local_4._0_1_ = 0xb;
  FUN_004040a0(1);
  local_4._0_1_ = 10;
  FUN_004040a0(1);
  local_4._0_1_ = 9;
  FUN_005acca0();
  local_4._0_1_ = 8;
  FUN_004040a0(1);
  local_4._0_1_ = 0;
  FUN_004040a0(1);
  if (*(int *)(param_1 + 0xe4) == 0) {
    local_cc[0] = local_d1;
    FUN_004040a0(0);
    uVar6 = 0xffffffff;
    pcVar8 = s_Continue_00693808;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(s_Continue_00693808,~uVar6 - 1);
    local_4._0_1_ = 0xd;
    piVar3 = (int *)FUN_0048c170(&local_d0,local_cc,param_1 + 0xe8,param_1 + 0xf8);
    iVar2 = *(int *)(param_1 + 0xe4);
    local_4._0_1_ = 0xe;
    if (iVar2 != *piVar3) {
      if (iVar2 != 0) {
        FUN_004098d0();
      }
      *(int *)(param_1 + 0xe4) = *piVar3;
      FUN_005844b0();
    }
    local_4._0_1_ = 0xd;
    FUN_0057d310();
    local_4._0_1_ = 0;
    FUN_004040a0(1);
  }
  FUN_004040a0(0);
  uVar6 = 0xffffffff;
  pcVar8 = s_General_00690810;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_General_00690810,~uVar6 - 1);
  local_4._0_1_ = 0xf;
  FUN_004040a0(0);
  uVar6 = 0xffffffff;
  pcVar8 = s_TotalScoreTXT_006937f8;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_TotalScoreTXT_006937f8,~uVar6 - 1);
  local_4._0_1_ = 0x10;
  iVar2 = FUN_005acaf0(local_9c,local_ac,s_<No_Value>_0069358c,local_88,0);
  local_bc[0] = *(undefined1 *)(iVar2 + 0x14);
  local_4._0_1_ = 0x11;
  FUN_004040a0(0);
  FUN_0040cc00(iVar2 + 0x14,0,0xffffffff);
  local_4._0_1_ = 0x12;
  local_cc[0] = local_bc[0];
  FUN_004040a0(0);
  FUN_0040cc00(local_bc,0,0xffffffff);
  local_4._0_1_ = 0x13;
  FUN_0040cc00(local_cc,0,0xffffffff);
  local_4._0_1_ = 0x12;
  FUN_004040a0(1);
  local_4._0_1_ = 0x11;
  FUN_004040a0(1);
  local_4._0_1_ = 0x10;
  FUN_005acca0();
  local_4._0_1_ = 0xf;
  FUN_004040a0(1);
  local_4._0_1_ = 0;
  FUN_004040a0(1);
  piVar3 = (int *)(param_1 + 0x108);
  if (*(int *)(param_1 + 0x108) == 0) {
    local_cc[0] = local_d1;
    FUN_004040a0(0);
    uVar6 = 0xffffffff;
    pcVar8 = s_Score_00690768;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(s_Score_00690768,~uVar6 - 1);
    local_4._0_1_ = 0x14;
    piVar4 = (int *)FUN_0048c170(&local_d0,local_cc,param_1 + 0x10c,param_1 + 0x11c);
    local_4._0_1_ = 0x15;
    if (*piVar3 != *piVar4) {
      if (*piVar3 != 0) {
        FUN_004098d0();
      }
      *piVar3 = *piVar4;
      FUN_005844b0();
    }
    local_4._0_1_ = 0x14;
    FUN_0057d310();
    local_4._0_1_ = 0;
    FUN_004040a0(1);
  }
  FUN_004040a0(0);
  uVar6 = 0xffffffff;
  pcVar8 = s_General_00690810;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_General_00690810,~uVar6 - 1);
  local_4._0_1_ = 0x16;
  FUN_004040a0(0);
  uVar6 = 0xffffffff;
  pcVar8 = s_OldTotalScoreTXT_006937e4;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_OldTotalScoreTXT_006937e4,~uVar6 - 1);
  local_4._0_1_ = 0x17;
  iVar2 = FUN_005acaf0(local_9c,local_ac,s_<No_Value>_0069358c,local_88,0);
  local_4._0_1_ = 0x18;
  local_bc[0] = *(undefined1 *)(iVar2 + 0x14);
  FUN_004040a0(0);
  FUN_0040cc00((undefined1 *)(iVar2 + 0x14),0,0xffffffff);
  local_4._0_1_ = 0x19;
  local_cc[0] = local_bc[0];
  FUN_004040a0(0);
  FUN_0040cc00(local_bc,0,0xffffffff);
  local_4._0_1_ = 0x1a;
  FUN_0040cc00(local_cc,0,0xffffffff);
  local_4._0_1_ = 0x19;
  FUN_004040a0(1);
  local_4._0_1_ = 0x18;
  FUN_004040a0(1);
  local_4._0_1_ = 0x17;
  FUN_005acca0();
  local_4._0_1_ = 0x16;
  FUN_004040a0(1);
  local_4._0_1_ = 0;
  FUN_004040a0(1);
  if (*piVar3 == 0) {
    local_cc[0] = local_d1;
    FUN_004040a0(0);
    uVar6 = 0xffffffff;
    pcVar8 = s_OldTotalScore_006937d4;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(s_OldTotalScore_006937d4,~uVar6 - 1);
    local_4._0_1_ = 0x1b;
    piVar4 = (int *)FUN_0048c170(&local_d0,local_cc,param_1 + 0x13c,param_1 + 300);
    iVar2 = *piVar3;
    local_4._0_1_ = 0x1c;
    if (iVar2 != *piVar4) {
      if ((iVar2 != 0) &&
         (iVar5 = *(int *)(iVar2 + 0x14) + -1, *(int *)(iVar2 + 0x14) = iVar5, iVar5 == 0)) {
        FUN_005abfc0(0);
      }
      *piVar3 = *piVar4;
      FUN_005844b0();
    }
    local_4._0_1_ = 0x1b;
    if (local_d0 != 0) {
      FUN_004098d0();
      local_d0 = 0;
    }
    local_4._0_1_ = 0;
    FUN_004040a0(1);
  }
  FUN_004040a0(0);
  uVar6 = 0xffffffff;
  pcVar8 = s_General_00690810;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_General_00690810,~uVar6 - 1);
  local_4._0_1_ = 0x1d;
  FUN_004040a0(0);
  uVar6 = 0xffffffff;
  pcVar8 = s_NewTotalScoreTXT_006937c0;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_NewTotalScoreTXT_006937c0,~uVar6 - 1);
  local_4._0_1_ = 0x1e;
  iVar2 = FUN_005acaf0(local_9c,local_ac,s_<No_Value>_0069358c,local_88,0);
  local_bc[0] = *(undefined1 *)(iVar2 + 0x14);
  local_4._0_1_ = 0x1f;
  FUN_004040a0(0);
  FUN_0040cc00(iVar2 + 0x14,0,0xffffffff);
  local_cc[0] = local_bc[0];
  local_4._0_1_ = 0x20;
  FUN_004040a0(0);
  FUN_0040cc00(local_bc,0,0xffffffff);
  local_4._0_1_ = 0x21;
  FUN_0040cc00(local_cc,0,0xffffffff);
  local_4._0_1_ = 0x20;
  FUN_004040a0(1);
  local_4._0_1_ = 0x1f;
  FUN_004040a0(1);
  local_4._0_1_ = 0x1e;
  FUN_005acca0();
  local_4._0_1_ = 0x1d;
  FUN_004040a0(1);
  local_4._0_1_ = 0;
  FUN_004040a0(1);
  if (*piVar3 == 0) {
    local_bc[0] = local_d1;
    FUN_004040a0(0);
    uVar6 = 0xffffffff;
    pcVar8 = s_NewTotalScore_006937b0;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6 - 1;
    local_8c = uVar6;
    cVar1 = FUN_00401940(uVar6,1);
    if (cVar1 != '\0') {
      pcVar8 = s_NewTotalScore_006937b0;
      pcVar9 = local_b8;
      for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
        pcVar8 = pcVar8 + 4;
        pcVar9 = pcVar9 + 4;
      }
      for (uVar7 = uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *pcVar9 = *pcVar8;
        pcVar8 = pcVar8 + 1;
        pcVar9 = pcVar9 + 1;
      }
      local_b8[uVar6] = '\0';
      local_b4 = uVar6;
    }
    local_4._0_1_ = 0x22;
    piVar4 = (int *)FUN_0048c170(&local_d0,local_bc,param_1 + 0x15c,param_1 + 0x14c);
    iVar2 = *piVar3;
    local_4._0_1_ = 0x23;
    if (iVar2 != *piVar4) {
      if ((iVar2 != 0) &&
         (iVar5 = *(int *)(iVar2 + 0x14) + -1, *(int *)(iVar2 + 0x14) = iVar5, iVar5 == 0)) {
        FUN_005abfc0(0);
      }
      iVar2 = *piVar4;
      *piVar3 = iVar2;
      if (iVar2 != 0) {
        *(int *)(iVar2 + 0x14) = *(int *)(iVar2 + 0x14) + 1;
      }
    }
    local_4._0_1_ = 0x22;
    if (local_d0 != 0) {
      iVar2 = *(int *)(local_d0 + 0x14) + -1;
      *(int *)(local_d0 + 0x14) = iVar2;
      if (iVar2 == 0) {
        FUN_005abfc0(0);
      }
      local_d0 = 0;
    }
    local_4._0_1_ = 0;
    FUN_004040a0(1);
  }
  if (local_84 != 0) {
    cVar1 = *(char *)(local_84 + -1);
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      *(char *)(local_84 + -1) = cVar1 + -1;
      ExceptionList = local_c;
      return;
    }
    FUN_005fe5f0(local_84 + -1);
  }
  ExceptionList = local_c;
  return;
}

