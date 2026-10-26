/*
 * FUN_10014340 at 10014340
 * undefined FUN_10014340(void)
 * Address ranges: 10014340-10014356
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10014340(void)

{
  undefined4 uVar1;
  
  if ((DAT_104e98f4 != 0) && (DAT_104e98f8 != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x10014352. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*DAT_104e98f8)();
    return uVar1;
  }
  return 0;
}

