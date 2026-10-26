/*
 * FUN_0041d6f0 at 0041d6f0
 * undefined FUN_0041d6f0(void)
 * Address ranges: 0041d6f0-0041dae4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_0041d6f0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  char *pcVar6;
  float10 fVar7;
  undefined1 local_d5;
  undefined1 local_d4 [16];
  uint local_c4;
  undefined4 *local_c0;
  undefined1 local_bc [4];
  int local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined1 local_ac [16];
  undefined1 local_9c [4];
  int local_98;
  undefined4 *local_8c;
  undefined1 local_88 [124];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00621cdf;
  local_c = ExceptionList;
  local_c4 = 0;
  ExceptionList = &local_c;
  local_8c = param_1;
  FUN_004040a0(0);
  uVar5 = 0xffffffff;
  pcVar6 = s_JesterMax_0068f388;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar2 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_JesterMax_0068f388,~uVar5 - 1);
  local_ac[0] = local_d5;
  local_4 = 0;
  FUN_004040a0(0);
  uVar5 = 0xffffffff;
  pcVar6 = &DAT_0068f394;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar2 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(&DAT_0068f394,~uVar5 - 1);
  local_4._0_1_ = 1;
  FUN_0042b270(param_2,local_ac,param_3,local_d4);
  local_4._0_1_ = 4;
  FUN_004040a0(1);
  local_4._0_1_ = 3;
  FUN_004040a0(1);
  local_c0 = param_1 + 0x8c;
  *(undefined1 *)local_c0 = local_d5;
  param_1[0x8d] = 0;
  param_1[0x8e] = 0;
  param_1[0x8f] = 0;
  local_4._0_1_ = 5;
  FUN_0041e9e0(0);
  puVar1 = param_1 + 0x91;
  local_4._0_1_ = 6;
  *param_1 = &PTR_FUN_0064b88c;
  *puVar1 = 0;
  local_d4[0] = local_d5;
  FUN_004040a0(0);
  uVar5 = 0xffffffff;
  pcVar6 = s_JesterMax_0068f388;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar2 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_JesterMax_0068f388,~uVar5 - 1);
  local_4._0_1_ = 7;
  FUN_004253c0(local_9c,local_d4);
  local_4._0_1_ = 9;
  FUN_004040a0(1);
  FUN_00425570(local_bc);
  local_4._0_1_ = 10;
  local_d4[0] = local_d5;
  FUN_004040a0(0);
  uVar5 = 0xffffffff;
  pcVar6 = s_MinPlayerDistance_0068f3fc;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar2 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_MinPlayerDistance_0068f3fc,~uVar5 - 1);
  local_4._0_1_ = 0xb;
  iVar3 = FUN_005ac9d0(local_d4,local_bc,100,local_9c,0);
  local_4._0_1_ = 0xc;
  if (*(float *)(iVar3 + 0x60) == 0.0) {
    fVar7 = (float10)FUN_005ad390(iVar3 + 0x14,&local_d5);
    *(float *)(iVar3 + 0x60) = (float)fVar7;
  }
  else {
    fVar7 = (float10)*(float *)(iVar3 + 0x60);
  }
  param_1[0x92] = (float)fVar7;
  local_4._0_1_ = 0xb;
  FUN_005acca0();
  local_4._0_1_ = 10;
  FUN_004040a0(1);
  local_d4[0] = local_d5;
  FUN_004040a0(0);
  uVar5 = 0xffffffff;
  pcVar6 = s_InvisibleTime_0068f3ec;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar2 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_InvisibleTime_0068f3ec,~uVar5 - 1);
  local_4._0_1_ = 0xd;
  iVar3 = FUN_005ac8b0(local_d4,local_bc,0x40000000,local_9c,0);
  local_4._0_1_ = 0xe;
  if (*(float *)(iVar3 + 0x60) == 0.0) {
    fVar7 = (float10)FUN_005ad390(iVar3 + 0x14,&local_d5);
    *(float *)(iVar3 + 0x60) = (float)fVar7;
  }
  uVar4 = __ftol();
  param_1[0x93] = uVar4;
  local_4._0_1_ = 0xd;
  FUN_005acca0();
  local_4._0_1_ = 10;
  FUN_004040a0(1);
  local_c0 = operator_new(0x14f0);
  local_4._0_1_ = 0xf;
  if (local_c0 == (void *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_0040cad0(local_88,param_1 + 0x1b,s_VanishEffect_0068f3dc);
    local_c4 = 1;
    local_4 = CONCAT31(local_4._1_3_,0x10);
    uVar4 = FUN_00476860(uVar4);
  }
  *puVar1 = uVar4;
  local_4 = 10;
  if ((local_c4 & 1) != 0) {
    FUN_004040a0(1);
  }
  FUN_00509a90(*puVar1,puVar1);
  if (local_b8 != 0) {
    cVar2 = *(char *)(local_b8 + -1);
    if ((cVar2 == '\0') || (cVar2 == -1)) {
      FUN_005fe5f0(local_b8 + -1);
    }
    else {
      *(char *)(local_b8 + -1) = cVar2 + -1;
    }
  }
  local_b8 = 0;
  local_b4 = 0;
  local_b0 = 0;
  if (local_98 != 0) {
    cVar2 = *(char *)(local_98 + -1);
    if ((cVar2 == '\0') || (cVar2 == -1)) {
      FUN_005fe5f0(local_98 + -1);
    }
    else {
      *(char *)(local_98 + -1) = cVar2 + -1;
    }
  }
  ExceptionList = local_c;
  return param_1;
}

