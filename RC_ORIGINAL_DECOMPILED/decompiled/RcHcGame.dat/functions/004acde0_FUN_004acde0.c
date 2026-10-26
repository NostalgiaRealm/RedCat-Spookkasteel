/*
 * FUN_004acde0 at 004acde0
 * undefined FUN_004acde0(void)
 * Address ranges: 004acde0-004aceec
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_004acde0(undefined4 *param_1,undefined4 param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062e1be;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00501cb0(param_2);
  *(undefined1 *)(param_1 + 0x3e) = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0xffffffff;
  param_1[0x4a] = 0x3f800000;
  *(undefined1 *)(param_1 + 0x4b) = 1;
  param_1[0x4c] = 0x41a00000;
  *(undefined1 *)(param_1 + 0x4d) = 0;
  param_1[0x4e] = 0;
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
  local_4 = 2;
  FUN_004ad120(param_1);
  *param_1 = &PTR_FUN_0064ea30;
  param_1[0x48] = 0xffffffff;
  param_1[0x49] = 0xffffffff;
  param_1[0x4a] = 0x3f800000;
  *(undefined1 *)(param_1 + 0x4b) = 1;
  ExceptionList = local_c;
  return param_1;
}

