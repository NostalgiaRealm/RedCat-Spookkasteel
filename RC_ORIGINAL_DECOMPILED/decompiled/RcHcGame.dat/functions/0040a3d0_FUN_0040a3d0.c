/*
 * FUN_0040a3d0 at 0040a3d0
 * undefined FUN_0040a3d0(void)
 * Address ranges: 0040a3d0-0040a433
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_0040a3d0(int param_1)

{
  void *pvVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006207fb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = operator_new(0x34);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_0040a4c0(*(undefined4 *)(param_1 + 0x28));
  }
  local_4 = 0xffffffff;
  FUN_00402a10(1,uVar2);
  ExceptionList = local_c;
  return;
}

