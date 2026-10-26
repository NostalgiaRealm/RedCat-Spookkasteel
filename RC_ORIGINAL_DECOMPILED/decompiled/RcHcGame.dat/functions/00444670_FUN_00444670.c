/*
 * FUN_00444670 at 00444670
 * undefined FUN_00444670(void)
 * Address ranges: 00444670-004446ec
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_00444670(undefined4 *param_1,undefined4 param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00625008;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0044b130(param_2);
  *param_1 = &PTR_FUN_0064cb1c;
  local_4 = 0;
  FUN_0044c1b0(DAT_00690ef0,DAT_00690ef4,DAT_00690ef8,DAT_00690efc,0x43480000,0);
  ExceptionList = local_c;
  return param_1;
}

