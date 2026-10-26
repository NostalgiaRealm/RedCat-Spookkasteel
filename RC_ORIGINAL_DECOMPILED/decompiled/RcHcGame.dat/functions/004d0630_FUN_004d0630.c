/*
 * FUN_004d0630 at 004d0630
 * undefined FUN_004d0630(void)
 * Address ranges: 004d0630-004d070b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_004d0630(int *param_1,float param_2)

{
  undefined1 local_4c [4];
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined **local_3c [2];
  undefined4 local_34;
  undefined4 local_2c;
  undefined **local_24 [2];
  undefined4 local_1c;
  undefined8 local_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006312b8;
  pvStack_c = ExceptionList;
  local_4c[0] = param_2._0_1_;
  local_48 = 0;
  local_40 = 0;
  local_14 = (double)param_2;
  local_44 = 0;
  local_24[0] = &PTR_FUN_0064f00c;
  local_1c = 1;
  local_3c[0] = &PTR_FUN_0064f00c;
  local_34 = 2;
  local_2c = 0;
  local_4 = 2;
  ExceptionList = &pvStack_c;
  FUN_005e1f20(local_24);
  FUN_005e1f20(local_3c);
  FUN_00504690(&DAT_006b9680,local_4c);
  (**(code **)(*param_1 + 0x58))(param_2);
  puStack_8._0_1_ = 1;
  FUN_005e2f00();
  puStack_8 = (undefined1 *)((uint)puStack_8._1_3_ << 8);
  FUN_005e2f00();
  puStack_8 = (undefined1 *)0xffffffff;
  FUN_005e2320();
  ExceptionList = local_14._4_4_;
  return;
}

