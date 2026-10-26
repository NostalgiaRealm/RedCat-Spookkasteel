/*
 * FUN_005f88d0 at 005f88d0
 * undefined FUN_005f88d0(void)
 * Address ranges: 005f88d0-005f898f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_005f88d0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined ***pppuStack_64;
  undefined4 uStack_60;
  undefined **local_54 [2];
  undefined1 auStack_4c [16];
  undefined **ppuStack_3c;
  undefined1 auStack_2c [8];
  void *pvStack_24;
  int iStack_1c;
  undefined1 uStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00648778;
  pvStack_c = ExceptionList;
  pppuStack_64 = local_54;
  uStack_60 = param_2;
  ExceptionList = &pvStack_c;
  (**(code **)(**(int **)(param_1 + 8) + 8))();
  pvStack_c = (void *)0x0;
  uVar1 = (**(code **)(**(int **)(param_1 + 0x14) + 8))(auStack_2c,param_2);
  uStack_14 = 1;
  uVar1 = FUN_005f8990(auStack_4c,*(undefined4 *)(param_1 + 0x10),uVar1,&pppuStack_64);
  uStack_14 = 2;
  (**(code **)(**(int **)(param_1 + 0xc) + 0xc))(param_2,uVar1);
  iStack_1c._0_1_ = 1;
  local_54[0] = &PTR_FUN_00650ad4;
  FUN_005e2f00();
  iStack_1c = (uint)iStack_1c._1_3_ << 8;
  ppuStack_3c = &PTR_FUN_00650ad4;
  FUN_005e2f00();
  iStack_1c = 0xffffffff;
  FUN_005e2f00(param_2,uVar1,&PTR_FUN_00650ad4);
  ExceptionList = pvStack_24;
  return;
}

