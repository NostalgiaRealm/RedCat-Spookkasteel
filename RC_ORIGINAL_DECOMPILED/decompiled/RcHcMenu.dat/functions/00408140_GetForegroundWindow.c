/*
 * USER32.DLL::GetForegroundWindow at 00408140
 * HWND __stdcall GetForegroundWindow(void)
 * Address ranges: 00408140-00408145
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to USER32.DLL::GetForegroundWindow
 */

HWND __stdcall GetForegroundWindow(void)

{
  HWND pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00408140. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = GetForegroundWindow();
  return pHVar1;
}

