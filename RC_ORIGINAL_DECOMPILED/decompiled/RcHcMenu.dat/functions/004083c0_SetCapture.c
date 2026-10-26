/*
 * USER32.DLL::SetCapture at 004083c0
 * HWND __stdcall SetCapture(HWND hWnd)
 * Address ranges: 004083c0-004083c5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to USER32.DLL::SetCapture
 */

HWND __stdcall SetCapture(HWND hWnd)

{
  HWND pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004083c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = SetCapture(hWnd);
  return pHVar1;
}

