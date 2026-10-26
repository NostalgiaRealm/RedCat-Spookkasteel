/*
 * FUN_005acaf0 at 005acaf0
 * undefined FUN_005acaf0(void)
 * Address ranges: 005acaf0-005acbb6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall
FUN_005acaf0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00645d64;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005ab4a0();
  *(undefined1 *)(param_1 + 5) = (undefined1)param_5;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[10] = 0;
  *(undefined1 *)(param_1 + 9) = (undefined1)param_5;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  local_4._0_1_ = 2;
  local_4._1_3_ = 0;
  *(undefined1 *)(param_1 + 0xd) = (undefined1)param_5;
  FUN_004040a0(0);
  *(undefined1 *)(param_1 + 0x14) = (undefined1)param_5;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  local_4 = CONCAT31(local_4._1_3_,4);
  *param_1 = &PTR_FUN_0065010c;
  FUN_005ac5c0(param_2,param_3,param_5);
  FUN_005acdb0(param_4);
  FUN_005ad000(param_1 + 0x14);
  FUN_005ac5a0(param_6);
  ExceptionList = local_c;
  return param_1;
}

