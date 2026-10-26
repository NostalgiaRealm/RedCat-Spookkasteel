/*
 * FUN_0060b1db at 0060b1db
 * undefined FUN_0060b1db(void)
 * Address ranges: 0060b1db-0060b244
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0060b1db(undefined4 param_1,undefined4 param_2,int param_3,code *param_4)

{
  int local_20;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_00651bb0;
  puStack_10 = &LAB_006106d0;
  local_14 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_14;
  for (local_20 = 0; local_20 < param_3; local_20 = local_20 + 1) {
    (*param_4)();
  }
  local_8 = 0xffffffff;
  FUN_0060b245();
  ExceptionList = local_14;
  return;
}

