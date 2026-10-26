/*
 * FUN_005e9cb0 at 005e9cb0
 * undefined FUN_005e9cb0(void)
 * Address ranges: 005e9cb0-005e9d87
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_005e9cb0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  void *pvVar3;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00646d0b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  iVar1 = FUN_005ea010();
  if ((0x31 < iVar1) && (iVar1 < 0x3b)) {
    uVar2 = FUN_005ef710(param_1,param_2,param_3,param_4);
    ExceptionList = pvStack_c;
    return uVar2;
  }
  if ((0x3a < iVar1) && (iVar1 < 0x42)) {
    uVar2 = FUN_005ef460(param_1,param_2,param_3,param_4);
    ExceptionList = pvStack_c;
    return uVar2;
  }
  pvVar3 = operator_new(0x50);
  uStack_4 = 0;
  if (pvVar3 != (void *)0x0) {
    uVar2 = FUN_005ef060(param_1,param_2,param_3,param_4);
    ExceptionList = pvStack_c;
    return uVar2;
  }
  ExceptionList = pvStack_c;
  return 0;
}

