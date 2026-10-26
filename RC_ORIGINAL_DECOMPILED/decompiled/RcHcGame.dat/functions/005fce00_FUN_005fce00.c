/*
 * FUN_005fce00 at 005fce00
 * undefined FUN_005fce00(void)
 * Address ranges: 005fce00-005fce7d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_005fce00(int *param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 uVar2;
  undefined1 auStack_24 [4];
  void *pvStack_20;
  undefined4 uStack_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00648c08;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  piVar1 = (int *)(**(code **)(*param_1 + 0x10))();
  uVar2 = (**(code **)(*piVar1 + 8))(auStack_24,param_2);
  pvStack_c = (void *)0x0;
  piVar1 = (int *)(**(code **)(*param_1 + 0x14))();
  (**(code **)(*piVar1 + 0x14))(param_2,uVar2,param_1[4]);
  uStack_18 = 0xffffffff;
  FUN_005e2f00();
  ExceptionList = pvStack_20;
  return;
}

