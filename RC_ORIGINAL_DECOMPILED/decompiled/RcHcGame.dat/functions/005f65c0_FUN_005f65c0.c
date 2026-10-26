/*
 * FUN_005f65c0 at 005f65c0
 * undefined FUN_005f65c0(void)
 * Address ranges: 005f65c0-005f65e9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005f65c0(void)

{
  int iVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0064841d;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  iVar1 = FUN_005ea010();
                    /* WARNING: Could not recover jumptable at 0x005f65e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&PTR_LAB_005f6824)[iVar1])();
  return;
}

