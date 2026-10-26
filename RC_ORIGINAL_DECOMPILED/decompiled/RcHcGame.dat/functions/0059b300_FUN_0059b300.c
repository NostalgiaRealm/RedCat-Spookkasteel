/*
 * FUN_0059b300 at 0059b300
 * undefined FUN_0059b300(void)
 * Address ranges: 0059b300-0059b39a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_0059b300(undefined4 *param_1,undefined4 param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0064462e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005ab4a0();
  local_4 = 0;
  param_1[5] = param_2;
  param_1[6] = 0;
  FUN_0059b1d0(&DAT_00650090);
  local_4._0_1_ = 1;
  *(undefined1 *)(param_1 + 0xb) = 0;
  FUN_0059b1d0(&DAT_00650090);
  local_4 = CONCAT31(local_4._1_3_,2);
  *(undefined1 *)(param_1 + 0xd) = 0;
  param_1[0xe] = 0;
  param_1[0x12] = 0xffffffff;
  *param_1 = &PTR_FUN_00650098;
  FUN_0059c370(param_1);
  FUN_005b3070();
  FUN_005b3070();
  ExceptionList = local_c;
  return param_1;
}

