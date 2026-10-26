/*
 * FUN_0051c820 at 0051c820
 * undefined FUN_0051c820(void)
 * Address ranges: 0051c820-0051c891
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall
FUN_0051c820(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006389b8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0051a190(param_2,param_3,param_4);
  local_4 = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  FUN_005ae390(param_1 + 0x19,&DAT_006b3f70);
  param_1[0x1d] = 0;
  *(undefined1 *)(param_1 + 0x1e) = 0;
  *param_1 = &PTR_FUN_0064f630;
  ExceptionList = local_c;
  return param_1;
}

