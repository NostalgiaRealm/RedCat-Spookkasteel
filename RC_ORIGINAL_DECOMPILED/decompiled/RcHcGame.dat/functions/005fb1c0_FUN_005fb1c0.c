/*
 * FUN_005fb1c0 at 005fb1c0
 * undefined FUN_005fb1c0(void)
 * Address ranges: 005fb1c0-005fb1ea
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_005fb1c0(int param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00648a88;
  pvStack_c = ExceptionList;
                    /* WARNING: Could not recover jumptable at 0x005fb1e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ExceptionList = &pvStack_c;
  (*(code *)(&PTR_LAB_005fb2fc)[*(int *)(param_1 + 8)])(0);
  return;
}

