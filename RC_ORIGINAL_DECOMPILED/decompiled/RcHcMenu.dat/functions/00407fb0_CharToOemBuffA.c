/*
 * USER32.DLL::CharToOemBuffA at 00407fb0
 * BOOL __stdcall CharToOemBuffA(LPCSTR lpszSrc, LPSTR lpszDst, DWORD cchDstLength)
 * Address ranges: 00407fb0-00407fb5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to USER32.DLL::CharToOemBuffA
 */

BOOL __stdcall CharToOemBuffA(LPCSTR lpszSrc,LPSTR lpszDst,DWORD cchDstLength)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00407fb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = CharToOemBuffA(lpszSrc,lpszDst,cchDstLength);
  return BVar1;
}

