/*
 * thunk_FUN_004ab040 at 004aba30
 * undefined thunk_FUN_004ab040(void)
 * Address ranges: 004aba30-004aba34
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to FUN_004ab040
 */

void __fastcall thunk_FUN_004ab040(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  puStack_8 = &LAB_0062dfa8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_0064e974;
  uStack_4 = 0;
  FUN_00513340(param_1[0x1d]);
  uStack_4 = 0xffffffff;
  FUN_004ad8d0();
  ExceptionList = pvStack_c;
  return;
}

