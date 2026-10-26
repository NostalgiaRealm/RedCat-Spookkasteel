/*
 * FUN_00408250 at 00408250
 * undefined FUN_00408250(void)
 * Address ranges: 00408250-004082ba
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_00408250(int param_1,undefined4 param_2)

{
  void *pvVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062045b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = operator_new(0x3c);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00405c20(*(undefined4 *)(param_1 + 0x28),param_2);
  }
  local_4 = 0xffffffff;
  FUN_00402a10(2,uVar2);
  ExceptionList = local_c;
  return;
}

