/*
 * thunk_FUN_004036a0 at 0040a1f0
 * undefined thunk_FUN_004036a0(void)
 * Address ranges: 0040a1f0-0040a1f4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to FUN_004036a0
 */

void __fastcall thunk_FUN_004036a0(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  puStack_8 = &LAB_0061fb98;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_0064a3f8;
  uStack_4 = 0;
  (**(code **)(*(int *)param_1[9] + 0x58))();
  uStack_4 = 0xffffffff;
  FUN_004029b0();
  ExceptionList = pvStack_c;
  return;
}

