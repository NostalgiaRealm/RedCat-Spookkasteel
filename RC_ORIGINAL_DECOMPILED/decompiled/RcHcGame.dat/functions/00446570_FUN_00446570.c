/*
 * FUN_00446570 at 00446570
 * undefined FUN_00446570(void)
 * Address ranges: 00446570-004465f4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall FUN_00446570(undefined4 *param_1,undefined4 param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00625126;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0044b130(param_2);
  param_1[0x93] = 0;
  *param_1 = &PTR_FUN_0064cd84;
  local_4 = 1;
  FUN_0044c1b0(DAT_00691078,DAT_0069107c,DAT_00691080,_DAT_00691084,0x43480000,0);
  ExceptionList = local_c;
  return param_1;
}

