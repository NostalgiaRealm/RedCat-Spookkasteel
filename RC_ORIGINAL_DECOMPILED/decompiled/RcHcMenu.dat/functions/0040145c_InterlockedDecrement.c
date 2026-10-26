/*
 * KERNEL32.DLL::InterlockedDecrement at 0040145c
 * LONG __stdcall InterlockedDecrement(LONG * lpAddend)
 * Address ranges: 0040145c-00401461
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to KERNEL32.DLL::InterlockedDecrement
 */

LONG __stdcall InterlockedDecrement(LONG *lpAddend)

{
  LONG LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040145c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = InterlockedDecrement(lpAddend);
  return LVar1;
}

