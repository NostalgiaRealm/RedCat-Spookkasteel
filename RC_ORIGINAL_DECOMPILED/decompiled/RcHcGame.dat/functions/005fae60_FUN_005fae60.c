/*
 * FUN_005fae60 at 005fae60
 * undefined FUN_005fae60(void)
 * Address ranges: 005fae60-005faea2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005fae60(int param_1,undefined4 param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00648a51;
  local_c = ExceptionList;
  local_4 = 0;
  if (param_1 != 0) {
    ExceptionList = &local_c;
    FUN_005fa6a0(param_2);
  }
  ExceptionList = local_c;
  return;
}

