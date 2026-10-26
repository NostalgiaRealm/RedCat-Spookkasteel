/*
 * KERNEL32.DLL::LockResource at 00407c18
 * LPVOID __stdcall LockResource(HGLOBAL hResData)
 * Address ranges: 00407c18-00407c1d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to KERNEL32.DLL::LockResource
 */

LPVOID __stdcall LockResource(HGLOBAL hResData)

{
  LPVOID pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00407c18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = LockResource(hResData);
  return pvVar1;
}

