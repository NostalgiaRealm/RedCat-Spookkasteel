/*
 * FUN_00448a70 at 00448a70
 * undefined FUN_00448a70(void)
 * Address ranges: 00448a70-00448aef
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_00448a70(undefined4 *param_1,undefined4 param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00625378;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0044b130(param_2);
  *param_1 = &PTR_FUN_0064cefc;
  param_1[0x93] = 0;
  local_4 = 0;
  FUN_0044c1b0(DAT_006b6778,DAT_006b677c,DAT_006b6780,DAT_006b6784,0x43480000,0);
  ExceptionList = local_c;
  return param_1;
}

