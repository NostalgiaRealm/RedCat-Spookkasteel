/*
 * FUN_00596780 at 00596780
 * undefined FUN_00596780(void)
 * Address ranges: 00596780-005967ef
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_00596780(int param_1,undefined4 param_2,undefined4 param_3)

{
  void *pvVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00643ddb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = operator_new(0x2c);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00597260(*(undefined4 *)(param_1 + 0x14),param_2,param_3);
  }
  local_4 = 0xffffffff;
  FUN_00596640(2,uVar2);
  ExceptionList = local_c;
  return;
}

