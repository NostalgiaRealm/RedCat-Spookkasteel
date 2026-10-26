/*
 * FUN_005eca50 at 005eca50
 * undefined FUN_005eca50(void)
 * Address ranges: 005eca50-005eca7b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005eca50(undefined4 param_1,undefined4 param_2,int param_3)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00647108;
  pvStack_c = ExceptionList;
                    /* WARNING: Could not recover jumptable at 0x005eca75. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ExceptionList = &pvStack_c;
  (*(code *)(&PTR_LAB_005ecb54)[param_3 + -1])();
  return;
}

