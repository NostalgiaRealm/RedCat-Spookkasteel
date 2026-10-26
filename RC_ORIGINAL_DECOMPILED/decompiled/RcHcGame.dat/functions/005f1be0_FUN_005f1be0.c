/*
 * FUN_005f1be0 at 005f1be0
 * undefined FUN_005f1be0(void)
 * Address ranges: 005f1be0-005f1c7e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_005f1be0(int param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 local_34 [12];
  undefined **ppuStack_28;
  undefined1 local_24 [20];
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00647ae7;
  pvStack_c = ExceptionList;
  uVar2 = 0;
  ExceptionList = &pvStack_c;
  uVar1 = FUN_005f1a60(local_34,param_3);
  local_4 = 1;
  uVar1 = (**(code **)(param_1 + 0x40))(local_24,uVar1);
  local_4 = CONCAT31(local_4._1_3_,2);
  FUN_005e27d0(uVar1);
  *param_2 = &PTR_FUN_00650ad4;
  puStack_8._0_1_ = 1;
  ppuStack_28 = &PTR_FUN_00650ad4;
  FUN_005e2f00(uVar1,1,uVar2);
  puStack_8 = (undefined1 *)((uint)puStack_8._1_3_ << 8);
  FUN_005e2320();
  ExceptionList = pvStack_10;
  return param_2;
}

