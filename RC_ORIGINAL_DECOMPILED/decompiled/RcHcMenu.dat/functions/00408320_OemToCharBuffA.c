/*
 * USER32.DLL::OemToCharBuffA at 00408320
 * BOOL __stdcall OemToCharBuffA(LPCSTR lpszSrc, LPSTR lpszDst, DWORD cchDstLength)
 * Address ranges: 00408320-00408325
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to USER32.DLL::OemToCharBuffA
 */

BOOL __stdcall OemToCharBuffA(LPCSTR lpszSrc,LPSTR lpszDst,DWORD cchDstLength)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00408320. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = OemToCharBuffA(lpszSrc,lpszDst,cchDstLength);
  return BVar1;
}

