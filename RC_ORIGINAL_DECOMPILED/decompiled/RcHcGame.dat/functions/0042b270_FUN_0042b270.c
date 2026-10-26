/*
 * FUN_0042b270 at 0042b270
 * undefined FUN_0042b270(void)
 * Address ranges: 0042b270-0042b2d7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall
FUN_0042b270(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00623158;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0042a700(param_2,param_3,param_4,param_5);
  local_4 = 0;
  FUN_00426800(param_5);
  *param_1 = &PTR_FUN_0064c0cc;
  ExceptionList = local_c;
  return param_1;
}

