/*
 * FUN_00408360 at 00408360
 * undefined FUN_00408360(void)
 * Address ranges: 00408360-004083b1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_00408360(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00620498;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_0064a878;
  local_4 = 0;
  FUN_00428b40();
  local_4 = 0xffffffff;
  FUN_004029b0();
  ExceptionList = local_c;
  return;
}

