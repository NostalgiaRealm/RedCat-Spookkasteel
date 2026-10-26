/*
 * FUN_00584610 at 00584610
 * undefined FUN_00584610(void)
 * Address ranges: 00584610-00584708
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_00584610(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_006428b6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00501cb0(param_2);
  param_1[0x3e] = param_3;
  param_1[0x3f] = 0;
  param_1[0x42] = 0x3f800000;
  param_1[0x40] = 0xffffffff;
  param_1[0x41] = 0xffffffff;
  *(undefined1 *)(param_1 + 0x43) = 1;
  param_1[0x44] = 0;
  iVar1 = param_1[0x3e];
  *(undefined1 *)(param_1 + 0x45) = 0;
  *(undefined1 *)((int)param_1 + 0x115) = 1;
  param_1[0x48] = 0x40000000;
  param_1[0x49] = 0x40000000;
  *param_1 = &PTR_FUN_0064fce8;
  if ((*(int *)(iVar1 + 0x14) == 0) || (*(float *)(iVar1 + 0x1c) != 0.0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  *(undefined1 *)(param_1 + 0x45) = uVar2;
  if (*(int *)(iVar1 + 0x2c) != 0) {
    param_1[0x46] = 1;
    param_1[0x47] = 0;
    ExceptionList = local_c;
    return param_1;
  }
  param_1[0x46] = 0;
  param_1[0x47] = 0x3f800000;
  ExceptionList = local_c;
  return param_1;
}

