/*
 * FUN_00505400 at 00505400
 * undefined FUN_00505400(void)
 * Address ranges: 00505400-00505468
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 FUN_00505400(undefined4 param_1)

{
  undefined1 uVar1;
  undefined1 local_1c [4];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00635f58;
  local_c = ExceptionList;
  local_1c[0] = (undefined1)param_1;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  local_4 = 0;
  ExceptionList = &local_c;
  uVar1 = FUN_00504690(param_1,local_1c);
  local_4 = 0xffffffff;
  FUN_005e2320();
  ExceptionList = local_c;
  return uVar1;
}

