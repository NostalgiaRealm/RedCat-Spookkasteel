/*
 * FUN_00409f60 at 00409f60
 * undefined FUN_00409f60(void)
 * Address ranges: 00409f60-00409fc3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_00409f60(int param_1)

{
  void *pvVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062077b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = operator_new(0x2c);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00409fd0(*(undefined4 *)(param_1 + 0x30));
  }
  local_4 = 0xffffffff;
  FUN_00402a10(2,uVar2);
  ExceptionList = local_c;
  return;
}

