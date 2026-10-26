/*
 * FUN_00453f00 at 00453f00
 * undefined FUN_00453f00(void)
 * Address ranges: 00453f00-0045406b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_00453f00(undefined4 param_1,int param_2,undefined4 param_3)

{
  void *pvVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006265a2;
  local_c = ExceptionList;
  switch(*(undefined4 *)(param_2 + 0x4c)) {
  case 0:
    ExceptionList = &local_c;
    pvVar1 = operator_new(0x28);
    local_4 = 0;
    goto LAB_00453ff8;
  case 1:
    ExceptionList = &local_c;
    pvVar1 = operator_new(0x2c);
    local_4 = 1;
    if (pvVar1 != (void *)0x0) {
      uVar2 = FUN_00451630(param_1,param_2,param_3);
      ExceptionList = local_c;
      return uVar2;
    }
    break;
  case 2:
    ExceptionList = &local_c;
    pvVar1 = operator_new(0x28);
    local_4 = 2;
    goto LAB_00453ff8;
  case 3:
    ExceptionList = &local_c;
    pvVar1 = operator_new(0x30);
    local_4 = 3;
    if (pvVar1 != (void *)0x0) {
      uVar2 = FUN_00451000(param_1,param_2,param_3);
      ExceptionList = local_c;
      return uVar2;
    }
    break;
  case 4:
    ExceptionList = &local_c;
    pvVar1 = operator_new(0x28);
    local_4 = 4;
LAB_00453ff8:
    if (pvVar1 != (void *)0x0) {
      uVar2 = FUN_00453d60(param_1,param_2,param_3);
      ExceptionList = local_c;
      return uVar2;
    }
    break;
  case 5:
    ExceptionList = &local_c;
    pvVar1 = operator_new(0x30);
    local_4 = 5;
    if (pvVar1 != (void *)0x0) {
      uVar2 = FUN_004512b0(param_1,param_2,param_3);
      ExceptionList = local_c;
      return uVar2;
    }
  }
  ExceptionList = local_c;
  return 0;
}

