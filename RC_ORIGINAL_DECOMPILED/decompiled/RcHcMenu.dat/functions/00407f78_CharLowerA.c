/*
 * USER32.DLL::CharLowerA at 00407f78
 * LPSTR __stdcall CharLowerA(LPSTR lpsz)
 * Address ranges: 00407f78-00407f7d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to USER32.DLL::CharLowerA
 */

LPSTR __stdcall CharLowerA(LPSTR lpsz)

{
  LPSTR pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00407f78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = CharLowerA(lpsz);
  return pCVar1;
}

