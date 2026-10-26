/*
 * OLEAUT32.DLL::SafeArrayPtrOfIndex at 00401444
 * HRESULT __stdcall SafeArrayPtrOfIndex(SAFEARRAY * psa, LONG * rgIndices, void * * ppvData)
 * Address ranges: 00401444-00401449
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to OLEAUT32.DLL::SafeArrayPtrOfIndex
 */

HRESULT __stdcall SafeArrayPtrOfIndex(SAFEARRAY *psa,LONG *rgIndices,void **ppvData)

{
  HRESULT HVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00401444. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  HVar1 = SafeArrayPtrOfIndex(psa,rgIndices,ppvData);
  return HVar1;
}

