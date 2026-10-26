/*
 * FUN_005914f0 at 005914f0
 * undefined FUN_005914f0(void)
 * Address ranges: 005914f0-0059166e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_005914f0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_006436e0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00501cb0(param_2);
  *(undefined1 *)(param_1 + 0x3e) = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0xffffffff;
  param_1[0x4a] = 0x3f800000;
  *(undefined1 *)(param_1 + 0x4b) = 1;
  param_1[0x4e] = param_3;
  param_1[0x4c] = 0x41a00000;
  *(undefined1 *)(param_1 + 0x4d) = 0;
  param_1[0x4f] = 0;
  *param_1 = &PTR_FUN_0064c50c;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x47] = 0x437f0000;
  param_1[0x46] = 0x437f0000;
  param_1[0x45] = 0x437f0000;
  param_1[0x44] = 0x437f0000;
  param_1[0x43] = 0;
  param_1[0x42] = 0;
  DAT_006b93cc = DAT_006b93cc + 1;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  *(undefined1 *)(param_1 + 0x52) = 1;
  *(undefined1 *)((int)param_1 + 0x149) = 0;
  *(undefined1 *)((int)param_1 + 0x14a) = 0;
  *(undefined1 *)((int)param_1 + 0x14b) = 0;
  *(undefined1 *)(param_1 + 0x53) = 0;
  param_1[0x5a] = 0xffffffff;
  param_1[0x5b] = 0xffffffff;
  param_1[0x5c] = 0x3f800000;
  *(undefined1 *)(param_1 + 0x5d) = 1;
  param_1[0x5f] = 0x42c80000;
  param_1[0x60] = 0x42c80000;
  param_1[0x61] = 0x42c80000;
  param_1[0x62] = 0x42c80000;
  param_1[0x5e] = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[99] = 0;
  param_1[100] = 0;
  param_1[0x65] = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[0x67] = 0;
  *param_1 = &PTR_FUN_0064fefc;
  ExceptionList = local_c;
  return param_1;
}

