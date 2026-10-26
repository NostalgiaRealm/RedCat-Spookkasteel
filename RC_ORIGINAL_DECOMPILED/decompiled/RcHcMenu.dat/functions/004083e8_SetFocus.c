/*
 * USER32.DLL::SetFocus at 004083e8
 * HWND __stdcall SetFocus(HWND hWnd)
 * Address ranges: 004083e8-004083ed
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to USER32.DLL::SetFocus
 */

HWND __stdcall SetFocus(HWND hWnd)

{
  HWND pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004083e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = SetFocus(hWnd);
  return pHVar1;
}

