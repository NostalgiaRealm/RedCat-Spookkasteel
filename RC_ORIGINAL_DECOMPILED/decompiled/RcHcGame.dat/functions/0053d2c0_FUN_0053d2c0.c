/*
 * FUN_0053d2c0 at 0053d2c0
 * undefined FUN_0053d2c0(void)
 * Address ranges: 0053d2c0-0053d311
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_0053d2c0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0063c0d8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_0064f7b0;
  local_4 = 0;
  FUN_0053df50();
  local_4 = 0xffffffff;
  FUN_005ab4d0();
  ExceptionList = local_c;
  return;
}

