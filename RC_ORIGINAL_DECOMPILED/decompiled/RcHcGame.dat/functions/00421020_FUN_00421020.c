/*
 * FUN_00421020 at 00421020
 * undefined FUN_00421020(void)
 * Address ranges: 00421020-00421088
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_00421020(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  void *pvVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006221eb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = operator_new(800);
  local_4 = 0;
  if (pvVar1 != (void *)0x0) {
    uVar2 = FUN_00420a40(param_1,param_2,param_3);
    ExceptionList = local_c;
    return uVar2;
  }
  ExceptionList = local_c;
  return 0;
}

