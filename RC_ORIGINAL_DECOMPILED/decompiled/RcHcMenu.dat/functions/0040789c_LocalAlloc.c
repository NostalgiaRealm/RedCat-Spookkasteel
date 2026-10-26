/*
 * KERNEL32.DLL::LocalAlloc at 0040789c
 * HLOCAL __stdcall LocalAlloc(UINT uFlags, SIZE_T uBytes)
 * Address ranges: 0040789c-004078a1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to KERNEL32.DLL::LocalAlloc
 */

HLOCAL __stdcall LocalAlloc(UINT uFlags,SIZE_T uBytes)

{
  HLOCAL pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040789c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = LocalAlloc(uFlags,uBytes);
  return pvVar1;
}

