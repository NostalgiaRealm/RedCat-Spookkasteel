/*
 * FUN_0057d160 at 0057d160
 * undefined FUN_0057d160(void)
 * Address ranges: 0057d160-0057d295
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_0057d160(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006420aa;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00501cb0(param_2);
  param_1[0x3e] = param_3;
  param_2._0_1_ = SUB41(param_1 + 0x3f,0);
  *(undefined1 *)(param_1 + 0x3f) = (undefined1)param_2;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  FUN_00580810(0);
  param_1[0x43] = 0;
  *(undefined1 *)(param_1 + 0x44) = 1;
  param_1[0x45] = 0x40000000;
  param_1[0x46] = 0x40000000;
  param_1[0x48] = 0;
  piVar1 = param_1 + 0x4c;
  *piVar1 = 0;
  *(undefined1 *)(param_1 + 0x50) = 0;
  *param_1 = &PTR_FUN_0064fc20;
  param_1[0x49] = 0;
  *(undefined1 *)((int)param_1 + 0x12d) = 1;
  param_1[0x4a] = 2;
  iVar2 = param_1[0x48];
  local_4._0_1_ = 5;
  if (iVar2 != 0) {
    iVar3 = *(int *)(iVar2 + 0x14) + -1;
    *(int *)(iVar2 + 0x14) = iVar3;
    if (iVar3 == 0) {
      FUN_005abfc0(0);
    }
    param_1[0x48] = 0;
  }
  *(undefined1 *)(param_1 + 0x4b) = 1;
  param_1[0x4d] = 0;
  *(undefined1 *)((int)param_1 + 0x13d) = 1;
  param_1[0x4e] = 1;
  iVar2 = *piVar1;
  local_4 = CONCAT31(local_4._1_3_,6);
  if (iVar2 != 0) {
    iVar3 = *(int *)(iVar2 + 0x14) + -1;
    *(int *)(iVar2 + 0x14) = iVar3;
    if (iVar3 == 0) {
      FUN_005abfc0(0);
    }
    *piVar1 = 0;
    FUN_005844b0();
  }
  *(undefined1 *)(param_1 + 0x4f) = 1;
  ExceptionList = local_c;
  return param_1;
}

