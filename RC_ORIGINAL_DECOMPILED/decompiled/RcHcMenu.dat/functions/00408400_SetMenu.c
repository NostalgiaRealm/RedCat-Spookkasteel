/*
 * USER32.DLL::SetMenu at 00408400
 * BOOL __stdcall SetMenu(HWND hWnd, HMENU hMenu)
 * Address ranges: 00408400-00408405
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to USER32.DLL::SetMenu
 */

BOOL __stdcall SetMenu(HWND hWnd,HMENU hMenu)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00408400. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SetMenu(hWnd,hMenu);
  return BVar1;
}

