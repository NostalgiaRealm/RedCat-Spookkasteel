/*
 * FUN_004029b0 at 004029b0
 * undefined FUN_004029b0(void)
 * Address ranges: 004029b0-00402a06
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_004029b0(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0061fa68;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_0064a3a8;
  local_4 = 0;
  if ((undefined4 *)param_1[7] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[7])(1);
  }
  local_4 = 0xffffffff;
  FUN_005ab4d0();
  ExceptionList = pvStack_c;
  return;
}

