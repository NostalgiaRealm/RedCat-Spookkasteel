/*
 * FUN_005efb00 at 005efb00
 * undefined FUN_005efb00(void)
 * Address ranges: 005efb00-005efb4a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005efb00(undefined4 param_1,undefined4 param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00647728;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005f5d30(param_2);
  local_4 = 0;
  FUN_005f5e30(param_1);
  ExceptionList = local_c;
  return;
}

