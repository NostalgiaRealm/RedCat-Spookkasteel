/*
 * FUN_00565430 at 00565430
 * undefined FUN_00565430(void)
 * Address ranges: 00565430-00565478
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __fastcall FUN_00565430(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063ffb8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005ab4a0();
  local_4 = 0;
  *param_1 = &PTR_FUN_0064f858;
  FUN_005654a0();
  ExceptionList = local_c;
  return param_1;
}

