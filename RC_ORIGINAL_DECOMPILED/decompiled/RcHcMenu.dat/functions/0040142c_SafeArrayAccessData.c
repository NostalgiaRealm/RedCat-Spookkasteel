/*
 * OLEAUT32.DLL::SafeArrayAccessData at 0040142c
 * HRESULT __stdcall SafeArrayAccessData(SAFEARRAY * psa, void * * ppvData)
 * Address ranges: 0040142c-00401431
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to OLEAUT32.DLL::SafeArrayAccessData
 */

HRESULT __stdcall SafeArrayAccessData(SAFEARRAY *psa,void **ppvData)

{
  HRESULT HVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040142c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  HVar1 = SafeArrayAccessData(psa,ppvData);
  return HVar1;
}

