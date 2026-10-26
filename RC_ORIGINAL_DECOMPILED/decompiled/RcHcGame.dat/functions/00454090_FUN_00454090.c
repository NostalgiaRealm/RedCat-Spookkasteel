/*
 * FUN_00454090 at 00454090
 * undefined FUN_00454090(void)
 * Address ranges: 00454090-00454161
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_00454090(int param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006265b8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00449760(*(int *)(param_1 + 0x14) + 0x30);
  local_4 = 0xffffffff;
  FUN_00454200();
  FUN_005614e0();
  ExceptionList = local_c;
  return;
}

