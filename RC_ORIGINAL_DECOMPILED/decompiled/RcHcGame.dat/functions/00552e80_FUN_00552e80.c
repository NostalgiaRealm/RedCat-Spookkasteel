/*
 * FUN_00552e80 at 00552e80
 * undefined FUN_00552e80(void)
 * Address ranges: 00552e80-00552f23
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_00552e80(undefined4 *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0063e258;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_005ab4a0();
  param_1[7] = param_2;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  *param_1 = &PTR_FUN_0064e794;
  param_1[8] = 0x3f800000;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0x3f800000;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(undefined1 *)((int)param_1 + 0x39) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined1 *)(param_1 + 0x12) = 0;
  param_1[0x13] = param_3;
  if (param_3 != 0) {
    *(int *)(param_3 + 0x14) = *(int *)(param_3 + 0x14) + 1;
  }
  *param_1 = &PTR_FUN_0064f820;
  local_4 = 0xffffffff;
  if ((param_3 != 0) &&
     (iVar1 = *(int *)(param_3 + 0x14) + -1, *(int *)(param_3 + 0x14) = iVar1, iVar1 == 0)) {
    FUN_005abfc0(0);
  }
  ExceptionList = local_c;
  return param_1;
}

