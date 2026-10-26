/*
 * OLEAUT32.DLL::SafeArrayUnaccessData at 00401434
 * HRESULT __stdcall SafeArrayUnaccessData(SAFEARRAY * psa)
 * Address ranges: 00401434-00401439
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to OLEAUT32.DLL::SafeArrayUnaccessData
 */

HRESULT __stdcall SafeArrayUnaccessData(SAFEARRAY *psa)

{
  HRESULT HVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00401434. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  HVar1 = SafeArrayUnaccessData(psa);
  return HVar1;
}

