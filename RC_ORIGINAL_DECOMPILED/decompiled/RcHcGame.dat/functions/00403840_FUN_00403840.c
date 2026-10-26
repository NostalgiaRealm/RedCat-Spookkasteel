/*
 * FUN_00403840 at 00403840
 * undefined FUN_00403840(void)
 * Address ranges: 00403840-0040388f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_00403840(undefined4 *param_1,undefined4 param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0061fbf8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00402960(param_2);
  param_1[10] = 0xffffffff;
  param_1[0xb] = 0xffffffff;
  param_1[0xc] = 0x3f800000;
  *(undefined1 *)(param_1 + 0xd) = 1;
  *param_1 = &PTR_FUN_0064a418;
  ExceptionList = local_c;
  return param_1;
}

