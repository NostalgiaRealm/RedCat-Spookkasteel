/*
 * FUN_005a1490 at 005a1490
 * undefined FUN_005a1490(void)
 * Address ranges: 005a1490-005a18b7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_005a1490(int param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  undefined1 local_23c [4];
  char *local_238;
  undefined4 local_234;
  undefined4 local_230;
  undefined1 local_22c [4];
  char *local_228;
  undefined1 local_21c [4];
  char *local_218;
  undefined1 local_20c [4];
  char *local_208;
  undefined1 local_1fc [16];
  undefined1 local_1ec [16];
  undefined1 local_1dc [16];
  undefined1 local_1cc [448];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00644f81;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004040a0(0);
  uVar2 = 0xffffffff;
  pcVar4 = s_Legend_006a799c;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_Legend_006a799c,~uVar2 - 1);
  local_4 = 0;
  FUN_004040a0(0);
  uVar2 = 0xffffffff;
  pcVar4 = s_SR_CRASH_006a7990;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_SR_CRASH_006a7990,~uVar2 - 1);
  param_1 = param_1 + 0x14;
  local_4._0_1_ = 1;
  FUN_005ac9d0(local_1dc,local_1fc,0,param_1,0);
  local_4._0_1_ = 4;
  FUN_004040a0(1);
  local_4._0_1_ = 3;
  FUN_004040a0(1);
  FUN_004040a0(0);
  uVar2 = 0xffffffff;
  pcVar4 = s_Legend_006a799c;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_Legend_006a799c,~uVar2 - 1);
  local_4._0_1_ = 5;
  FUN_004040a0(0);
  uVar2 = 0xffffffff;
  pcVar4 = s_SR_FAILURE_006a793c;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_SR_FAILURE_006a793c,~uVar2 - 1);
  local_4._0_1_ = 6;
  FUN_005ac9d0(local_1ec,local_1cc,1,param_1,0);
  local_4._0_1_ = 9;
  FUN_004040a0(1);
  local_4 = CONCAT31(local_4._1_3_,8);
  FUN_004040a0(1);
  FUN_004040a0(0);
  uVar2 = 0xffffffff;
  pcVar4 = s_Legend_006a799c;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2 - 1;
  cVar1 = FUN_00401940(uVar2,1);
  if (cVar1 != '\0') {
    pcVar4 = s_Legend_006a799c;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)local_218 = *(undefined4 *)pcVar4;
      pcVar4 = pcVar4 + 4;
      local_218 = local_218 + 4;
    }
    for (uVar3 = uVar2 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *local_218 = *pcVar4;
      pcVar4 = pcVar4 + 1;
      local_218 = local_218 + 1;
    }
    FUN_00404190(uVar2);
  }
  local_4 = CONCAT31(local_4._1_3_,10);
  FUN_004040a0(0);
  uVar2 = 0xffffffff;
  pcVar4 = s_SR_SUCCESS_006a7948;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2 - 1;
  cVar1 = FUN_00401940(uVar2,1);
  if (cVar1 != '\0') {
    pcVar4 = s_SR_SUCCESS_006a7948;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)local_228 = *(undefined4 *)pcVar4;
      pcVar4 = pcVar4 + 4;
      local_228 = local_228 + 4;
    }
    for (uVar3 = uVar2 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *local_228 = *pcVar4;
      pcVar4 = pcVar4 + 1;
      local_228 = local_228 + 1;
    }
    FUN_00404190(uVar2);
  }
  local_4._0_1_ = 0xb;
  FUN_005ac9d0(local_22c,local_21c,2,param_1,0);
  local_4._0_1_ = 0xe;
  FUN_004040a0(1);
  local_4 = CONCAT31(local_4._1_3_,0xd);
  FUN_004040a0(1);
  FUN_004040a0(0);
  uVar2 = 0xffffffff;
  pcVar4 = s_Legend_006a799c;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2 - 1;
  cVar1 = FUN_00401940(uVar2,1);
  if (cVar1 != '\0') {
    pcVar4 = s_Legend_006a799c;
    pcVar5 = local_238;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
      pcVar4 = pcVar4 + 4;
      pcVar5 = pcVar5 + 4;
    }
    for (uVar3 = uVar2 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *pcVar5 = *pcVar4;
      pcVar4 = pcVar4 + 1;
      pcVar5 = pcVar5 + 1;
    }
    FUN_00404190(uVar2);
  }
  local_4 = CONCAT31(local_4._1_3_,0xf);
  FUN_004040a0(0);
  uVar2 = 0xffffffff;
  pcVar4 = s_SR_UNKNOWN_006a7984;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2 - 1;
  cVar1 = FUN_00401940(uVar2,1);
  if (cVar1 != '\0') {
    pcVar4 = s_SR_UNKNOWN_006a7984;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)local_208 = *(undefined4 *)pcVar4;
      pcVar4 = pcVar4 + 4;
      local_208 = local_208 + 4;
    }
    for (uVar3 = uVar2 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *local_208 = *pcVar4;
      pcVar4 = pcVar4 + 1;
      local_208 = local_208 + 1;
    }
    FUN_00404190(uVar2);
  }
  local_4._0_1_ = 0x10;
  FUN_005ac9d0(local_20c,local_23c,3,param_1,0);
  local_4 = CONCAT31(local_4._1_3_,0x13);
  FUN_004040a0(1);
  if (local_238 != (char *)0x0) {
    cVar1 = local_238[-1];
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0(local_238 + -1);
    }
    else {
      local_238[-1] = cVar1 + -1;
    }
  }
  local_238 = (char *)0x0;
  local_234 = 0;
  local_230 = 0;
  local_4._0_1_ = 0xd;
  FUN_005acca0();
  local_4._0_1_ = 8;
  FUN_005acca0();
  local_4 = CONCAT31(local_4._1_3_,3);
  FUN_005acca0();
  local_4 = 0xffffffff;
  FUN_005acca0();
  ExceptionList = local_c;
  return;
}

