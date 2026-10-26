/*
 * FUN_00567780 at 00567780
 * undefined FUN_00567780(void)
 * Address ranges: 00567780-00567826
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_00567780(undefined4 *param_1,undefined4 param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00640242;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005ab4a0();
  *(undefined1 *)(param_1 + 0x47) = (undefined1)param_2;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4e] = 0;
  *(undefined1 *)(param_1 + 0x4d) = (undefined1)param_2;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x52] = 0;
  *(undefined1 *)(param_1 + 0x51) = (undefined1)param_2;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  local_4 = 3;
  *param_1 = &PTR_FUN_0064f870;
  FUN_00567990(param_2);
  ExceptionList = local_c;
  return param_1;
}

