/*
 * FUN_005f7280 at 005f7280
 * undefined FUN_005f7280(void)
 * Address ranges: 005f7280-005f72a8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005f7280(void)

{
  int iVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00648565;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  iVar1 = FUN_005ea010();
                    /* WARNING: Could not recover jumptable at 0x005f72a2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&PTR_LAB_005f74e8)[iVar1])();
  return;
}

