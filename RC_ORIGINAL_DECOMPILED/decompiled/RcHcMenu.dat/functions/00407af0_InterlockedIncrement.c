/*
 * KERNEL32.DLL::InterlockedIncrement at 00407af0
 * LONG __stdcall InterlockedIncrement(LONG * lpAddend)
 * Address ranges: 00407af0-00407af5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to KERNEL32.DLL::InterlockedIncrement
 */

LONG __stdcall InterlockedIncrement(LONG *lpAddend)

{
  LONG LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00407af0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = InterlockedIncrement(lpAddend);
  return LVar1;
}

