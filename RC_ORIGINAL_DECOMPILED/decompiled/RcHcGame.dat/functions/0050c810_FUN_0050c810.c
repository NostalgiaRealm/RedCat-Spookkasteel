/*
 * FUN_0050c810 at 0050c810
 * undefined FUN_0050c810(void)
 * Address ranges: 0050c810-0050c8ca
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_0050c810(undefined4 *param_1)

{
  int *piVar1;
  int *piVar2;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00636afb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_0064f53c;
  local_4 = 1;
  FUN_0050c8d0();
  local_4._0_1_ = 2;
  FUN_005ae5f0(s___AdamSource_DaviSortedList_h_00690798,0x2d);
  FUN_005ae770();
  piVar1 = (int *)param_1[7];
  piVar2 = (int *)param_1[6];
  local_4 = (uint)local_4._1_3_ << 8;
  for (; piVar2 != piVar1; piVar2 = piVar2 + 1) {
    if (*piVar2 != 0) {
      FUN_004098d0();
      *piVar2 = 0;
    }
  }
  FUN_005fe5f0(param_1[6]);
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  local_4 = 0xffffffff;
  FUN_005ab4d0();
  ExceptionList = local_c;
  return;
}

