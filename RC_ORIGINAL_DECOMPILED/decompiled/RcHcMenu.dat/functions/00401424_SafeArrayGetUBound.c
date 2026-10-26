/*
 * OLEAUT32.DLL::SafeArrayGetUBound at 00401424
 * HRESULT __stdcall SafeArrayGetUBound(SAFEARRAY * psa, UINT nDim, LONG * plUbound)
 * Address ranges: 00401424-00401429
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to OLEAUT32.DLL::SafeArrayGetUBound
 */

HRESULT __stdcall SafeArrayGetUBound(SAFEARRAY *psa,UINT nDim,LONG *plUbound)

{
  HRESULT HVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00401424. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  HVar1 = SafeArrayGetUBound(psa,nDim,plUbound);
  return HVar1;
}

