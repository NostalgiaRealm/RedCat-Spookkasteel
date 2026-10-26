/*
 * FUN_005ef710 at 005ef710
 * undefined FUN_005ef710(void)
 * Address ranges: 005ef710-005ef73c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005ef710(undefined4 param_1)

{
  int iVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_006476d3;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  iVar1 = FUN_005e9bf0(param_1);
                    /* WARNING: Could not recover jumptable at 0x005ef736. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&PTR_LAB_005ef9b0)[iVar1 + -0x32])();
  return;
}

