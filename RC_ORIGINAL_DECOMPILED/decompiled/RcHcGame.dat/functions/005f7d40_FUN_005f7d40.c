/*
 * FUN_005f7d40 at 005f7d40
 * undefined FUN_005f7d40(void)
 * Address ranges: 005f7d40-005f7e23
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_005f7d40(int *param_1,undefined **param_2)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  undefined **ppuStack_64;
  undefined **appuStack_4c [4];
  undefined1 local_3c [8];
  undefined **appuStack_34 [6];
  void *pvStack_1c;
  int iStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00648670;
  pvStack_c = ExceptionList;
  ppuStack_64 = param_2;
  ExceptionList = &pvStack_c;
  (**(code **)(*(int *)param_1[4] + 8))(local_3c);
  pvStack_c = (void *)0x0;
  piVar1 = (int *)(**(code **)(*param_1 + 0x18))();
  (**(code **)(*piVar1 + 8))(&stack0xffffffa4,param_2);
  iStack_14._0_1_ = 1;
  iVar2 = FUN_005f8990(appuStack_34,param_1[5],&ppuStack_64,appuStack_4c);
  bVar3 = *(int *)(iVar2 + 0x10) == 0;
  appuStack_34[0] = &PTR_FUN_00650ad4;
  FUN_005e2f00();
  if (param_1[3] == 0) {
    if (bVar3) {
      param_2[4] = (undefined *)param_1[2];
    }
  }
  else if (!bVar3) {
    param_2[4] = (undefined *)param_1[2];
  }
  iStack_14 = (uint)iStack_14._1_3_ << 8;
  ppuStack_64 = &PTR_FUN_00650ad4;
  FUN_005e2f00();
  iStack_14 = 0xffffffff;
  appuStack_4c[0] = &PTR_FUN_00650ad4;
  FUN_005e2f00();
  ExceptionList = pvStack_1c;
  return;
}

