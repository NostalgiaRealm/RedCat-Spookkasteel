/*
 * OLEAUT32.DLL::SafeArrayPutElement at 0040144c
 * HRESULT __stdcall SafeArrayPutElement(SAFEARRAY * psa, LONG * rgIndices, void * pv)
 * Address ranges: 0040144c-00401451
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to OLEAUT32.DLL::SafeArrayPutElement
 */

HRESULT __stdcall SafeArrayPutElement(SAFEARRAY *psa,LONG *rgIndices,void *pv)

{
  HRESULT HVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040144c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  HVar1 = SafeArrayPutElement(psa,rgIndices,pv);
  return HVar1;
}

