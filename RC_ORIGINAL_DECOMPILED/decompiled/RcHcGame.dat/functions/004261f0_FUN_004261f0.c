/*
 * FUN_004261f0 at 004261f0
 * undefined FUN_004261f0(void)
 * Address ranges: 004261f0-00426553
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_004261f0(undefined4 *param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  float10 fVar7;
  undefined1 local_ad;
  undefined1 local_ac [4];
  char *local_a8;
  undefined1 local_9c [4];
  int local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined1 local_8c [4];
  int local_88;
  undefined4 *local_7c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006229f7;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_7c = param_1;
  FUN_00425220(param_2);
  local_4 = 0;
  *param_1 = &PTR_FUN_0064bd98;
  FUN_00425390(local_8c);
  local_4._0_1_ = 1;
  FUN_00425570(local_9c);
  local_4 = CONCAT31(local_4._1_3_,2);
  local_ac[0] = local_ad;
  FUN_004040a0(0);
  uVar3 = 0xffffffff;
  pcVar5 = s_SenseRange_0068faf8;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3 - 1;
  cVar1 = FUN_00401940(uVar3,1);
  if (cVar1 != '\0') {
    pcVar5 = s_SenseRange_0068faf8;
    pcVar6 = local_a8;
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
  local_4._0_1_ = 3;
  iVar2 = FUN_005ac9d0(local_ac,local_9c,0x32,local_8c,0);
  local_4._0_1_ = 4;
  if (*(float *)(iVar2 + 0x60) == 0.0) {
    fVar7 = (float10)FUN_005ad390(iVar2 + 0x14,&local_ad);
    *(float *)(iVar2 + 0x60) = (float)fVar7;
  }
  else {
    fVar7 = (float10)*(float *)(iVar2 + 0x60);
  }
  param_1[9] = (float)fVar7;
  local_4._0_1_ = 3;
  FUN_005acca0();
  local_4 = CONCAT31(local_4._1_3_,2);
  FUN_004040a0(1);
  local_ac[0] = local_ad;
  FUN_004040a0(0);
  uVar3 = 0xffffffff;
  pcVar5 = s_VisualRange_0068fb04;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3 - 1;
  cVar1 = FUN_00401940(uVar3,1);
  if (cVar1 != '\0') {
    pcVar5 = s_VisualRange_0068fb04;
    pcVar6 = local_a8;
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
  iVar2 = FUN_005ac9d0(local_ac,local_9c,0xfa,local_8c,0);
  local_4._0_1_ = 6;
  if (*(float *)(iVar2 + 0x60) == 0.0) {
    fVar7 = (float10)FUN_005ad390(iVar2 + 0x14,&local_ad);
    *(float *)(iVar2 + 0x60) = (float)fVar7;
  }
  else {
    fVar7 = (float10)*(float *)(iVar2 + 0x60);
  }
  param_1[10] = (float)fVar7;
  local_4._0_1_ = 5;
  FUN_005acca0();
  local_4 = CONCAT31(local_4._1_3_,2);
  FUN_004040a0(1);
  local_ac[0] = local_ad;
  FUN_004040a0(0);
  uVar3 = 0xffffffff;
  pcVar5 = s_ViewAngle_0068faec;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3 - 1;
  cVar1 = FUN_00401940(uVar3,1);
  if (cVar1 != '\0') {
    pcVar5 = s_ViewAngle_0068faec;
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
  local_4._0_1_ = 7;
  iVar2 = FUN_005ac8b0(local_ac,local_9c,0x40490fdb,local_8c,0);
  local_4._0_1_ = 8;
  if (*(float *)(iVar2 + 0x60) == 0.0) {
    fVar7 = (float10)FUN_005ad390(iVar2 + 0x14,&local_ad);
    *(float *)(iVar2 + 0x60) = (float)fVar7;
  }
  else {
    fVar7 = (float10)*(float *)(iVar2 + 0x60);
  }
  param_1[0xb] = (float)fVar7;
  local_4._0_1_ = 7;
  FUN_005acca0();
  local_4 = CONCAT31(local_4._1_3_,2);
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
  if (local_88 != 0) {
    cVar1 = *(char *)(local_88 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0(local_88 + -1);
    }
    else {
      *(char *)(local_88 + -1) = cVar1 + -1;
    }
  }
  ExceptionList = local_c;
  return param_1;
}

