/*
 * USER32.DLL::CharToOemA at 00407fa8
 * BOOL __stdcall CharToOemA(LPCSTR pSrc, LPSTR pDst)
 * Address ranges: 00407fa8-00407fad
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to USER32.DLL::CharToOemA
 */

BOOL __stdcall CharToOemA(LPCSTR pSrc,LPSTR pDst)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00407fa8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = CharToOemA(pSrc,pDst);
  return BVar1;
}

