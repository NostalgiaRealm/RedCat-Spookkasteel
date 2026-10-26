/*
 * FUN_0054ceb0 at 0054ceb0
 * undefined FUN_0054ceb0(void)
 * Address ranges: 0054ceb0-0054d026
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_0054ceb0(undefined4 *param_1)

{
  int *piVar1;
  int *piVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_0063d781;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_0064f808;
  local_4 = 7;
  FUN_0054e060();
  DAT_006ba778 = 0;
  local_4._0_1_ = 6;
  FUN_005acca0();
  local_4._0_1_ = 5;
  FUN_005a3ce0();
  local_4._0_1_ = 4;
  FUN_005a3ce0();
  local_4._0_1_ = 3;
  FUN_005a3ce0();
  local_4._0_1_ = 8;
  FUN_005ae5f0(s___AdamSource_DaviSortedList_h_00690798,0x2d);
  FUN_005ae770();
  piVar1 = (int *)param_1[0x1e];
  piVar2 = (int *)param_1[0x1d];
  local_4._0_1_ = 2;
  for (; piVar2 != piVar1; piVar2 = piVar2 + 1) {
    if (*piVar2 != 0) {
      FUN_004098d0();
      *piVar2 = 0;
    }
  }
  FUN_005fe5f0(param_1[0x1d]);
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  local_4._0_1_ = 9;
  FUN_005ae5f0(s___AdamSource_DaviSortedList_h_00690798,0x2d);
  FUN_005ae770();
  piVar1 = (int *)param_1[0x17];
  piVar2 = (int *)param_1[0x16];
  local_4._0_1_ = 1;
  for (; piVar2 != piVar1; piVar2 = piVar2 + 1) {
    if (*piVar2 != 0) {
      FUN_004098d0();
      *piVar2 = 0;
    }
  }
  FUN_005fe5f0(param_1[0x16]);
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00550900();
  local_4 = 0xffffffff;
  FUN_005ab4d0();
  ExceptionList = pvStack_c;
  return;
}

