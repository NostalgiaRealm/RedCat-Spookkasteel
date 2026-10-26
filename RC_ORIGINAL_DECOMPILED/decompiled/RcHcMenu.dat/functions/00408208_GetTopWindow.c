/*
 * USER32.DLL::GetTopWindow at 00408208
 * HWND __stdcall GetTopWindow(HWND hWnd)
 * Address ranges: 00408208-0040820d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to USER32.DLL::GetTopWindow
 */

HWND __stdcall GetTopWindow(HWND hWnd)

{
  HWND pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00408208. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = GetTopWindow(hWnd);
  return pHVar1;
}

