/*
 * FUN_0053d230 at 0053d230
 * undefined FUN_0053d230(void)
 * Address ranges: 0053d230-0053d29d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __fastcall FUN_0053d230(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063c0b8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005ab4a0();
  local_4 = 0;
  FUN_0053ddc0();
  *(undefined1 *)((int)param_1 + 0x46) = 1;
  *(undefined1 *)((int)param_1 + 0x45) = 1;
  *(undefined1 *)(param_1 + 0x14) = 1;
  param_1[0x10] = 0x42480000;
  param_1[0x12] = 0x42480000;
  param_1[0x13] = 0x42480000;
  param_1[0xf] = 0;
  *param_1 = &PTR_FUN_0064f7b0;
  *(undefined1 *)(param_1 + 0x11) = 0;
  ExceptionList = local_c;
  return param_1;
}

