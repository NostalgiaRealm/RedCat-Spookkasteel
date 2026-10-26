/*
 * FUN_0050dcc0 at 0050dcc0
 * undefined FUN_0050dcc0(void)
 * Address ranges: 0050dcc0-0050dd5c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall
FUN_0050dcc0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00636e16;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005ab4a0();
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 6) = (undefined1)param_2;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  local_4._0_1_ = 2;
  local_4._1_3_ = 0;
  FUN_0050dd60(param_1 + 10,param_2,param_3,param_4);
  local_4 = CONCAT31(local_4._1_3_,3);
  FUN_004e5980(param_1 + 0xe,param_2,param_3,param_4);
  *(undefined1 *)(param_1 + 0x12) = 0;
  param_1[0x13] = param_5;
  param_1[0x14] = 0;
  *param_1 = &PTR_FUN_0064f544;
  ExceptionList = local_c;
  return param_1;
}

