/*
 * FUN_00481dd0 at 00481dd0
 * undefined FUN_00481dd0(void)
 * Address ranges: 00481dd0-00482087
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00481dd0(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  undefined1 local_d8 [4];
  int local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined1 local_c8 [4];
  char *local_c4;
  undefined1 local_b8 [4];
  char *local_b4;
  undefined1 local_a8 [16];
  undefined1 local_98 [4];
  int local_94;
  undefined1 local_88 [4];
  int local_84;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006294ea;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00536050(local_98);
  local_4 = 0;
  FUN_004040a0(0);
  uVar4 = 0xffffffff;
  pcVar6 = s_CUT_Scene_006930b4;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4 - 1;
  cVar1 = FUN_00401940(uVar4,1);
  if (cVar1 != '\0') {
    pcVar6 = s_CUT_Scene_006930b4;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)local_c4 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      local_c4 = local_c4 + 4;
    }
    for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *local_c4 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      local_c4 = local_c4 + 1;
    }
    FUN_00404190(uVar4);
  }
  local_4 = CONCAT31(local_4._1_3_,1);
  pcVar6 = *(char **)(param_1 + 4);
  if (pcVar6 == (char *)0x0) {
    pcVar6 = "";
  }
  FUN_004040a0(0);
  uVar4 = 0xffffffff;
  pcVar7 = pcVar6;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4 - 1;
  cVar1 = FUN_00401940(uVar4,1);
  if (cVar1 != '\0') {
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)local_b4 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      local_b4 = local_b4 + 4;
    }
    for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *local_b4 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      local_b4 = local_b4 + 1;
    }
    FUN_00404190(uVar4);
  }
  local_4._0_1_ = 2;
  iVar2 = FUN_005acaf0(local_b8,local_c8,&DAT_006b3f70,local_98,0);
  local_a8[0] = *(undefined1 *)(iVar2 + 0x14);
  local_4._0_1_ = 3;
  FUN_004040a0(0);
  FUN_0040cc00((undefined1 *)(iVar2 + 0x14),0,0xffffffff);
  local_4._0_1_ = 4;
  local_d8[0] = local_a8[0];
  FUN_004040a0(0);
  FUN_0040cc00(local_a8,0,0xffffffff);
  local_4._0_1_ = 9;
  FUN_004040a0(1);
  local_4._0_1_ = 8;
  FUN_005acca0();
  local_4._0_1_ = 7;
  FUN_004040a0(1);
  local_4._0_1_ = 6;
  FUN_004040a0(1);
  FUN_00480e10();
  uVar3 = FUN_0040cad0(local_88,param_1,&DAT_00693234);
  local_4._0_1_ = 10;
  FUN_00481160(uVar3);
  local_4 = CONCAT31(local_4._1_3_,6);
  if (local_84 != 0) {
    cVar1 = *(char *)(local_84 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0((char *)(local_84 + -1));
    }
    else {
      *(char *)(local_84 + -1) = cVar1 + -1;
    }
  }
  FUN_00481c30(local_d8);
  if (local_d4 != 0) {
    cVar1 = *(char *)(local_d4 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0(local_d4 + -1);
    }
    else {
      *(char *)(local_d4 + -1) = cVar1 + -1;
    }
  }
  local_d4 = 0;
  local_d0 = 0;
  local_cc = 0;
  if (local_94 != 0) {
    cVar1 = *(char *)(local_94 + -1);
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      *(char *)(local_94 + -1) = cVar1 + -1;
      ExceptionList = local_c;
      return;
    }
    FUN_005fe5f0(local_94 + -1);
  }
  ExceptionList = local_c;
  return;
}

