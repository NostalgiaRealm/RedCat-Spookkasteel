/*
 * FUN_005ea160 at 005ea160
 * undefined FUN_005ea160(void)
 * Address ranges: 005ea160-005ea35a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005ea160(undefined4 param_1,undefined1 *param_2,undefined1 *param_3,undefined4 param_4)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 *puStack_a0;
  undefined1 *puStack_9c;
  char *pcStack_98;
  char *pcStack_94;
  undefined1 local_80 [4];
  int local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined1 local_70 [4];
  int local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined1 local_60 [4];
  int local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined1 local_50 [4];
  int local_4c;
  undefined1 local_40 [16];
  undefined1 local_30;
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00646d90;
  pvStack_c = ExceptionList;
  pcStack_94 = param_2;
  puStack_9c = local_50;
  pcStack_98 = s_RuntimeError_006b10c0;
  puStack_a0 = (undefined4 *)0x5ea192;
  ExceptionList = &pvStack_c;
  uVar2 = FUN_004caa20();
  puStack_a0 = &DAT_00693460;
  local_4 = 0;
  uVar2 = FUN_0040cad0(local_60,uVar2);
  local_4._0_1_ = 1;
  uVar2 = FUN_0044e370(local_70,uVar2,param_3);
  local_4._0_1_ = 2;
  uVar2 = FUN_0040cad0(local_80,uVar2,&DAT_00693460);
  local_4 = CONCAT31(local_4._1_3_,3);
  FUN_0044e370(&puStack_a0,uVar2,param_4);
  FUN_005e4170();
  if (local_7c != 0) {
    pcStack_94 = (char *)(local_7c + -1);
    cVar1 = *(char *)(local_7c + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      pcStack_98 = (char *)0x5ea22b;
      FUN_005fe5f0();
    }
    else {
      *pcStack_94 = cVar1 + -1;
    }
  }
  local_7c = 0;
  local_78 = 0;
  local_74 = 0;
  if (local_6c != 0) {
    pcStack_94 = (char *)(local_6c + -1);
    cVar1 = *(char *)(local_6c + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      pcStack_98 = (char *)0x5ea25c;
      FUN_005fe5f0();
    }
    else {
      *pcStack_94 = cVar1 + -1;
    }
  }
  local_6c = 0;
  local_68 = 0;
  local_64 = 0;
  if (local_5c != 0) {
    pcStack_94 = (char *)(local_5c + -1);
    cVar1 = *(char *)(local_5c + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      pcStack_98 = (char *)0x5ea28d;
      FUN_005fe5f0();
    }
    else {
      *pcStack_94 = cVar1 + -1;
    }
  }
  local_5c = 0;
  local_58 = 0;
  local_54 = 0;
  local_4 = 0xffffffff;
  if (local_4c != 0) {
    pcStack_94 = (char *)(local_4c + -1);
    cVar1 = *(char *)(local_4c + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      pcStack_98 = (char *)0x5ea2c9;
      FUN_005fe5f0();
    }
    else {
      *pcStack_94 = cVar1 + -1;
    }
  }
  local_40[0] = *param_3;
  pcStack_94 = (char *)0x0;
  pcStack_98 = (char *)0x5ea2dc;
  FUN_004040a0();
  pcStack_94 = (char *)0xffffffff;
  pcStack_98 = (char *)0x0;
  puStack_9c = param_3;
  puStack_a0 = (undefined4 *)0x5ea2ee;
  FUN_0040cc00();
  local_30 = *param_2;
  pcStack_94 = (char *)0x0;
  local_4 = 4;
  pcStack_98 = (char *)0x5ea309;
  FUN_004040a0();
  pcStack_94 = (char *)0xffffffff;
  pcStack_98 = (char *)0x0;
  puStack_9c = param_2;
  puStack_a0 = (undefined4 *)0x5ea31a;
  FUN_0040cc00();
  local_4 = CONCAT31(local_4._1_3_,5);
  pcStack_94 = (char *)param_4;
  pcStack_98 = (char *)0x5ea333;
  FUN_00429a30();
  pcStack_98 = local_40;
  pcStack_94 = "";
  local_10 = param_1;
  local_4 = 0xffffffff;
                    /* WARNING: Subroutine does not return */
  puStack_9c = &UNK_005ea35b;
  __CxxThrowException_8();
}

