/*
 * FUN_0059b3c0 at 0059b3c0
 * undefined FUN_0059b3c0(void)
 * Address ranges: 0059b3c0-0059b433
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_0059b3c0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_0064465e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00650098;
  local_4 = 2;
  FUN_0059c380(param_1);
  FUN_0059b490();
  local_4._0_1_ = 1;
  FUN_005630e0();
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_005630e0();
  local_4 = 0xffffffff;
  FUN_005ab4d0();
  ExceptionList = local_c;
  return;
}

