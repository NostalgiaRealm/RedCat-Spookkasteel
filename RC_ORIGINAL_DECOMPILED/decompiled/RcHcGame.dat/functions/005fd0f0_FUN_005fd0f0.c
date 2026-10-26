/*
 * FUN_005fd0f0 at 005fd0f0
 * undefined FUN_005fd0f0(void)
 * Address ranges: 005fd0f0-005fd157
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_005fd0f0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00648c68;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  param_1[1] = 6;
  param_1[2] = 0;
  param_1[3] = 0;
  local_4 = 0;
  *param_1 = &PTR_FUN_00651390;
  FUN_005f7170(param_2,param_3);
  FUN_005eee90(param_2,param_1 + 4);
  ExceptionList = local_c;
  return param_1;
}

