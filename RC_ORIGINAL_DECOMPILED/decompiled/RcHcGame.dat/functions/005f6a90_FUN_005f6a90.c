/*
 * FUN_005f6a90 at 005f6a90
 * undefined FUN_005f6a90(void)
 * Address ranges: 005f6a90-005f6b29
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_005f6a90(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 unaff_retaddr;
  undefined1 local_24 [8];
  void *pvStack_1c;
  uint uStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00648440;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  uVar1 = (**(code **)(*param_1 + 8))(local_24,param_2);
  pvStack_c = (void *)0x0;
  uVar1 = FUN_005f8990(&stack0xffffffbc,param_2,uVar1,unaff_retaddr);
  pvStack_c = (void *)CONCAT31(pvStack_c._1_3_,1);
  (**(code **)(*param_1 + 0xc))(param_2,uVar1);
  uStack_14 = uStack_14 & 0xffffff00;
  FUN_005e2f00(param_2,uVar1,&PTR_FUN_00650ad4);
  uStack_14 = 0xffffffff;
  FUN_005e2f00();
  ExceptionList = pvStack_1c;
  return;
}

