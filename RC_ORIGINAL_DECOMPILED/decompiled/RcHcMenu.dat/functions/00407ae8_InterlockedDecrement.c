/*
 * KERNEL32.DLL::InterlockedDecrement at 00407ae8
 * LONG __stdcall InterlockedDecrement(LONG * lpAddend)
 * Address ranges: 00407ae8-00407aed
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to KERNEL32.DLL::InterlockedDecrement
 */

LONG __stdcall InterlockedDecrement(LONG *lpAddend)

{
  LONG LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00407ae8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = InterlockedDecrement(lpAddend);
  return LVar1;
}

