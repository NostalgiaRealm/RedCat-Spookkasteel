/*
 * KERNEL32.DLL::lstrcpyA at 00407cc0
 * LPSTR __stdcall lstrcpyA(LPSTR lpString1, LPCSTR lpString2)
 * Address ranges: 00407cc0-00407cc5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to KERNEL32.DLL::lstrcpyA
 */

LPSTR __stdcall lstrcpyA(LPSTR lpString1,LPCSTR lpString2)

{
  LPSTR pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00407cc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = lstrcpyA(lpString1,lpString2);
  return pCVar1;
}

