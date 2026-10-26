/*
 * FUN_00595280 at 00595280
 * undefined FUN_00595280(void)
 * Address ranges: 00595280-00595398
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall
FUN_00595280(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00643c18;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_0049b240(param_2,param_3);
  puVar2 = (undefined4 *)&stack0x00000014;
  puVar3 = param_1 + 0xa5;
  for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_4._0_1_ = 1;
  FUN_0059b300(param_4);
  param_1[0xbd] = param_5;
  local_4._0_1_ = 3;
  param_1[0xc1] = 0;
  FUN_00596540(param_1);
  local_4._0_1_ = 4;
  FUN_0059b1c0();
  local_4 = CONCAT31(local_4._1_3_,5);
  *param_1 = &PTR_FUN_0064ff6c;
  *(undefined1 *)(param_1 + 0x82) = 1;
  FUN_0049b8d0();
  *(undefined1 *)((int)param_1 + 0x209) = 0;
  FUN_0049b8d0();
  *(undefined1 *)((int)param_1 + 0x20a) = 1;
  FUN_0049b8d0();
  *(undefined1 *)((int)param_1 + 0x20b) = 0;
  FUN_0049b8d0();
  *(undefined1 *)(param_1 + 0x83) = 0;
  FUN_0049b8d0();
  FUN_005b3070();
  FUN_005951d0();
  local_4 = 0xffffffff;
  FUN_005630e0();
  ExceptionList = local_c;
  return param_1;
}

