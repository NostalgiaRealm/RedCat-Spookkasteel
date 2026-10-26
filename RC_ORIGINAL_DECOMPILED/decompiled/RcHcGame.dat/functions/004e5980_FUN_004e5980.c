/*
 * FUN_004e5980 at 004e5980
 * undefined FUN_004e5980(void)
 * Address ranges: 004e5980-004e5f22
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 *
FUN_004e5980(undefined1 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  code *pcVar3;
  undefined4 uVar4;
  uint uVar5;
  char *pcVar6;
  undefined1 uStack_13d;
  undefined1 auStack_13c [4];
  int iStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined1 auStack_12c [16];
  undefined1 auStack_11c [16];
  undefined1 auStack_10c [16];
  undefined1 local_fc [4];
  int iStack_f8;
  undefined1 auStack_ec [4];
  int iStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined1 local_dc [4];
  int iStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined1 auStack_cc [16];
  undefined4 local_bc;
  undefined1 auStack_b8 [16];
  undefined1 auStack_a8 [16];
  undefined1 auStack_98 [16];
  undefined1 auStack_88 [124];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00632cd3;
  pvStack_c = ExceptionList;
  local_bc = 0;
  ExceptionList = &pvStack_c;
  FUN_005ae390(local_fc,&DAT_006b3f70);
  local_4 = 0;
  FUN_004e6420(local_dc,param_2);
  local_4._0_1_ = 1;
  FUN_005ae390(auStack_13c,s_______0069a5a0);
  local_4._0_1_ = 2;
  FUN_00536050(auStack_ec);
  local_4._0_1_ = 3;
  iVar2 = DAT_006b915c;
  if (DAT_006b915c == 0) {
    iVar2 = FUN_004bc480();
  }
  if (*(int *)(iVar2 + 0x3a4) == 0) {
    FUN_00409810(&DAT_006b3f70,&uStack_13d);
    local_4._0_1_ = 4;
    pcVar3 = (code *)FUN_005a07f0(s_m_Game_0068e584,s___AdamSource_AdamApplication_h_0068e58c,0x130,
                                  auStack_12c);
    (*pcVar3)();
    local_4._0_1_ = 3;
    FUN_004040a0(1);
  }
  uVar4 = FUN_00529a70();
  switch(uVar4) {
  case 0:
    uVar4 = FUN_004e9b00(auStack_10c,param_2);
    local_4._0_1_ = 5;
    FUN_0040cc00(uVar4,0,0xffffffff);
    break;
  case 1:
    uVar4 = FUN_004ec3f0(auStack_11c,param_2);
    local_4._0_1_ = 6;
    FUN_0040cc00(uVar4,0,0xffffffff);
    break;
  case 2:
    uVar4 = FUN_004eece0(auStack_b8,param_2);
    local_4._0_1_ = 7;
    FUN_0040cc00(uVar4,0,0xffffffff);
    break;
  case 3:
    uVar4 = FUN_004eece0(auStack_98,param_2);
    local_4._0_1_ = 8;
    FUN_0040cc00(uVar4,0,0xffffffff);
    break;
  case 4:
    uVar4 = FUN_004eece0(auStack_88,param_2);
    local_4._0_1_ = 9;
    FUN_0040cc00(uVar4,0,0xffffffff);
    break;
  case 5:
    uVar4 = FUN_004eece0(auStack_a8,param_2);
    local_4._0_1_ = 10;
    FUN_0040cc00(uVar4,0,0xffffffff);
    break;
  default:
    iVar2 = DAT_006b915c;
    if (DAT_006b915c == 0) {
      iVar2 = FUN_004bc480();
    }
    if (*(int *)(iVar2 + 0x3a4) == 0) {
      FUN_00409810(&DAT_006b3f70,&uStack_13d);
      local_4._0_1_ = 0xb;
      pcVar3 = (code *)FUN_005a07f0(s_m_Game_0068e584,s___AdamSource_AdamApplication_h_0068e58c,
                                    0x130,auStack_12c);
      (*pcVar3)();
      local_4._0_1_ = 3;
      FUN_004040a0(1);
    }
    uVar4 = FUN_00529a70();
    uVar4 = FUN_005ae390(auStack_cc,s_Unknown_language___i___00698af4,uVar4);
    local_4._0_1_ = 0xc;
    pcVar3 = (code *)FUN_005a07f0(s_false_0068d2d0,s_D__Work_RCHorror_AdamSource_Adam_0069a574,0x33,
                                  uVar4);
    (*pcVar3)();
  }
  local_4._0_1_ = 3;
  FUN_004040a0(1);
  auStack_12c[0] = uStack_13d;
  FUN_004040a0(0);
  uVar5 = 0xffffffff;
  pcVar6 = &DAT_0069a56c;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(&DAT_0069a56c,~uVar5 - 1);
  local_4._0_1_ = 0xd;
  iVar2 = FUN_005acbc0(local_dc,auStack_12c,auStack_13c,auStack_ec,0);
  auStack_11c[0] = *(undefined1 *)(iVar2 + 0x14);
  local_4._0_1_ = 0xe;
  FUN_004040a0(0);
  FUN_0040cc00(iVar2 + 0x14,0,0xffffffff);
  local_4._0_1_ = 0xf;
  auStack_10c[0] = auStack_11c[0];
  FUN_004040a0(0);
  FUN_0040cc00(auStack_11c,0,0xffffffff);
  local_4._0_1_ = 0x10;
  FUN_0040cc00(auStack_10c,0,0xffffffff);
  local_4._0_1_ = 0xf;
  FUN_004040a0(1);
  local_4._0_1_ = 0xe;
  FUN_004040a0(1);
  local_4._0_1_ = 0xd;
  FUN_005acca0();
  local_4._0_1_ = 3;
  FUN_004040a0(1);
  uVar4 = FUN_004e8d40(auStack_cc,local_fc,param_3,param_4);
  local_4._0_1_ = 0x11;
  FUN_0040cc00(uVar4,0,0xffffffff);
  local_4 = CONCAT31(local_4._1_3_,3);
  FUN_004040a0(1);
  *param_1 = local_fc[0];
  FUN_004040a0(0);
  FUN_0040cc00(local_fc,0,0xffffffff);
  if (iStack_e8 != 0) {
    cVar1 = *(char *)(iStack_e8 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0(iStack_e8 + -1);
    }
    else {
      *(char *)(iStack_e8 + -1) = cVar1 + -1;
    }
  }
  iStack_e8 = 0;
  uStack_e4 = 0;
  uStack_e0 = 0;
  if (iStack_138 != 0) {
    cVar1 = *(char *)(iStack_138 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0(iStack_138 + -1);
    }
    else {
      *(char *)(iStack_138 + -1) = cVar1 + -1;
    }
  }
  iStack_138 = 0;
  uStack_134 = 0;
  uStack_130 = 0;
  if (iStack_d8 != 0) {
    cVar1 = *(char *)(iStack_d8 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0(iStack_d8 + -1);
    }
    else {
      *(char *)(iStack_d8 + -1) = cVar1 + -1;
    }
  }
  iStack_d8 = 0;
  uStack_d4 = 0;
  uStack_d0 = 0;
  if (iStack_f8 != 0) {
    cVar1 = *(char *)(iStack_f8 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0(iStack_f8 + -1);
    }
    else {
      *(char *)(iStack_f8 + -1) = cVar1 + -1;
    }
  }
  ExceptionList = pvStack_c;
  return param_1;
}

