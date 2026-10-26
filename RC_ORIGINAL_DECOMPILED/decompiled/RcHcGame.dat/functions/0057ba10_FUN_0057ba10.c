/*
 * FUN_0057ba10 at 0057ba10
 * undefined FUN_0057ba10(void)
 * Address ranges: 0057ba10-0057ba99
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_0057ba10(undefined4 *param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00641de8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00501cb0(param_2);
  param_1[0x3e] = param_3;
  param_1[0x3f] = 0xffffffff;
  param_1[0x40] = 0xffffffff;
  param_1[0x41] = 0x3f800000;
  *(undefined1 *)(param_1 + 0x42) = 1;
  param_1[0x43] = 0;
  param_1[0x44] = *param_3;
  param_1[0x45] = param_3[1];
  uVar1 = param_3[2];
  *param_1 = &PTR_FUN_0064fb6c;
  param_1[0x46] = uVar1;
  ExceptionList = local_c;
  return param_1;
}

