/*
 * FUN_0060af6c at 0060af6c
 * undefined FUN_0060af6c(void)
 * Address ranges: 0060af6c-0060afd3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0060af6c(undefined4 param_1,undefined4 param_2,int param_3,code *param_4)

{
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_00651b90;
  puStack_10 = &LAB_006106d0;
  local_14 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_14;
  while( true ) {
    param_3 = param_3 + -1;
    if (param_3 < 0) break;
    (*param_4)();
  }
  local_8 = 0xffffffff;
  FUN_0060afd4();
  ExceptionList = local_14;
  return;
}

