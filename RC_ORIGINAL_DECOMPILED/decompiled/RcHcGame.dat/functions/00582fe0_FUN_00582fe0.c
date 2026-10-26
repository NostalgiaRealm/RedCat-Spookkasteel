/*
 * FUN_00582fe0 at 00582fe0
 * undefined FUN_00582fe0(void)
 * Address ranges: 00582fe0-005830d0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_00582fe0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  iVar1 = param_3;
  puStack_8 = &LAB_006426c0;
  pvStack_c = ExceptionList;
  local_4 = 1;
  ExceptionList = &pvStack_c;
  if (*(int *)(param_1 + 0x18) != 0) {
    ExceptionList = &pvStack_c;
    if (param_3 != 0) {
      ExceptionList = &pvStack_c;
      FUN_004f41c0();
    }
    if (param_2 != 0) {
      FUN_00502220();
    }
  }
  if (*(int *)(param_1 + 0x3c) != 0) {
    if (iVar1 != 0) {
      *(int *)(iVar1 + 0x14) = *(int *)(iVar1 + 0x14) + 1;
    }
    local_4._0_1_ = 3;
    FUN_00449760(&param_2);
    local_4._0_1_ = 4;
    piVar2 = (int *)FUN_00582220();
    local_4 = CONCAT31(local_4._1_3_,1);
    (**(code **)(*piVar2 + 8))();
  }
  local_4 = local_4 & 0xffffff00;
  if (param_2 != 0) {
    iVar3 = *(int *)(param_2 + 0x14) + -1;
    *(int *)(param_2 + 0x14) = iVar3;
    if (iVar3 == 0) {
      FUN_005abfc0();
    }
    param_2 = 0;
  }
  local_4 = 0xffffffff;
  if ((iVar1 != 0) &&
     (iVar3 = *(int *)(iVar1 + 0x14) + -1, *(int *)(iVar1 + 0x14) = iVar3, iVar3 == 0)) {
    FUN_005abfc0();
  }
  ExceptionList = pvStack_c;
  return;
}

