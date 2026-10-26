/*
 * FUN_005f02b0 at 005f02b0
 * undefined FUN_005f02b0(void)
 * Address ranges: 005f02b0-005f02fe
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_005f02b0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006477f8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00650cb8;
  local_4 = 0;
  param_1[2] = &PTR_FUN_00650ad4;
  FUN_005e2f00();
  *param_1 = &PTR_LAB_00650ce0;
  ExceptionList = local_c;
  return;
}

