/*
 * USER32.DLL::GetDesktopWindow at 00408130
 * HWND __stdcall GetDesktopWindow(void)
 * Address ranges: 00408130-00408135
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to USER32.DLL::GetDesktopWindow
 */

HWND __stdcall GetDesktopWindow(void)

{
  HWND pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00408130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = GetDesktopWindow();
  return pHVar1;
}

