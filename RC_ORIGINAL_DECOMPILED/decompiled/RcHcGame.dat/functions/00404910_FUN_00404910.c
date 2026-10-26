/*
 * FUN_00404910 at 00404910
 * undefined FUN_00404910(void)
 * Address ranges: 00404910-00404964
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_00404910(undefined4 *param_1,undefined4 param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0061fd78;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0040a720(param_2);
  param_1[0xb] = param_2;
  param_1[0xc] = 0xffffffff;
  param_1[0xd] = 0xffffffff;
  param_1[0xe] = 0x3f800000;
  *(undefined1 *)(param_1 + 0xf) = 1;
  *param_1 = &PTR_FUN_0064a51c;
  ExceptionList = local_c;
  return param_1;
}

