/*
 * OLEAUT32.DLL::VariantCopyInd at 0040140c
 * HRESULT __stdcall VariantCopyInd(VARIANT * pvarDest, VARIANTARG * pvargSrc)
 * Address ranges: 0040140c-00401411
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to OLEAUT32.DLL::VariantCopyInd
 */

HRESULT __stdcall VariantCopyInd(VARIANT *pvarDest,VARIANTARG *pvargSrc)

{
  HRESULT HVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040140c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  HVar1 = VariantCopyInd(pvarDest,pvargSrc);
  return HVar1;
}

