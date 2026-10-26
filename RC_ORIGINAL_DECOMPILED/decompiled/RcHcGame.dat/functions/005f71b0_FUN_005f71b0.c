/*
 * FUN_005f71b0 at 005f71b0
 * undefined FUN_005f71b0(void)
 * Address ranges: 005f71b0-005f721f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_005f71b0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006484d8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  param_1[1] = 3;
  local_4 = 0;
  *param_1 = &PTR_FUN_00650d08;
  FUN_005f78e0(param_2,param_3);
  uVar1 = FUN_005f65c0(param_2,param_3);
  param_1[3] = uVar1;
  uVar1 = FUN_005f65c0(param_2,param_3);
  param_1[2] = uVar1;
  ExceptionList = pvStack_c;
  return param_1;
}

