/*
 * FUN_004158f0 at 004158f0
 * undefined FUN_004158f0(void)
 * Address ranges: 004158f0-0041594e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_004158f0(undefined4 param_1)

{
  void *pvVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062120b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = operator_new(0x34);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00404470(param_1);
  }
  local_4 = 0xffffffff;
  FUN_00423710(uVar2);
  ExceptionList = local_c;
  return;
}

