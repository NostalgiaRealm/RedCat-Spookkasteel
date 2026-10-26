/*
 * USER32.DLL::DestroyCursor at 00408018
 * BOOL __stdcall DestroyCursor(HCURSOR hCursor)
 * Address ranges: 00408018-0040801d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to USER32.DLL::DestroyCursor
 */

BOOL __stdcall DestroyCursor(HCURSOR hCursor)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00408018. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = DestroyCursor(hCursor);
  return BVar1;
}

