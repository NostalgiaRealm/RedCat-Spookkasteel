/*
 * USER32.DLL::CharNextA at 0040131c
 * LPSTR __stdcall CharNextA(LPCSTR lpsz)
 * Address ranges: 0040131c-00401321
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to USER32.DLL::CharNextA
 */

LPSTR __stdcall CharNextA(LPCSTR lpsz)

{
  LPSTR pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040131c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = CharNextA(lpsz);
  return pCVar1;
}

