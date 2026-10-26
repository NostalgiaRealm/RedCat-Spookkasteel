/*
 * FUN_005a4ab0 at 005a4ab0
 * undefined FUN_005a4ab0(void)
 * Address ranges: 005a4ab0-005a4b27
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_005a4ab0(undefined4 *param_1,undefined4 param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00645418;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005ab4a0();
  local_4 = 0;
  param_1[5] = 0;
  FUN_005a42e0(param_1 + 6,param_2);
  *(undefined1 *)(param_1 + 10) = (undefined1)param_2;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined1 *)(param_1 + 0xe) = (undefined1)param_2;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *param_1 = &PTR_FUN_006500e8;
  ExceptionList = local_c;
  return param_1;
}

