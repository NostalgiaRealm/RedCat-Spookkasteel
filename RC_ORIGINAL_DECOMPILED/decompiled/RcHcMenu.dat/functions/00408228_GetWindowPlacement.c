/*
 * USER32.DLL::GetWindowPlacement at 00408228
 * BOOL __stdcall GetWindowPlacement(HWND hWnd, WINDOWPLACEMENT * lpwndpl)
 * Address ranges: 00408228-0040822d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to USER32.DLL::GetWindowPlacement
 */

BOOL __stdcall GetWindowPlacement(HWND hWnd,WINDOWPLACEMENT *lpwndpl)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00408228. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetWindowPlacement(hWnd,lpwndpl);
  return BVar1;
}

