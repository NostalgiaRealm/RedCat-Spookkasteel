/*
 * FUN_0042dc80 at 0042dc80
 * undefined FUN_0042dc80(void)
 * Address ranges: 0042dc80-0042dcf6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall
FUN_0042dc80(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00623528;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004272d0(param_2,param_3,param_4,param_5,param_6);
  local_4 = 0;
  param_1[0x6a] = 0xffffffff;
  FUN_00426e00(param_6);
  *param_1 = &PTR_FUN_0064c274;
  ExceptionList = local_c;
  return param_1;
}

