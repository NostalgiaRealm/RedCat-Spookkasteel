/*
 * FUN_00413570 at 00413570
 * undefined FUN_00413570(void)
 * Address ranges: 00413570-00413888
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall
FUN_00413570(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  float10 fVar7;
  undefined1 local_cd;
  undefined1 local_cc [4];
  char *local_c8;
  undefined1 local_bc [4];
  char *local_b8;
  undefined1 local_ac [4];
  char *local_a8;
  undefined1 local_9c [4];
  int local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 *local_8c;
  undefined1 local_88 [4];
  int local_84;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00621005;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_8c = param_1;
  FUN_004040a0(0);
  uVar3 = 0xffffffff;
  pcVar5 = s_spider3_0068ebdc;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3 - 1;
  cVar1 = FUN_00401940(uVar3,1);
  if (cVar1 != '\0') {
    pcVar5 = s_spider3_0068ebdc;
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)local_b8 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      local_b8 = local_b8 + 4;
    }
    for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *local_b8 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      local_b8 = local_b8 + 1;
    }
    FUN_00404190(uVar3);
  }
  local_4 = 0;
  local_ac[0] = local_cd;
  FUN_004040a0(0);
  uVar3 = 0xffffffff;
  pcVar5 = s_spiderr_act_0068ebe4;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3 - 1;
  cVar1 = FUN_00401940(uVar3,1);
  if (cVar1 != '\0') {
    pcVar5 = s_spiderr_act_0068ebe4;
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)local_a8 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      local_a8 = local_a8 + 4;
    }
    for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *local_a8 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      local_a8 = local_a8 + 1;
    }
    FUN_00404190(uVar3);
  }
  local_4._0_1_ = 1;
  FUN_00429e10(param_2,local_ac,param_4,param_3,local_bc);
  local_4._0_1_ = 4;
  FUN_004040a0(1);
  local_4 = CONCAT31(local_4._1_3_,3);
  FUN_004040a0(1);
  *param_1 = &PTR_FUN_0064b10c;
  local_cc[0] = local_cd;
  FUN_004040a0(0);
  uVar3 = 0xffffffff;
  pcVar5 = s_spider3_0068ebdc;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3 - 1;
  cVar1 = FUN_00401940(uVar3,1);
  if (cVar1 != '\0') {
    pcVar5 = s_spider3_0068ebdc;
    pcVar6 = local_c8;
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pcVar6 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      pcVar6 = pcVar6 + 1;
    }
    FUN_00404190(uVar3);
  }
  local_4._0_1_ = 5;
  FUN_004253c0(local_88,local_cc);
  local_4._0_1_ = 7;
  FUN_004040a0(1);
  FUN_00425570(local_9c);
  local_cc[0] = local_cd;
  local_4 = CONCAT31(local_4._1_3_,8);
  FUN_004040a0(0);
  uVar3 = 0xffffffff;
  pcVar5 = s_FallSpeed_0068ec70;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3 - 1;
  cVar1 = FUN_00401940(uVar3,1);
  if (cVar1 != '\0') {
    pcVar5 = s_FallSpeed_0068ec70;
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)local_c8 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      local_c8 = local_c8 + 4;
    }
    for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *local_c8 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      local_c8 = local_c8 + 1;
    }
    FUN_00404190(uVar3);
  }
  local_4._0_1_ = 9;
  iVar2 = FUN_005ac9d0(local_cc,local_9c,0x32,local_88,0);
  local_4._0_1_ = 10;
  if (*(float *)(iVar2 + 0x60) == 0.0) {
    fVar7 = (float10)FUN_005ad390(iVar2 + 0x14,&local_cd);
    *(float *)(iVar2 + 0x60) = (float)fVar7;
  }
  else {
    fVar7 = (float10)*(float *)(iVar2 + 0x60);
  }
  param_1[0x7c] = (float)fVar7;
  local_4._0_1_ = 9;
  FUN_005acca0();
  local_4 = CONCAT31(local_4._1_3_,8);
  FUN_004040a0(1);
  if (local_98 != 0) {
    cVar1 = *(char *)(local_98 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0(local_98 + -1);
    }
    else {
      *(char *)(local_98 + -1) = cVar1 + -1;
    }
  }
  local_98 = 0;
  local_94 = 0;
  local_90 = 0;
  if (local_84 != 0) {
    cVar1 = *(char *)(local_84 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0(local_84 + -1);
    }
    else {
      *(char *)(local_84 + -1) = cVar1 + -1;
    }
  }
  ExceptionList = local_c;
  return param_1;
}

