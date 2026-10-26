/*
 * KERNEL32.DLL::GlobalAlloc at 00407ba8
 * HGLOBAL __stdcall GlobalAlloc(UINT uFlags, SIZE_T dwBytes)
 * Address ranges: 00407ba8-00407bad
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to KERNEL32.DLL::GlobalAlloc
 */

HGLOBAL __stdcall GlobalAlloc(UINT uFlags,SIZE_T dwBytes)

{
  HGLOBAL pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00407ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = GlobalAlloc(uFlags,dwBytes);
  return pvVar1;
}

