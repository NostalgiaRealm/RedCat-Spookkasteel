/*
 * FUN_005fb020 at 005fb020
 * undefined FUN_005fb020(void)
 * Address ranges: 005fb020-005fb03e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_005fb020(int param_1,undefined4 param_2)

{
  FUN_005eee80(param_2,*(undefined4 *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x005fb038. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&PTR_LAB_005fb08c)[*(int *)(param_1 + 8)])();
  return;
}

