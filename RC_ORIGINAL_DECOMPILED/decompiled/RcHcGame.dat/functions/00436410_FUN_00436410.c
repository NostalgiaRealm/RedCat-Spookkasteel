/*
 * FUN_00436410 at 00436410
 * undefined FUN_00436410(void)
 * Address ranges: 00436410-00436466
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_00436410(void)

{
  void *pvVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00623c5b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = operator_new(0x34);
  local_4 = 0;
  if (pvVar1 != (void *)0x0) {
    uVar2 = FUN_004374a0(pvVar1);
    ExceptionList = local_c;
    return uVar2;
  }
  ExceptionList = local_c;
  return 0;
}

