/*
 * USER32.DLL::GetSystemMenu at 004081f8
 * HMENU __stdcall GetSystemMenu(HWND hWnd, BOOL bRevert)
 * Address ranges: 004081f8-004081fd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to USER32.DLL::GetSystemMenu
 */

HMENU __stdcall GetSystemMenu(HWND hWnd,BOOL bRevert)

{
  HMENU pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004081f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = GetSystemMenu(hWnd,bRevert);
  return pHVar1;
}

