/*
 * FUN_00425d30 at 00425d30
 * undefined FUN_00425d30(void)
 * Address ranges: 00425d30-004261ea
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_00425d30(undefined4 *param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  uint uVar6;
  char *pcVar7;
  float10 fVar8;
  undefined1 local_ad;
  undefined1 local_ac [16];
  undefined1 local_9c [16];
  undefined1 local_8c [4];
  int local_88;
  undefined4 *local_7c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00622990;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_7c = param_1;
  FUN_00425220(param_2);
  local_4 = 0;
  *param_1 = &PTR_FUN_0064bd90;
  FUN_00425390(local_8c);
  local_4._0_1_ = 1;
  FUN_00425570(local_9c);
  local_4._0_1_ = 2;
  local_ac[0] = local_ad;
  FUN_004040a0(0);
  uVar6 = 0xffffffff;
  pcVar7 = s_AttackRange_0068fb78;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_AttackRange_0068fb78,~uVar6 - 1);
  local_4._0_1_ = 3;
  iVar2 = FUN_005ac8b0(local_ac,local_9c,0x42c80000,local_8c,0);
  local_4._0_1_ = 4;
  if (*(float *)(iVar2 + 0x60) == 0.0) {
    fVar8 = (float10)FUN_005ad390(iVar2 + 0x14,&local_ad);
    *(float *)(iVar2 + 0x60) = (float)fVar8;
  }
  else {
    fVar8 = (float10)*(float *)(iVar2 + 0x60);
  }
  param_1[0xc] = (float)fVar8;
  local_4._0_1_ = 3;
  FUN_005acca0();
  local_4._0_1_ = 2;
  FUN_004040a0(1);
  local_ac[0] = local_ad;
  FUN_004040a0(0);
  uVar6 = 0xffffffff;
  pcVar7 = s_Health_0068fb70;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_Health_0068fb70,~uVar6 - 1);
  local_4 = CONCAT31(local_4._1_3_,5);
  iVar3 = FUN_005ac9d0(local_ac,local_9c,5,local_8c,0);
  iVar2 = *(int *)(iVar3 + 100);
  if (iVar2 == -0x80000000) {
    puVar4 = *(undefined1 **)(iVar3 + 0x18);
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &DAT_0064a3b4;
    }
    iVar2 = FUN_0060af10(puVar4);
    *(int *)(iVar3 + 100) = iVar2;
  }
  param_1[0xb] = iVar2;
  FUN_005acca0();
  local_4._0_1_ = 2;
  FUN_004040a0(1);
  local_ac[0] = local_ad;
  FUN_004040a0(0);
  uVar6 = 0xffffffff;
  pcVar7 = s_HitMotionFactor_0068fb60;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_HitMotionFactor_0068fb60,~uVar6 - 1);
  local_4._0_1_ = 6;
  iVar2 = FUN_005ac8b0(local_ac,local_9c,0x3f800000,local_8c,0);
  local_4._0_1_ = 7;
  if (*(float *)(iVar2 + 0x60) == 0.0) {
    fVar8 = (float10)FUN_005ad390(iVar2 + 0x14,&local_ad);
    *(float *)(iVar2 + 0x60) = (float)fVar8;
  }
  else {
    fVar8 = (float10)*(float *)(iVar2 + 0x60);
  }
  param_1[0xd] = (float)fVar8;
  local_4._0_1_ = 6;
  FUN_005acca0();
  local_4._0_1_ = 2;
  FUN_004040a0(1);
  local_ac[0] = local_ad;
  FUN_004040a0(0);
  uVar6 = 0xffffffff;
  pcVar7 = s_PlayerScore_0068fb54;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_PlayerScore_0068fb54,~uVar6 - 1);
  local_4 = CONCAT31(local_4._1_3_,8);
  iVar3 = FUN_005ac9d0(local_ac,local_9c,0,local_8c,0);
  iVar2 = *(int *)(iVar3 + 100);
  if (iVar2 == -0x80000000) {
    puVar4 = *(undefined1 **)(iVar3 + 0x18);
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &DAT_0064a3b4;
    }
    iVar2 = FUN_0060af10(puVar4);
    *(int *)(iVar3 + 100) = iVar2;
  }
  param_1[0xe] = iVar2;
  FUN_005acca0();
  local_4._0_1_ = 2;
  FUN_004040a0(1);
  local_ac[0] = local_ad;
  FUN_004040a0(0);
  uVar6 = 0xffffffff;
  pcVar7 = s_RotationPerSec_0068fb44;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_RotationPerSec_0068fb44,~uVar6 - 1);
  local_4._0_1_ = 9;
  iVar2 = FUN_005ac8b0(local_ac,local_9c,0x4116cbe4,local_8c,0);
  local_4._0_1_ = 10;
  if (*(float *)(iVar2 + 0x60) == 0.0) {
    fVar8 = (float10)FUN_005ad390(iVar2 + 0x14,&local_ad);
    *(float *)(iVar2 + 0x60) = (float)fVar8;
  }
  else {
    fVar8 = (float10)*(float *)(iVar2 + 0x60);
  }
  param_1[10] = (float)fVar8;
  local_4._0_1_ = 9;
  FUN_005acca0();
  local_4._0_1_ = 2;
  FUN_004040a0(1);
  local_ac[0] = local_ad;
  FUN_004040a0(0);
  uVar6 = 0xffffffff;
  pcVar7 = s_TimeToRememberVisual_0068fb2c;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_TimeToRememberVisual_0068fb2c,~uVar6 - 1);
  local_4._0_1_ = 0xb;
  iVar2 = FUN_005ac9d0(local_ac,local_9c,2,local_8c,0);
  local_4._0_1_ = 0xc;
  if (*(float *)(iVar2 + 0x60) == 0.0) {
    fVar8 = (float10)FUN_005ad390(iVar2 + 0x14,&local_ad);
    *(float *)(iVar2 + 0x60) = (float)fVar8;
  }
  uVar5 = __ftol();
  param_1[9] = uVar5;
  local_4._0_1_ = 0xb;
  FUN_005acca0();
  local_4._0_1_ = 2;
  FUN_004040a0(1);
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_004040a0(1);
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

