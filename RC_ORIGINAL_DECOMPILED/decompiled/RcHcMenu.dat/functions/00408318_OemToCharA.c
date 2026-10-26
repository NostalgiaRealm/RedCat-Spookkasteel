/*
 * USER32.DLL::OemToCharA at 00408318
 * BOOL __stdcall OemToCharA(LPCSTR pSrc, LPSTR pDst)
 * Address ranges: 00408318-0040831d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to USER32.DLL::OemToCharA
 */

BOOL __stdcall OemToCharA(LPCSTR pSrc,LPSTR pDst)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00408318. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = OemToCharA(pSrc,pDst);
  return BVar1;
}

