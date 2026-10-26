/*
 * FUN_00407ee0 at 00407ee0
 * undefined FUN_00407ee0(void)
 * Address ranges: 00407ee0-00407f40
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_00407ee0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006203d8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_0064a868;
  local_4 = 0;
  FUN_00428250();
  local_4 = 0xffffffff;
  FUN_004029b0();
  ExceptionList = local_c;
  return;
}

