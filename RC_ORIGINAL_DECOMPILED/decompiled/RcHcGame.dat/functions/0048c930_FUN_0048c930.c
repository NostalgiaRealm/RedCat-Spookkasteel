/*
 * FUN_0048c930 at 0048c930
 * undefined FUN_0048c930(void)
 * Address ranges: 0048c930-0048cd4b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_0048c930(int param_1)

{
  char cVar1;
  int *piVar2;
  uint uVar3;
  char *pcVar4;
  int local_34;
  undefined1 local_30 [4];
  undefined1 local_2c [16];
  undefined1 local_1c [16];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062acb0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004040a0(0);
  uVar3 = 0xffffffff;
  pcVar4 = s_ImageBgnd_006935f0;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_ImageBgnd_006935f0,~uVar3 - 1);
  local_4 = 0;
  piVar2 = (int *)FUN_0048cd50(local_30,local_2c,param_1 + 0x170,param_1 + 0x180,0);
  local_4._0_1_ = 1;
  if (*(int *)(param_1 + 0x16c) != *piVar2) {
    if (*(int *)(param_1 + 0x16c) != 0) {
      FUN_004098d0();
    }
    *(int *)(param_1 + 0x16c) = *piVar2;
    FUN_005844b0();
  }
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_0057d310();
  local_4 = 0xffffffff;
  FUN_004040a0(1);
  FUN_004040a0(0);
  uVar3 = 0xffffffff;
  pcVar4 = s_ImageLogo_006935e4;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_ImageLogo_006935e4,~uVar3 - 1);
  local_4 = 2;
  piVar2 = (int *)FUN_0048cd50(local_30,local_2c,param_1 + 0x194,param_1 + 0x1a4,1);
  local_4._0_1_ = 3;
  if (*(int *)(param_1 + 400) != *piVar2) {
    if (*(int *)(param_1 + 400) != 0) {
      FUN_004098d0();
    }
    *(int *)(param_1 + 400) = *piVar2;
    FUN_005844b0();
  }
  local_4 = CONCAT31(local_4._1_3_,2);
  FUN_0057d310();
  local_4 = 0xffffffff;
  FUN_004040a0(1);
  FUN_004040a0(0);
  uVar3 = 0xffffffff;
  pcVar4 = s_ImagePotion_00693888;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_ImagePotion_00693888,~uVar3 - 1);
  local_4 = 4;
  piVar2 = (int *)FUN_0048cd50(local_30,local_2c,param_1 + 0x1d8,param_1 + 0x1e8,1);
  local_4._0_1_ = 5;
  if (*(int *)(param_1 + 0x1d4) != *piVar2) {
    if (*(int *)(param_1 + 0x1d4) != 0) {
      FUN_004098d0();
    }
    *(int *)(param_1 + 0x1d4) = *piVar2;
    FUN_005844b0();
  }
  local_4 = CONCAT31(local_4._1_3_,4);
  FUN_0057d310();
  local_4 = 0xffffffff;
  FUN_004040a0(1);
  FUN_004040a0(0);
  uVar3 = 0xffffffff;
  pcVar4 = s_ImageMoney_0069387c;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_ImageMoney_0069387c,~uVar3 - 1);
  local_4 = 6;
  piVar2 = (int *)FUN_0048cd50(local_30,local_2c,param_1 + 0x218,param_1 + 0x228,1);
  local_4._0_1_ = 7;
  if (*(int *)(param_1 + 0x214) != *piVar2) {
    if (*(int *)(param_1 + 0x214) != 0) {
      FUN_004098d0();
    }
    *(int *)(param_1 + 0x214) = *piVar2;
    FUN_005844b0();
  }
  local_4 = CONCAT31(local_4._1_3_,6);
  FUN_0057d310();
  local_4 = 0xffffffff;
  FUN_004040a0(1);
  FUN_004040a0(0);
  uVar3 = 0xffffffff;
  pcVar4 = s_ImageEnemy_00693870;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_ImageEnemy_00693870,~uVar3 - 1);
  local_4 = 8;
  piVar2 = (int *)FUN_0048cd50(local_30,local_2c,param_1 + 600,param_1 + 0x268,1);
  local_4._0_1_ = 9;
  if (*(int *)(param_1 + 0x254) != *piVar2) {
    if (*(int *)(param_1 + 0x254) != 0) {
      FUN_004098d0();
    }
    *(int *)(param_1 + 0x254) = *piVar2;
    FUN_005844b0();
  }
  local_4 = CONCAT31(local_4._1_3_,8);
  FUN_0057d310();
  local_4 = 0xffffffff;
  FUN_004040a0(1);
  FUN_004040a0(0);
  uVar3 = 0xffffffff;
  pcVar4 = s_ImageSecret_00693864;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_ImageSecret_00693864,~uVar3 - 1);
  local_4 = 10;
  piVar2 = (int *)FUN_0048cd50(&local_34,local_1c,param_1 + 0x298,param_1 + 0x2a8,1);
  local_4._0_1_ = 0xb;
  if (*(int *)(param_1 + 0x294) != *piVar2) {
    if (*(int *)(param_1 + 0x294) != 0) {
      FUN_004098d0();
    }
    *(int *)(param_1 + 0x294) = *piVar2;
    FUN_005844b0();
  }
  local_4 = CONCAT31(local_4._1_3_,10);
  if (local_34 != 0) {
    FUN_004098d0();
    local_34 = 0;
  }
  local_4 = 0xffffffff;
  FUN_004040a0(1);
  ExceptionList = local_c;
  return;
}

