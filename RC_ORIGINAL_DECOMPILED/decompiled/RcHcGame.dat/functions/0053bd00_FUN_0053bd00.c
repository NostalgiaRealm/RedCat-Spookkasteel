/*
 * FUN_0053bd00 at 0053bd00
 * undefined FUN_0053bd00(void)
 * Address ranges: 0053bd00-0053bd52
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_0053bd00(undefined4 *param_1,undefined4 param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0063bf30;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005ab4a0();
  param_1[5] = param_2;
  *(undefined1 *)(param_1 + 6) = (undefined1)param_2;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  *param_1 = &PTR_FUN_0064f7a0;
  ExceptionList = local_c;
  return param_1;
}

