/*
 * FUN_00439a10 at 00439a10
 * undefined FUN_00439a10(void)
 * Address ranges: 00439a10-00439b3f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_00439a10(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_0062421a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_0064c5fc;
  local_4 = 7;
  FUN_005acca0();
  local_4._0_1_ = 6;
  FUN_005acca0();
  local_4._0_1_ = 5;
  FUN_005acca0();
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
  local_4._0_1_ = 9;
  local_4._1_3_ = 0;
  FUN_005ae5f0(s___AdamSource_DaviSortedList_h_00690798,0x2d);
  FUN_005ae770();
  iVar2 = param_1[8];
  local_4 = CONCAT31(local_4._1_3_,8);
  iVar1 = param_1[9];
  for (; iVar2 != iVar1; iVar2 = iVar2 + 0x10) {
    FUN_004040a0(1);
  }
  FUN_005fe5f0(param_1[8]);
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  local_4 = 0xffffffff;
  FUN_005ab4d0();
  ExceptionList = local_c;
  return;
}

