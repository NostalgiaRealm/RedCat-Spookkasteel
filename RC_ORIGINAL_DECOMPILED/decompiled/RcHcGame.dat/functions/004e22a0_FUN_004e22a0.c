/*
 * FUN_004e22a0 at 004e22a0
 * undefined FUN_004e22a0(void)
 * Address ranges: 004e22a0-004e2426
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_004e22a0(undefined4 *param_1,undefined4 param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00632816;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00501cb0(param_2);
  local_4 = 0;
  FUN_004ad120(param_1);
  *(undefined1 *)(param_1 + 0x4b) = 0;
  *(undefined1 *)((int)param_1 + 0x12d) = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0xffffffff;
  param_1[0x5a] = 0xffffffff;
  param_1[0x5b] = 0x3f800000;
  *(undefined1 *)(param_1 + 0x5c) = 1;
  param_1[0x5d] = 0xffffffff;
  param_1[0x5e] = 0xffffffff;
  param_1[0x5f] = 0x3f800000;
  *(undefined1 *)(param_1 + 0x60) = 1;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  param_1[99] = 0;
  param_1[100] = 0;
  *(undefined1 *)(param_1 + 0x6d) = 1;
  param_1[0x6e] = 0;
  *(undefined1 *)(param_1 + 0x6f) = (undefined1)param_2;
  param_1[0x70] = 0;
  param_1[0x71] = 0;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  *(undefined1 *)(param_1 + 0x74) = (undefined1)param_2;
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  *(undefined1 *)(param_1 + 0x78) = (undefined1)param_2;
  param_1[0x79] = 0;
  param_1[0x7a] = 0;
  param_1[0x7b] = 0;
  *(undefined1 *)(param_1 + 0x7c) = 1;
  *param_1 = &PTR_FUN_0064f314;
  FUN_005b2e20(0,0,0);
  param_1[0x69] = 0;
  param_1[0x65] = 0;
  param_1[0x4c] = 0;
  param_1[0x6a] = 0;
  param_1[0x66] = 0;
  param_1[0x4d] = 0;
  param_1[0x6b] = 0;
  param_1[0x67] = 0;
  param_1[0x4e] = 0;
  param_1[0x6c] = 0;
  param_1[0x68] = 0;
  param_1[0x4f] = 0;
  ExceptionList = local_c;
  return param_1;
}

