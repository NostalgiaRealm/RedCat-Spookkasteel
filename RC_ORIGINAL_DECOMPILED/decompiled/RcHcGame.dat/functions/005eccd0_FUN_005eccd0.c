/*
 * FUN_005eccd0 at 005eccd0
 * undefined FUN_005eccd0(void)
 * Address ranges: 005eccd0-005ecd29;005ece2b-005ece3e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005eccd0(int param_1)

{
  int iStack_28;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00647150;
  local_14 = ExceptionList;
  if (*(int *)(param_1 + 4) != *(int *)(param_1 + 8)) {
    ExceptionList = &local_14;
    FUN_005e27d0(*(int *)(param_1 + 4));
    puStack_10 = (undefined1 *)0x0;
                    /* WARNING: Could not recover jumptable at 0x005ecd23. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&PTR_LAB_005ece40)[iStack_28 + -1])();
    return;
  }
  return;
}

