/*
 * FUN_005f9ab0 at 005f9ab0
 * undefined FUN_005f9ab0(void)
 * Address ranges: 005f9ab0-005f9b5c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 * __fastcall FUN_005f9ab0(undefined1 *param_1)

{
  undefined1 local_11;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006488d4;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = local_11;
  FUN_004040a0(0);
  param_1[0x10] = local_11;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  param_1[0x24] = local_11;
  FUN_004040a0(0);
  *(undefined4 *)(param_1 + 0x38) = 0;
  param_1[0x34] = local_11;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  param_1[0x44] = local_11;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  local_4 = CONCAT31(local_4._1_3_,4);
  param_1[0x54] = local_11;
  FUN_004040a0(0);
  param_1[100] = local_11;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  ExceptionList = local_c;
  return param_1;
}

