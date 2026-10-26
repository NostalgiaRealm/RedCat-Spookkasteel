/*
 * FUN_00429e10 at 00429e10
 * undefined FUN_00429e10(void)
 * Address ranges: 00429e10-00429e7c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall
FUN_00429e10(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00622f28;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004272d0(param_2,param_3,param_4,param_5,param_6);
  local_4 = 0;
  FUN_00426800(param_6);
  *param_1 = &PTR_FUN_0064be98;
  ExceptionList = local_c;
  return param_1;
}

