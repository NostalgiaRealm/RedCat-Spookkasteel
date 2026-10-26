/*
 * FUN_00591740 at 00591740
 * undefined FUN_00591740(void)
 * Address ranges: 00591740-00591837
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_00591740(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  iVar1 = param_3;
  puStack_8 = &LAB_00643730;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (param_3 != 0) {
    ExceptionList = &pvStack_c;
    *(int *)(param_3 + 0x14) = *(int *)(param_3 + 0x14) + 1;
  }
  local_4._0_1_ = 2;
  local_4._1_3_ = 0;
  FUN_00449760(&param_2);
  local_4._0_1_ = 1;
  FUN_004de440();
  if (*(int *)(param_1 + 0x19c) != 0) {
    if (iVar1 != 0) {
      *(int *)(iVar1 + 0x14) = *(int *)(iVar1 + 0x14) + 1;
    }
    local_4._0_1_ = 3;
    FUN_00449760(&param_2);
    local_4._0_1_ = 1;
    (**(code **)(**(int **)(param_1 + 0x19c) + 8))();
  }
  local_4 = (uint)local_4._1_3_ << 8;
  if (param_2 != 0) {
    iVar2 = *(int *)(param_2 + 0x14) + -1;
    *(int *)(param_2 + 0x14) = iVar2;
    if (iVar2 == 0) {
      FUN_005abfc0();
    }
    param_2 = 0;
  }
  local_4 = 0xffffffff;
  if ((iVar1 != 0) &&
     (iVar2 = *(int *)(iVar1 + 0x14) + -1, *(int *)(iVar1 + 0x14) = iVar2, iVar2 == 0)) {
    FUN_005abfc0();
  }
  ExceptionList = pvStack_c;
  return;
}

