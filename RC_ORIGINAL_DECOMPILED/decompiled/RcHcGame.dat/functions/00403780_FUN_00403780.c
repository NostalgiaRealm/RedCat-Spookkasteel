/*
 * FUN_00403780 at 00403780
 * undefined FUN_00403780(void)
 * Address ranges: 00403780-004037d1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_00403780(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0061fbd8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_0064a408;
  local_4 = 0;
  (**(code **)(*(int *)param_1[9] + 0x58))();
  local_4 = 0xffffffff;
  FUN_004029b0();
  ExceptionList = pvStack_c;
  return;
}

