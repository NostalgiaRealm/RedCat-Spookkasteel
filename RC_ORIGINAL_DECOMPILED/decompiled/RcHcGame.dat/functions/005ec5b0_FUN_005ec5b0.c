/*
 * FUN_005ec5b0 at 005ec5b0
 * undefined FUN_005ec5b0(void)
 * Address ranges: 005ec5b0-005ec5da
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005ec5b0(int param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_006470d0;
  pvStack_c = ExceptionList;
                    /* WARNING: Could not recover jumptable at 0x005ec5d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ExceptionList = &pvStack_c;
  (*(code *)(&PTR_LAB_005ec870)[*(int *)(param_1 + 8) + -1])();
  return;
}

