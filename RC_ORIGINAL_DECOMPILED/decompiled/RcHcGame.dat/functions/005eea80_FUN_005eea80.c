/*
 * FUN_005eea80 at 005eea80
 * undefined FUN_005eea80(void)
 * Address ranges: 005eea80-005eeb5c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_005eea80(int param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined1 local_24 [24];
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0064754f;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0060b1db(local_24,0x18,1,&LAB_005ee4d0,FUN_005e9860);
  local_4 = 1;
  FUN_005efff0(param_3);
  FUN_005f15b0(param_1 + 0x68);
  FUN_005f0020(param_3);
  FUN_005f0050(param_3);
  param_2[2] = 2;
  param_2[4] = 1;
  *param_2 = &PTR_FUN_00650ad4;
  local_4 = local_4 & 0xffffff00;
  FUN_0060af6c(local_24,0x18,1,FUN_005e9860);
  ExceptionList = local_c;
  return param_2;
}

