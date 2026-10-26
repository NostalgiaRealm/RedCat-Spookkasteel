/*
 * FUN_00499ed0 at 00499ed0
 * undefined FUN_00499ed0(void)
 * Address ranges: 00499ed0-00499f21
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_00499ed0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0062c528;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_00567300();
  local_4 = 0xffffffff;
  *param_1 = &PTR_FUN_0064e794;
  FUN_005ab4d0();
  ExceptionList = local_c;
  return;
}

