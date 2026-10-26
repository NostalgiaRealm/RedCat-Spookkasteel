/*
 * FUN_004426c0 at 004426c0
 * undefined FUN_004426c0(void)
 * Address ranges: 004426c0-0044273c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_004426c0(undefined4 *param_1,undefined4 param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00624e58;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0044b130(param_2);
  *param_1 = &PTR_FUN_0064c9bc;
  local_4 = 0;
  FUN_0044c1b0(DAT_00690d20,DAT_00690d24,DAT_00690d28,DAT_00690d2c,0x43480000,0);
  ExceptionList = local_c;
  return param_1;
}

