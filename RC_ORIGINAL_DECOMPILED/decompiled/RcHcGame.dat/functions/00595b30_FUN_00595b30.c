/*
 * FUN_00595b30 at 00595b30
 * undefined FUN_00595b30(void)
 * Address ranges: 00595b30-00595c25
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_00595b30(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  iVar1 = param_3;
  puStack_8 = &LAB_00643d18;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (param_3 != 0) {
    ExceptionList = &pvStack_c;
    *(int *)(param_3 + 0x14) = *(int *)(param_3 + 0x14) + 1;
  }
  local_4._0_1_ = 2;
  local_4._1_3_ = 0;
  FUN_00449760(&param_2);
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_0049c1b0();
  if (iVar1 != 0) {
    FUN_00595470();
    FUN_0059b980();
    (**(code **)(*param_1 + 0x84))();
    FUN_005954a0();
    FUN_005b17e0();
    FUN_00595ec0();
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
  ExceptionList = pvStack_c;
  return;
}

