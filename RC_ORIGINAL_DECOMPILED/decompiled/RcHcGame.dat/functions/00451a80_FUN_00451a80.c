/*
 * FUN_00451a80 at 00451a80
 * undefined FUN_00451a80(void)
 * Address ranges: 00451a80-00452b9b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_00451a80(undefined4 *param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  undefined1 local_550 [4];
  int local_54c;
  undefined4 local_548;
  undefined4 local_544;
  undefined1 local_540 [16];
  undefined1 local_530 [16];
  undefined1 local_520 [16];
  undefined1 local_510 [16];
  undefined1 local_500 [4];
  int local_4fc;
  undefined1 local_4f0 [16];
  undefined1 local_4e0 [4];
  int local_4dc;
  undefined4 local_4d8;
  undefined4 local_4d4;
  undefined1 local_4d0 [4];
  int local_4cc;
  undefined4 local_4c8;
  undefined4 local_4c4;
  undefined1 local_4c0 [4];
  int local_4bc;
  undefined4 local_4b8;
  undefined4 local_4b4;
  undefined1 local_4b0 [4];
  int local_4ac;
  undefined4 local_4a8;
  undefined4 local_4a4;
  undefined1 local_4a0 [4];
  int local_49c;
  undefined4 local_498;
  undefined4 local_494;
  undefined1 local_490 [16];
  undefined1 local_480 [16];
  undefined1 local_470 [16];
  undefined1 local_460 [16];
  undefined1 local_450 [16];
  undefined1 local_440 [16];
  undefined1 local_430 [16];
  undefined1 local_420 [16];
  undefined1 local_410 [16];
  undefined1 local_400 [16];
  undefined1 local_3f0 [16];
  undefined1 local_3e0 [16];
  undefined1 local_3d0 [16];
  undefined1 local_3c0 [16];
  undefined1 local_3b0 [16];
  undefined1 local_3a0 [16];
  undefined1 local_390 [16];
  undefined1 local_380 [16];
  undefined4 *local_370;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006263d9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_370 = param_1;
  FUN_005ab4a0();
  *param_1 = &PTR_FUN_0064d358;
  local_4 = 0;
  param_1[5] = param_2;
  uVar2 = FUN_005a2f50(local_490);
  local_4._0_1_ = 1;
  uVar2 = FUN_0040cad0(local_4f0,uVar2,s__HudIcon_INI_00691b24);
  local_4._0_1_ = 2;
  FUN_004542f0(uVar2);
  local_4._0_1_ = 5;
  FUN_004040a0(1);
  local_4._0_1_ = 4;
  FUN_004040a0(1);
  param_1[0x17] = 0;
  FUN_005844b0();
  local_4._0_1_ = 6;
  param_1[0x18] = 0;
  FUN_005844b0();
  local_4._0_1_ = 7;
  param_1[0x19] = 0;
  *(undefined1 *)(param_1 + 0x1a) = 1;
  *(undefined1 *)((int)param_1 + 0x69) = 0;
  *(undefined1 *)((int)param_1 + 0x6a) = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  *(undefined1 *)(param_1 + 0x1d) = 0;
  *(undefined1 *)(param_1 + 0x2a) = 1;
  param_1[0x2b] = 1;
  param_1[0x2c] = 0;
  *param_1 = &PTR_FUN_0064d330;
  uVar2 = FUN_005a2f50(local_4f0);
  local_4._0_1_ = 8;
  FUN_0040cad0(local_500,uVar2,s__HudIcon_INI_00691b24);
  local_4._0_1_ = 10;
  FUN_004040a0(1);
  FUN_004040a0(0);
  uVar4 = 0xffffffff;
  pcVar5 = s_Icon_Define_00691b18;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_Icon_Define_00691b18,~uVar4 - 1);
  local_4._0_1_ = 0xb;
  FUN_004040a0(0);
  uVar4 = 0xffffffff;
  pcVar5 = s_Define0_00691b10;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_Define0_00691b10,~uVar4 - 1);
  local_4._0_1_ = 0xc;
  iVar3 = FUN_005acaf0(local_510,local_550,&DAT_006b3f70,local_500,0);
  local_540[0] = *(undefined1 *)(iVar3 + 0x14);
  local_4._0_1_ = 0xd;
  FUN_004040a0(0);
  FUN_0040cc00(iVar3 + 0x14,0,0xffffffff);
  local_4._0_1_ = 0xe;
  local_4a0[0] = local_540[0];
  FUN_004040a0(0);
  FUN_0040cc00(local_540,0,0xffffffff);
  local_4._0_1_ = 0x12;
  FUN_004040a0(1);
  local_4._0_1_ = 0x11;
  FUN_005acca0();
  local_4._0_1_ = 0x10;
  FUN_004040a0(1);
  FUN_004040a0(0);
  uVar4 = 0xffffffff;
  pcVar5 = s_Define1_00691b08;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_Define1_00691b08,~uVar4 - 1);
  local_4._0_1_ = 0x13;
  iVar3 = FUN_005acaf0(local_520,local_550,&DAT_006b3f70,local_500,0);
  local_530[0] = *(undefined1 *)(iVar3 + 0x14);
  local_4._0_1_ = 0x14;
  FUN_004040a0(0);
  FUN_0040cc00(iVar3 + 0x14,0,0xffffffff);
  local_4._0_1_ = 0x15;
  local_4b0[0] = local_530[0];
  FUN_004040a0(0);
  FUN_0040cc00(local_530,0,0xffffffff);
  local_4._0_1_ = 0x19;
  FUN_004040a0(1);
  local_4._0_1_ = 0x18;
  FUN_005acca0();
  local_4._0_1_ = 0x17;
  FUN_004040a0(1);
  FUN_004040a0(0);
  uVar4 = 0xffffffff;
  pcVar5 = s_Define2_00691b00;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_Define2_00691b00,~uVar4 - 1);
  local_4._0_1_ = 0x1a;
  iVar3 = FUN_005acaf0(local_510,local_550,&DAT_006b3f70,local_500,0);
  local_540[0] = *(undefined1 *)(iVar3 + 0x14);
  local_4._0_1_ = 0x1b;
  FUN_004040a0(0);
  FUN_0040cc00(iVar3 + 0x14,0,0xffffffff);
  local_4._0_1_ = 0x1c;
  local_4d0[0] = local_540[0];
  FUN_004040a0(0);
  FUN_0040cc00(local_540,0,0xffffffff);
  local_4._0_1_ = 0x20;
  FUN_004040a0(1);
  local_4._0_1_ = 0x1f;
  FUN_005acca0();
  local_4._0_1_ = 0x1e;
  FUN_004040a0(1);
  FUN_004040a0(0);
  uVar4 = 0xffffffff;
  pcVar5 = s_Define3_00691af8;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_Define3_00691af8,~uVar4 - 1);
  local_4._0_1_ = 0x21;
  iVar3 = FUN_005acaf0(local_520,local_550,&DAT_006b3f70,local_500,0);
  local_530[0] = *(undefined1 *)(iVar3 + 0x14);
  local_4._0_1_ = 0x22;
  FUN_004040a0(0);
  FUN_0040cc00(iVar3 + 0x14,0,0xffffffff);
  local_4._0_1_ = 0x23;
  local_4c0[0] = local_530[0];
  FUN_004040a0(0);
  FUN_0040cc00(local_530,0,0xffffffff);
  local_4._0_1_ = 0x27;
  FUN_004040a0(1);
  local_4._0_1_ = 0x26;
  FUN_005acca0();
  local_4._0_1_ = 0x25;
  FUN_004040a0(1);
  FUN_004040a0(0);
  uVar4 = 0xffffffff;
  pcVar5 = s_Define4_00691af0;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_Define4_00691af0,~uVar4 - 1);
  local_4._0_1_ = 0x28;
  iVar3 = FUN_005acaf0(local_3b0,local_550,&DAT_006b3f70,local_500,0);
  local_540[0] = *(undefined1 *)(iVar3 + 0x14);
  local_4._0_1_ = 0x29;
  FUN_004040a0(0);
  FUN_0040cc00(iVar3 + 0x14,0,0xffffffff);
  local_4._0_1_ = 0x2a;
  local_4e0[0] = local_540[0];
  FUN_004040a0(0);
  FUN_0040cc00(local_540,0,0xffffffff);
  local_4._0_1_ = 0x2e;
  FUN_004040a0(1);
  local_4._0_1_ = 0x2d;
  FUN_005acca0();
  local_4._0_1_ = 0x2c;
  FUN_004040a0(1);
  FUN_004040a0(0);
  uVar4 = 0xffffffff;
  pcVar5 = s_Define5_00691ae8;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_Define5_00691ae8,~uVar4 - 1);
  local_4._0_1_ = 0x2f;
  iVar3 = FUN_005acaf0(local_3d0,local_550,&DAT_006b3f70,local_500,0);
  local_530[0] = *(undefined1 *)(iVar3 + 0x14);
  local_4._0_1_ = 0x30;
  FUN_004040a0(0);
  FUN_0040cc00(iVar3 + 0x14,0,0xffffffff);
  local_4._0_1_ = 0x31;
  local_410[0] = local_530[0];
  FUN_004040a0(0);
  FUN_0040cc00(local_530,0,0xffffffff);
  local_4._0_1_ = 0x35;
  FUN_004040a0(1);
  local_4._0_1_ = 0x34;
  FUN_005acca0();
  local_4._0_1_ = 0x33;
  FUN_004040a0(1);
  FUN_004040a0(0);
  uVar4 = 0xffffffff;
  pcVar5 = s_Define6_00691ae0;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_Define6_00691ae0,~uVar4 - 1);
  local_4._0_1_ = 0x36;
  iVar3 = FUN_005acaf0(local_440,local_550,&DAT_006b3f70,local_500,0);
  local_480[0] = *(undefined1 *)(iVar3 + 0x14);
  local_4._0_1_ = 0x37;
  FUN_004040a0(0);
  FUN_0040cc00(iVar3 + 0x14,0,0xffffffff);
  local_4._0_1_ = 0x38;
  local_380[0] = local_480[0];
  FUN_004040a0(0);
  FUN_0040cc00(local_480,0,0xffffffff);
  local_4._0_1_ = 0x3c;
  FUN_004040a0(1);
  local_4._0_1_ = 0x3b;
  FUN_005acca0();
  local_4._0_1_ = 0x3a;
  FUN_004040a0(1);
  FUN_004040a0(0);
  uVar4 = 0xffffffff;
  pcVar5 = s_Define7_00691ad8;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_Define7_00691ad8,~uVar4 - 1);
  local_4._0_1_ = 0x3d;
  iVar3 = FUN_005acaf0(local_3a0,local_550,&DAT_006b3f70,local_500,0);
  local_450[0] = *(undefined1 *)(iVar3 + 0x14);
  local_4._0_1_ = 0x3e;
  FUN_004040a0(0);
  FUN_0040cc00(iVar3 + 0x14,0,0xffffffff);
  local_4._0_1_ = 0x3f;
  local_430[0] = local_450[0];
  FUN_004040a0(0);
  FUN_0040cc00(local_450,0,0xffffffff);
  local_4._0_1_ = 0x43;
  FUN_004040a0(1);
  local_4._0_1_ = 0x42;
  FUN_005acca0();
  local_4._0_1_ = 0x41;
  FUN_004040a0(1);
  FUN_004040a0(0);
  uVar4 = 0xffffffff;
  pcVar5 = s_Define8_00691ad0;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_Define8_00691ad0,~uVar4 - 1);
  local_4._0_1_ = 0x44;
  iVar3 = FUN_005acaf0(local_390,local_550,&DAT_006b3f70,local_500,0);
  local_460[0] = *(undefined1 *)(iVar3 + 0x14);
  local_4._0_1_ = 0x45;
  FUN_004040a0(0);
  FUN_0040cc00(iVar3 + 0x14,0,0xffffffff);
  local_4._0_1_ = 0x46;
  local_3c0[0] = local_460[0];
  FUN_004040a0(0);
  FUN_0040cc00(local_460,0,0xffffffff);
  local_4._0_1_ = 0x4a;
  FUN_004040a0(1);
  local_4._0_1_ = 0x49;
  FUN_005acca0();
  local_4._0_1_ = 0x48;
  FUN_004040a0(1);
  FUN_004040a0(0);
  uVar4 = 0xffffffff;
  pcVar5 = s_Define9_00691ac8;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_Define9_00691ac8,~uVar4 - 1);
  local_4._0_1_ = 0x4b;
  iVar3 = FUN_005acaf0(local_3f0,local_550,&DAT_006b3f70,local_500,0);
  local_470[0] = *(undefined1 *)(iVar3 + 0x14);
  local_4._0_1_ = 0x4c;
  FUN_004040a0(0);
  FUN_0040cc00(iVar3 + 0x14,0,0xffffffff);
  local_4._0_1_ = 0x4d;
  local_3e0[0] = local_470[0];
  FUN_004040a0(0);
  FUN_0040cc00(local_470,0,0xffffffff);
  local_4._0_1_ = 0x51;
  FUN_004040a0(1);
  local_4._0_1_ = 0x50;
  FUN_005acca0();
  local_4._0_1_ = 0x4f;
  FUN_004040a0(1);
  FUN_004040a0(0);
  uVar4 = 0xffffffff;
  pcVar5 = s_Define10_00691abc;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_Define10_00691abc,~uVar4 - 1);
  local_4._0_1_ = 0x52;
  iVar3 = FUN_005acaf0(local_490,local_550,&DAT_006b3f70,local_500,0);
  local_520[0] = *(undefined1 *)(iVar3 + 0x14);
  local_4._0_1_ = 0x53;
  FUN_004040a0(0);
  FUN_0040cc00(iVar3 + 0x14,0,0xffffffff);
  local_4._0_1_ = 0x54;
  local_400[0] = local_520[0];
  FUN_004040a0(0);
  FUN_0040cc00(local_520,0,0xffffffff);
  local_4._0_1_ = 0x58;
  FUN_004040a0(1);
  local_4._0_1_ = 0x57;
  FUN_005acca0();
  local_4._0_1_ = 0x56;
  FUN_004040a0(1);
  FUN_004040a0(0);
  uVar4 = 0xffffffff;
  pcVar5 = s_Define11_00691ab0;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_Define11_00691ab0,~uVar4 - 1);
  local_4._0_1_ = 0x59;
  iVar3 = FUN_005acaf0(local_4f0,local_550,&DAT_006b3f70,local_500,0);
  local_510[0] = *(undefined1 *)(iVar3 + 0x14);
  local_4._0_1_ = 0x5a;
  FUN_004040a0(0);
  FUN_0040cc00(iVar3 + 0x14,0,0xffffffff);
  local_4._0_1_ = 0x5b;
  local_420[0] = local_510[0];
  FUN_004040a0(0);
  FUN_0040cc00(local_510,0,0xffffffff);
  local_4._0_1_ = 0x5f;
  FUN_004040a0(1);
  local_4._0_1_ = 0x5e;
  FUN_005acca0();
  local_4._0_1_ = 0x5d;
  FUN_004040a0(1);
  uVar2 = FUN_00456bf0(local_4a0);
  param_1[0x1e] = uVar2;
  uVar2 = FUN_00456bf0(local_4b0);
  param_1[0x1f] = uVar2;
  uVar2 = FUN_00456bf0(local_4d0);
  param_1[0x20] = uVar2;
  uVar2 = FUN_00456bf0(local_420);
  param_1[0x21] = uVar2;
  uVar2 = FUN_00456bf0(local_4c0);
  param_1[0x22] = uVar2;
  uVar2 = FUN_00456bf0(local_4e0);
  param_1[0x23] = uVar2;
  uVar2 = FUN_00456bf0(local_410);
  param_1[0x24] = uVar2;
  uVar2 = FUN_00456bf0(local_380);
  param_1[0x25] = uVar2;
  uVar2 = FUN_00456bf0(local_430);
  param_1[0x26] = uVar2;
  uVar2 = FUN_00456bf0(local_3c0);
  param_1[0x27] = uVar2;
  uVar2 = FUN_00456bf0(local_3e0);
  param_1[0x28] = uVar2;
  uVar2 = FUN_00456bf0(local_400);
  param_1[0x29] = uVar2;
  FUN_00452c60();
  local_4._0_1_ = 0x56;
  FUN_004040a0(1);
  local_4._0_1_ = 0x4f;
  FUN_004040a0(1);
  local_4._0_1_ = 0x48;
  FUN_004040a0(1);
  local_4._0_1_ = 0x41;
  FUN_004040a0(1);
  local_4._0_1_ = 0x3a;
  FUN_004040a0(1);
  local_4._0_1_ = 0x33;
  FUN_004040a0(1);
  local_4 = CONCAT31(local_4._1_3_,0x2c);
  FUN_004040a0(1);
  if (local_4dc != 0) {
    cVar1 = *(char *)(local_4dc + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0(local_4dc + -1);
    }
    else {
      *(char *)(local_4dc + -1) = cVar1 + -1;
    }
  }
  local_4dc = 0;
  local_4d8 = 0;
  local_4d4 = 0;
  if (local_4bc != 0) {
    cVar1 = *(char *)(local_4bc + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0(local_4bc + -1);
    }
    else {
      *(char *)(local_4bc + -1) = cVar1 + -1;
    }
  }
  local_4bc = 0;
  local_4b8 = 0;
  local_4b4 = 0;
  if (local_4cc != 0) {
    cVar1 = *(char *)(local_4cc + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0(local_4cc + -1);
    }
    else {
      *(char *)(local_4cc + -1) = cVar1 + -1;
    }
  }
  local_4cc = 0;
  local_4c8 = 0;
  local_4c4 = 0;
  if (local_4ac != 0) {
    cVar1 = *(char *)(local_4ac + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0(local_4ac + -1);
    }
    else {
      *(char *)(local_4ac + -1) = cVar1 + -1;
    }
  }
  local_4ac = 0;
  local_4a8 = 0;
  local_4a4 = 0;
  if (local_49c != 0) {
    cVar1 = *(char *)(local_49c + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0(local_49c + -1);
    }
    else {
      *(char *)(local_49c + -1) = cVar1 + -1;
    }
  }
  local_49c = 0;
  local_498 = 0;
  local_494 = 0;
  if (local_54c != 0) {
    cVar1 = *(char *)(local_54c + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0(local_54c + -1);
    }
    else {
      *(char *)(local_54c + -1) = cVar1 + -1;
    }
  }
  local_54c = 0;
  local_548 = 0;
  local_544 = 0;
  if (local_4fc != 0) {
    cVar1 = *(char *)(local_4fc + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0(local_4fc + -1);
    }
    else {
      *(char *)(local_4fc + -1) = cVar1 + -1;
    }
  }
  ExceptionList = local_c;
  return param_1;
}

