/*
 * USER32.DLL::SetWindowPlacement at 00408450
 * BOOL __stdcall SetWindowPlacement(HWND hWnd, WINDOWPLACEMENT * lpwndpl)
 * Address ranges: 00408450-00408455
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to USER32.DLL::SetWindowPlacement
 */

BOOL __stdcall SetWindowPlacement(HWND hWnd,WINDOWPLACEMENT *lpwndpl)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00408450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SetWindowPlacement(hWnd,lpwndpl);
  return BVar1;
}

