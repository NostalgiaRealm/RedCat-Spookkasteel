/*
 * FUN_1000925e at 1000925e
 * undefined __stdcall FUN_1000925e(undefined4 param_1, undefined4 param_2, int param_3, undefined * param_4)
 * Address ranges: 1000925e-100092c5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1000925e(undefined4 param_1,undefined4 param_2,int param_3,undefined *param_4)

{
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_100131b0;
  puStack_10 = &LAB_1000c124;
  local_14 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_14;
  while( true ) {
    param_3 = param_3 + -1;
    if (param_3 < 0) break;
    (*(code *)param_4)();
  }
  local_8 = 0xffffffff;
  FUN_100092c6();
  ExceptionList = local_14;
  return;
}

