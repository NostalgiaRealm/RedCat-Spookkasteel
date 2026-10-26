/*
 * FUN_100092de at 100092de
 * undefined __stdcall FUN_100092de(undefined4 param_1, undefined4 param_2, int param_3, undefined * param_4)
 * Address ranges: 100092de-10009319;10009327-1000933b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100092de(undefined4 param_1,undefined4 param_2,int param_3,undefined *param_4)

{
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_100131c0;
  puStack_10 = &LAB_1000c124;
  local_14 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_14;
  while( true ) {
    param_3 = param_3 + -1;
    if (param_3 < 0) break;
    (*(code *)param_4)();
  }
  ExceptionList = local_14;
  return;
}

