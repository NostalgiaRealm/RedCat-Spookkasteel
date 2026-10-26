/*
 * thunk_FUN_00405b50 at 00408870
 * undefined thunk_FUN_00405b50(void)
 * Address ranges: 00408870-00408874
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to FUN_00405b50
 */

void __fastcall thunk_FUN_00405b50(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  puStack_8 = &LAB_0061ffb8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_0064a670;
  uStack_4 = 0;
  FUN_00428b40();
  uStack_4 = 0xffffffff;
  FUN_00403780();
  ExceptionList = pvStack_c;
  return;
}

