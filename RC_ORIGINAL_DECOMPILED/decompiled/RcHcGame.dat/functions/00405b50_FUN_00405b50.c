/*
 * FUN_00405b50 at 00405b50
 * undefined FUN_00405b50(void)
 * Address ranges: 00405b50-00405ba1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_00405b50(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0061ffb8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_0064a670;
  local_4 = 0;
  FUN_00428b40();
  local_4 = 0xffffffff;
  FUN_00403780();
  ExceptionList = local_c;
  return;
}

