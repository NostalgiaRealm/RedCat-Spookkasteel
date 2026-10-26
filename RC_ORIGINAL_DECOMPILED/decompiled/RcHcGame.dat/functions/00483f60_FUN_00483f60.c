/*
 * FUN_00483f60 at 00483f60
 * undefined FUN_00483f60(void)
 * Address ranges: 00483f60-00484020
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_00483f60(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_006297f3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_0064e3dc;
  local_4 = 0;
  iVar1 = param_1[0x17];
  if (iVar1 != 0) {
    local_4._0_1_ = 2;
    local_4._1_3_ = 0;
    FUN_004040a0(1);
    local_4 = CONCAT31(local_4._1_3_,1);
    FUN_004040a0(1);
    FUN_005fe5f0(iVar1);
  }
  param_1[0x17] = 0;
  iVar1 = param_1[0x18];
  local_4._0_1_ = 3;
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0x14) + -1;
    *(int *)(iVar1 + 0x14) = iVar2;
    if (iVar2 == 0) {
      FUN_005abfc0(0);
    }
    param_1[0x18] = 0;
  }
  iVar1 = param_1[0x18];
  local_4 = (uint)local_4._1_3_ << 8;
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0x14) + -1;
    *(int *)(iVar1 + 0x14) = iVar2;
    if (iVar2 == 0) {
      FUN_005abfc0(0);
    }
    param_1[0x18] = 0;
  }
  local_4 = 0xffffffff;
  FUN_0051a260();
  ExceptionList = local_c;
  return;
}

