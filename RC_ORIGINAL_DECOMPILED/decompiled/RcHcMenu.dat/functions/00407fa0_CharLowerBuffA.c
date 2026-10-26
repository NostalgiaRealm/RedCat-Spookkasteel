/*
 * USER32.DLL::CharLowerBuffA at 00407fa0
 * DWORD __stdcall CharLowerBuffA(LPSTR lpsz, DWORD cchLength)
 * Address ranges: 00407fa0-00407fa5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to USER32.DLL::CharLowerBuffA
 */

DWORD __stdcall CharLowerBuffA(LPSTR lpsz,DWORD cchLength)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00407fa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = CharLowerBuffA(lpsz,cchLength);
  return DVar1;
}

