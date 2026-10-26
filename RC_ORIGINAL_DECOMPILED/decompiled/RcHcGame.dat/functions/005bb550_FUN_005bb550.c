/*
 * FUN_005bb550 at 005bb550
 * undefined FUN_005bb550(void)
 * Address ranges: 005bb550-005bb55b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005bb550(void)

{
  if (DAT_006cc480 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x005bb559. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_006cc480)();
    return;
  }
  return;
}

