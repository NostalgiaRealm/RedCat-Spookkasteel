/*
 * FUN_00437790 at 00437790
 * undefined FUN_00437790(void)
 * Address ranges: 00437790-004377ec
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_00437790(undefined4 param_1)

{
  void *pvVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00623dcb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = operator_new(0x34);
  local_4 = 0;
  if (pvVar1 != (void *)0x0) {
    uVar2 = FUN_00437500(param_1);
    ExceptionList = local_c;
    return uVar2;
  }
  ExceptionList = local_c;
  return 0;
}

