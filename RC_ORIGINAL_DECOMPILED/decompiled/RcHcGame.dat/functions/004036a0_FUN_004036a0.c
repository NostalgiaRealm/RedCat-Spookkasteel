/*
 * FUN_004036a0 at 004036a0
 * undefined FUN_004036a0(void)
 * Address ranges: 004036a0-004036f1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_004036a0(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0061fb98;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_0064a3f8;
  local_4 = 0;
  (**(code **)(*(int *)param_1[9] + 0x58))();
  local_4 = 0xffffffff;
  FUN_004029b0();
  ExceptionList = pvStack_c;
  return;
}

