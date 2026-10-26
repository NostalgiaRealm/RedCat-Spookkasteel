/*
 * FUN_005f5bf0 at 005f5bf0
 * undefined FUN_005f5bf0(void)
 * Address ranges: 005f5bf0-005f5d06
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_005f5bf0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_34 [3];
  undefined **ppuStack_28;
  undefined1 local_24 [20];
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0064832f;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  uVar1 = FUN_005ec380();
  if (*(int *)(param_1 + 0x48) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x4c) - *(int *)(param_1 + 0x48) >> 4;
  }
  FUN_005ecba0(local_34,iVar2);
  local_4 = 1;
  FUN_005f92e0(local_34);
  if (*(char *)(param_1 + 0x34) == '\0') {
    uVar1 = (**(code **)(param_1 + 0x38))(local_24,uVar1,local_34);
    local_4 = CONCAT31(local_4._1_3_,3);
    FUN_005e27d0(uVar1);
    *param_2 = &PTR_FUN_00650ad4;
  }
  else {
    uVar1 = (**(code **)(param_1 + 0x38))(local_24,uVar1,param_1 + 0xc,local_34);
    local_4 = CONCAT31(local_4._1_3_,2);
    FUN_005e27d0(uVar1);
    *param_2 = &PTR_FUN_00650ad4;
  }
  puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,1);
  ppuStack_28 = &PTR_FUN_00650ad4;
  FUN_005e2f00();
  FUN_005fe5f0(local_34[0]);
  ExceptionList = pvStack_10;
  return param_2;
}

