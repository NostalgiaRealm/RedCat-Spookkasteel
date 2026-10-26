/*
 * FUN_00447860 at 00447860
 * undefined FUN_00447860(void)
 * Address ranges: 00447860-004478dc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_00447860(undefined4 *param_1,undefined4 param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00625268;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0044b130(param_2);
  *param_1 = &PTR_FUN_0064ce2c;
  local_4 = 0;
  FUN_0044c1b0(DAT_006911a8,DAT_006911ac,DAT_006911b0,DAT_006911b4,0x43480000,0);
  ExceptionList = local_c;
  return param_1;
}

