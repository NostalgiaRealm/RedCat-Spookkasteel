/*
 * FUN_005e7af0 at 005e7af0
 * undefined FUN_005e7af0(void)
 * Address ranges: 005e7af0-005e7b4e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_005e7af0(undefined4 *param_1,undefined4 param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00646a48;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  param_1[1] = param_2;
  local_4 = 0;
  *param_1 = &PTR_FUN_00651568;
  FUN_005ff4d6(&DAT_006a1624);
  FUN_005ff58f();
  ExceptionList = local_c;
  return param_1;
}

