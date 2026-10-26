/*
 * FUN_00488620 at 00488620
 * undefined FUN_00488620(void)
 * Address ranges: 00488620-00488f35
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_00488620(int param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  undefined1 local_cd;
  int local_cc;
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [124];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062a353;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00536050(local_88);
  local_4 = 0;
  FUN_004040a0(0);
  uVar5 = 0xffffffff;
  pcVar6 = s_General_00690810;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_General_00690810,~uVar5 - 1);
  local_4._0_1_ = 1;
  FUN_004040a0(0);
  uVar5 = 0xffffffff;
  pcVar6 = s_RetryTitle_0069375c;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_RetryTitle_0069375c,~uVar5 - 1);
  local_4._0_1_ = 2;
  iVar2 = FUN_005acaf0(local_98,local_c8,s_<No_Value>_0069358c,local_88,0);
  local_4._0_1_ = 3;
  local_b8[0] = *(undefined1 *)(iVar2 + 0x14);
  FUN_004040a0(0);
  FUN_0040cc00((undefined1 *)(iVar2 + 0x14),0,0xffffffff);
  local_4._0_1_ = 4;
  local_a8[0] = local_b8[0];
  FUN_004040a0(0);
  FUN_0040cc00(local_b8,0,0xffffffff);
  local_4._0_1_ = 5;
  FUN_0040cc00(local_a8,0,0xffffffff);
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
  FUN_004040a0(0);
  uVar5 = 0xffffffff;
  pcVar6 = s_General_00690810;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_General_00690810,~uVar5 - 1);
  local_4._0_1_ = 6;
  FUN_004040a0(0);
  uVar5 = 0xffffffff;
  pcVar6 = s_RetryText_00693750;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_RetryText_00693750,~uVar5 - 1);
  local_4._0_1_ = 7;
  iVar2 = FUN_005acaf0(local_98,local_a8,s_<No_Value>_0069358c,local_88,0);
  local_4._0_1_ = 8;
  local_b8[0] = *(undefined1 *)(iVar2 + 0x14);
  FUN_004040a0(0);
  FUN_0040cc00((undefined1 *)(iVar2 + 0x14),0,0xffffffff);
  local_4._0_1_ = 9;
  local_c8[0] = local_b8[0];
  FUN_004040a0(0);
  FUN_0040cc00(local_b8,0,0xffffffff);
  local_4._0_1_ = 10;
  FUN_0040cc00(local_c8,0,0xffffffff);
  local_4._0_1_ = 9;
  FUN_004040a0(1);
  local_4._0_1_ = 8;
  FUN_004040a0(1);
  local_4._0_1_ = 7;
  FUN_005acca0();
  local_4._0_1_ = 6;
  FUN_004040a0(1);
  local_4._0_1_ = 0;
  FUN_004040a0(1);
  FUN_004040a0(0);
  uVar5 = 0xffffffff;
  pcVar6 = s_General_00690810;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_General_00690810,~uVar5 - 1);
  local_4._0_1_ = 0xb;
  FUN_004040a0(0);
  uVar5 = 0xffffffff;
  pcVar6 = s_YesText_00693748;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_YesText_00693748,~uVar5 - 1);
  local_4._0_1_ = 0xc;
  iVar2 = FUN_005acaf0(local_98,local_a8,s_<No_Value>_0069358c,local_88,0);
  local_4._0_1_ = 0xd;
  local_b8[0] = *(undefined1 *)(iVar2 + 0x14);
  FUN_004040a0(0);
  FUN_0040cc00((undefined1 *)(iVar2 + 0x14),0,0xffffffff);
  local_4._0_1_ = 0xe;
  local_c8[0] = local_b8[0];
  FUN_004040a0(0);
  FUN_0040cc00(local_b8,0,0xffffffff);
  local_4._0_1_ = 0xf;
  FUN_0040cc00(local_c8,0,0xffffffff);
  local_4._0_1_ = 0xe;
  FUN_004040a0(1);
  local_4._0_1_ = 0xd;
  FUN_004040a0(1);
  local_4._0_1_ = 0xc;
  FUN_005acca0();
  local_4._0_1_ = 0xb;
  FUN_004040a0(1);
  local_4._0_1_ = 0;
  FUN_004040a0(1);
  FUN_004040a0(0);
  uVar5 = 0xffffffff;
  pcVar6 = s_General_00690810;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_General_00690810,~uVar5 - 1);
  local_4._0_1_ = 0x10;
  FUN_004040a0(0);
  uVar5 = 0xffffffff;
  pcVar6 = s_NoText_00693740;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_NoText_00693740,~uVar5 - 1);
  local_4._0_1_ = 0x11;
  iVar2 = FUN_005acaf0(local_98,local_a8,s_<No_Value>_0069358c,local_88,0);
  local_4._0_1_ = 0x12;
  local_b8[0] = *(undefined1 *)(iVar2 + 0x14);
  FUN_004040a0(0);
  FUN_0040cc00((undefined1 *)(iVar2 + 0x14),0,0xffffffff);
  local_4._0_1_ = 0x13;
  local_c8[0] = local_b8[0];
  FUN_004040a0(0);
  FUN_0040cc00(local_b8,0,0xffffffff);
  local_4._0_1_ = 0x14;
  FUN_0040cc00(local_c8,0,0xffffffff);
  local_4._0_1_ = 0x13;
  FUN_004040a0(1);
  local_4._0_1_ = 0x12;
  FUN_004040a0(1);
  local_4._0_1_ = 0x11;
  FUN_005acca0();
  local_4._0_1_ = 0x10;
  FUN_004040a0(1);
  local_4._0_1_ = 0;
  FUN_004040a0(1);
  if (*(int *)(param_1 + 0x80) == 0) {
    local_c8[0] = local_cd;
    FUN_004040a0(0);
    uVar5 = 0xffffffff;
    pcVar6 = s_Title_00693568;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(s_Title_00693568,~uVar5 - 1);
    local_4._0_1_ = 0x15;
    piVar3 = (int *)FUN_00488f40(&local_cc,local_c8,param_1 + 0x84,param_1 + 0x94);
    iVar2 = *(int *)(param_1 + 0x80);
    local_4._0_1_ = 0x16;
    if (iVar2 != *piVar3) {
      if ((iVar2 != 0) &&
         (iVar4 = *(int *)(iVar2 + 0x14) + -1, *(int *)(iVar2 + 0x14) = iVar4, iVar4 == 0)) {
        FUN_005abfc0(0);
      }
      *(int *)(param_1 + 0x80) = *piVar3;
      FUN_005844b0();
    }
    local_4._0_1_ = 0x15;
    FUN_0057d310();
    local_4._0_1_ = 0;
    FUN_004040a0(1);
  }
  if (*(int *)(param_1 + 0xa4) == 0) {
    local_c8[0] = local_cd;
    FUN_004040a0(0);
    uVar5 = 0xffffffff;
    pcVar6 = s_Retry_00693738;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(s_Retry_00693738,~uVar5 - 1);
    local_4._0_1_ = 0x17;
    piVar3 = (int *)FUN_00488f40(&local_cc,local_c8,param_1 + 0xa8,param_1 + 0xb8);
    iVar2 = *(int *)(param_1 + 0xa4);
    local_4._0_1_ = 0x18;
    if (iVar2 != *piVar3) {
      if ((iVar2 != 0) &&
         (iVar4 = *(int *)(iVar2 + 0x14) + -1, *(int *)(iVar2 + 0x14) = iVar4, iVar4 == 0)) {
        FUN_005abfc0(0);
      }
      *(int *)(param_1 + 0xa4) = *piVar3;
      FUN_005844b0();
    }
    local_4._0_1_ = 0x17;
    if (local_cc != 0) {
      FUN_004098d0();
      local_cc = 0;
    }
    local_4._0_1_ = 0;
    FUN_004040a0(1);
  }
  if (*(int *)(param_1 + 200) == 0) {
    local_c8[0] = local_cd;
    FUN_004040a0(0);
    uVar5 = 0xffffffff;
    pcVar6 = &DAT_00693730;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(&DAT_00693730,~uVar5 - 1);
    local_4._0_1_ = 0x19;
    piVar3 = (int *)FUN_00488f40(&local_cc,local_c8,param_1 + 0xcc,param_1 + 0xdc);
    iVar2 = *(int *)(param_1 + 200);
    local_4._0_1_ = 0x1a;
    if (iVar2 != *piVar3) {
      if ((iVar2 != 0) &&
         (iVar4 = *(int *)(iVar2 + 0x14) + -1, *(int *)(iVar2 + 0x14) = iVar4, iVar4 == 0)) {
        FUN_005abfc0(0);
      }
      *(int *)(param_1 + 200) = *piVar3;
      FUN_005844b0();
    }
    local_4._0_1_ = 0x19;
    if (local_cc != 0) {
      FUN_004098d0();
      local_cc = 0;
    }
    local_4._0_1_ = 0;
    FUN_004040a0(1);
  }
  if (*(int *)(param_1 + 0xec) == 0) {
    local_c8[0] = local_cd;
    FUN_004040a0(0);
    uVar5 = 0xffffffff;
    pcVar6 = &DAT_00693728;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(&DAT_00693728,~uVar5 - 1);
    local_4._0_1_ = 0x1b;
    piVar3 = (int *)FUN_00488f40(&local_cc,local_c8,param_1 + 0xf0,param_1 + 0x100);
    iVar2 = *(int *)(param_1 + 0xec);
    local_4._0_1_ = 0x1c;
    if (iVar2 != *piVar3) {
      if ((iVar2 != 0) &&
         (iVar4 = *(int *)(iVar2 + 0x14) + -1, *(int *)(iVar2 + 0x14) = iVar4, iVar4 == 0)) {
        FUN_005abfc0(0);
      }
      *(int *)(param_1 + 0xec) = *piVar3;
      FUN_005844b0();
    }
    local_4._0_1_ = 0x1b;
    if (local_cc != 0) {
      FUN_004098d0();
      local_cc = 0;
    }
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_004040a0(1);
  }
  local_4 = 0xffffffff;
  FUN_004040a0(1);
  ExceptionList = local_c;
  return;
}

