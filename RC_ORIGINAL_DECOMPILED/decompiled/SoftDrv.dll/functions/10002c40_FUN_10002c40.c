/*
 * FUN_10002c40 at 10002c40
 * undefined FUN_10002c40(void)
 * Address ranges: 10002c40-10002c56
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10002c40(void)

{
  undefined4 uVar1;
  
  if ((DAT_1002593c != 0) && (DAT_10025940 != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x10002c52. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*DAT_10025940)();
    return uVar1;
  }
  return 0;
}

