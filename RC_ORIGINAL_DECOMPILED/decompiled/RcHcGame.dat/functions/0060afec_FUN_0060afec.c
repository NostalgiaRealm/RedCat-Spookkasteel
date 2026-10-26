/*
 * FUN_0060afec at 0060afec
 * undefined FUN_0060afec(void)
 * Address ranges: 0060afec-0060b027;0060b035-0060b049
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0060afec(undefined4 param_1,undefined4 param_2,int param_3,code *param_4)

{
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_00651ba0;
  puStack_10 = &LAB_006106d0;
  local_14 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_14;
  while( true ) {
    param_3 = param_3 + -1;
    if (param_3 < 0) break;
    (*param_4)();
  }
  ExceptionList = local_14;
  return;
}

