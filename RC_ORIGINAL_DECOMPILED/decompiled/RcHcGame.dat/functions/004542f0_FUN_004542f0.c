/*
 * FUN_004542f0 at 004542f0
 * undefined FUN_004542f0(void)
 * Address ranges: 004542f0-004544a8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_004542f0(undefined4 *param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  void *pvVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00626609;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005ab4a0();
  uVar1 = *param_2;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 5) = uVar1;
  param_1[7] = 0;
  param_1[8] = 0;
  local_4 = 0;
  FUN_0040cc00(param_2,0,0xffffffff);
  *(undefined1 *)(param_1 + 9) = param_2._0_1_;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  local_4 = CONCAT31(local_4._1_3_,2);
  pvVar2 = operator_new(0x500);
  iVar5 = param_1[0xb];
  pvVar3 = pvVar2;
  for (iVar4 = param_1[10]; iVar4 != iVar5; iVar4 = iVar4 + 0x50) {
    FUN_00457840(pvVar3,iVar4);
    pvVar3 = (void *)((int)pvVar3 + 0x50);
  }
  FUN_00457210(param_1[10],param_1[0xb]);
  FUN_005fe5f0(param_1[10]);
  param_1[0xc] = (int)pvVar2 + 0x500;
  iVar5 = FUN_004574b0();
  param_1[10] = pvVar2;
  param_1[0xb] = (void *)(iVar5 * 0x50 + (int)pvVar2);
  param_2._0_1_ = SUB41(pvVar3,0);
  *(undefined1 *)(param_1 + 0xd) = param_2._0_1_;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  local_4 = CONCAT31(local_4._1_3_,4);
  pvVar2 = operator_new(0x40);
  iVar4 = param_1[0xf];
  pvVar3 = pvVar2;
  for (iVar5 = param_1[0xe]; iVar5 != iVar4; iVar5 = iVar5 + 4) {
    FUN_005f0760(pvVar3,iVar5);
    pvVar3 = (void *)((int)pvVar3 + 4);
  }
  FUN_00587d50(param_1[0xe],param_1[0xf]);
  FUN_005fe5f0(param_1[0xe]);
  param_1[0x10] = (int)pvVar2 + 0x40;
  iVar5 = FUN_0044e4c0();
  param_1[0xe] = pvVar2;
  param_1[0xf] = (void *)((int)pvVar2 + iVar5 * 4);
  local_4 = CONCAT31(local_4._1_3_,5);
  *param_1 = &PTR_FUN_0064d3a0;
  FUN_004547e0();
  FUN_00455ce0();
  ExceptionList = local_c;
  return param_1;
}

