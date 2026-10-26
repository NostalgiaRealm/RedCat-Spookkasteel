/*
 * FUN_00408ca0 at 00408ca0
 * undefined FUN_00408ca0(void)
 * Address ranges: 00408ca0-00408d03
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_00408ca0(int param_1)

{
  void *pvVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006205bb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = operator_new(0x2c);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00406e50(*(undefined4 *)(param_1 + 0x28));
  }
  local_4 = 0xffffffff;
  FUN_00402a10(1,uVar2);
  ExceptionList = local_c;
  return;
}

