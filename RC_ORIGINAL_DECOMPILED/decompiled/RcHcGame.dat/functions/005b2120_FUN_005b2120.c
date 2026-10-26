/*
 * FUN_005b2120 at 005b2120
 * undefined FUN_005b2120(void)
 * Address ranges: 005b2120-005b2199
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_005b2120(undefined4 *param_1,int param_2)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00646278;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_005ab4a0();
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  *param_1 = &PTR_FUN_0064e794;
  param_1[7] = param_2;
  if (param_2 != 0) {
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  }
  *param_1 = &PTR_FUN_00650144;
  local_4 = 0xffffffff;
  if ((param_2 != 0) &&
     (iVar1 = *(int *)(param_2 + 0x14) + -1, *(int *)(param_2 + 0x14) = iVar1, iVar1 == 0)) {
    FUN_005abfc0(0);
  }
  ExceptionList = local_c;
  return param_1;
}

