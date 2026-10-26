/*
 * FUN_004e5f40 at 004e5f40
 * undefined FUN_004e5f40(void)
 * Address ranges: 004e5f40-004e63fe
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 * FUN_004e5f40(undefined1 *param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  code *pcVar3;
  undefined4 uVar4;
  uint uVar5;
  char *pcVar6;
  undefined1 uStack_101;
  undefined1 auStack_100 [19];
  undefined1 local_ed;
  undefined1 auStack_ec [16];
  undefined4 local_dc;
  undefined1 local_d8 [4];
  int iStack_d4;
  undefined1 local_c8 [4];
  int iStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined1 auStack_b8 [16];
  undefined1 auStack_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [124];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00632d91;
  pvStack_c = ExceptionList;
  local_dc = 0;
  ExceptionList = &pvStack_c;
  FUN_005ae390(local_d8,&DAT_006b3f70);
  local_4 = 1;
  FUN_004caa20(local_c8,&DAT_0069a56c,param_2);
  local_4._0_1_ = 2;
  FUN_005ae390(local_98,&DAT_006b3f70);
  local_4._0_1_ = 3;
  iVar2 = DAT_006b915c;
  if (DAT_006b915c == 0) {
    iVar2 = FUN_004bc480();
  }
  if (*(int *)(iVar2 + 0x3a4) == 0) {
    FUN_00409810(&DAT_006b3f70,&local_ed);
    local_4._0_1_ = 4;
    pcVar3 = (code *)FUN_005a07f0(s_m_Game_0068e584,s___AdamSource_AdamApplication_h_0068e58c,0x130,
                                  local_88);
    (*pcVar3)();
    local_4._0_1_ = 3;
    FUN_004040a0(1);
  }
  uVar4 = FUN_00529a70();
  FUN_005362c0(auStack_a8,uVar4);
  local_4._0_1_ = 5;
  iVar2 = DAT_006b915c;
  if (DAT_006b915c == 0) {
    iVar2 = FUN_004bc480();
  }
  if (*(int *)(iVar2 + 0x3a4) == 0) {
    FUN_00409810(&DAT_006b3f70,&uStack_101);
    local_4._0_1_ = 6;
    pcVar3 = (code *)FUN_005a07f0(s_m_Game_0068e584,s___AdamSource_AdamApplication_h_0068e58c,0x130,
                                  auStack_100);
    (*pcVar3)();
    local_4._0_1_ = 5;
    FUN_004040a0(1);
  }
  uVar4 = FUN_00529a70();
  switch(uVar4) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
    break;
  default:
    iVar2 = DAT_006b915c;
    if (DAT_006b915c == 0) {
      iVar2 = FUN_004bc480();
    }
    if (*(int *)(iVar2 + 0x3a4) == 0) {
      FUN_00409810(&DAT_006b3f70,&uStack_101);
      local_4._0_1_ = 7;
      pcVar3 = (code *)FUN_005a07f0(s_m_Game_0068e584,s___AdamSource_AdamApplication_h_0068e58c,
                                    0x130,auStack_100);
      (*pcVar3)();
      local_4._0_1_ = 5;
      FUN_004040a0(1);
    }
    uVar4 = FUN_00529a70();
    uVar4 = FUN_005ae390(auStack_ec,s_Unknown_language___i___00698af4,uVar4);
    local_4._0_1_ = 8;
    pcVar3 = (code *)FUN_005a07f0(s_false_0068d2d0,s_D__Work_RCHorror_AdamSource_Adam_0069a574,0x60,
                                  uVar4);
    (*pcVar3)();
    local_4._0_1_ = 5;
    FUN_004040a0(1);
  }
  auStack_100[0] = uStack_101;
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
  local_4._0_1_ = 9;
  iVar2 = FUN_005acbc0(local_c8,auStack_100,local_98,auStack_a8,0);
  auStack_b8[0] = *(undefined1 *)(iVar2 + 0x14);
  local_4._0_1_ = 10;
  FUN_004040a0(0);
  FUN_0040cc00(iVar2 + 0x14,0,0xffffffff);
  auStack_ec[0] = auStack_b8[0];
  local_4._0_1_ = 0xb;
  FUN_004040a0(0);
  FUN_0040cc00(auStack_b8,0,0xffffffff);
  local_4._0_1_ = 0xc;
  FUN_0040cc00(auStack_ec,0,0xffffffff);
  local_4._0_1_ = 0xb;
  FUN_004040a0(1);
  local_4._0_1_ = 10;
  FUN_004040a0(1);
  local_4._0_1_ = 9;
  FUN_005acca0();
  local_4._0_1_ = 5;
  FUN_004040a0(1);
  auStack_100[0] = uStack_101;
  FUN_004040a0(0);
  uVar5 = 0xffffffff;
  pcVar6 = &DAT_006b3f70;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(&DAT_006b3f70,~uVar5 - 1);
  local_4._0_1_ = 0xd;
  uVar4 = FUN_004e8d40(auStack_ec,local_d8,auStack_100,0);
  local_4._0_1_ = 0xe;
  FUN_0040cc00(uVar4,0,0xffffffff);
  local_4._0_1_ = 0xd;
  FUN_004040a0(1);
  local_4._0_1_ = 5;
  FUN_004040a0(1);
  *param_1 = local_d8[0];
  FUN_004040a0(0);
  FUN_0040cc00(local_d8,0,0xffffffff);
  local_dc = 1;
  local_4._0_1_ = 3;
  FUN_004040a0(1);
  local_4 = CONCAT31(local_4._1_3_,2);
  FUN_004040a0(1);
  if (iStack_c4 != 0) {
    cVar1 = *(char *)(iStack_c4 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0(iStack_c4 + -1);
    }
    else {
      *(char *)(iStack_c4 + -1) = cVar1 + -1;
    }
  }
  iStack_c4 = 0;
  uStack_c0 = 0;
  uStack_bc = 0;
  if (iStack_d4 != 0) {
    cVar1 = *(char *)(iStack_d4 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0(iStack_d4 + -1);
    }
    else {
      *(char *)(iStack_d4 + -1) = cVar1 + -1;
    }
  }
  ExceptionList = pvStack_c;
  return param_1;
}

