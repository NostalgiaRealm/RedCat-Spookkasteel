/*
 * FUN_00405420 at 00405420
 * undefined FUN_00405420(void)
 * Address ranges: 00405420-00405473
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_00405420(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0061fe98;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_0064a57c;
  local_4 = 0;
  FUN_0040e390(1);
  local_4 = 0xffffffff;
  FUN_004029b0();
  ExceptionList = local_c;
  return;
}

