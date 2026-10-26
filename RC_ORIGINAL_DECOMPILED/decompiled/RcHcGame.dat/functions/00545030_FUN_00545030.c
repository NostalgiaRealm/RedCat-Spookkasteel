/*
 * FUN_00545030 at 00545030
 * undefined FUN_00545030(void)
 * Address ranges: 00545030-00547009
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x00546e67) */

undefined4 FUN_00545030(undefined4 param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined1 local_4a;
  undefined1 local_49;
  uint local_48;
  undefined4 local_44;
  undefined1 local_40 [8];
  undefined4 local_38;
  undefined1 local_30 [4];
  int local_2c;
  undefined1 local_20 [4];
  undefined4 *local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063d14f;
  local_c = ExceptionList;
  local_44 = 0;
  ExceptionList = &local_c;
  FUN_0044e4a0(&local_4a);
  local_4 = 1;
  FUN_00549830(0);
  local_4 = 2;
  FUN_0044e4a0(&local_49);
  local_4._0_1_ = 3;
  uVar2 = FUN_005ae390(local_30,s_LeftMouse_006a13a8);
  local_4._0_1_ = 4;
  FUN_0040cc00(uVar2,0,0xffffffff);
  local_4._0_1_ = 3;
  FUN_004040a0(1);
  local_10 = 1;
  FUN_00549b10(local_38,local_20);
  uVar2 = FUN_005ae390(local_30,s_RightMouse_006a1360);
  local_4._0_1_ = 5;
  FUN_0040cc00(uVar2,0,0xffffffff);
  local_4._0_1_ = 3;
  FUN_004040a0(1);
  local_10 = 2;
  FUN_00549b10(local_38,local_20);
  uVar2 = FUN_005ae390(local_30,s_MiddleMouse_006a14d4);
  local_4._0_1_ = 6;
  FUN_0040cc00(uVar2,0,0xffffffff);
  local_4._0_1_ = 3;
  FUN_004040a0(1);
  local_10 = 4;
  FUN_00549b10(local_38,local_20);
  uVar2 = FUN_005ae390(local_30,s_Backspace_006a1660);
  local_4._0_1_ = 7;
  FUN_0040cc00(uVar2,0,0xffffffff);
  local_4._0_1_ = 3;
  FUN_004040a0(1);
  local_10 = 8;
  FUN_00549b10(local_38,local_20);
  uVar2 = FUN_005ae390(local_30,&PTR_LAB_006a1314);
  local_4._0_1_ = 8;
  FUN_0040cc00(uVar2,0,0xffffffff);
  local_4._0_1_ = 3;
  FUN_004040a0(1);
  local_10 = 9;
  FUN_00549b10(local_38,local_20);
  uVar2 = FUN_005ae390(local_30,s_Enter_006a1658);
  local_4._0_1_ = 9;
  FUN_0040cc00(uVar2,0,0xffffffff);
  local_4._0_1_ = 3;
  FUN_004040a0(1);
  local_10 = 0xd;
  FUN_00549b10(local_38,local_20);
  uVar2 = FUN_005ae390(local_30,s_Shift_006a1358);
  local_4._0_1_ = 10;
  FUN_0040cc00(uVar2,0,0xffffffff);
  local_4._0_1_ = 3;
  FUN_004040a0(1);
  local_10 = 0x10;
  FUN_00549b10(local_38,local_20);
  uVar2 = FUN_005ae390(local_30,s_Control_006a13a0);
  local_4._0_1_ = 0xb;
  FUN_0040cc00(uVar2,0,0xffffffff);
  local_4._0_1_ = 3;
  FUN_004040a0(1);
  local_10 = 0x11;
  FUN_00549b10(local_38,local_20);
  uVar2 = FUN_005ae390(local_30,&PTR_DAT_006a1654);
  local_4._0_1_ = 0xc;
  FUN_0040cc00(uVar2,0,0xffffffff);
  local_4._0_1_ = 3;
  FUN_004040a0(1);
  local_10 = 0x12;
  FUN_00549b10(local_38,local_20);
  uVar2 = FUN_005ae390(local_30,s_Pause_0069337c);
  local_4._0_1_ = 0xd;
  FUN_0040cc00(uVar2,0,0xffffffff);
  local_4._0_1_ = 3;
  FUN_004040a0(1);
  local_10 = 0x13;
  FUN_00549b10(local_38,local_20);
  uVar2 = FUN_005ae390(local_30,s_CapsLock_006a1648);
  local_4._0_1_ = 0xe;
  FUN_0040cc00(uVar2,0,0xffffffff);
  local_4._0_1_ = 3;
  FUN_004040a0(1);
  local_10 = 0x14;
  FUN_00549b10(local_38,local_20);
  uVar2 = FUN_005ae390(local_30,s_Escape_006a1308);
  local_4._0_1_ = 0xf;
  FUN_0040cc00(uVar2,0,0xffffffff);
  local_4._0_1_ = 3;
  FUN_004040a0(1);
  local_10 = 0x1b;
  FUN_00549b10(local_38,local_20);
  uVar2 = FUN_005ae390(local_30,s_Space_0069b04c);
  local_4._0_1_ = 0x10;
  FUN_0040cc00(uVar2,0,0xffffffff);
  local_4._0_1_ = 3;
  FUN_004040a0(1);
  local_10 = 0x20;
  FUN_00549b10(local_38,local_20);
  uVar2 = FUN_005ae390(local_30,s_PageUp_006a132c);
  local_4._0_1_ = 0x11;
  FUN_0040cc00(uVar2,0,0xffffffff);
  local_4._0_1_ = 3;
  FUN_004040a0(1);
  local_10 = 0x21;
  FUN_00549b10(local_38,local_20);
  uVar2 = FUN_005ae390(local_30,s_PageDown_006a1320);
  local_4._0_1_ = 0x12;
  FUN_0040cc00(uVar2,0,0xffffffff);
  local_4._0_1_ = 3;
  FUN_004040a0(1);
  local_10 = 0x22;
  FUN_00549b10(local_38,local_20);
  uVar2 = FUN_005ae390(local_30,&DAT_006a136c);
  local_4._0_1_ = 0x13;
  FUN_0040cc00(uVar2,0,0xffffffff);
  local_4._0_1_ = 3;
  FUN_004040a0(1);
  local_10 = 0x23;
  FUN_00549b10(local_38,local_20);
  uVar2 = FUN_005ae390(local_30,&DAT_006a1370);
  local_4._0_1_ = 0x14;
  FUN_0040cc00(uVar2,0,0xffffffff);
  local_4._0_1_ = 3;
  FUN_004040a0(1);
  local_10 = 0x24;
  FUN_00549b10(local_38,local_20);
  uVar2 = FUN_005ae390(local_30,&DAT_006a1380);
  local_4._0_1_ = 0x15;
  FUN_0040cc00(uVar2,0,0xffffffff);
  local_4._0_1_ = 3;
  FUN_004040a0(1);
  local_10 = 0x25;
  FUN_00549b10(local_38,local_20);
  uVar2 = FUN_005ae390(local_30,&DAT_0069b028);
  local_4._0_1_ = 0x16;
  FUN_0040cc00(uVar2,0,0xffffffff);
  local_4._0_1_ = 3;
  FUN_004040a0(1);
  local_10 = 0x26;
  FUN_00549b10(local_38,local_20);
  uVar2 = FUN_005ae390(local_30,s_Right_006a1378);
  local_4._0_1_ = 0x17;
  FUN_0040cc00(uVar2,0,0xffffffff);
  local_4._0_1_ = 3;
  FUN_004040a0(1);
  local_10 = 0x27;
  FUN_00549b10(local_38,local_20);
  uVar2 = FUN_005ae390(local_30,&DAT_0069b020);
  local_4._0_1_ = 0x18;
  FUN_0040cc00(uVar2,0,0xffffffff);
  local_4._0_1_ = 3;
  FUN_004040a0(1);
  local_10 = 0x28;
  FUN_00549b10(local_38,local_20);
  uVar2 = FUN_005ae390(local_30,s_PrintScreen_006a163c);
  local_4._0_1_ = 0x19;
  FUN_0040cc00(uVar2,0,0xffffffff);
  local_4._0_1_ = 3;
  FUN_004040a0(1);
  local_10 = 0x2c;
  FUN_00549b10(local_38,local_20);
  uVar2 = FUN_005ae390(local_30,s_Insert_006a1634);
  local_4._0_1_ = 0x1a;
  FUN_0040cc00(uVar2,0,0xffffffff);
  local_4._0_1_ = 3;
  FUN_004040a0(1);
  local_10 = 0x2d;
  FUN_00549b10(local_38,local_20);
  uVar2 = FUN_005ae390(local_30,s_Delete_006a1318);
  local_4._0_1_ = 0x1b;
  FUN_0040cc00(uVar2,0,0xffffffff);
  local_4._0_1_ = 3;
  FUN_004040a0(1);
  local_10 = 0x2e;
  FUN_00549b10(local_38,local_20);
  uVar2 = FUN_005ae390(local_30,&DAT_006a1354);
  local_4._0_1_ = 0x1c;
  FUN_0040cc00(uVar2,0,0xffffffff);
  local_4._0_1_ = 3;
  FUN_004040a0(1);
  local_10 = 0x30;
  FUN_00549b10(local_38,local_20);
  uVar2 = FUN_005ae390(local_30,&DAT_00697680);
  local_4._0_1_ = 0x1d;
  FUN_0040cc00(uVar2,0,0xffffffff);
  local_4._0_1_ = 3;
  FUN_004040a0(1);
  local_10 = 0x31;
  FUN_00549b10(local_38,local_20);
  uVar2 = FUN_005ae390(local_30,&DAT_006a1350);
  local_4._0_1_ = 0x1e;
  FUN_0040cc00(uVar2,0,0xffffffff);
  local_4._0_1_ = 3;
  FUN_004040a0(1);
  local_10 = 0x32;
  FUN_00549b10(local_38,local_20);
  uVar2 = FUN_005ae390(local_30,&DAT_006a134c);
  local_4._0_1_ = 0x1f;
  FUN_0040cc00(uVar2,0,0xffffffff);
  local_4._0_1_ = 3;
  FUN_004040a0(1);
  local_10 = 0x33;
  FUN_00549b10(local_38,local_20);
  uVar2 = FUN_005ae390(local_30,&DAT_006a1348);
  local_4._0_1_ = 0x20;
  FUN_0040cc00(uVar2,0,0xffffffff);
  local_4._0_1_ = 3;
  FUN_004040a0(1);
  local_10 = 0x34;
  FUN_00549b10(local_38,local_20);
  uVar2 = FUN_005ae390(local_30,&DAT_006a1344);
  local_4._0_1_ = 0x21;
  FUN_0040cc00(uVar2,0,0xffffffff);
  local_4._0_1_ = 3;
  FUN_004040a0(1);
  local_10 = 0x35;
  FUN_00549b10(local_38,local_20);
  uVar2 = FUN_005ae390(local_30,&DAT_006a1340);
  local_4._0_1_ = 0x22;
  FUN_0040cc00(uVar2,0,0xffffffff);
  local_4._0_1_ = 3;
  FUN_004040a0(1);
  local_10 = 0x36;
  FUN_00549b10(local_38,local_20);
  uVar2 = FUN_005ae390(local_30,&DAT_006a133c);
  local_4._0_1_ = 0x23;
  FUN_0040cc00(uVar2,0,0xffffffff);
  local_4._0_1_ = 3;
  FUN_004040a0(1);
  local_10 = 0x37;
  FUN_00549b10(local_38,local_20);
  uVar2 = FUN_005ae390(local_30,&DAT_006a1630);
  local_4._0_1_ = 0x24;
  FUN_0040cc00(uVar2,0,0xffffffff);
  local_4._0_1_ = 3;
  FUN_004040a0(1);
  local_10 = 0x38;
  FUN_00549b10(local_38,local_20);
  uVar2 = FUN_005ae390(local_30,&DAT_006a162c);
  local_4._0_1_ = 0x25;
  FUN_0040cc00(uVar2,0,0xffffffff);
  local_4._0_1_ = 3;
  FUN_004040a0(1);
  local_10 = 0x39;
  FUN_00549b10(local_38,local_20);
  uVar2 = FUN_005ae390(local_30,&DAT_0069ad9c);
  local_4._0_1_ = 0x26;
  FUN_0040cc00(uVar2,0,0xffffffff);
  local_4._0_1_ = 3;
  FUN_004040a0(1);
  local_10 = 0x41;
  FUN_00549b10(local_38,local_20);
  uVar2 = FUN_005ae390(local_30,&DAT_006a1628);
  local_4._0_1_ = 0x27;
  FUN_0040cc00(uVar2,0,0xffffffff);
  local_4._0_1_ = 3;
  FUN_004040a0(1);
  local_10 = 0x42;
  FUN_00549b10(local_38,local_20);
  uVar2 = FUN_005ae390(local_30,&DAT_006a1624);
  local_4._0_1_ = 0x28;
  FUN_0040cc00(uVar2,0,0xffffffff);
  local_4._0_1_ = 3;
  FUN_004040a0(1);
  local_10 = 0x43;
  FUN_00549b10(local_38,local_20);
  uVar2 = FUN_005ae390(local_30,&DAT_006a1620);
  local_4._0_1_ = 0x29;
  FUN_0040cc00(uVar2,0,0xffffffff);
  local_4._0_1_ = 3;
  FUN_004040a0(1);
  local_10 = 0x44;
  FUN_00549b10(local_38,local_20);
  uVar2 = FUN_005ae390(local_30,&DAT_006a161c);
  local_4._0_1_ = 0x2a;
  FUN_0040cc00(uVar2,0,0xffffffff);
  local_4._0_1_ = 3;
  FUN_004040a0(1);
  local_10 = 0x45;
  FUN_00549b10(local_38,local_20);
  uVar2 = FUN_005ae390(local_30,&DAT_006a1618);
  local_4._0_1_ = 0x2b;
  FUN_0040cc00(uVar2,0,0xffffffff);
  local_4._0_1_ = 3;
  FUN_004040a0(1);
  local_10 = 0x46;
  FUN_00549b10(local_38,local_20);
  uVar2 = FUN_005ae390(local_30,&DAT_006a1614);
  local_4._0_1_ = 0x2c;
  FUN_0040cc00(uVar2,0,0xffffffff);
  local_4._0_1_ = 3;
  FUN_004040a0(1);
  local_10 = 0x47;
  FUN_00549b10(local_38,local_20);
  uVar2 = FUN_005ae390(local_30,&DAT_006a1610);
  local_4._0_1_ = 0x2d;
  FUN_0040cc00(uVar2,0,0xffffffff);
  local_4._0_1_ = 3;
  FUN_004040a0(1);
  local_10 = 0x48;
  FUN_00549b10(local_38,local_20);
  uVar2 = FUN_005ae390(local_30,&DAT_006a160c);
  local_4._0_1_ = 0x2e;
  FUN_0040cc00(uVar2,0,0xffffffff);
  local_4._0_1_ = 3;
  FUN_004040a0(1);
  local_10 = 0x49;
  FUN_00549b10(local_38,local_20);
  uVar2 = FUN_005ae390(local_30,&DAT_006a1608);
  local_4._0_1_ = 0x2f;
  FUN_0040cc00(uVar2,0,0xffffffff);
  local_4._0_1_ = 3;
  FUN_004040a0(1);
  local_10 = 0x4a;
  FUN_00549b10(local_38,local_20);
  uVar2 = FUN_005ae390(local_30,&DAT_006a1604);
  local_4._0_1_ = 0x30;
  FUN_0040cc00(uVar2,0,0xffffffff);
  local_4._0_1_ = 3;
  FUN_004040a0(1);
  local_10 = 0x4b;
  FUN_00549b10(local_38,local_20);
  uVar2 = FUN_005ae390(local_30,&DAT_006a1600);
  local_4._0_1_ = 0x31;
  FUN_0040cc00(uVar2,0,0xffffffff);
  local_4._0_1_ = 3;
  FUN_004040a0(1);
  local_10 = 0x4c;
  FUN_00549b10(local_38,local_20);
  uVar2 = FUN_005ae390(local_30,&DAT_006a15fc);
  local_4._0_1_ = 0x32;
  FUN_0040cc00(uVar2,0,0xffffffff);
  local_4._0_1_ = 3;
  FUN_004040a0(1);
  local_10 = 0x4d;
  FUN_00549b10(local_38,local_20);
  uVar2 = FUN_005ae390(local_30,&DAT_006a15f8);
  local_4._0_1_ = 0x33;
  FUN_0040cc00(uVar2,0,0xffffffff);
  local_4._0_1_ = 3;
  FUN_004040a0(1);
  local_10 = 0x4e;
  FUN_00549b10(local_38,local_20);
  uVar2 = FUN_005ae390(local_30,&DAT_006a15f4);
  local_4._0_1_ = 0x34;
  FUN_0040cc00(uVar2,0,0xffffffff);
  local_4._0_1_ = 3;
  FUN_004040a0(1);
  local_10 = 0x4f;
  FUN_00549b10(local_38,local_20);
  uVar2 = FUN_005ae390(local_30,&DAT_006a1304);
  local_4._0_1_ = 0x35;
  FUN_0040cc00(uVar2,0,0xffffffff);
  local_4._0_1_ = 3;
  FUN_004040a0(1);
  local_10 = 0x50;
  FUN_00549b10(local_38,local_20);
  uVar2 = FUN_005ae390(local_30,&DAT_006a15f0);
  local_4._0_1_ = 0x36;
  FUN_0040cc00(uVar2,0,0xffffffff);
  local_4._0_1_ = 3;
  FUN_004040a0(1);
  local_10 = 0x51;
  FUN_00549b10(local_38,local_20);
  uVar2 = FUN_005ae390(local_30,&DAT_006a15ec);
  local_4._0_1_ = 0x37;
  FUN_0040cc00(uVar2,0,0xffffffff);
  local_4._0_1_ = 3;
  FUN_004040a0(1);
  local_10 = 0x52;
  FUN_00549b10(local_38,local_20);
  uVar2 = FUN_005ae390(local_30,&DAT_006a15e8);
  local_4._0_1_ = 0x38;
  FUN_0040cc00(uVar2,0,0xffffffff);
  local_4._0_1_ = 3;
  FUN_004040a0(1);
  local_10 = 0x53;
  FUN_00549b10(local_38,local_20);
  uVar2 = FUN_005ae390(local_30,&DAT_006a15e4);
  local_4._0_1_ = 0x39;
  FUN_0040cc00(uVar2,0,0xffffffff);
  local_4._0_1_ = 3;
  FUN_004040a0(1);
  local_10 = 0x54;
  FUN_00549b10(local_38,local_20);
  uVar2 = FUN_005ae390(local_30,&DAT_006a15e0);
  local_4._0_1_ = 0x3a;
  FUN_0040cc00(uVar2,0,0xffffffff);
  local_4._0_1_ = 3;
  FUN_004040a0(1);
  local_10 = 0x56;
  FUN_00549b10(local_38,local_20);
  uVar2 = FUN_005ae390(local_30,&DAT_006a15dc);
  local_4._0_1_ = 0x3b;
  FUN_0040cc00(uVar2,0,0xffffffff);
  local_4._0_1_ = 3;
  FUN_004040a0(1);
  local_10 = 0x57;
  FUN_00549b10(local_38,local_20);
  uVar2 = FUN_005ae390(local_30,&DAT_00691c88);
  local_4._0_1_ = 0x3c;
  FUN_0040cc00(uVar2,0,0xffffffff);
  local_4._0_1_ = 3;
  FUN_004040a0(1);
  local_10 = 0x58;
  FUN_00549b10(local_38,local_20);
  uVar2 = FUN_005ae390(local_30,&DAT_00691c84);
  local_4._0_1_ = 0x3d;
  FUN_0040cc00(uVar2,0,0xffffffff);
  local_4._0_1_ = 3;
  FUN_004040a0(1);
  local_10 = 0x59;
  FUN_00549b10(local_38,local_20);
  uVar2 = FUN_005ae390(local_30,&DAT_006a15d8);
  local_4._0_1_ = 0x3e;
  FUN_0040cc00(uVar2,0,0xffffffff);
  local_4._0_1_ = 3;
  FUN_004040a0(1);
  local_10 = 0x5a;
  FUN_00549b10(local_38,local_20);
  uVar2 = FUN_005ae390(local_30,&DAT_006a15d4);
  local_4._0_1_ = 0x3f;
  FUN_0040cc00(uVar2,0,0xffffffff);
  local_4._0_1_ = 3;
  FUN_004040a0(1);
  local_10 = 0x70;
  FUN_00549b10(local_38,local_20);
  uVar2 = FUN_005ae390(local_30,&DAT_006a15d0);
  local_4._0_1_ = 0x40;
  FUN_0040cc00(uVar2,0,0xffffffff);
  local_4._0_1_ = 3;
  FUN_004040a0(1);
  local_10 = 0x71;
  FUN_00549b10(local_38,local_20);
  uVar2 = FUN_005ae390(local_30,&DAT_006a15cc);
  local_4._0_1_ = 0x41;
  FUN_0040cc00(uVar2,0,0xffffffff);
  local_4._0_1_ = 3;
  FUN_004040a0(1);
  local_10 = 0x72;
  FUN_00549b10(local_38,local_20);
  uVar2 = FUN_005ae390(local_30,&DAT_006a15c8);
  local_4._0_1_ = 0x42;
  FUN_0040cc00(uVar2,0,0xffffffff);
  local_4._0_1_ = 3;
  FUN_004040a0(1);
  local_10 = 0x73;
  FUN_00549b10(local_38,local_20);
  uVar2 = FUN_005ae390(local_30,&DAT_006a15c4);
  local_4._0_1_ = 0x43;
  FUN_0040cc00(uVar2,0,0xffffffff);
  local_4._0_1_ = 3;
  FUN_004040a0(1);
  local_10 = 0x74;
  FUN_00549b10(local_38,local_20);
  uVar2 = FUN_005ae390(local_30,&DAT_006a15c0);
  local_4._0_1_ = 0x44;
  FUN_0040cc00(uVar2,0,0xffffffff);
  local_4._0_1_ = 3;
  FUN_004040a0(1);
  local_10 = 0x75;
  FUN_00549b10(local_38,local_20);
  uVar2 = FUN_005ae390(local_30,&DAT_006a15bc);
  local_4._0_1_ = 0x45;
  FUN_0040cc00(uVar2,0,0xffffffff);
  local_4._0_1_ = 3;
  FUN_004040a0(1);
  local_10 = 0x76;
  FUN_00549b10(local_38,local_20);
  uVar2 = FUN_005ae390(local_30,&DAT_006a15b8);
  local_4._0_1_ = 0x46;
  FUN_0040cc00(uVar2,0,0xffffffff);
  local_4._0_1_ = 3;
  FUN_004040a0(1);
  local_10 = 0x77;
  FUN_00549b10(local_38,local_20);
  uVar2 = FUN_005ae390(local_30,&DAT_006a15b4);
  local_4._0_1_ = 0x47;
  FUN_0040cc00(uVar2,0,0xffffffff);
  local_4._0_1_ = 3;
  FUN_004040a0(1);
  local_10 = 0x78;
  FUN_00549b10(local_38,local_20);
  uVar2 = FUN_005ae390(local_30,&DAT_006a15b0);
  local_4._0_1_ = 0x48;
  FUN_0040cc00(uVar2,0,0xffffffff);
  local_4._0_1_ = 3;
  FUN_004040a0(1);
  local_10 = 0x79;
  FUN_00549b10(local_38,local_20);
  uVar2 = FUN_005ae390(local_30,&DAT_006a15ac);
  local_4._0_1_ = 0x49;
  FUN_0040cc00(uVar2,0,0xffffffff);
  local_4._0_1_ = 3;
  FUN_004040a0(1);
  local_10 = 0x7a;
  FUN_00549b10(local_38,local_20);
  uVar2 = FUN_005ae390(local_30,&DAT_006a1300);
  local_4._0_1_ = 0x4a;
  FUN_0040cc00(uVar2,0,0xffffffff);
  local_4._0_1_ = 3;
  FUN_004040a0(1);
  local_10 = 0x7b;
  FUN_00549b10(local_38,local_20);
  uVar2 = FUN_005ae390(local_30,s_NumLock_006a15a4);
  local_4._0_1_ = 0x4b;
  FUN_0040cc00(uVar2,0,0xffffffff);
  local_4._0_1_ = 3;
  FUN_004040a0(1);
  local_10 = 0x90;
  FUN_00549b10(local_38,local_20);
  uVar2 = FUN_005ae390(local_30,s_ScrollLock_006a1598);
  local_4._0_1_ = 0x4c;
  FUN_0040cc00(uVar2,0,0xffffffff);
  local_4._0_1_ = 3;
  FUN_004040a0(1);
  local_10 = 0x91;
  FUN_00549b10(local_38,local_20);
  uVar2 = FUN_005ae390(local_30,s_LeftShift_006a158c);
  local_4._0_1_ = 0x4d;
  FUN_0040cc00(uVar2,0,0xffffffff);
  local_4._0_1_ = 3;
  FUN_004040a0(1);
  local_10 = 0xa0;
  FUN_0054a530(local_38,1,local_20);
  uVar2 = FUN_005ae390(local_30,s_RightShift_006a1580);
  local_4._0_1_ = 0x4e;
  FUN_0040cc00(uVar2,0,0xffffffff);
  local_4._0_1_ = 3;
  FUN_004040a0(1);
  local_10 = 0xa1;
  FUN_0054a530(local_38,1,local_20);
  uVar2 = FUN_005ae390(local_30,s_LeftControl_006a1574);
  local_4._0_1_ = 0x4f;
  FUN_0040cc00(uVar2,0,0xffffffff);
  local_4._0_1_ = 3;
  FUN_004040a0(1);
  local_10 = 0xa2;
  FUN_0054a530(local_38,1,local_20);
  uVar2 = FUN_005ae390(local_30,s_RightControl_006a1564);
  local_4._0_1_ = 0x50;
  FUN_0040cc00(uVar2,0,0xffffffff);
  local_4._0_1_ = 3;
  FUN_004040a0(1);
  local_10 = 0xa3;
  FUN_0054a530(local_38,1,local_20);
  uVar2 = FUN_005ae390(local_30,s_LeftAlt_006a155c);
  local_4._0_1_ = 0x51;
  FUN_0040cc00(uVar2,0,0xffffffff);
  local_4._0_1_ = 3;
  if (local_2c != 0) {
    cVar1 = *(char *)(local_2c + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0((char *)(local_2c + -1));
    }
    else {
      *(char *)(local_2c + -1) = cVar1 + -1;
    }
  }
  local_10 = 0xa4;
  FUN_0054a530(local_38,1,local_20);
  uVar2 = FUN_005ae390(local_30,s_RightAlt_006a1550);
  local_4._0_1_ = 0x52;
  FUN_0040cc00(uVar2,0,0xffffffff);
  local_4._0_1_ = 3;
  if (local_2c != 0) {
    cVar1 = *(char *)(local_2c + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0((char *)(local_2c + -1));
    }
    else {
      *(char *)(local_2c + -1) = cVar1 + -1;
    }
  }
  local_10 = 0xa5;
  FUN_0054a530(local_38,1,local_20);
  uVar2 = FUN_005ae390(local_30,&DAT_006a154c);
  local_4._0_1_ = 0x53;
  FUN_0040cc00(uVar2,0,0xffffffff);
  local_4._0_1_ = 3;
  if (local_2c != 0) {
    cVar1 = *(char *)(local_2c + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0((char *)(local_2c + -1));
    }
    else {
      *(char *)(local_2c + -1) = cVar1 + -1;
    }
  }
  local_10 = 0xba;
  FUN_0054a530(local_38,1,local_20);
  uVar2 = FUN_005ae390(local_30,&DAT_00693900);
  local_4._0_1_ = 0x54;
  FUN_0040cc00(uVar2,0,0xffffffff);
  local_4._0_1_ = 3;
  if (local_2c != 0) {
    cVar1 = *(char *)(local_2c + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0((char *)(local_2c + -1));
    }
    else {
      *(char *)(local_2c + -1) = cVar1 + -1;
    }
  }
  local_10 = 0xbf;
  FUN_0054a530(local_38,1,local_20);
  uVar2 = FUN_005ae390(local_30,&DAT_006a1310);
  local_4._0_1_ = 0x55;
  FUN_0040cc00(uVar2,0,0xffffffff);
  local_4._0_1_ = 3;
  if (local_2c != 0) {
    cVar1 = *(char *)(local_2c + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0((char *)(local_2c + -1));
    }
    else {
      *(char *)(local_2c + -1) = cVar1 + -1;
    }
  }
  local_10 = 0xc0;
  FUN_0054a530(local_38,1,local_20);
  uVar2 = FUN_005ae390(local_30,&DAT_006a1334);
  local_4._0_1_ = 0x56;
  FUN_0040cc00(uVar2,0,0xffffffff);
  local_4._0_1_ = 3;
  if (local_2c != 0) {
    cVar1 = *(char *)(local_2c + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0((char *)(local_2c + -1));
    }
    else {
      *(char *)(local_2c + -1) = cVar1 + -1;
    }
  }
  local_10 = 0xdb;
  FUN_0054a530(local_38,1,local_20);
  uVar2 = FUN_005ae390(local_30,&DAT_006a1548);
  local_4._0_1_ = 0x57;
  FUN_0040cc00(uVar2,0,0xffffffff);
  local_4._0_1_ = 3;
  if (local_2c != 0) {
    cVar1 = *(char *)(local_2c + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0((char *)(local_2c + -1));
    }
    else {
      *(char *)(local_2c + -1) = cVar1 + -1;
    }
  }
  local_10 = 0xdc;
  FUN_0054a530(local_38,1,local_20);
  uVar2 = FUN_005ae390(local_30,&DAT_006a1338);
  local_4._0_1_ = 0x58;
  FUN_0040cc00(uVar2,0,0xffffffff);
  local_4._0_1_ = 3;
  if (local_2c != 0) {
    cVar1 = *(char *)(local_2c + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0((char *)(local_2c + -1));
    }
    else {
      *(char *)(local_2c + -1) = cVar1 + -1;
    }
  }
  local_10 = 0xdd;
  FUN_0054a530(local_38,1,local_20);
  uVar2 = FUN_005ae390(local_30,s_Quote_0069b018);
  local_4._0_1_ = 0x59;
  FUN_0040cc00(uVar2,0,0xffffffff);
  local_4._0_1_ = 3;
  if (local_2c != 0) {
    cVar1 = *(char *)(local_2c + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0((char *)(local_2c + -1));
    }
    else {
      *(char *)(local_2c + -1) = cVar1 + -1;
    }
  }
  local_10 = 0xde;
  FUN_0054a530(local_38,1,local_20);
  uVar2 = FUN_005ae390(local_30,&DAT_0069b010);
  local_4._0_1_ = 0x5a;
  FUN_0040cc00(uVar2,0,0xffffffff);
  local_4._0_1_ = 3;
  if (local_2c != 0) {
    cVar1 = *(char *)(local_2c + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0((char *)(local_2c + -1));
    }
    else {
      *(char *)(local_2c + -1) = cVar1 + -1;
    }
  }
  local_10 = 0xbb;
  FUN_0054a530(local_38,1,local_20);
  puVar3 = (undefined1 *)FUN_005ae390(local_30,s_Comma_0069b008);
  uVar6 = *(uint *)(puVar3 + 8);
  local_4 = CONCAT31(local_4._1_3_,0x5b);
  local_48 = uVar6;
  if (local_20 == puVar3) {
    FUN_0040c9b0(uVar6,0xffffffff);
    FUN_0040c9b0(0,0);
  }
  else {
    if (uVar6 != 0) {
      puVar4 = *(undefined1 **)(puVar3 + 4);
      if (puVar4 == (undefined1 *)0x0) {
        puVar4 = &DAT_0064a3b4;
      }
      if ((byte)puVar4[-1] < 0xfe) {
        FUN_004040a0(1);
        local_1c = *(undefined4 **)(puVar3 + 4);
        if (local_1c == (undefined4 *)0x0) {
          local_1c = (undefined4 *)&DAT_0064a3b4;
        }
        local_18 = *(undefined4 *)(puVar3 + 8);
        local_14 = *(undefined4 *)(puVar3 + 0xc);
        *(char *)((int)local_1c + -1) = *(char *)((int)local_1c + -1) + '\x01';
        goto LAB_00546f1c;
      }
    }
    cVar1 = FUN_00401940(uVar6,1);
    if (cVar1 != '\0') {
      puVar7 = *(undefined4 **)(puVar3 + 4);
      if (puVar7 == (undefined4 *)0x0) {
        puVar7 = (undefined4 *)&DAT_0064a3b4;
      }
      puVar8 = local_1c;
      for (uVar5 = uVar6 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar8 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar8 = puVar8 + 1;
      }
      for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined1 *)puVar8 = *(undefined1 *)puVar7;
        puVar7 = (undefined4 *)((int)puVar7 + 1);
        puVar8 = (undefined4 *)((int)puVar8 + 1);
      }
      FUN_00404190(local_48);
    }
  }
LAB_00546f1c:
  local_4._0_1_ = 3;
  FUN_00542570();
  local_10 = 0xbc;
  FUN_00548e10(local_20);
  uVar2 = FUN_005ae390(local_30,s_Minus_0069b000);
  local_4._0_1_ = 0x5c;
  FUN_004a6db0(uVar2);
  local_4._0_1_ = 3;
  FUN_00542570();
  local_10 = 0xbd;
  FUN_00548e10(local_20);
  uVar2 = FUN_005ae390(local_30,s_Period_0069aff8);
  local_4._0_1_ = 0x5d;
  FUN_004a6db0(uVar2);
  local_4._0_1_ = 3;
  FUN_00542570();
  local_10 = 0xbe;
  FUN_00548e10(local_20);
  FUN_00547010(local_40);
  local_44 = 1;
  FUN_00542570();
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_0053dd10();
  ExceptionList = local_c;
  return param_1;
}

