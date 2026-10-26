/*
 * USER32.DLL::SetActiveWindow at 004083b8
 * HWND __stdcall SetActiveWindow(HWND hWnd)
 * Address ranges: 004083b8-004083bd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to USER32.DLL::SetActiveWindow
 */

HWND __stdcall SetActiveWindow(HWND hWnd)

{
  HWND pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004083b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = SetActiveWindow(hWnd);
  return pHVar1;
}

