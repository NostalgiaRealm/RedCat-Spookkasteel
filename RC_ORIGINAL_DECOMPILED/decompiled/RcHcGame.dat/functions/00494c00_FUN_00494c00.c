/*
 * FUN_00494c00 at 00494c00
 * undefined FUN_00494c00(void)
 * Address ranges: 00494c00-00494cc6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __fastcall FUN_00494c00(undefined4 *param_1)

{
  void *pvVar1;
  undefined1 local_11;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062b864;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005ab4a0();
  local_4 = 0;
  *(undefined1 *)(param_1 + 5) = local_11;
  pvVar1 = operator_new(0xc);
  *(void **)pvVar1 = pvVar1;
  *(void **)((int)pvVar1 + 4) = pvVar1;
  param_1[6] = pvVar1;
  param_1[7] = 0;
  local_4._0_1_ = 1;
  *(undefined1 *)(param_1 + 8) = local_11;
  pvVar1 = operator_new(0xc);
  *(void **)pvVar1 = pvVar1;
  *(void **)((int)pvVar1 + 4) = pvVar1;
  param_1[9] = pvVar1;
  param_1[10] = 0;
  local_4._0_1_ = 2;
  *(undefined1 *)(param_1 + 0xb) = local_11;
  pvVar1 = operator_new(0xc);
  *(void **)pvVar1 = pvVar1;
  *(void **)((int)pvVar1 + 4) = pvVar1;
  param_1[0xc] = pvVar1;
  param_1[0xd] = 0;
  local_4._0_1_ = 3;
  *(undefined1 *)(param_1 + 0xe) = local_11;
  pvVar1 = operator_new(0x10);
  *(void **)pvVar1 = pvVar1;
  *(void **)((int)pvVar1 + 4) = pvVar1;
  param_1[0xf] = pvVar1;
  param_1[0x10] = 0;
  local_4 = CONCAT31(local_4._1_3_,4);
  FUN_0042bfa0();
  *param_1 = &PTR_FUN_0064e58c;
  ExceptionList = local_c;
  return param_1;
}

