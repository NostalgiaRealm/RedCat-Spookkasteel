/*
 * FUN_005a80d0 at 005a80d0
 * undefined FUN_005a80d0(void)
 * Address ranges: 005a80d0-005a80d9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_005a80d0(int param_1)

{
  if (*(code **)(param_1 + 0x60) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x005a80d7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x60))();
    return;
  }
  return;
}

