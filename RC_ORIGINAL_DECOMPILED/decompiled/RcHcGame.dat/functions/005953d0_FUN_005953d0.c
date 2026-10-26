/*
 * FUN_005953d0 at 005953d0
 * undefined FUN_005953d0(void)
 * Address ranges: 005953d0-00595469
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_005953d0(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00643c70;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_0064ff6c;
  local_4 = 4;
  if ((undefined4 *)param_1[0xc1] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0xc1])(1);
  }
  local_4._0_1_ = 3;
  FUN_005630e0();
  local_4._0_1_ = 2;
  FUN_00596590();
  local_4._0_1_ = 1;
  FUN_005630e0();
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_0059b3c0();
  local_4 = 0xffffffff;
  FUN_0049b720();
  ExceptionList = pvStack_c;
  return;
}

