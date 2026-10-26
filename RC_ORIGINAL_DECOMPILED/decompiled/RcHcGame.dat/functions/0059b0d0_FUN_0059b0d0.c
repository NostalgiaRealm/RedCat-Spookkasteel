/*
 * FUN_0059b0d0 at 0059b0d0
 * undefined FUN_0059b0d0(void)
 * Address ranges: 0059b0d0-0059b1bf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0059b0d0(void)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00644601;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005ae5f0(s_D__Work_RCHorror_AdamSource_Adam_006a7000,0x39);
  iVar1 = DAT_006c9f7c;
  if (DAT_006c9f7c != 0) {
    local_4._0_1_ = 7;
    local_4._1_3_ = 0;
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
    FUN_005fe5f0(iVar1);
  }
  DAT_006c9f7c = 0;
  local_4 = 0xffffffff;
  FUN_005ae770();
  ExceptionList = local_c;
  return;
}

