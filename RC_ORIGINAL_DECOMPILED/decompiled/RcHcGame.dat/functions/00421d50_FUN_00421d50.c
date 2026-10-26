/*
 * FUN_00421d50 at 00421d50
 * undefined FUN_00421d50(void)
 * Address ranges: 00421d50-00421e30
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_00421d50(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  iVar1 = param_3;
  puStack_8 = &LAB_00622358;
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
  FUN_004cb300();
  if (*(char *)(param_1 + 0x180) != '\0') {
    if (iVar1 == 0) {
      FUN_004969a0();
      FUN_0042d750();
    }
    else {
      FUN_004969a0();
      FUN_0042d610();
    }
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

