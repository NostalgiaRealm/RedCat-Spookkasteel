/*
 * FUN_10008e06 at 10008e06
 * undefined __stdcall FUN_10008e06(undefined4 param_1, undefined4 param_2, int param_3, undefined * param_4)
 * Address ranges: 10008e06-10008e6f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10008e06(undefined4 param_1,undefined4 param_2,int param_3,undefined *param_4)

{
  int local_20;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_100131a0;
  puStack_10 = &LAB_1000c124;
  local_14 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_14;
  for (local_20 = 0; local_20 < param_3; local_20 = local_20 + 1) {
    (*(code *)param_4)();
  }
  local_8 = 0xffffffff;
  FUN_10008e70();
  ExceptionList = local_14;
  return;
}

