/*
 * FUN_0042b8b0 at 0042b8b0
 * undefined FUN_0042b8b0(void)
 * Address ranges: 0042b8b0-0042bb91
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall
FUN_0042b8b0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

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
  uint local_a4;
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
  puStack_8 = &LAB_00623222;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_7c = param_1;
  FUN_0042a700(param_2,param_3,param_4,param_5);
  local_4 = 0;
  param_1[0x7c] = 0xffffffff;
  FUN_00426e00(param_5);
  local_4._0_1_ = 1;
  *param_1 = &PTR_FUN_0064c1a4;
  FUN_004253c0(local_8c,param_5);
  local_4._0_1_ = 2;
  FUN_00425570(local_9c);
  local_4._0_1_ = 3;
  local_ac[0] = local_ad;
  FUN_004040a0(0);
  uVar3 = 0xffffffff;
  pcVar5 = s_ShootMotionCollisionStart_0069000c;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3 - 1;
  cVar1 = FUN_00401940(uVar3,1);
  if (cVar1 != '\0') {
    pcVar5 = s_ShootMotionCollisionStart_0069000c;
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
    local_a8[uVar3] = '\0';
    local_a4 = uVar3;
  }
  local_4._0_1_ = 4;
  iVar2 = FUN_005ac8b0(local_ac,local_9c,0x3ecccccd,local_8c,0);
  local_4._0_1_ = 5;
  if (*(float *)(iVar2 + 0x60) == 0.0) {
    fVar7 = (float10)FUN_005ad390(iVar2 + 0x14,&local_ad);
    *(float *)(iVar2 + 0x60) = (float)fVar7;
  }
  else {
    fVar7 = (float10)*(float *)(iVar2 + 0x60);
  }
  param_1[0x87] = (float)fVar7;
  local_4._0_1_ = 4;
  FUN_005acca0();
  local_4._0_1_ = 3;
  FUN_004040a0(1);
  local_ac[0] = local_ad;
  FUN_004040a0(0);
  uVar3 = 0xffffffff;
  pcVar5 = s_ShootMotionCollisionEnd_0068fff4;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3 - 1;
  cVar1 = FUN_00401940(uVar3,1);
  if (cVar1 != '\0') {
    pcVar5 = s_ShootMotionCollisionEnd_0068fff4;
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
    local_a8[uVar3] = '\0';
    local_a4 = uVar3;
  }
  local_4._0_1_ = 6;
  iVar2 = FUN_005ac8b0(local_ac,local_9c,0x3f19999a,local_8c,0);
  local_4._0_1_ = 7;
  if (*(float *)(iVar2 + 0x60) == 0.0) {
    fVar7 = (float10)FUN_005ad390(iVar2 + 0x14,&local_ad);
    *(float *)(iVar2 + 0x60) = (float)fVar7;
  }
  else {
    fVar7 = (float10)*(float *)(iVar2 + 0x60);
  }
  param_1[0x88] = (float)fVar7;
  local_4 = CONCAT31(local_4._1_3_,6);
  FUN_005acca0();
  if (local_a8 != (char *)0x0) {
    cVar1 = local_a8[-1];
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0(local_a8 + -1);
    }
    else {
      local_a8[-1] = cVar1 + -1;
    }
  }
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

