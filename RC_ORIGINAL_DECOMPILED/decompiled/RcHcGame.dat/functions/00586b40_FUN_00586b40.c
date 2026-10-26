/*
 * FUN_00586b40 at 00586b40
 * undefined FUN_00586b40(void)
 * Address ranges: 00586b40-00586bf7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_00586b40(undefined4 *param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00642c13;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005ab4a0();
  *(undefined1 *)(param_1 + 5) = param_2._0_1_;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  local_4 = 1;
  uVar1 = *param_2;
  param_1[10] = 0;
  *(undefined1 *)(param_1 + 9) = uVar1;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  FUN_0040cc00(param_2,0,0xffffffff);
  param_1[0xd] = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(undefined1 *)((int)param_1 + 0x39) = 0;
  param_1[0xf] = 0x3f23d70a;
  param_1[0x14] = 0xbf800000;
  param_1[0x15] = 0xffffffff;
  param_1[0x16] = 300;
  param_1[0x17] = 0;
  param_1[0x18] = 0x437f0000;
  param_1[0x13] = 0x437f0000;
  param_1[0x12] = 0x437f0000;
  param_1[0x11] = 0x437f0000;
  param_1[0x10] = 0x437f0000;
  *param_1 = &PTR_FUN_0064fda8;
  ExceptionList = local_c;
  return param_1;
}

