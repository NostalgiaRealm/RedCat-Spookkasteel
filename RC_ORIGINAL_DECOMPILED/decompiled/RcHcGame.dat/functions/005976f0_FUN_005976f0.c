/*
 * FUN_005976f0 at 005976f0
 * undefined FUN_005976f0(void)
 * Address ranges: 005976f0-00597741
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_005976f0(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00643f88;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00650068;
  local_4 = 0;
  FUN_005630e0();
  local_4 = 0xffffffff;
  FUN_00596ed0();
  ExceptionList = pvStack_c;
  return;
}

