/*
 * FUN_004176c0 at 004176c0
 * undefined FUN_004176c0(void)
 * Address ranges: 004176c0-004179fb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_004176c0(undefined4 param_1,int param_2,undefined4 param_3)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  char *pcVar7;
  float10 fVar8;
  undefined1 local_cd;
  undefined4 *local_cc;
  undefined1 local_c8 [4];
  char *local_c4;
  undefined1 local_b8 [4];
  char *local_b4;
  undefined1 local_a8 [4];
  char *local_a4;
  undefined1 local_98 [4];
  int local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined1 local_88 [4];
  int local_84;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00621365;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pcVar2 = (char *)FUN_00417c00(*(undefined4 *)(param_2 + 0x2c));
  local_b8[0] = local_cd;
  FUN_004040a0(0);
  uVar4 = 0xffffffff;
  pcVar7 = pcVar2;
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
      *(undefined4 *)local_b4 = *(undefined4 *)pcVar2;
      pcVar2 = pcVar2 + 4;
      local_b4 = local_b4 + 4;
    }
    for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *local_b4 = *pcVar2;
      pcVar2 = pcVar2 + 1;
      local_b4 = local_b4 + 1;
    }
    FUN_00404190(uVar4);
  }
  local_4 = 0;
  pcVar2 = (char *)FUN_00417cf0(*(undefined4 *)(param_2 + 0x2c));
  local_a8[0] = local_cd;
  FUN_004040a0(0);
  uVar4 = 0xffffffff;
  pcVar7 = pcVar2;
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
      *(undefined4 *)local_a4 = *(undefined4 *)pcVar2;
      pcVar2 = pcVar2 + 4;
      local_a4 = local_a4 + 4;
    }
    for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *local_a4 = *pcVar2;
      pcVar2 = pcVar2 + 1;
      local_a4 = local_a4 + 1;
    }
    FUN_00404190(uVar4);
  }
  puVar6 = local_cc;
  local_4._0_1_ = 1;
  FUN_0042dc80(param_1,local_a8,param_3,param_2,local_b8);
  local_4._0_1_ = 4;
  FUN_004040a0(1);
  local_4 = CONCAT31(local_4._1_3_,3);
  FUN_004040a0(1);
  *puVar6 = &PTR_FUN_0064b488;
  pcVar2 = (char *)FUN_00417c00(*(undefined4 *)(param_2 + 0x2c));
  local_c8[0] = local_cd;
  FUN_004040a0(0);
  uVar4 = 0xffffffff;
  pcVar7 = pcVar2;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4 - 1;
  cVar1 = FUN_00401940(uVar4,1);
  if (cVar1 != '\0') {
    pcVar7 = local_c4;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pcVar7 = *(undefined4 *)pcVar2;
      pcVar2 = pcVar2 + 4;
      pcVar7 = pcVar7 + 4;
    }
    for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pcVar7 = *pcVar2;
      pcVar2 = pcVar2 + 1;
      pcVar7 = pcVar7 + 1;
    }
    FUN_00404190(uVar4);
    puVar6 = local_cc;
  }
  local_4._0_1_ = 5;
  FUN_004253c0(local_88,local_c8);
  local_4._0_1_ = 7;
  FUN_004040a0(1);
  FUN_00425570(local_98);
  local_c8[0] = local_cd;
  local_4 = CONCAT31(local_4._1_3_,8);
  FUN_004040a0(0);
  uVar4 = 0xffffffff;
  pcVar2 = s_FallSpeed_0068ec70;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4 - 1;
  cVar1 = FUN_00401940(uVar4,1);
  if (cVar1 != '\0') {
    pcVar2 = s_FallSpeed_0068ec70;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)local_c4 = *(undefined4 *)pcVar2;
      pcVar2 = pcVar2 + 4;
      local_c4 = local_c4 + 4;
    }
    for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *local_c4 = *pcVar2;
      pcVar2 = pcVar2 + 1;
      local_c4 = local_c4 + 1;
    }
    FUN_00404190(uVar4);
    puVar6 = local_cc;
  }
  local_4._0_1_ = 9;
  iVar3 = FUN_005ac9d0(local_c8,local_98,0x32,local_88,0);
  local_4._0_1_ = 10;
  if (*(float *)(iVar3 + 0x60) == 0.0) {
    fVar8 = (float10)FUN_005ad390(iVar3 + 0x14,&local_cd);
    *(float *)(iVar3 + 0x60) = (float)fVar8;
  }
  else {
    fVar8 = (float10)*(float *)(iVar3 + 0x60);
  }
  puVar6[0x77] = (float)fVar8;
  local_4._0_1_ = 9;
  FUN_005acca0();
  local_4 = CONCAT31(local_4._1_3_,8);
  FUN_004040a0(1);
  if (local_94 != 0) {
    cVar1 = *(char *)(local_94 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0(local_94 + -1);
    }
    else {
      *(char *)(local_94 + -1) = cVar1 + -1;
    }
  }
  local_94 = 0;
  local_90 = 0;
  local_8c = 0;
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
  return puVar6;
}

