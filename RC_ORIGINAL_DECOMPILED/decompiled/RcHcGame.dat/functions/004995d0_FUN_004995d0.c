/*
 * FUN_004995d0 at 004995d0
 * undefined FUN_004995d0(void)
 * Address ranges: 004995d0-00499621
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_004995d0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0062c228;
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

