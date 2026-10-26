/*
 * FUN_00458840 at 00458840
 * undefined FUN_00458840(void)
 * Address ranges: 00458840-004588f4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_00458840(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00626d2c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_0064d5f4;
  local_4 = 6;
  FUN_00554630();
  local_4._0_1_ = 5;
  FUN_00554630();
  local_4._0_1_ = 4;
  FUN_005acca0();
  local_4._0_1_ = 3;
  FUN_005acca0();
  local_4._0_1_ = 2;
  FUN_005acca0();
  local_4._0_1_ = 1;
  FUN_005acca0();
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_005acca0();
  local_4 = 0xffffffff;
  FUN_00501f40();
  ExceptionList = local_c;
  return;
}

