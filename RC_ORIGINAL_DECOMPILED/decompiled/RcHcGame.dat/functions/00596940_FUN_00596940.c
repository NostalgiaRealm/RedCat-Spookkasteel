/*
 * FUN_00596940 at 00596940
 * undefined FUN_00596940(void)
 * Address ranges: 00596940-005969aa
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_00596940(int param_1,undefined4 param_2)

{
  void *pvVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00643e5b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = operator_new(0x28);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_005977d0(*(undefined4 *)(param_1 + 0x14),param_2);
  }
  local_4 = 0xffffffff;
  FUN_00596640(7,uVar2);
  ExceptionList = local_c;
  return;
}

