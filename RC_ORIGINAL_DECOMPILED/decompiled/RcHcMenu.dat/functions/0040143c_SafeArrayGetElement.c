/*
 * OLEAUT32.DLL::SafeArrayGetElement at 0040143c
 * HRESULT __stdcall SafeArrayGetElement(SAFEARRAY * psa, LONG * rgIndices, void * pv)
 * Address ranges: 0040143c-00401441
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to OLEAUT32.DLL::SafeArrayGetElement
 */

HRESULT __stdcall SafeArrayGetElement(SAFEARRAY *psa,LONG *rgIndices,void *pv)

{
  HRESULT HVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040143c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  HVar1 = SafeArrayGetElement(psa,rgIndices,pv);
  return HVar1;
}

