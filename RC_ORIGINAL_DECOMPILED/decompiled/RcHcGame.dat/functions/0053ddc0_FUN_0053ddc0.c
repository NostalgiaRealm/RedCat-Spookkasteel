/*
 * FUN_0053ddc0 at 0053ddc0
 * undefined FUN_0053ddc0(void)
 * Address ranges: 0053ddc0-0053de35
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __fastcall FUN_0053ddc0(undefined4 *param_1)

{
  undefined1 local_11;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063c21b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005ab4a0();
  *(undefined1 *)(param_1 + 5) = local_11;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  local_4 = 5;
  param_1[9] = 0;
  *param_1 = &PTR_FUN_0064f800;
  FUN_00541860();
  FUN_005414f0();
  FUN_00541c10();
  FUN_00544a20();
  ExceptionList = local_c;
  return param_1;
}

