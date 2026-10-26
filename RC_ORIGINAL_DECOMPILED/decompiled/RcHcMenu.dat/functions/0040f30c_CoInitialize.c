/*
 * OLE32.DLL::CoInitialize at 0040f30c
 * HRESULT __stdcall CoInitialize(LPVOID pvReserved)
 * Address ranges: 0040f30c-0040f311
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to OLE32.DLL::CoInitialize
 */

HRESULT __stdcall CoInitialize(LPVOID pvReserved)

{
  HRESULT HVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040f30c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  HVar1 = CoInitialize(pvReserved);
  return HVar1;
}

