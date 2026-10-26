/*
 * FUN_004229e0 at 004229e0
 * undefined FUN_004229e0(void)
 * Address ranges: 004229e0-00422b0c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_004229e0(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  iVar1 = param_3;
  puStack_8 = &LAB_006224f8;
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
  FUN_00502750();
  if (param_2 != 0) {
    if (param_2 != 0) {
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    }
    (**(code **)(*param_1 + 0x80))();
  }
  if (iVar1 != 0) {
    *(int *)(iVar1 + 0x14) = *(int *)(iVar1 + 0x14) + 1;
    (**(code **)(*param_1 + 0x7c))();
    iVar2 = (**(code **)(*param_1 + 0x9c))();
    iVar3 = (**(code **)(*param_1 + 0x9c))();
    param_1[0x41] = (int)((*(float *)(iVar2 + 300) - *(float *)(iVar3 + 0x120)) * 0.8);
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

