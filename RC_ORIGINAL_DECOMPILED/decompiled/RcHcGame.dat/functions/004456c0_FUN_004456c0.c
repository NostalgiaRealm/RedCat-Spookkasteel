/*
 * FUN_004456c0 at 004456c0
 * undefined FUN_004456c0(void)
 * Address ranges: 004456c0-0044573c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_004456c0(undefined4 *param_1,undefined4 param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00625098;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0044b130(param_2);
  *param_1 = &PTR_FUN_0064cccc;
  local_4 = 0;
  FUN_0044c1b0(DAT_00690ff0,DAT_00690ff4,DAT_00690ff8,DAT_00690ffc,0x43480000,0);
  ExceptionList = local_c;
  return param_1;
}

