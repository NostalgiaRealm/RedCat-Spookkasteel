/*
 * FUN_004437f0 at 004437f0
 * undefined FUN_004437f0(void)
 * Address ranges: 004437f0-0044386c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall FUN_004437f0(undefined4 *param_1,undefined4 param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00624f88;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0044b130(param_2);
  *param_1 = &PTR_FUN_0064ca64;
  local_4 = 0;
  FUN_0044c1b0(DAT_00690dc8,DAT_00690dcc,DAT_00690dd0,_DAT_00690dd4,0x43480000,0);
  ExceptionList = local_c;
  return param_1;
}

