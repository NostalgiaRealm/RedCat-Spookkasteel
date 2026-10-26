/*
 * FUN_005ee6c0 at 005ee6c0
 * undefined FUN_005ee6c0(void)
 * Address ranges: 005ee6c0-005ee7e1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall
FUN_005ee6c0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  undefined1 local_15;
  undefined4 *local_14;
  undefined4 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00647491;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_14 = param_1;
  FUN_00409810(s__none_006b1160,&local_15);
  param_1[7] = 0;
  param_1[8] = 0;
  *param_1 = &PTR_FUN_00650a74;
  param_1[1] = 0x3e;
  param_1[2] = 0;
  *(undefined2 *)(param_1 + 9) = 0xffff;
  local_4 = 0;
  FUN_005ecfe0();
  *param_1 = &PTR_FUN_00650b8c;
  *(undefined1 *)(param_1 + 0xf) = 0;
  local_4 = 1;
  FUN_005ecfe0();
  local_4._0_1_ = 2;
  FUN_005ecfe0();
  local_10 = param_1 + 0x1a;
  *(undefined1 *)(param_1 + 0x1b) = (undefined1)param_5;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  local_4 = CONCAT31(local_4._1_3_,4);
  *local_10 = &PTR_FUN_00650b88;
  FUN_00514e80(10);
  *param_1 = &PTR_FUN_00650b40;
  local_4 = 5;
  FUN_005ecfe0();
  local_4 = 6;
  *param_1 = &PTR_FUN_00650bd8;
  FUN_005efec0(param_2,param_3,param_4,param_5);
  FUN_005ed400(param_2,param_3,param_1);
  FUN_005efb50(param_2,param_1 + 0x24,param_3);
  ExceptionList = local_c;
  return param_1;
}

