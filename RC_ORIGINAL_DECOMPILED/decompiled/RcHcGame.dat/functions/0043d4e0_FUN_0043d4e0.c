/*
 * FUN_0043d4e0 at 0043d4e0
 * undefined FUN_0043d4e0(void)
 * Address ranges: 0043d4e0-0043d5ad
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_0043d4e0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  iVar1 = param_3;
  puStack_8 = &LAB_006246f8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (param_3 != 0) {
    ExceptionList = &local_c;
    *(int *)(param_3 + 0x14) = *(int *)(param_3 + 0x14) + 1;
  }
  local_4._0_1_ = 2;
  local_4._1_3_ = 0;
  FUN_00449760(&param_2);
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_004e1150();
  if ((iVar1 != 0) && (*(int *)(param_1 + 0x354) != 0)) {
    FUN_004f41c0();
  }
  local_4 = local_4 & 0xffffff00;
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
  ExceptionList = local_c;
  return;
}

