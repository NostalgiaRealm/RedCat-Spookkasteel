/*
 * USER32.DLL::GetActiveWindow at 004080e8
 * HWND __stdcall GetActiveWindow(void)
 * Address ranges: 004080e8-004080ed
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to USER32.DLL::GetActiveWindow
 */

HWND __stdcall GetActiveWindow(void)

{
  HWND pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004080e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = GetActiveWindow();
  return pHVar1;
}

