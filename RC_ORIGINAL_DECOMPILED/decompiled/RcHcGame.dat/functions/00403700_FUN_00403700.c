/*
 * FUN_00403700 at 00403700
 * undefined FUN_00403700(void)
 * Address ranges: 00403700-00403750
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_00403700(undefined4 *param_1,undefined4 param_2)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0061fbb8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00402960(param_2);
  *param_1 = &PTR_FUN_0064a408;
  local_4 = 0;
  (**(code **)(*(int *)param_1[9] + 0x54))();
  ExceptionList = pvStack_c;
  return param_1;
}

