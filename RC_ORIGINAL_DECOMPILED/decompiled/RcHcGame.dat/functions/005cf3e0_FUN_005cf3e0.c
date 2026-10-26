/*
 * FUN_005cf3e0 at 005cf3e0
 * undefined FUN_005cf3e0(void)
 * Address ranges: 005cf3e0-005cf3f6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_005cf3e0(void)

{
  undefined4 uVar1;
  
  if ((DAT_006cc5ec != 0) && (DAT_006cc5f0 != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x005cf3f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*DAT_006cc5f0)();
    return uVar1;
  }
  return 0;
}

