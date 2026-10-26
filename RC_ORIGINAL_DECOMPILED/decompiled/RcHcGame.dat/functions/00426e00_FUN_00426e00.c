/*
 * FUN_00426e00 at 00426e00
 * undefined FUN_00426e00(void)
 * Address ranges: 00426e00-00426f99
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_00426e00(undefined4 *param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  float10 fVar5;
  undefined1 local_ad;
  undefined1 local_ac [4];
  int local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
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
  puStack_8 = &LAB_00622b34;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_8c = param_1;
  FUN_00425220(param_2);
  local_4 = 0;
  *param_1 = &PTR_FUN_0064bda8;
  FUN_00425390(local_88);
  local_4._0_1_ = 1;
  FUN_00425570(local_9c);
  local_ac[0] = local_ad;
  uVar3 = 0xffffffff;
  local_4._0_1_ = 2;
  pcVar4 = s_Damage_0068fccc;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  local_a8 = 0;
  local_a4 = 0;
  local_a0 = 0;
  FUN_004040f0(s_Damage_0068fccc,~uVar3 - 1);
  local_4._0_1_ = 3;
  iVar2 = FUN_005ac9d0(local_ac,local_9c,1,local_88,0);
  local_4._0_1_ = 4;
  if (*(float *)(iVar2 + 0x60) == 0.0) {
    fVar5 = (float10)FUN_005ad390(iVar2 + 0x14,&local_ad);
    *(float *)(iVar2 + 0x60) = (float)fVar5;
  }
  else {
    fVar5 = (float10)*(float *)(iVar2 + 0x60);
  }
  param_1[9] = (float)fVar5;
  local_4 = CONCAT31(local_4._1_3_,3);
  FUN_005acca0();
  if (local_a8 != 0) {
    cVar1 = *(char *)(local_a8 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0((char *)(local_a8 + -1));
    }
    else {
      *(char *)(local_a8 + -1) = cVar1 + -1;
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

