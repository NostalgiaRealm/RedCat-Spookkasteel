/*
 * FUN_00401fd0 at 00401fd0
 * undefined FUN_00401fd0(void)
 * Address ranges: 00401fd0-00402033
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_00401fd0(int param_1)

{
  void *pvVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0061f98b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = operator_new(0x34);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_004024b0(*(undefined4 *)(param_1 + 0x28));
  }
  local_4 = 0xffffffff;
  FUN_00402a10(2,uVar2);
  ExceptionList = local_c;
  return;
}

