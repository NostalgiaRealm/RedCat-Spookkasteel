/*
 * USER32.DLL::SetCursor at 004083d8
 * HCURSOR __stdcall SetCursor(HCURSOR hCursor)
 * Address ranges: 004083d8-004083dd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to USER32.DLL::SetCursor
 */

HCURSOR __stdcall SetCursor(HCURSOR hCursor)

{
  HCURSOR pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004083d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = SetCursor(hCursor);
  return pHVar1;
}

