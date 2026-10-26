/*
 * USER32.DLL::SetPropA at 00408418
 * BOOL __stdcall SetPropA(HWND hWnd, LPCSTR lpString, HANDLE hData)
 * Address ranges: 00408418-0040841d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to USER32.DLL::SetPropA
 */

BOOL __stdcall SetPropA(HWND hWnd,LPCSTR lpString,HANDLE hData)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00408418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SetPropA(hWnd,lpString,hData);
  return BVar1;
}

