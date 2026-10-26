/*
 * FUN_005ef460 at 005ef460
 * undefined FUN_005ef460(void)
 * Address ranges: 005ef460-005ef48c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005ef460(undefined4 param_1)

{
  int iVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00647662;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  iVar1 = FUN_005e9bf0(param_1);
                    /* WARNING: Could not recover jumptable at 0x005ef486. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&PTR_LAB_005ef638)[iVar1 + -0x3b])();
  return;
}

