/*
 * FUN_00569110 at 00569110
 * undefined FUN_00569110(void)
 * Address ranges: 00569110-0056927b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_00569110(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  void *pvVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00640467;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  uVar1 = __ftol();
  switch(param_1) {
  case 0:
    pvVar2 = operator_new(0x34);
    local_4 = 0;
    if (pvVar2 != (void *)0x0) {
      uVar1 = FUN_00569460(param_2,uVar1);
      ExceptionList = local_c;
      return uVar1;
    }
    break;
  case 1:
    pvVar2 = operator_new(0x34);
    local_4 = 1;
    if (pvVar2 != (void *)0x0) {
      uVar1 = FUN_005695a0(param_2,uVar1);
      ExceptionList = local_c;
      return uVar1;
    }
    break;
  case 2:
    pvVar2 = operator_new(0x34);
    local_4 = 2;
    if (pvVar2 != (void *)0x0) {
      uVar1 = FUN_005697e0(param_2,uVar1);
      ExceptionList = local_c;
      return uVar1;
    }
    break;
  case 3:
    pvVar2 = operator_new(0x34);
    local_4 = 3;
    if (pvVar2 != (void *)0x0) {
      uVar1 = FUN_00569a40(param_2,uVar1);
      ExceptionList = local_c;
      return uVar1;
    }
    break;
  default:
    pvVar2 = operator_new(0x34);
    local_4 = 4;
    if (pvVar2 != (void *)0x0) {
      uVar1 = FUN_00569460(param_2,uVar1);
      ExceptionList = local_c;
      return uVar1;
    }
  }
  ExceptionList = local_c;
  return 0;
}

