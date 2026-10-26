/*
 * FUN_005f11e0 at 005f11e0
 * undefined FUN_005f11e0(void)
 * Address ranges: 005f11e0-005f122d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_005f11e0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00647948;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00650de4;
  local_4 = 0;
  if ((undefined4 *)param_1[4] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[4])(1);
  }
  *param_1 = &PTR_LAB_00650d6c;
  ExceptionList = local_c;
  return;
}

