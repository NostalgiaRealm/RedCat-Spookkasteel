/*
 * FUN_005fc180 at 005fc180
 * undefined FUN_005fc180(void)
 * Address ranges: 005fc180-005fc223
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_005fc180(int *param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 uVar2;
  undefined1 auStack_24 [8];
  void *pvStack_1c;
  uint uStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00648b10;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  piVar1 = (int *)(**(code **)(*param_1 + 0x10))();
  uVar2 = (**(code **)(*piVar1 + 8))(auStack_24,param_2);
  pvStack_c = (void *)0x0;
  uVar2 = FUN_005fc480(&stack0xffffffbc,param_1[4],uVar2);
  pvStack_c = (void *)CONCAT31(pvStack_c._1_3_,1);
  piVar1 = (int *)(**(code **)(*param_1 + 0x14))();
  (**(code **)(*piVar1 + 0xc))(param_2,uVar2);
  uStack_14 = uStack_14 & 0xffffff00;
  FUN_005e2f00();
  uStack_14 = 0xffffffff;
  FUN_005e2f00();
  ExceptionList = pvStack_1c;
  return;
}

