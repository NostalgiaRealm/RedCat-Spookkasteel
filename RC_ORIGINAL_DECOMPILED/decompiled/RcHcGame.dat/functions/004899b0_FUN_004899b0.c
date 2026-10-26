/*
 * FUN_004899b0 at 004899b0
 * undefined FUN_004899b0(void)
 * Address ranges: 004899b0-00489cb8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_004899b0(int param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  int local_34;
  undefined1 local_30 [4];
  undefined1 local_2c [16];
  undefined1 local_1c [16];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062a4e0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004040a0(0);
  uVar5 = 0xffffffff;
  pcVar6 = s_ImageBgnd_006935f0;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_ImageBgnd_006935f0,~uVar5 - 1);
  local_4 = 0;
  piVar3 = (int *)FUN_00489cc0(&local_34,local_2c,param_1 + 0x114,param_1 + 0x124,0);
  iVar2 = *(int *)(param_1 + 0x110);
  local_4._0_1_ = 1;
  if (iVar2 != *piVar3) {
    if ((iVar2 != 0) &&
       (iVar4 = *(int *)(iVar2 + 0x14) + -1, *(int *)(iVar2 + 0x14) = iVar4, iVar4 == 0)) {
      FUN_005abfc0(0);
    }
    *(int *)(param_1 + 0x110) = *piVar3;
    FUN_005844b0();
  }
  local_4 = (uint)local_4._1_3_ << 8;
  if (local_34 != 0) {
    FUN_004098d0();
    local_34 = 0;
  }
  local_4 = 0xffffffff;
  FUN_004040a0(1);
  FUN_004040a0(0);
  uVar5 = 0xffffffff;
  pcVar6 = s_ImageLogo_006935e4;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_ImageLogo_006935e4,~uVar5 - 1);
  local_4 = 2;
  piVar3 = (int *)FUN_00489cc0(&local_34,local_2c,param_1 + 0x138,param_1 + 0x148,1);
  iVar2 = *(int *)(param_1 + 0x134);
  local_4._0_1_ = 3;
  if (iVar2 != *piVar3) {
    if ((iVar2 != 0) &&
       (iVar4 = *(int *)(iVar2 + 0x14) + -1, *(int *)(iVar2 + 0x14) = iVar4, iVar4 == 0)) {
      FUN_005abfc0(0);
    }
    *(int *)(param_1 + 0x134) = *piVar3;
    FUN_005844b0();
  }
  local_4 = CONCAT31(local_4._1_3_,2);
  if (local_34 != 0) {
    FUN_004098d0();
    local_34 = 0;
  }
  local_4 = 0xffffffff;
  FUN_004040a0(1);
  FUN_004040a0(0);
  uVar5 = 0xffffffff;
  pcVar6 = s_ImageYesBtn_00693774;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_ImageYesBtn_00693774,~uVar5 - 1);
  local_4 = 4;
  piVar3 = (int *)FUN_00489cc0(&local_34,local_2c,param_1 + 0x15c,param_1 + 0x16c,1);
  iVar2 = *(int *)(param_1 + 0x158);
  local_4._0_1_ = 5;
  if (iVar2 != *piVar3) {
    if ((iVar2 != 0) &&
       (iVar4 = *(int *)(iVar2 + 0x14) + -1, *(int *)(iVar2 + 0x14) = iVar4, iVar4 == 0)) {
      FUN_005abfc0(0);
    }
    *(int *)(param_1 + 0x158) = *piVar3;
    FUN_005844b0();
  }
  local_4 = CONCAT31(local_4._1_3_,4);
  if (local_34 != 0) {
    FUN_004098d0();
    local_34 = 0;
  }
  local_4 = 0xffffffff;
  FUN_004040a0(1);
  FUN_004040a0(0);
  uVar5 = 0xffffffff;
  pcVar6 = s_ImageNoBtn_00693768;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_ImageNoBtn_00693768,~uVar5 - 1);
  local_4 = 6;
  piVar3 = (int *)FUN_00489cc0(local_30,local_1c,param_1 + 0x180,param_1 + 400,1);
  iVar2 = *(int *)(param_1 + 0x17c);
  local_4._0_1_ = 7;
  if (iVar2 != *piVar3) {
    if ((iVar2 != 0) &&
       (iVar4 = *(int *)(iVar2 + 0x14) + -1, *(int *)(iVar2 + 0x14) = iVar4, iVar4 == 0)) {
      FUN_005abfc0(0);
    }
    *(int *)(param_1 + 0x17c) = *piVar3;
    FUN_005844b0();
  }
  local_4 = CONCAT31(local_4._1_3_,6);
  FUN_0057d310();
  local_4 = 0xffffffff;
  FUN_004040a0(1);
  ExceptionList = local_c;
  return;
}

