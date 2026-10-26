/*
 * FUN_004ab040 at 004ab040
 * undefined FUN_004ab040(void)
 * Address ranges: 004ab040-004ab095
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_004ab040(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0062dfa8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_0064e974;
  local_4 = 0;
  FUN_00513340(param_1[0x1d]);
  local_4 = 0xffffffff;
  FUN_004ad8d0();
  ExceptionList = local_c;
  return;
}

