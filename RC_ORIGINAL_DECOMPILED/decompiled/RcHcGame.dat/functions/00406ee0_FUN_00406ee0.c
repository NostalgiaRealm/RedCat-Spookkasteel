/*
 * FUN_00406ee0 at 00406ee0
 * undefined FUN_00406ee0(void)
 * Address ranges: 00406ee0-00406f40
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_00406ee0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006201b8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_0064a7d4;
  local_4 = 0;
  FUN_00428250();
  local_4 = 0xffffffff;
  FUN_004036a0();
  ExceptionList = local_c;
  return;
}

