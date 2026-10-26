/*
 * OLEAUT32.DLL::SafeArrayDestroy at 0040f334
 * HRESULT __stdcall SafeArrayDestroy(SAFEARRAY * psa)
 * Address ranges: 0040f334-0040f339
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to OLEAUT32.DLL::SafeArrayDestroy
 */

HRESULT __stdcall SafeArrayDestroy(SAFEARRAY *psa)

{
  HRESULT HVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040f334. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  HVar1 = SafeArrayDestroy(psa);
  return HVar1;
}

