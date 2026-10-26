/*
 * FUN_00401f60 at 00401f60
 * undefined FUN_00401f60(void)
 * Address ranges: 00401f60-00401fca
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_00401f60(int param_1)

{
  void *pvVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0061f96b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = operator_new(0x40);
  uVar2 = 0;
  local_4 = 0;
  if (pvVar1 != (void *)0x0) {
    uVar2 = FUN_0041c7f0();
    uVar2 = FUN_004022b0(*(undefined4 *)(param_1 + 0x28),uVar2);
  }
  local_4 = 0xffffffff;
  FUN_00402a10(1,uVar2);
  ExceptionList = local_c;
  return;
}

