/*
 * FUN_005b2ae0 at 005b2ae0
 * undefined FUN_005b2ae0(void)
 * Address ranges: 005b2ae0-005b2b81
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_005b2ae0(undefined4 *param_1,int param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006463a0;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  if (param_2 != 0) {
    ExceptionList = &local_c;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  }
  FUN_005b2120();
  local_4 = CONCAT31(local_4._1_3_,1);
  uVar1 = *param_3;
  param_1[9] = 0;
  *(undefined1 *)(param_1 + 8) = uVar1;
  param_1[10] = 0;
  param_1[0xb] = 0;
  FUN_0040cc00(param_3,0);
  *param_1 = &PTR_FUN_00650154;
  local_4 = 0xffffffff;
  if ((param_2 != 0) &&
     (iVar2 = *(int *)(param_2 + 0x14) + -1, *(int *)(param_2 + 0x14) = iVar2, iVar2 == 0)) {
    FUN_005abfc0();
  }
  ExceptionList = local_c;
  return param_1;
}

