/*
 * FUN_004882e0 at 004882e0
 * undefined FUN_004882e0(void)
 * Address ranges: 004882e0-004883c0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall
FUN_004882e0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062a15a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0051cee0(param_2,param_3,param_4);
  param_1[0x20] = 0;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  *(undefined1 *)(param_1 + 0x25) = (undefined1)param_4;
  FUN_004040a0(0);
  param_1[0x29] = 0;
  local_4._0_1_ = 3;
  *(undefined1 *)(param_1 + 0x2e) = (undefined1)param_4;
  FUN_004040a0(0);
  param_1[0x32] = 0;
  local_4._0_1_ = 5;
  *(undefined1 *)(param_1 + 0x37) = (undefined1)param_4;
  FUN_004040a0(0);
  param_1[0x3b] = 0;
  local_4 = CONCAT31(local_4._1_3_,7);
  *(undefined1 *)(param_1 + 0x40) = (undefined1)param_4;
  FUN_004040a0(0);
  param_1[0x44] = 0;
  param_1[0x4d] = 0;
  param_1[0x56] = 0;
  param_1[0x5f] = 0;
  *param_1 = &PTR_FUN_0064e4c4;
  ExceptionList = local_c;
  return param_1;
}

