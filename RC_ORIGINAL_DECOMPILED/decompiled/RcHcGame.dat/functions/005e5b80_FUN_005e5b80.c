/*
 * FUN_005e5b80 at 005e5b80
 * undefined FUN_005e5b80(void)
 * Address ranges: 005e5b80-005e5be9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_005e5b80(undefined4 *param_1,undefined4 param_2)

{
  undefined8 uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006467b8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  param_1[1] = param_2;
  local_4 = 0;
  *param_1 = &PTR_FUN_0065152c;
  FUN_005ff4d6(&DAT_006a1624);
  uVar1 = FUN_00600c09();
  *(undefined8 *)(param_1 + 2) = uVar1;
  FUN_005ff58f();
  ExceptionList = local_c;
  return param_1;
}

