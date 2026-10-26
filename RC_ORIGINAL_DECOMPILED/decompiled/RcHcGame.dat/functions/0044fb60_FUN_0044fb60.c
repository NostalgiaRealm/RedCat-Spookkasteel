/*
 * FUN_0044fb60 at 0044fb60
 * undefined FUN_0044fb60(void)
 * Address ranges: 0044fb60-0044fbdc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_0044fb60(undefined4 *param_1,undefined4 param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00625ec8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0044b130(param_2);
  *param_1 = &PTR_FUN_0064d1a0;
  local_4 = 0;
  FUN_0044c1b0(DAT_00691788,DAT_0069178c,DAT_00691790,DAT_00691794,0x43480000,0);
  ExceptionList = local_c;
  return param_1;
}

