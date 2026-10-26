/*
 * FUN_00407420 at 00407420
 * undefined FUN_00407420(void)
 * Address ranges: 00407420-00407471
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_00407420(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00620258;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_0064a7f4;
  local_4 = 0;
  FUN_00428b40();
  local_4 = 0xffffffff;
  FUN_004029b0();
  ExceptionList = local_c;
  return;
}

