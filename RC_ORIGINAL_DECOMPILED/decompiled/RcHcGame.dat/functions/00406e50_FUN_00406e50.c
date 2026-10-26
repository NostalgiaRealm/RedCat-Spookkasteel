/*
 * FUN_00406e50 at 00406e50
 * undefined FUN_00406e50(void)
 * Address ranges: 00406e50-00406eb4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_00406e50(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uStack_1c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00620198;
  local_c = ExceptionList;
  uStack_1c = param_2;
  ExceptionList = &local_c;
  FUN_00403610();
  local_4 = 0;
  param_1[10] = param_2;
  *param_1 = &PTR_FUN_0064a7d4;
  FUN_004237d0(&uStack_1c);
  FUN_00428250();
  ExceptionList = local_c;
  return param_1;
}

