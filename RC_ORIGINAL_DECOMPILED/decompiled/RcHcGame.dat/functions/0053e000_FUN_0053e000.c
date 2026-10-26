/*
 * FUN_0053e000 at 0053e000
 * undefined FUN_0053e000(void)
 * Address ranges: 0053e000-0053ea55
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_0053e000(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  undefined1 local_55;
  undefined1 local_54 [4];
  int local_50;
  undefined1 local_44 [4];
  int iStack_40;
  int iStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 local_14;
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063c398;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_0044e4a0(&local_55);
  local_4 = 0;
  FUN_00548e30(0);
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_005493c0(0);
  uVar3 = 0xffffffff;
  pcVar5 = &DAT_006b3f70;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  local_4 = 2;
  FUN_004040f0(&DAT_006b3f70,~uVar3 - 1);
  local_14 = 0;
  local_10 = 0;
  FUN_00544100(local_44);
  uVar2 = FUN_005ae390(local_54,&DAT_00693338);
  local_4._0_1_ = 3;
  FUN_0040cc00(uVar2,0,0xffffffff);
  local_4._0_1_ = 2;
  FUN_004040a0(1);
  FUN_0054a2c0(*(undefined4 *)(param_1 + 0x1c),local_44);
  uVar2 = FUN_005ae390(local_54,s_MoveForward_006932c8);
  local_4._0_1_ = 4;
  FUN_0040cc00(uVar2,0,0xffffffff);
  local_4._0_1_ = 2;
  FUN_004040a0(1);
  FUN_0054a2c0(*(undefined4 *)(param_1 + 0x1c),local_44);
  uVar2 = FUN_005ae390(local_54,&DAT_006932bc);
  local_4._0_1_ = 5;
  FUN_0040cc00(uVar2,0,0xffffffff);
  local_4._0_1_ = 2;
  FUN_004040a0(1);
  FUN_0054a2c0(*(undefined4 *)(param_1 + 0x1c),local_44);
  uVar2 = FUN_005ae390(local_54,&DAT_00693290);
  local_4._0_1_ = 6;
  FUN_0040cc00(uVar2,0,0xffffffff);
  local_4._0_1_ = 2;
  FUN_004040a0(1);
  FUN_0054a2c0(*(undefined4 *)(param_1 + 0x1c),local_44);
  uVar2 = FUN_005ae390(local_54,s_TurnRight_00693278);
  local_4._0_1_ = 7;
  FUN_0040cc00(uVar2,0,0xffffffff);
  local_4._0_1_ = 2;
  FUN_004040a0(1);
  FUN_0054a2c0(*(undefined4 *)(param_1 + 0x1c),local_44);
  uVar2 = FUN_005ae390(local_54,&DAT_0069329c);
  local_4._0_1_ = 8;
  FUN_0040cc00(uVar2,0,0xffffffff);
  local_4._0_1_ = 2;
  FUN_004040a0(1);
  FUN_0054a2c0(*(undefined4 *)(param_1 + 0x1c),local_44);
  uVar2 = FUN_005ae390(local_54,s_MoveRight_00693284);
  local_4._0_1_ = 9;
  FUN_0040cc00(uVar2,0,0xffffffff);
  local_4._0_1_ = 2;
  FUN_004040a0(1);
  FUN_0054a2c0(*(undefined4 *)(param_1 + 0x1c),local_44);
  uVar2 = FUN_005ae390(local_54,s_MoveUp_006932a8);
  local_4._0_1_ = 10;
  FUN_0040cc00(uVar2,0,0xffffffff);
  local_4._0_1_ = 2;
  FUN_004040a0(1);
  FUN_0054a2c0(*(undefined4 *)(param_1 + 0x1c),local_44);
  uVar2 = FUN_005ae390(local_54,s_MoveDown_006932b0);
  local_4._0_1_ = 0xb;
  FUN_0040cc00(uVar2,0,0xffffffff);
  local_4._0_1_ = 2;
  FUN_004040a0(1);
  FUN_0054a2c0(*(undefined4 *)(param_1 + 0x1c),local_44);
  uVar2 = FUN_005ae390(local_54,&DAT_00693340);
  local_4._0_1_ = 0xc;
  FUN_0040cc00(uVar2,0,0xffffffff);
  local_4._0_1_ = 2;
  FUN_004040a0(1);
  FUN_0054a2c0(*(undefined4 *)(param_1 + 0x1c),local_44);
  uVar2 = FUN_005ae390(local_54,&DAT_006a088c);
  local_4._0_1_ = 0xd;
  FUN_0040cc00(uVar2,0,0xffffffff);
  local_4._0_1_ = 2;
  FUN_004040a0(1);
  FUN_0054a2c0(*(undefined4 *)(param_1 + 0x1c),local_44);
  uVar2 = FUN_005ae390(local_54,s_Weapon0_006a12e0);
  local_4._0_1_ = 0xe;
  FUN_0040cc00(uVar2,0,0xffffffff);
  local_4._0_1_ = 2;
  FUN_004040a0(1);
  FUN_0054a2c0(*(undefined4 *)(param_1 + 0x1c),local_44);
  uVar2 = FUN_005ae390(local_54,&DAT_006933b4);
  local_4._0_1_ = 0xf;
  FUN_0040cc00(uVar2,0,0xffffffff);
  local_4._0_1_ = 2;
  FUN_004040a0(1);
  FUN_0054a2c0(*(undefined4 *)(param_1 + 0x1c),local_44);
  uVar2 = FUN_005ae390(local_54,&DAT_006933ac);
  local_4._0_1_ = 0x10;
  FUN_0040cc00(uVar2,0,0xffffffff);
  local_4._0_1_ = 2;
  FUN_004040a0(1);
  FUN_0054a2c0(*(undefined4 *)(param_1 + 0x1c),local_44);
  uVar2 = FUN_005ae390(local_54,&DAT_006933a4);
  local_4._0_1_ = 0x11;
  FUN_0040cc00(uVar2,0,0xffffffff);
  local_4._0_1_ = 2;
  FUN_004040a0(1);
  FUN_0054a2c0(*(undefined4 *)(param_1 + 0x1c),local_44);
  uVar2 = FUN_005ae390(local_54,&DAT_0069339c);
  local_4._0_1_ = 0x12;
  FUN_0040cc00(uVar2,0,0xffffffff);
  local_4._0_1_ = 2;
  FUN_004040a0(1);
  FUN_0054a2c0(*(undefined4 *)(param_1 + 0x1c),local_44);
  uVar2 = FUN_005ae390(local_54,&DAT_00693394);
  local_4._0_1_ = 0x13;
  FUN_0040cc00(uVar2,0,0xffffffff);
  local_4._0_1_ = 2;
  FUN_004040a0(1);
  FUN_0054a2c0(*(undefined4 *)(param_1 + 0x1c),local_44);
  uVar2 = FUN_005ae390(local_54,s_Weapon6_006a12d8);
  local_4._0_1_ = 0x14;
  FUN_0040cc00(uVar2,0,0xffffffff);
  local_4._0_1_ = 2;
  FUN_004040a0(1);
  FUN_0054a2c0(*(undefined4 *)(param_1 + 0x1c),local_44);
  uVar2 = FUN_005ae390(local_54,s_Weapon7_0069338c);
  local_4._0_1_ = 0x15;
  FUN_0040cc00(uVar2,0,0xffffffff);
  local_4._0_1_ = 2;
  FUN_004040a0(1);
  FUN_0054a2c0(*(undefined4 *)(param_1 + 0x1c),local_44);
  uVar2 = FUN_005ae390(local_54,s_WeaponNext_006a12cc);
  local_4._0_1_ = 0x16;
  FUN_0040cc00(uVar2,0,0xffffffff);
  local_4._0_1_ = 2;
  FUN_004040a0(1);
  FUN_0054a2c0(*(undefined4 *)(param_1 + 0x1c),local_44);
  uVar2 = FUN_005ae390(local_54,s_WeaponPrev_006a12c0);
  local_4._0_1_ = 0x17;
  FUN_0040cc00(uVar2,0,0xffffffff);
  local_4._0_1_ = 2;
  FUN_004040a0(1);
  FUN_0054a2c0(*(undefined4 *)(param_1 + 0x1c),local_44);
  uVar2 = FUN_005ae390(local_54,s_LookUp_006a12b8);
  local_4._0_1_ = 0x18;
  FUN_0040cc00(uVar2,0,0xffffffff);
  local_4._0_1_ = 2;
  FUN_004040a0(1);
  FUN_0054a2c0(*(undefined4 *)(param_1 + 0x1c),local_44);
  uVar2 = FUN_005ae390(local_54,s_LookDown_006a12ac);
  local_4._0_1_ = 0x19;
  FUN_0040cc00(uVar2,0,0xffffffff);
  local_4._0_1_ = 2;
  FUN_004040a0(1);
  FUN_0054a2c0(*(undefined4 *)(param_1 + 0x1c),local_44);
  uVar2 = FUN_005ae390(local_54,s_CenterView_006a12a0);
  local_4._0_1_ = 0x1a;
  FUN_0040cc00(uVar2,0,0xffffffff);
  local_4._0_1_ = 2;
  FUN_004040a0(1);
  FUN_0054a2c0(*(undefined4 *)(param_1 + 0x1c),local_44);
  uVar2 = FUN_005ae390(local_54,s_Scores_00693348);
  local_4._0_1_ = 0x1b;
  FUN_0040cc00(uVar2,0,0xffffffff);
  local_4._0_1_ = 2;
  FUN_004040a0(1);
  FUN_0054a2c0(*(undefined4 *)(param_1 + 0x1c),local_44);
  uVar2 = FUN_005ae390(local_54,&DAT_00693350);
  local_4._0_1_ = 0x1c;
  FUN_0040cc00(uVar2,0,0xffffffff);
  local_4._0_1_ = 2;
  FUN_004040a0(1);
  FUN_0054a2c0(*(undefined4 *)(param_1 + 0x1c),local_44);
  uVar2 = FUN_005ae390(local_54,&DAT_00693358);
  local_4._0_1_ = 0x1d;
  FUN_0040cc00(uVar2,0,0xffffffff);
  local_4._0_1_ = 2;
  FUN_004040a0(1);
  FUN_0054aae0(*(undefined4 *)(param_1 + 0x1c),1,local_44);
  uVar2 = FUN_005ae390(local_54,s_ToggleConsole_00693364);
  local_4._0_1_ = 0x1e;
  FUN_0040cc00(uVar2,0,0xffffffff);
  local_4._0_1_ = 2;
  if (local_50 != 0) {
    cVar1 = *(char *)(local_50 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0((char *)(local_50 + -1));
    }
    else {
      *(char *)(local_50 + -1) = cVar1 + -1;
    }
  }
  FUN_0054aae0(*(undefined4 *)(param_1 + 0x1c),1,local_44);
  uVar2 = FUN_005ae390(local_54,&DAT_00693374);
  local_4._0_1_ = 0x1f;
  FUN_0040cc00(uVar2,0,0xffffffff);
  local_4._0_1_ = 2;
  if (local_50 != 0) {
    cVar1 = *(char *)(local_50 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0((char *)(local_50 + -1));
    }
    else {
      *(char *)(local_50 + -1) = cVar1 + -1;
    }
  }
  FUN_0054aae0(*(undefined4 *)(param_1 + 0x1c),1,local_44);
  uVar2 = FUN_005ae390(local_54,s_Pause_0069337c);
  local_4._0_1_ = 0x20;
  FUN_0040cc00(uVar2,0,0xffffffff);
  local_4._0_1_ = 2;
  if (local_50 != 0) {
    cVar1 = *(char *)(local_50 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0((char *)(local_50 + -1));
    }
    else {
      *(char *)(local_50 + -1) = cVar1 + -1;
    }
  }
  FUN_0054aae0(*(undefined4 *)(param_1 + 0x1c),1,local_44);
  uVar2 = FUN_005ae390(local_54,&DAT_00693384);
  local_4._0_1_ = 0x21;
  FUN_0040cc00(uVar2,0,0xffffffff);
  local_4 = CONCAT31(local_4._1_3_,2);
  if (local_50 != 0) {
    cVar1 = *(char *)(local_50 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0((char *)(local_50 + -1));
    }
    else {
      *(char *)(local_50 + -1) = cVar1 + -1;
    }
  }
  FUN_0054aae0(*(undefined4 *)(param_1 + 0x1c),1,local_44);
  FUN_0053eb80();
  local_4 = 0x22;
  FUN_005fe5f0(uStack_20);
  uStack_20 = 0;
  uStack_1c = 0;
  uStack_18 = 0;
  for (iVar4 = iStack_30; iVar4 != iStack_2c; iVar4 = iVar4 + 0x10) {
    FUN_00514430();
  }
  FUN_005fe5f0(iStack_30);
  iStack_30 = 0;
  iStack_2c = 0;
  uStack_28 = 0;
  if (iStack_40 != 0) {
    cVar1 = *(char *)(iStack_40 + -1);
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      *(char *)(iStack_40 + -1) = cVar1 + -1;
      ExceptionList = pvStack_c;
      return;
    }
    FUN_005fe5f0(iStack_40 + -1);
  }
  ExceptionList = pvStack_c;
  return;
}

