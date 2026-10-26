/*
 * FUN_005fa6a0 at 005fa6a0
 * undefined FUN_005fa6a0(void)
 * Address ranges: 005fa6a0-005fa7ef
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 * __thiscall FUN_005fa6a0(undefined1 *param_1,undefined1 *param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00648a2f;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = *param_2;
  FUN_004040a0(0);
  FUN_0040cc00(param_2,0,0xffffffff);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  local_4 = 0;
  param_1[0x14] = param_2[0x14];
  FUN_004040a0(0);
  FUN_0040cc00(param_2 + 0x14,0,0xffffffff);
  local_4._0_1_ = 1;
  param_1[0x24] = param_2[0x24];
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  FUN_0040cc00(param_2 + 0x24,0,0xffffffff);
  local_4._0_1_ = 2;
  param_1[0x34] = param_2[0x34];
  FUN_004040a0(0);
  FUN_0040cc00(param_2 + 0x34,0,0xffffffff);
  local_4._0_1_ = 3;
  param_1[0x44] = param_2[0x44];
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  FUN_0040cc00(param_2 + 0x44,0,0xffffffff);
  local_4._0_1_ = 4;
  param_1[0x54] = param_2[0x54];
  FUN_004040a0(0);
  FUN_0040cc00(param_2 + 0x54,0,0xffffffff);
  *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_2 + 100);
  local_4 = CONCAT31(local_4._1_3_,5);
  param_1[0x68] = param_2[0x68];
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  FUN_0040cc00(param_2 + 0x68,0,0xffffffff);
  ExceptionList = local_c;
  return param_1;
}

