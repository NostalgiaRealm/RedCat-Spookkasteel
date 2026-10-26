/*
 * FUN_004078c0 at 004078c0
 * undefined FUN_004078c0(void)
 * Address ranges: 004078c0-00407925
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_004078c0(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006202d8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00406dc0(param_2);
  uVar1 = 0xffffffff;
  local_4 = 0;
  param_1[0xd] = param_2;
  *param_1 = &PTR_FUN_0064a814;
  FUN_004288c0(0xffffffff);
  FUN_005966a0(uVar1);
  FUN_00428b10();
  ExceptionList = pvStack_c;
  return param_1;
}

