/*
 * FUN_004502c0 at 004502c0
 * undefined FUN_004502c0(void)
 * Address ranges: 004502c0-0045033c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall FUN_004502c0(undefined4 *param_1,undefined4 param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00625f48;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0044b130(param_2);
  *param_1 = &PTR_FUN_0064d24c;
  local_4 = 0;
  FUN_0044c1b0(DAT_00691840,DAT_00691844,DAT_00691848,_DAT_0069184c,0x43480000,0);
  ExceptionList = local_c;
  return param_1;
}

