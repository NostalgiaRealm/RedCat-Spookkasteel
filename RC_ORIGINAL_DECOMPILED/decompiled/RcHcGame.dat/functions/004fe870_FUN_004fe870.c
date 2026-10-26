/*
 * FUN_004fe870 at 004fe870
 * undefined FUN_004fe870(void)
 * Address ranges: 004fe870-004febe9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_004fe870(undefined4 *param_1,undefined1 *param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 local_5c [4];
  int local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined1 local_4c [4];
  int local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined1 local_3c [4];
  int local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined1 local_2c [16];
  undefined1 local_1c [4];
  int local_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006358a4;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005ab4a0();
  local_4 = 0;
  *(undefined1 *)(param_1 + 5) = *param_2;
  FUN_004040a0(0);
  FUN_0040cc00(param_2,0,0xffffffff);
  local_4._0_1_ = 1;
  uVar2 = FUN_0043b0a0(local_4c);
  local_4._0_1_ = 2;
  uVar3 = FUN_005ae390(local_3c,s_Completed_0069c5b4);
  local_4._0_1_ = 3;
  FUN_005ac9d0(uVar3,param_2,0,uVar2,0);
  local_4._0_1_ = 6;
  FUN_004040a0(1);
  local_4._0_1_ = 5;
  FUN_004040a0(1);
  uVar2 = FUN_0043b0a0(local_2c);
  local_4._0_1_ = 7;
  uVar3 = FUN_005ae390(local_5c,s_SecretsFound_0069d6f4);
  local_4._0_1_ = 8;
  FUN_005ac9d0(uVar3,param_2,0,uVar2,0);
  local_4._0_1_ = 0xb;
  FUN_004040a0(1);
  local_4._0_1_ = 10;
  FUN_004040a0(1);
  uVar2 = FUN_0043b0a0(local_4c);
  local_4._0_1_ = 0xc;
  uVar3 = FUN_005ae390(local_3c,s_EnemiesKilled_0069d6e4);
  local_4._0_1_ = 0xd;
  FUN_005ac9d0(uVar3,param_2,0,uVar2,0);
  local_4._0_1_ = 0x10;
  FUN_004040a0(1);
  local_4._0_1_ = 0xf;
  FUN_004040a0(1);
  uVar2 = FUN_0043b0a0(local_5c);
  local_4._0_1_ = 0x11;
  uVar3 = FUN_005ae390(local_2c,s_TimePlayedSeconds_0069d6d0);
  local_4._0_1_ = 0x12;
  FUN_005a3d10(uVar3,param_2,0,0,0x470ca000,uVar2);
  local_4._0_1_ = 0x15;
  FUN_004040a0(1);
  local_4._0_1_ = 0x14;
  FUN_004040a0(1);
  uVar2 = FUN_0043b0a0(local_1c);
  local_4._0_1_ = 0x16;
  uVar3 = FUN_005ae390(local_3c,s_ShotsTotal_0069d6c4);
  local_4._0_1_ = 0x17;
  FUN_005ac9d0(uVar3,param_2,0,uVar2,0);
  local_4._0_1_ = 0x1a;
  FUN_004040a0(1);
  local_4._0_1_ = 0x19;
  FUN_004040a0(1);
  uVar2 = FUN_0043b0a0(local_4c);
  local_4._0_1_ = 0x1b;
  uVar3 = FUN_005ae390(local_5c,s_ShotsHit_0069d6b8);
  local_4 = CONCAT31(local_4._1_3_,0x1c);
  FUN_005ac9d0(uVar3,param_2,0,uVar2,0);
  if (local_58 != 0) {
    cVar1 = *(char *)(local_58 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0((char *)(local_58 + -1));
    }
    else {
      *(char *)(local_58 + -1) = cVar1 + -1;
    }
  }
  local_58 = 0;
  local_54 = 0;
  local_50 = 0;
  local_4._0_1_ = 0x1e;
  if (local_48 != 0) {
    cVar1 = *(char *)(local_48 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0((char *)(local_48 + -1));
    }
    else {
      *(char *)(local_48 + -1) = cVar1 + -1;
    }
  }
  local_48 = 0;
  local_44 = 0;
  local_40 = 0;
  uVar2 = FUN_0043b0a0(local_1c);
  local_4._0_1_ = 0x20;
  uVar3 = FUN_005ae390(local_3c,s_Health_0068fb70);
  local_4 = CONCAT31(local_4._1_3_,0x21);
  FUN_005a3d10(uVar3,param_2,0x42c80000,0,0x461c4000,uVar2);
  if (local_38 != 0) {
    cVar1 = *(char *)(local_38 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0((char *)(local_38 + -1));
    }
    else {
      *(char *)(local_38 + -1) = cVar1 + -1;
    }
  }
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  if (local_18 != 0) {
    cVar1 = *(char *)(local_18 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0((char *)(local_18 + -1));
    }
    else {
      *(char *)(local_18 + -1) = cVar1 + -1;
    }
  }
  *param_1 = &PTR_FUN_0064f4c0;
  ExceptionList = local_c;
  return param_1;
}

