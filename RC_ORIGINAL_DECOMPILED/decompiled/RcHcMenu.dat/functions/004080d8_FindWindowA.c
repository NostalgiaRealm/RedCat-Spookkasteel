/*
 * USER32.DLL::FindWindowA at 004080d8
 * HWND __stdcall FindWindowA(LPCSTR lpClassName, LPCSTR lpWindowName)
 * Address ranges: 004080d8-004080dd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to USER32.DLL::FindWindowA
 */

HWND __stdcall FindWindowA(LPCSTR lpClassName,LPCSTR lpWindowName)

{
  HWND pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004080d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = FindWindowA(lpClassName,lpWindowName);
  return pHVar1;
}

