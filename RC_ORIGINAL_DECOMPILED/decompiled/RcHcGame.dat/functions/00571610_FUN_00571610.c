/*
 * FUN_00571610 at 00571610
 * undefined FUN_00571610(void)
 * Address ranges: 00571610-005717c3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_00571610(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00641116;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00501cb0(param_2);
  param_1[0x3e] = 0xffffffff;
  param_1[0x3f] = 0xffffffff;
  param_1[0x40] = 0x3f800000;
  *(undefined1 *)(param_1 + 0x41) = 1;
  param_1[0x42] = 0x42000000;
  param_1[0x43] = 0x42000000;
  param_1[0x44] = 0x3f800000;
  param_1[0x45] = 0x3f800000;
  param_1[0x46] = 0x3f800000;
  param_1[0x47] = 0xffffffff;
  param_1[0x48] = 0xffffffff;
  param_1[0x49] = 0x3f800000;
  *(undefined1 *)(param_1 + 0x4a) = 1;
  param_1[0x4b] = 0x437f0000;
  param_1[0x4c] = 0x437f0000;
  param_1[0x4d] = 0xffffffff;
  param_1[0x4e] = 0xffffffff;
  param_1[0x4f] = 0x3f800000;
  *(undefined1 *)(param_1 + 0x50) = 1;
  param_1[0x59] = 0xffffffff;
  param_1[0x5a] = 0xffffffff;
  param_1[0x5b] = 0x3f800000;
  *(undefined1 *)(param_1 + 0x5c) = 1;
  param_1[0x61] = 0;
  *(undefined1 *)(param_1 + 0x62) = 1;
  *(undefined1 *)((int)param_1 + 0x189) = 1;
  *(undefined1 *)(param_1 + 0x6f) = 1;
  local_4 = 5;
  param_1[0x69] = 0;
  param_1[0x6d] = 0;
  param_1[0x6e] = 0x3f23d70a;
  *param_1 = &PTR_FUN_0064f994;
  FUN_005b2e20(0,0x3f800000,0);
  FUN_005b2e20(0,0,0);
  FUN_005b2e20(0,0,0);
  puVar2 = param_1 + 0x70;
  for (iVar1 = 0x24; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  param_1[0x5e] = 0x437f0000;
  param_1[0x5f] = 0x437f0000;
  param_1[0x5d] = 0x437f0000;
  param_1[0x60] = 0x437f0000;
  param_1[0x51] = param_1[0x5d];
  param_1[0x52] = param_1[0x5e];
  param_1[0x53] = param_1[0x5f];
  param_1[0x54] = param_1[0x60];
  param_1[0x55] = 0x437f0000;
  param_1[0x56] = param_1[0x5e];
  param_1[0x57] = param_1[0x5f];
  param_1[0x58] = param_1[0x60];
  FUN_00571990();
  ExceptionList = local_c;
  return param_1;
}

