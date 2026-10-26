/*
 * FUN_00401530 at 00401530
 * undefined FUN_00401530(void)
 * Address ranges: 00401530-0040158e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_00401530(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0061f858;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00401000(param_2);
  local_4 = 0;
  iVar1 = FUN_00429fd0();
  param_1[0xd] = *(undefined4 *)(iVar1 + 0x2c);
  param_1[0xe] = 0;
  *param_1 = &PTR_FUN_0064a2d4;
  ExceptionList = local_c;
  return param_1;
}

