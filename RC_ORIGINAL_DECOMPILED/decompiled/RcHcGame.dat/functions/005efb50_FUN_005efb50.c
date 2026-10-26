/*
 * FUN_005efb50 at 005efb50
 * undefined FUN_005efb50(void)
 * Address ranges: 005efb50-005efbe5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005efb50(undefined4 *param_1,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;
  undefined1 local_30 [36];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00647753;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005f5dd0(param_1);
  local_4 = 0;
  puVar1 = operator_new(0x2c);
  local_4._0_1_ = 1;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    param_1 = puVar1;
    FUN_005f5d90(local_30);
    *puVar1 = &PTR_FUN_00650c50;
    puVar1[10] = param_2;
  }
  local_4 = (uint)local_4._1_3_ << 8;
  param_1 = puVar1;
  FUN_0053cff0(*(undefined4 *)(param_3 + 0xc),1,&param_1);
  ExceptionList = local_c;
  return;
}

