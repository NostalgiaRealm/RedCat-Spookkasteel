/*
 * OLEAUT32.DLL::VariantClear at 00401404
 * HRESULT __stdcall VariantClear(VARIANTARG * pvarg)
 * Address ranges: 00401404-00401409
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to OLEAUT32.DLL::VariantClear
 */

HRESULT __stdcall VariantClear(VARIANTARG *pvarg)

{
  HRESULT HVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00401404. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  HVar1 = VariantClear(pvarg);
  return HVar1;
}

