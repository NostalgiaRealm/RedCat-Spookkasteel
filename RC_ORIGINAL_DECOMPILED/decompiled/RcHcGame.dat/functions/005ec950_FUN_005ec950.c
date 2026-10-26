/*
 * FUN_005ec950 at 005ec950
 * undefined FUN_005ec950(void)
 * Address ranges: 005ec950-005ec97a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005ec950(undefined4 param_1,int param_2)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_006470e8;
  pvStack_c = ExceptionList;
                    /* WARNING: Could not recover jumptable at 0x005ec974. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ExceptionList = &pvStack_c;
  (*(code *)(&PTR_LAB_005eca38)[param_2 + -1])(0);
  return;
}

