/*
 * USER32.DLL::CharUpperBuffA at 00407fb8
 * DWORD __stdcall CharUpperBuffA(LPSTR lpsz, DWORD cchLength)
 * Address ranges: 00407fb8-00407fbd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to USER32.DLL::CharUpperBuffA
 */

DWORD __stdcall CharUpperBuffA(LPSTR lpsz,DWORD cchLength)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00407fb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = CharUpperBuffA(lpsz,cchLength);
  return DVar1;
}

