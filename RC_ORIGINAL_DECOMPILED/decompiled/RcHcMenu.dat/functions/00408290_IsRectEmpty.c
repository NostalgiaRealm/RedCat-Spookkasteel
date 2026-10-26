/*
 * USER32.DLL::IsRectEmpty at 00408290
 * BOOL __stdcall IsRectEmpty(RECT * lprc)
 * Address ranges: 00408290-00408295
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to USER32.DLL::IsRectEmpty
 */

BOOL __stdcall IsRectEmpty(RECT *lprc)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00408290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = IsRectEmpty(lprc);
  return BVar1;
}

