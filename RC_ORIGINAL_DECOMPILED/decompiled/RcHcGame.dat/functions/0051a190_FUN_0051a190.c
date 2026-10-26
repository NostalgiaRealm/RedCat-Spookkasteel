/*
 * FUN_0051a190 at 0051a190
 * undefined FUN_0051a190(void)
 * Address ranges: 0051a190-0051a23e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall
FUN_0051a190(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined1 *param_4)

{
  undefined1 uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063865e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005ab4a0();
  uVar1 = *param_4;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 5) = uVar1;
  param_1[7] = 0;
  param_1[8] = 0;
  local_4 = 0;
  FUN_0040cc00(param_4,0,0xffffffff);
  param_1[9] = param_3;
  *(undefined1 *)(param_1 + 10) = 1;
  *(undefined1 *)((int)param_1 + 0x29) = 0;
  *(undefined1 *)(param_1 + 0xb) = param_4._0_1_;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0xffffffff;
  param_1[0x11] = 0xffffffff;
  param_1[0x12] = 0x3f800000;
  *(undefined1 *)(param_1 + 0x13) = 1;
  param_1[0x14] = 2000;
  param_1[0x15] = 2000;
  *param_1 = &PTR_FUN_0064f564;
  param_1[0x16] = param_2;
  ExceptionList = local_c;
  return param_1;
}

