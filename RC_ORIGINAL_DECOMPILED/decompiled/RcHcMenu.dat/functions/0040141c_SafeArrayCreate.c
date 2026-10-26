/*
 * OLEAUT32.DLL::SafeArrayCreate at 0040141c
 * SAFEARRAY * __stdcall SafeArrayCreate(VARTYPE vt, UINT cDims, SAFEARRAYBOUND * rgsabound)
 * Address ranges: 0040141c-00401421
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to OLEAUT32.DLL::SafeArrayCreate
 */

SAFEARRAY * __stdcall SafeArrayCreate(VARTYPE vt,UINT cDims,SAFEARRAYBOUND *rgsabound)

{
  SAFEARRAY *pSVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040141c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pSVar1 = SafeArrayCreate(vt,cDims,rgsabound);
  return pSVar1;
}

