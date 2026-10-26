/*
 * FUN_005fb0a0 at 005fb0a0
 * undefined FUN_005fb0a0(void)
 * Address ranges: 005fb0a0-005fb0f2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_005fb0a0(int param_1,undefined4 param_2)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00648a73;
  pvStack_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  FUN_005eee90(param_2,(int *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x005fb0ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&PTR_LAB_005fb1a4)[*(int *)(param_1 + 8)])();
  return;
}

