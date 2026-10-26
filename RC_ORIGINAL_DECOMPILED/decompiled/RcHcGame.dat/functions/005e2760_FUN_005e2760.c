/*
 * FUN_005e2760 at 005e2760
 * undefined FUN_005e2760(void)
 * Address ranges: 005e2760-005e27a2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005e2760(int param_1,undefined4 param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00646421;
  local_c = ExceptionList;
  local_4 = 0;
  if (param_1 != 0) {
    ExceptionList = &local_c;
    FUN_005e27d0(param_2,param_1);
  }
  ExceptionList = local_c;
  return;
}

