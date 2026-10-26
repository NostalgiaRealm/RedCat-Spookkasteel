/*
 * FUN_00494cf0 at 00494cf0
 * undefined FUN_00494cf0(void)
 * Address ranges: 00494cf0-004953f7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __fastcall FUN_00494cf0(undefined4 *param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  float10 fVar6;
  undefined1 local_ad;
  undefined1 local_ac [16];
  undefined1 local_9c [16];
  undefined1 local_8c [16];
  undefined4 *local_7c;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062b96e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_7c = param_1;
  FUN_00521de0();
  local_4 = 0;
  *param_1 = &PTR_FUN_0064e594;
  local_9c[0] = local_ad;
  FUN_004040a0(0);
  uVar4 = 0xffffffff;
  pcVar5 = s_Player_006902e0;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_Player_006902e0,~uVar4 - 1);
  local_ac[0] = local_ad;
  local_4._0_1_ = 1;
  FUN_004040a0(0);
  uVar4 = 0xffffffff;
  pcVar5 = s_StrafeSpeed_00693d6c;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_StrafeSpeed_00693d6c,~uVar4 - 1);
  local_4._0_1_ = 2;
  uVar2 = FUN_00436f90(local_8c);
  local_4._0_1_ = 3;
  iVar3 = FUN_005ac8b0(local_ac,local_9c,0x41c80000,uVar2,0);
  local_4._0_1_ = 4;
  if (*(float *)(iVar3 + 0x60) == 0.0) {
    fVar6 = (float10)FUN_005ad390(iVar3 + 0x14,&local_ad);
    *(float *)(iVar3 + 0x60) = (float)fVar6;
  }
  else {
    fVar6 = (float10)*(float *)(iVar3 + 0x60);
  }
  param_1[0x206] = (float)fVar6;
  local_4._0_1_ = 3;
  FUN_005acca0();
  local_4._0_1_ = 2;
  FUN_004040a0(1);
  local_4._0_1_ = 1;
  FUN_004040a0(1);
  local_4._0_1_ = 0;
  FUN_004040a0(1);
  local_ac[0] = local_ad;
  FUN_004040a0(0);
  uVar4 = 0xffffffff;
  pcVar5 = s_Player_006902e0;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_Player_006902e0,~uVar4 - 1);
  local_4._0_1_ = 5;
  local_9c[0] = local_ad;
  FUN_004040a0(0);
  uVar4 = 0xffffffff;
  pcVar5 = s_WalkBackwardSpeed_00693d58;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_WalkBackwardSpeed_00693d58,~uVar4 - 1);
  local_4._0_1_ = 6;
  uVar2 = FUN_00436f90(local_8c);
  local_4._0_1_ = 7;
  iVar3 = FUN_005ac8b0(local_9c,local_ac,0x3fcccccd,uVar2,0);
  local_4._0_1_ = 8;
  if (*(float *)(iVar3 + 0x60) == 0.0) {
    fVar6 = (float10)FUN_005ad390(iVar3 + 0x14,&local_ad);
    *(float *)(iVar3 + 0x60) = (float)fVar6;
  }
  else {
    fVar6 = (float10)*(float *)(iVar3 + 0x60);
  }
  param_1[0x207] = (float)fVar6;
  local_4._0_1_ = 7;
  FUN_005acca0();
  local_4._0_1_ = 6;
  FUN_004040a0(1);
  local_4._0_1_ = 5;
  FUN_004040a0(1);
  local_4._0_1_ = 0;
  FUN_004040a0(1);
  local_ac[0] = local_ad;
  FUN_004040a0(0);
  uVar4 = 0xffffffff;
  pcVar5 = s_Player_006902e0;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_Player_006902e0,~uVar4 - 1);
  local_4._0_1_ = 9;
  local_9c[0] = local_ad;
  FUN_004040a0(0);
  uVar4 = 0xffffffff;
  pcVar5 = s_DetectionRange_00693d48;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_DetectionRange_00693d48,~uVar4 - 1);
  local_4._0_1_ = 10;
  uVar2 = FUN_00436f90(local_8c);
  local_4._0_1_ = 0xb;
  iVar3 = FUN_005ac8b0(local_9c,local_ac,0,uVar2,0);
  local_4._0_1_ = 0xc;
  if (*(float *)(iVar3 + 0x60) == 0.0) {
    fVar6 = (float10)FUN_005ad390(iVar3 + 0x14,&local_ad);
    *(float *)(iVar3 + 0x60) = (float)fVar6;
  }
  else {
    fVar6 = (float10)*(float *)(iVar3 + 0x60);
  }
  param_1[0x208] = (float)fVar6;
  local_4._0_1_ = 0xb;
  FUN_005acca0();
  local_4._0_1_ = 10;
  FUN_004040a0(1);
  local_4._0_1_ = 9;
  FUN_004040a0(1);
  local_4._0_1_ = 0;
  FUN_004040a0(1);
  local_ac[0] = local_ad;
  FUN_004040a0(0);
  uVar4 = 0xffffffff;
  pcVar5 = s_Player_006902e0;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_Player_006902e0,~uVar4 - 1);
  local_9c[0] = local_ad;
  local_4._0_1_ = 0xd;
  FUN_004040a0(0);
  uVar4 = 0xffffffff;
  pcVar5 = s_SJumpMinTapTime_00693d38;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_SJumpMinTapTime_00693d38,~uVar4 - 1);
  local_4._0_1_ = 0xe;
  uVar2 = FUN_00436f90(local_8c);
  local_4._0_1_ = 0xf;
  iVar3 = FUN_005ac8b0(local_9c,local_ac,0,uVar2,0);
  local_4._0_1_ = 0x10;
  if (*(float *)(iVar3 + 0x60) == 0.0) {
    fVar6 = (float10)FUN_005ad390(iVar3 + 0x14,&local_ad);
    *(float *)(iVar3 + 0x60) = (float)fVar6;
  }
  else {
    fVar6 = (float10)*(float *)(iVar3 + 0x60);
  }
  param_1[0x209] = (float)fVar6;
  local_4._0_1_ = 0xf;
  FUN_005acca0();
  local_4._0_1_ = 0xe;
  FUN_004040a0(1);
  local_4._0_1_ = 0xd;
  FUN_004040a0(1);
  local_4._0_1_ = 0;
  FUN_004040a0(1);
  local_ac[0] = local_ad;
  FUN_004040a0(0);
  uVar4 = 0xffffffff;
  pcVar5 = s_Player_006902e0;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_Player_006902e0,~uVar4 - 1);
  local_4._0_1_ = 0x11;
  local_9c[0] = local_ad;
  FUN_004040a0(0);
  uVar4 = 0xffffffff;
  pcVar5 = s_SJumpMaxTapTime_00693d28;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_SJumpMaxTapTime_00693d28,~uVar4 - 1);
  local_4._0_1_ = 0x12;
  uVar2 = FUN_00436f90(local_8c);
  local_4._0_1_ = 0x13;
  iVar3 = FUN_005ac8b0(local_9c,local_ac,0,uVar2,0);
  local_4._0_1_ = 0x14;
  if (*(float *)(iVar3 + 0x60) == 0.0) {
    fVar6 = (float10)FUN_005ad390(iVar3 + 0x14,&local_ad);
    *(float *)(iVar3 + 0x60) = (float)fVar6;
  }
  else {
    fVar6 = (float10)*(float *)(iVar3 + 0x60);
  }
  param_1[0x20a] = (float)fVar6;
  local_4._0_1_ = 0x13;
  FUN_005acca0();
  local_4._0_1_ = 0x12;
  FUN_004040a0(1);
  local_4._0_1_ = 0x11;
  FUN_004040a0(1);
  local_4._0_1_ = 0;
  FUN_004040a0(1);
  local_ac[0] = local_ad;
  FUN_004040a0(0);
  uVar4 = 0xffffffff;
  pcVar5 = s_Player_006902e0;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_Player_006902e0,~uVar4 - 1);
  local_4._0_1_ = 0x15;
  local_9c[0] = local_ad;
  FUN_004040a0(0);
  uVar4 = 0xffffffff;
  pcVar5 = s_SJumpHeightFactor_00693d14;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_SJumpHeightFactor_00693d14,~uVar4 - 1);
  local_4._0_1_ = 0x16;
  uVar2 = FUN_00436f90(local_8c);
  local_4._0_1_ = 0x17;
  iVar3 = FUN_005ac8b0(local_9c,local_ac,0,uVar2,0);
  local_4._0_1_ = 0x18;
  if (*(float *)(iVar3 + 0x60) == 0.0) {
    fVar6 = (float10)FUN_005ad390(iVar3 + 0x14,&local_ad);
    *(float *)(iVar3 + 0x60) = (float)fVar6;
  }
  else {
    fVar6 = (float10)*(float *)(iVar3 + 0x60);
  }
  param_1[0x20b] = (float)fVar6;
  local_4._0_1_ = 0x17;
  FUN_005acca0();
  local_4._0_1_ = 0x16;
  FUN_004040a0(1);
  local_4._0_1_ = 0x15;
  FUN_004040a0(1);
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_004040a0(1);
  ExceptionList = local_c;
  return param_1;
}

