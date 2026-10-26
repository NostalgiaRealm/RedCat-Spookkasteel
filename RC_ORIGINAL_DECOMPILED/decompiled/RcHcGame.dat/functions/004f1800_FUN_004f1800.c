/*
 * FUN_004f1800 at 004f1800
 * undefined FUN_004f1800(void)
 * Address ranges: 004f1800-004f18c4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_004f1800(undefined4 *param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006341f9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005ab4a0();
  *param_1 = &PTR_FUN_0064e794;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  local_4 = 0;
  uVar1 = *param_2;
  param_1[8] = 0;
  *(undefined1 *)(param_1 + 7) = uVar1;
  param_1[9] = 0;
  param_1[10] = 0;
  FUN_0040cc00(param_2,0,0xffffffff);
  param_1[0xc] = 0;
  *(undefined1 *)(param_1 + 0xb) = param_2._0_1_;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = &LAB_00566630;
  *(undefined1 *)(param_1 + 0x11) = 0;
  local_4._0_1_ = 2;
  FUN_004f2810(param_2);
  local_4 = CONCAT31(local_4._1_3_,3);
  *(undefined1 *)(param_1 + 0x77) = 0;
  *param_1 = &PTR_FUN_0064f420;
  FUN_005ae5f0(s_D__Work_RCHorror_AdamSource_Adam_0069c43c,0xe);
  FUN_005ae770();
  ExceptionList = local_c;
  return param_1;
}

