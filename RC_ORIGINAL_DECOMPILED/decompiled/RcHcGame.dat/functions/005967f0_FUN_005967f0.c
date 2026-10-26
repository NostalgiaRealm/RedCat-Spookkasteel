/*
 * FUN_005967f0 at 005967f0
 * undefined FUN_005967f0(void)
 * Address ranges: 005967f0-0059685a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_005967f0(int param_1,undefined4 param_2)

{
  void *pvVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00643dfb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = operator_new(0x1c);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_005973e0(*(undefined4 *)(param_1 + 0x14),param_2);
  }
  local_4 = 0xffffffff;
  FUN_00596640(3,uVar2);
  ExceptionList = local_c;
  return;
}

