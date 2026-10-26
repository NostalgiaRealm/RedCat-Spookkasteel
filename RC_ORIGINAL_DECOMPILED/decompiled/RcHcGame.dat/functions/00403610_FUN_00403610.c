/*
 * FUN_00403610 at 00403610
 * undefined FUN_00403610(void)
 * Address ranges: 00403610-00403660
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_00403610(undefined4 *param_1,undefined4 param_2)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0061fb78;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00402960(param_2);
  *param_1 = &PTR_FUN_0064a3f8;
  local_4 = 0;
  (**(code **)(*(int *)param_1[9] + 0x54))();
  ExceptionList = pvStack_c;
  return param_1;
}

