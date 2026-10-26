/*
 * FUN_00496940 at 00496940
 * undefined FUN_00496940(void)
 * Address ranges: 00496940-00496999
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_00496940(void)

{
  void *pvVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062bc8b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = operator_new(0x3a4);
  local_4 = 0;
  if (pvVar1 != (void *)0x0) {
    uVar2 = FUN_00430b00(pvVar1);
    ExceptionList = local_c;
    return uVar2;
  }
  ExceptionList = local_c;
  return 0;
}

